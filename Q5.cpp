//Q5.Write a C++ Program for addition of Two Matrix.
#include<iostream>
using namespace std;
void main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    cout<<"enter the first matrix:"<<endl ;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
            
        }


    }
    cout<<"enter the second matrix :"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }


    }
    cout<<"final matrix : "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           c[i][j]=a[i][j]+b[i][j];
           cout<<c[i][j];
           
        }
       cout<<endl;


    }
}
/* output
enter the first matrix:
1
2
3
4
5
6
7
8
9
enter the second matrix :
1
2
3
4
5
6
7
8
9
final matrix : 
2 4 6 
8 10 12 
14 16 18 
*/