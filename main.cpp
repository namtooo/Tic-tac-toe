#include <iostream>
#include <iomanip>
#include "TrafficSimulator.h"
#include "Vehicle.h"

using namespace std;

int main(){
    int n; //So thuc the
    cin>>n;

    //tao Simulation
    TrafficSimulator ts;

    for(int i=0; i<n; ++i){
        int id, lane;
        double initial_position, initial_speed;
        cin>>id>>lane>>initial_position>>initial_speed;

        Vehicle a(id, lane, initial_position);    
        if(initial_speed > 0){
            a.accelerate(initial_speed);
        }
        //them vao Simulation
        ts.addVehicle(a); 
    }

    int m;
    cin>>m;

    cout << fixed << setprecision(2);

    for(int i =0; i<m ;i++){
        double dt;
        cin>>dt;
        ts.runStep(dt);
        cout<<"STEP "<<i+1<<endl;
        cout<<"COUNT "<<ts.size()<<endl;
        cout<<"AVG_SPEED "<<ts.averageSpeed()<<endl;
        cout<<"POSITIONS";
        for(int j = 0; j < n; j++){
            cout <<" "<< ts.getVehicle(j).getPosition();
        }
        cout<<endl;
    }

    return 0;
}