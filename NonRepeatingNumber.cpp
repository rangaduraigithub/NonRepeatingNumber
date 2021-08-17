#include<stdio.h>
int main(){
	int n,p,q,r;
	//printf("Enter the number of elements");
	scanf("%d\n",&n);
	int a[n],count=0;
	//printf("Enter the array elements");
	for(int i=0;i<n;i++){ 
		scanf("%d",&a[i]);
	}
	for(int p=0;p<n;p++){//1<5
	   count=0;
	   for(int q=0;q<p;q++){ //0<0
	   	if(a[p]==a[q])
	   		count++;
	   }
	   for(int r=p+1;r<n;r++){//2<5
	   	if(a[p]==a[r])
	   		count++; //1
	   }
	     
	   if(count==0)
	   	printf("%d ",a[p]);
}
}
//ip 5
// 1 1 2 3 3
//op 2
