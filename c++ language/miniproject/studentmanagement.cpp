#include<iostream>
#include<fstream>
using namespace std;

class studentmanagement{
    private:
    string rollno,studentname,fathername,phonenumber,address,search;
    fstream file;   
    public:
        void addstudent();
        void viewstudent();
        void searchstudent();
}obj;

int main(){
    char choice;
    cout<<"****************************"<<endl;
    cout<<"1- Add student record"<<endl;
    cout<<"2- view all student record"<<endl;
    cout<<"3- search student record"<<endl;
    cout<<"4- exit"<<endl;

    cout<<"Enter your choice:: ";
    cin>>choice;
    cout<<endl;

    switch(choice){
        case '1':
            cin.ignore();
            obj.addstudent();
            break;
        case '2':
            cin.ignore();
            obj.viewstudent();
            break; 
        case '3':
            cin.ignore();
            obj.searchstudent();
            break;
        case '4':
            return 0;   
            break;
        default:
        cout<<"invalide selction................"<<endl;
    }
    return 0;
};


void studentmanagement::addstudent(){
    
    cout<<"Enter student name:: ";
    getline(cin,studentname);
    cout<<"Enter student roll number:: ";
    getline(cin,rollno);
    cout<<"Enter student father name:: ";
    getline(cin,fathername);
    cout<<"Enter student phonenumber:: ";
    getline(cin,phonenumber);
    cout<<"Enter student address:: ";
    getline(cin,address);

    file.open("studentmg.txt",ios::out | ios::app);
    file<<rollno<<"*"<<studentname<<"*"<<fathername<<"*"<<phonenumber<<"*"<<address<<endl;
    file.close();
}


void studentmanagement::viewstudent(){
    file.open("studentmg.txt",ios::in);
    getline(file,rollno,'*');
    getline(file,studentname,'*');
    getline(file,fathername,'*');
    getline(file,phonenumber,'*');
    getline(file,address,'\n');

    while(!file.eof()){
        cout<<endl;
        cout<<"student rollno:: "<<rollno<<endl;
        cout<<"student name:: "<<studentname<<endl;
        cout<<"student fathername:: "<<fathername<<endl;
        cout<<"student phone number:: "<<phonenumber<<endl;
        cout<<"student address:: "<<address<<endl;

        getline(file,rollno,'*');
        getline(file,studentname,'*');
        getline(file,fathername,'*');
        getline(file,phonenumber,'*');  
        getline(file,address,'\n');         
    }
    file.close();
}


void studentmanagement::searchstudent(){
    cout<<"Enter student roll number:: ";
    getline(cin,search);

    file.open("studentmg.txt",ios::in);
    getline(file,rollno,'*');
    getline(file,studentname,'*');
    getline(file,fathername,'*');
    getline(file,phonenumber,'*');
    getline(file,address,'\n');

    while(!file.eof()){
        if(rollno==search){
        cout<<endl;
        cout<<"student rollno:: "<<rollno<<endl;
        cout<<"student name:: "<<studentname<<endl;
        cout<<"student fathername:: "<<fathername<<endl;
        cout<<"student phone number:: "<<phonenumber<<endl;
        cout<<"student address:: "<<address<<endl;
        }      
        getline(file,rollno,'*');
        getline(file,studentname,'*');
        getline(file,fathername,'*');
        getline(file,phonenumber,'*');
        getline(file,address,'\n');   
    }
    file.close();
}