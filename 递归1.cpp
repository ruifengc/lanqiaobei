#include<bits/stdc++.h> 
using namespace std;
int data[1000][1000];
int n;
int f(int x,int y);
int a[1000000];
int main(){
memset(data,0,sizeof(data));
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
	if(x == n) return data[x][y];
	else return max(f(x+1,y),f(x+1,y+1)) + data[x][y];
} 
//4 1 3 2 4 10 1 4 3 2 20
