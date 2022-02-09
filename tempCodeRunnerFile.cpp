#include <iostream>
using namespace std;

enum Light
{

    stop, // red
    slow,// yellow
    go  // green

};

int main()
{
    Light trafficLight ;
    trafficLight = stop;

    for(int time=0 ; time < 12 ; time++)
    {

    cout << "Time : " << time << "\t Trafic light is " << trafficLight << endl ;

    if               ( trafficLight == stop)       {trafficLight = go; }         // red > green
    else if        ( trafficLight == go )         {trafficLight = slow; }     // green > yellow
    else if        ( trafficLight == slow )      {trafficLight = stop; }      // yellow > red 
    }
}
