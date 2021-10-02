#include <iostream> 
using namespace std;   
int main()  
{  
int a[10][10],b[10][10],mul[10][10],row,col,i,j,k;    
cout<<"enter the number of rows and columns=";    
cin>>row;        
cin>>col;    
cout<<"enter the first matrix of " << row * col << " elements=\n";    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix of " << row * col << " elements=\n";    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"multiplication of the matrices=\n";    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
mul[i][j]=0;    
for(k=0;k<col;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}     
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
cout<<mul[i][j]<<" ";    
}
  cout << "\n";
        
}    

return 0;  
}    