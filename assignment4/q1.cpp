/*1. Discuss the ways using suitable examples in which inheritance promotes software reuse, saves time during program
development and helps prevent errors*/

#include<iostream>
using namespace std;
class vehicle{
public:
    vehicle(){
    cout<<"VEHICLE CONSTRUCTOR"<<endl;
    }
    void brake(){
    cout<<"BRAKE"<<endl;
    }
    void fuel(){
    cout<<"FUEL"<<endl;
    }
    };

    class car:public vehicle{  //here we can see that class can use methods of class vehicle which shows class re-usability and
    public:                     //code duplication reduces the chances of errors are decreased.
        car(){
        cout<<"CAR CONSTRUCTOR"<<endl;
        }
        };

        int main(){
        car c;
        c.brake(); //code reusability
        return 0;
        }
