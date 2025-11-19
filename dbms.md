# DBMS Practical Master Guide

## 1. Views
### Create View
```sql
CREATE VIEW view_name AS
SELECT column1, column2 FROM table;
```

### Update View
```sql
CREATE OR REPLACE VIEW view_name AS
SELECT * FROM employees WHERE salary > 30000;
```

## 2. PL/SQL Blocks
### Basic Block
```sql
DECLARE
  x NUMBER := 10;
BEGIN
  DBMS_OUTPUT.PUT_LINE(x);
END;
```

### IF Condition
```sql
DECLARE
  n NUMBER := 7;
BEGIN
  IF n MOD 2 = 0 THEN
    DBMS_OUTPUT.PUT_LINE('Even');
  ELSE
    DBMS_OUTPUT.PUT_LINE('Odd');
  END IF;
END;
```

### Loop
```sql
DECLARE
  i NUMBER := 1;
BEGIN
  WHILE i <= 10 LOOP
    DBMS_OUTPUT.PUT_LINE(i);
    i := i + 1;
  END LOOP;
END;
```

## 3. Joins
### Inner Join
```sql
SELECT e.name, d.dept_name
FROM employees e
INNER JOIN departments d
ON e.dept_id = d.id;
```

### Left Join
```sql
SELECT e.name, d.dept_name
FROM employees e
LEFT JOIN departments d
ON e.dept_id = d.id;
```

## 4. Group By + Having
```sql
SELECT dept_id, COUNT(*)
FROM employees
GROUP BY dept_id
HAVING COUNT(*) > 5;
```

## 5. Union / Intersect / Minus
### Union
```sql
SELECT name FROM employees
UNION
SELECT name FROM managers;
```

### Intersect
```sql
SELECT name FROM employees
INTERSECT
SELECT name FROM managers;
```

### Minus
```sql
SELECT name FROM employees
MINUS
SELECT name FROM ex_employees;
```

## 6. Nested Queries
### Salary greater than avg of department
```sql
SELECT name FROM employees e
WHERE salary > (
  SELECT AVG(salary) FROM employees WHERE dept_id = e.dept_id
);
```

### Exists
```sql
SELECT dept_name FROM departments d
WHERE EXISTS (
  SELECT 1 FROM employees e WHERE e.dept_id = d.id
);
```

## 7. ANY / ALL
```sql
SELECT name FROM employees
WHERE salary > ALL (
  SELECT salary FROM employees WHERE dept_id = 20
);
```

## 8. HR Queries
- List employees hired in 2020.
- Find highest salary per department.
- List employees whose manager is âJohnâ.

## 9. Constraints
```sql
CREATE TABLE dept (
  id NUMBER PRIMARY KEY,
  name VARCHAR2(30) UNIQUE,
  location VARCHAR2(30) NOT NULL
);
```

## 10. Cheat Sheet Summary
- MASTER joins (inner/left/right/full/self)
- MASTER nested queries
- KNOW group by + having
- KNOW union/intersect/minus
- WRITE clean PL/SQL blocks
- ALWAYS test using sample data
