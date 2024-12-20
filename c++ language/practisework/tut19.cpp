//hybrid inheritence..................................................................
//virtual classes.......................................................................
#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void getdata_rollno(int a){
        roll_no=a;
    }
    void setdata_rollno(){
        cout<<"this is your roll number: "<<roll_no<<endl;
    }
};

class externalmarks:virtual public student{
    protected:
    float ex_maths,ex_chemistry,ex_physics;
    public:
    void getdata_exmarks(float a,float b,float c){
        ex_maths=a;
        ex_chemistry=b;
        ex_physics=c;
    }
    void setdata_external(){
        cout<<"this is your external maths number: "<<ex_maths<<"/70"<<endl;
        cout<<"this is your external chemistry number: "<<ex_chemistry<<"/70"<<endl;
        cout<<"this is your external physics number: "<<ex_physics<<"/70"<<endl;
    }
};

class internalmarks:virtual public student{
    protected:
    float in_maths,in_chemistry,in_physics;
    public:
    void getdata_intmarks(float a,float b,float c){
        in_maths=a;
        in_chemistry=b;
        in_physics=c;
    }
    void setdata_internal(){
        cout<<"this is your internal maths number: "<<in_maths<<"/30"<<endl;
        cout<<"this is your internal chemistry number: "<<in_chemistry<<"/30"<<endl;
        cout<<"this is your internal physics number: "<<in_physics<<"/30"<<endl;
    }
};

class result:public externalmarks,public internalmarks{
    float result;
    float totalscore_math,totalscore_chemistry,totalscore_physics,totalscore;
    public:
    void display(){
        setdata_rollno();
        setdata_external();
        setdata_internal();

        totalscore_math=ex_maths+in_maths;
        totalscore_chemistry=ex_chemistry+in_chemistry;
        totalscore_physics=ex_physics+in_physics;

        totalscore=totalscore_math+totalscore_chemistry+totalscore_physics;

        result=totalscore/3;

        cout<<"the total score in math: "<<totalscore_math<<"/100"<<endl;
        cout<<"the total score in chemistry: "<<totalscore_chemistry<<"/100"<<endl;   
        cout<<"the total score in physics: "<<totalscore_physics<<"/100"<<endl;   

        cout<<"your total score: "<<totalscore<<"/300"<<endl;   
        cout<<"your percentage: "<<result<<"%"<<endl;   
    }
};


int main(){
    result krishna;
    krishna.getdata_rollno(2024475);
    krishna.getdata_exmarks(55,66,70);
    krishna.getdata_intmarks(29,29,28);
    krishna.display();
    return 0;
};