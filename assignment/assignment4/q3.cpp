//3. Draw an inheritance hierarchy for classes Quadrilateral, Trapezoid, Parallelogram, Rectangle and Square.
//Use Quadrilateral as the base class of the hierarchy. Make the hierarchy as deep as possible.
//Also, implement the above hierarchy using C++ code and create functions to calculate perimeter and area of the shape.
#include<iostream>
using namespace std;
class quad{

public:
    int a,b,c,d,area;
    int peri(){
    return (a+b+c+d);
    }
    int calarea(){
    return area;}
};
class trapezoid:public quad{
    public:
        trapezoid(int s,int t,int u,int v){  //HERE a and b(s and h) are base and H is height
        a=s;b=t;c=u;d=v;
        }
        float calarea(int b1,int b2,int h){ // b1 and b2 are bases and h is height

            area=((b1+b2)/2)*h;
            return area;
        }

};
class parallelogram:public quad{
public:
    parallelogram(int s,int t)
    {
    a=c=s;          //because opposite sides are equal
    b=d=t;
    }
    int calarea(){
    int area=a*b;
    return area;
    }
};
class  rect:public quad{
public:
    rect(int s,int t){
        a=c=s;          //because opposite sides are equal
        b=d=t;

    }
    int calarea(){
    int area=a*b;
    return area;}

};
class square:public quad{

public:
    square(int s){
        a=b=c=d=s;
    }
    int calarea(){
    return a*a;
    }
};
int main()
{
    trapezoid t(2,3,4,5);
    cout<<"PERIMETER OF TRAPEZOID : "<<t.peri()<<endl;
    cout<<"AREA OF TRAPEZOID : "<<t.calarea(2,4,3)<<endl;

    parallelogram p(3,4);
    cout<<"PERIMETER OF PARALLELOGRAM : "<<p.peri()<<endl;
    cout<<"AREA OF PARALLELOGRAM :"<<p.calarea()<<endl;

    rect r(2,4);
    cout<<"PERIMETER OF RECTANGLE : "<<r.peri()<<endl;
    cout<<"AREA OF RECTANGLE :"<<r.calarea()<<endl;

    square s(5);
    cout<<"PERIMETER OF SQUARE :"<<s.peri()<<endl;
    cout<<"AREA OF SQUARE : "<<s.calarea()<<endl;



return 0;

}
