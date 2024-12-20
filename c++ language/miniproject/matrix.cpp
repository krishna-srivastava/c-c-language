/*About this mini project ::
 This is matrix calculator used to calculate the matrix.....
 This calculator can perform addition,substraction,multiplication,determinent,inverse......
*/
#include<iostream>
using namespace std;

void addmatrix();
void substractmatrix();
void multiplymatrix();
void determinent();
void inverse();

int main(){
    int choice;
    cout<<"\n************************************"<<endl;
    cout<<"This Is A Matrix Calculator"<<endl;
    cout<<"Choose your operation for matrix"<<endl;
    cout<<"1- Addition"<<endl;
    cout<<"2- Substraction"<<endl;
    cout<<"3- Multiplication"<<endl;
    cout<<"4- Determinent"<<endl;
    cout<<"5- Inverse"<<endl;
    cout<<"Enter your choice(1-5):: ";
    cin>>choice;

    if(choice == 1){
        addmatrix();
    }else if(choice == 2){
        substractmatrix();
    }else if(choice == 3){
        multiplymatrix();
    }else if(choice == 4){
        determinent();
    }else if(choice == 5){
        inverse();
    }else{
        cout<<"incorrect";
    }
    return 0;
};


void addmatrix(){
    int row,column;
    cout<<"\n************************************"<<endl;
    cout<<"Enter the number of rows:: ";
    cin>>row;
    cout<<"Enter the number of columns:: ";
    cin>>column;

    float matrix1[row][column];
    float matrix2[row][column];
    float result[row][column];

    cout<<"\nEnter the element of matrixs 1::"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter the element of matrixs 2::"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix2[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            result[i][j]=matrix1[i][j] + matrix2[i][j];
        }
    }

    cout<<"\nSum of two matrix is::"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

void substractmatrix(){
    int row,column;
    cout<<"\n************************************"<<endl;
    cout<<"Enter the number of rows:: ";
    cin>>row;
    cout<<"Enter the number of columns:: ";
    cin>>column;

    float matrix1[row][column];
    float matrix2[row][column];
    float result[row][column];

    cout<<"\nEnter the element of matrixs 1::"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter the element of matrixs 2::"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix2[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            result[i][j]=matrix1[i][j] - matrix2[i][j];
        }
    }

    cout<<"\nsubstraction of two matrix is::"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multiplymatrix(){
    int row1,column1,row2,column2;
    cout<<"\n************************************"<<endl;
    cout<<"Enter the number of rows and column for first matrix:: ";
    cin>>row1>>column1;
    cout<<"Enter the number of rows and column for second matrix:: ";
    cin>>row2>>column2;

    if(column1 != row2){
        cout<<"\nMatrix multiplication is not possible! columns of first matrix must equal rows of second matrix"<<endl;
        exit(0);
    }

    float result[10][10],mat1[10][10],mat2[10][10];

    cout<<"\nEnter the element of first matrix:: "<<endl;
    for(int i=0; i<row1; i++){
        for(int j=0; j<column1; j++){
            cin>>mat1[i][j];
        }
    }

    cout<<"Enter the element of second matrix:: "<<endl;
    for(int i=0; i<row1; i++){
        for(int j=0; j<column1; j++){
            cin>>mat2[i][j];
        }
    }

    for(int i=0; i<row1; i++){
        for(int j=0; j<column1; j++){
            result[i][j]=0;//initialize result as 0
        }
    }

    //now multiply
    for(int i=0; i<row1; i++){
        for(int j=0; j<column2; j++){
            for(int k=0; k<column1; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout<<"\nThe multiplication of two matrix is::"<<endl;
    for(int i=0; i<row1; i++){
        for(int j=0; j<column2; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

void determinent(){
    int n;
    cout<<"\n************************************"<<endl;
    cout<<"Enter the order of the matrix (2 or 3):: ";
    cin>>n;

    float matrix[10][10];
    float result;

    if(n==2){
        cout<<"\nEnter the element the matrix row by row:: "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                cin>>matrix[i][j];
            }
       }
        result=(matrix[0][0] * matrix [1][1]) - (matrix[0][1] * matrix [1][0]);
        cout<<"\nDeterminent of the matrix is:: "<<result<<endl;
    }else if(n==3){
        cout<<"\nEnter the element the matrix row by row:: "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                cin>>matrix[i][j];
            }
       }
        result=(matrix[0][0]*((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1])))-
               (matrix[0][1]*((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0])))+
               (matrix[0][2]*((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0])));
        cout<<"\nDeterminent of the matrix is:: "<<result<<endl;
    }else{
        cout<<"Only 2x2 and 3x3 matrix are supported"<<endl;
    }
}

