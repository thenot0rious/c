#include <stdio.h>
int t,k,n;
int haha(int k,int n){
	if(k==0){
		return n;	
	}
	if (n==0){
		return 0;
	}
	return haha(k-1,n)+haha(k,n-1);
}



main(){
	scanf("%d",&t);
	while(t-- > 0){
		scanf("%d",&k);
		scanf("%d",&n);
		
		printf("%d\n",haha(k,n));
	}
	
}
