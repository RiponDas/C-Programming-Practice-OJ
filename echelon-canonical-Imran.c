#include<iostream>
using namespace std;
int main()
{
int r,s;
float A[6][6];
float f,b,d,p,q,w,h;
cout<<"Please enter row amd column of the Echelon Matrix\n";
cin>>r>>s;
cout<<"Please enter your Echelon Matrix value\n";
for(int i=0; i<r; i++){
for(int j=0; j<s; j++){
cin>>A[i][j];
}
}
cout<<"You entered this matrix\n";
cout<<"---------------------------"<<endl;
for(int i=0; i<r; i++){
for(int j=0; j<s; j++){
cout<<A[i][j]<<" ";
}
cout<<endl;
cout<<endl;
}
for(int j=0; j<s; j++){
if(A[r-1][j] !=0){
f=A[r-1][j];
d=-A[r-2][j];
p=-A[r-3][j];
break;
}
}
for(int j=0; j<s; j++){
b=A[r-1][j]/f;
A[r-1][j]=b;
}
for(int k=0; k<s; k++){
A[r-2][k]=A[r-1][k]*d+A[r-2][k];
}
for(int k=0; k<s; k++){
A[r-3][k]=A[r-1][k]*p+A[r-3][k];
}
for(int j=0; j<s; j++){
if(A[r-2][j] !=0){
q=A[r-2][j];
w=-A[r-3][j];
break;
}
}
for(int j=0; j<s; j++){
h=A[r-2][j]/q;
A[r-2][j]=h;
}
for(int k=0; k<s; k++){
A[r-3][k]=A[r-2][k]*w+A[r-3][k];
}
cout<<"-----------------------------------"<<endl;
cout<<"Hey, this is the canonical form"<<endl;
cout<<"-----------------------------------"<<endl;
for(int i=0; i<r; i++){
for(int j=0; j<s; j++){
cout<<A[i][j]<<" ";
}
cout<<endl;
cout<<endl;
cout<<endl;
}
return 0;
}