void inverse(){
    int n;
    cout<<"\n************************************"<<endl;
    cout<<"Enter the order of the matrix (2 or 3):: ";
    cin>>n;

    float matrix[3][3],inverse[3][3];
    float co_factors[10][10];
    float determinent;

    if(n==2){
        cout<<"Enter the element the matrix row by row:: "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                cin>>matrix[i][j];
            }
       }

        determinent=(matrix[0][0] * matrix [1][1]) - (matrix[0][1] * matrix [1][0]);
        if(determinent==0){
            cout<<"Matrix is singular, cannot find its inverse.... "<<endl;
            exit(0);
        }

        inverse[0][0]= matrix[1][1];
        inverse[0][1]= -matrix[0][1];
        inverse[1][0]= -matrix[1][0];
        inverse[1][1]= matrix[0][0];

        cout<<"\nDeterminent is:: "<<determinent<<endl;
        cout<<"\nAdjoint is:: "<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<inverse[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"The inverse of the matrix is:: "<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<inverse[i][j]<<"/"<<determinent<<" ";
            }
            cout<<endl;
        }
    }else if(n==3){
        cout<<"Enter the element the matrix row by row:: "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                cin>>matrix[i][j];
            }
       }

    determinent=(matrix[0][0]*((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1])))
            - (matrix[0][1]*((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0])))
            + (matrix[0][2]*((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0])));

        if(determinent==0){
            cout<<"Matrix is singular, cannot find its inverse.... "<<endl;
            exit(0);
        }  
        
        co_factors[0][0]= ((matrix[1][1]*matrix[2][2]) - (matrix[1][2]*matrix[2][1]));
        co_factors[0][1]= -((matrix[1][0]*matrix[2][2]) - (matrix[1][2]*matrix[2][0])); 
        co_factors[0][2]= ((matrix[1][0]*matrix[2][1]) - (matrix[1][1]*matrix[2][0]));
        co_factors[1][0]= -((matrix[0][1]*matrix[2][2]) - (matrix[0][2]*matrix[2][1]));
        co_factors[1][1]= ((matrix[0][0]*matrix[2][2]) - (matrix[0][2]*matrix[2][0]));
        co_factors[1][2]= -((matrix[0][0]*matrix[2][1]) - (matrix[0][1]*matrix[2][0]));
        co_factors[2][0]= ((matrix[0][1]*matrix[1][2]) - (matrix[0][2]*matrix[1][1]));
        co_factors[2][1]= -((matrix[0][0]*matrix[1][2]) - (matrix[0][2]*matrix[1][0]));  
        co_factors[2][2]= ((matrix[0][0]*matrix[1][1]) - (matrix[0][1]*matrix[1][0]));

        cout<<"\nDeterminent:: "<<determinent<<endl;
        cout<<"The adjoint is:: "<<endl;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                inverse[i][j]=co_factors[j][i];
            }
        }
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<inverse[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"The inverse is:: "<<endl;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<inverse[i][j]<<"/"<<determinent<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<"only 2x2 and 3x3 matrix are supported"<<endl;
    }
}