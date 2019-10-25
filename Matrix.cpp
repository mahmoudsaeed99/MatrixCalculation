#include "Matrix.h"
#include<iostream>
#include<iomanip>
using namespace std;

Matrix::Matrix(int row , int col)
{
    this->row=row;
    this->col=col;
    data=new int*[row];
    for(int i=0; i<row; i++)
    {
        data[i]=new int[col];
    }
}
//Matrix::Matrix(){}

Matrix:: Matrix(const Matrix& m){

    row = m.row;
    col= m.col;
    data = new int* [m.row];
    for(int i = 0 ; i < row ; i++)
    {
        data[i] = new int[col];
        for (int j = 0 ; j < col ; j++)
            data[i][j] = m.data[i][j];
    }

}

Matrix::~Matrix()
{
    for(int i=0;i<row;i++){
        delete[] data[i];
        //data[i]=null;
    }
    delete[] data;
		data = NULL;
		}

 Matrix& Matrix:: operator=( Matrix m){


    row = m.row;
    col = m.col;
    if(data != NULL)
    {  for(int i=0;i<row;i++)
        delete[] data[i];
        //data[i]=null;

    delete[] data;
		data = NULL;
    }
    //allocating the rows
    data = new int* [row];
    for(int i = 0 ; i < row ; i++)
    {
        //allocate the columns
        data[i] = new int[col];
        for (int j = 0 ; j < col ; j++)
            data[i][j] = m.data[i][j];
    }
    return *this;

		}

		// plus operator(+)
		Matrix& Matrix:: operator+( Matrix m)
{
    if(row!=m.row||col!=m.col)
        cout<<"two matricies can't be add\n";
    else{

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            data[i][j]+=m.data[i][j];
        }
    }


    }
    return *this;
}

// operator difference(-)
Matrix& Matrix:: operator-( Matrix m)
{
     if(row!=m.row||col!=m.col)
        cout<<"two matricies can't be subtracted\n";
        else{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            data[i][j]-=m.data[i][j];
        }
    }


        }
    return *this;
}


// multiply overload (*)
Matrix Matrix::operator*( Matrix& m)
	{
		if(col != m.row){
			cout << "Two Matrix Order couldn't be multiplied.!!" << endl;
			return (*this);
		}


		Matrix m1(row,m.col);

            //int sum=0;
		for ( int i= 0 ; i < row; i++ )
		{
			for (int j = 0 ; j < m.col ; j++ )
			{
				int sum = 0;
				for (int k = 0 ; k <m.row ; k++ )
				{
					sum +=data[i][k]*m.data[k][j];

				}


				m1.data[i][j] = sum;

			}
		}


		return (m1);

	}

 istream& operator >>  (istream& in, Matrix& mat){
cout<<"enter data\n";
    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            in>>mat.data[i][j];
        }
    }
    return in;


}

  ostream& operator<< (ostream& out, const Matrix& m){


for(int i = 0 ; i < m.row ; i++)
    {
        for(int j = 0 ; j < m.col ; j++)
        {
            out << setw(4) << m.data[i][j];
        }
        out << endl;
    }
    return out;


}

// function transpose
Matrix& Matrix:: transpose()
{
    int arr[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr[i][j]=data[i][j];
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            data[i][j]=arr[j][i];
        }
    }
    return *this;
}
