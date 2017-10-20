#include<bits/stdc++.h> 
using namespace std;
int data[1000][1000];
int dp[1000][1000]; 
int n;
int a[1000000];
int f(int x,int y);
int main(){
memset(data,0,sizeof(data));
memset(dp,0,sizeof(dp));
scanf("%d",&n);
for(int i = 1;i<=n;i++){
	for(int j = 1;j<=i;j++){
		scanf("%d",&data[i][j]);
		}
} 
clock_t startTime,endTime;  
startTime = clock();  
for(int i =0;i<1000000;i++) {
	a[i]=f(1,1);
}
cout<<f(1,1)<<endl;
endTime = clock();  
cout << "Totle Time : " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl; 
return 0;
}
int f(int x,int y){
	if(x == n) {	
		return dp[x][y] = data[x][y];
	}
	if(dp[x+1][y]==0) {
		dp[x+1][y]=f(x+1,y);
	}
	if(dp[x+1][y+1]==0){
		dp[x+1][y+1]=f(x+1,y+1);
	}
	return max(dp[x+1][y],dp[x+1][y+1]) + data[x][y];
} 

