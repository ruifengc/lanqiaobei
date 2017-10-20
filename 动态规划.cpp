#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
int dp[105][105],a[105][105],i,j,t,n;
memset(dp,0,sizeof(dp));
scanf("%d",&n);
for(i = 1;i<=n;i++){
	for(j = 1;j<=i;j++){
		scanf("%d",&a[i][j]);
		}
} 
for(i = 1; i<=n;i++){
	dp[n][i] = a[n][i]; 
}
for(i = n; i>0;i--){
	for(j = 1;j<= i;j++){
		dp[i][j] = max(dp[i+1][j],dp[i+1][j+1]) + a[i][j];
	}
}
printf("%d",dp[1][1]);
return 0;
}

