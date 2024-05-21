//code to add two binary digit
#include<iostream>
using namespace std;


int main(){
	int max=3 , a[max],b[max] , c[4]={0,0,0,0} , cy=0;
cout<<"enter first binary num "<<endl;
for(int i=0;i<max;i++){
	cin>>a[i];
}

cout<<endl<<"enter second binary number"<<endl;
for( int i=0;i<max;i++){
	cin>>b[i];
}	
for( int j= max-1;j>=0;j--){

  int x=a[j]+b[j]+cy;
    c[j+1]=x%2;
    cout<<c[j];
	cy=x/2;	
}	
c[0]=cy;
cout<<endl<<"resultant aray is"<<endl;
for(int i=0;i<=max;i++){
	cout<<c[i];
}

	return 0;
}
