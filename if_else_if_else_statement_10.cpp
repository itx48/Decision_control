// C++ program to determine the quadrant of a point based on user input.
#include<iostream>
using namespace std;
int main()
{
    double x,y;
    cout<<"entre x and y coordinates: ";
    cin>> x >> y;

    if(x>0 && y>0){
        cout<<"the point is in the first quadrant"<<endl;
    }
    else if(x<0 && y>0){
        cout<<"the point is in the second quadrant"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"the point is in the third quadrant"<<endl;
    }
    else if(x>0 && y<0){
        cout<<"the point is in the fourth quadrant"<<endl;
    }
    else{
        cout<<"the point is on the axis"<<endl;
    
    }

}