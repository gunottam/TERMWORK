//wapt input an array and reverse the array elements from particular index to the last using dma 

#include <stdio.h>
#include <stdlib.h>

void rev(int *,int,int);

int main()
{


	int *a;
	int n,i;
	
	scanf("%d",&n);
	
	a = (int*)malloc(n*sizeof(int));
	
	for(int x = 0;x<n;x++)
	scanf("%d",a+x);
	
	printf("Enter the index of from which you want to reverse: ");
	scanf("%d",&i);
	
	rev(a,i,n-1);
	
	for(int x = 0;x<n;x++)
	printf("%d ",*(a+x));
	
	return 0;
}

void rev(int *a,int i,int n){

	if(n<=i)
	return;
	
	int temp = *(a+i);
	*(a+i) = *(a+n);
	*(a+n) = temp;
	
	rev(a,++i,--n);
	}
	
	
