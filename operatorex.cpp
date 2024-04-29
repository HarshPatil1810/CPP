#include<iostream>
using namespace std;

class matrix
{
public:


int a[3][3];
int b[3][3];
int sum[3][3];

matrix operator >> (matrix &obj)
{
	for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
           cin>>obj.a[i][j];
}
}

for ( int k = 0; k < 3; k++) { 
        for ( int d = 0; d < 3; d++) { 
           cin>>obj.b[k][d];
        } 
    }
  
}




matrix operator << (matrix &obj)
{
	for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
           cout<<obj.a[i][j];
}
cout<<endl;
}
	for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
           cout<<obj.b[i][j];
}
cout<<endl;
}
for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
    
    	for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
           cout<<obj.sum[i][j];
}
cout<<endl;
}

}



};

int main()
{
	matrix m1;
	matrix in;
	in>>m1;
	
	matrix out;
	out<<m1;
}
