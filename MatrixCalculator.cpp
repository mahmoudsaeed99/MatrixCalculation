#include "MatrixCalculator.h"
#include<iostream>
#include "Matrix.h"
using namespace std;

void MatrixCalculator:: menu(){
int choice;
cout<<"enter 1 for adding 2 matricies\n";
cout<<"enter 2 for subtract 2 matricies\n";
cout<<"enter 3 for multiply 2 matricies\n";
cout<<"enter 4 for transpose the matrix\n";
cin>>choice;
if(choice==1){
        int reuse;
    int x,y,r,c;
        cout<<"enter the dimension of first matrix\n";
        cin>>x>>y;
        cout<<"enter the dimension of the second matrix\n";
        cin>>r>>c;
        Matrix mat1(x,y),mat2(r,c),mat3(x,y);
        if(x!=r||y!=c){
            mat3=mat1+mat2;
            cout<<"if you want to reuse the function enter 1 or if you want to close enter 0\n";
                cin>>reuse;
            if(reuse==0){

                cout<<"thanks for using this function\n";
                 return ;
            }

            else if(reuse==1){
                    cout<<"enter the dimension of first matrix\n";
                    cin>>x>>y;
                    cout<<"enter the dimension of the second matrix\n";
                    cin>>r>>c;
                    Matrix mat1(x,y),mat2(r,c),mat3(x,y);
                 cin>>mat1>>mat2;
                mat3=mat1+mat2;
                cout<<mat3;
            }

        }
        else if(x==r&&y==c){

    cin>>mat1>>mat2;
    mat3=mat1+mat2;
    cout<<mat3;
        }
}
if(choice==2){
       int reuse;
    int x,y,r,c;
        cout<<"enter the dimension of first matrix\n";
        cin>>x>>y;
        cout<<"enter the dimension of the second matrix\n";
        cin>>r>>c;
        Matrix mat1(x,y),mat2(r,c),mat3(x,y);
        if(x!=r||y!=c){
            mat3=mat1-mat2;
            cout<<"if you want to reuse the function enter 1 or if you want to close enter 0\n";
                cin>>reuse;
            if(reuse==0){

                cout<<"thanks for using this function\n";
                 return ;
            }

            else if(reuse==1){
                    cout<<"enter the dimension of first matrix\n";
                    cin>>x>>y;
                    cout<<"enter the dimension of the second matrix\n";
                    cin>>r>>c;
                    Matrix mat1(x,y),mat2(r,c),mat3(x,y);
                 cin>>mat1>>mat2;
                mat3=mat1-mat2;
                cout<<mat3;
            }

        }
        else if(x==r&&y==c){

    cin>>mat1>>mat2;
    mat3=mat1-mat2;
    cout<<mat3;
        }

}
if(choice==3){
        int reuse;
    int x,y,r,c;
        cout<<"enter the dimension of first matrix\n";
        cin>>x>>y;
        cout<<"enter the dimension of the second matrix\n";
        cin>>r>>c;
        Matrix mat1(x,y),mat2(r,c),mat3(x,c);
        if(y!=r){
            mat3=mat1*mat2;
            cout<<"if you want to reuse the function enter 1 or if you want to close enter 0\n";
                cin>>reuse;
            if(reuse==0){

                cout<<"thanks for using this function\n";
                 return ;
            }

            else if(reuse==1){
                    cout<<"enter the dimension of first matrix\n";
                    cin>>x>>y;
                    cout<<"enter the dimension of the second matrix\n";
                    cin>>r>>c;
                    Matrix mat1(x,y),mat2(r,c),mat3(x,c);
                 cin>>mat1>>mat2;
                mat3=mat1*mat2;
                cout<<mat3;
            }

        }
        else if(y==r){

    cin>>mat1>>mat2;
    mat3=mat1*mat2;
    cout<<mat3;
        }
}
if(choice==4){
        int x,y;
    cout<<"enter dimension of the two matricies\n";
    cin>>x>>y;
    Matrix mat(x,y),mat1(x,y);
    cin>>mat;
   mat1= mat.transpose();
cout<<mat1;
}


}

MatrixCalculator::MatrixCalculator()
{

}
