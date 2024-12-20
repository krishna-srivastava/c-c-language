//parameterized....................................................................
#include<iostream>
#include<math.h>
using namespace std;

class point{
    int x,y;
    public:
    friend void distance(point p,point q);
    point(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"the point is ("<<x<<","<<y<<")"<<endl;
    }
};
void distance(point p,point q){
    int x=(q.x-p.x);
    int y=(q.y-p.y);
    // cout<<x<<y<<endl;
    int sqx=pow(x,2);
    int sqy=pow(y,2);
    // cout<<sqx<<sqy<<endl;
    int sumxy=sqx+sqy;
    // cout<<sumxy<<endl;
    int root=pow(sumxy,0.5);
    cout<<"the distance is "<<root<<endl;
}
int main(){
    point p(0,0);
    p.display();
    point q(6,8);
    q.display();
    distance(p,q);
    return 0;
};