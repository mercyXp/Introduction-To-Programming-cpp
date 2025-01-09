/* #include <iostream>
#include <cmath>

using namespace std;

int main() {
    int H, M; //H=hour, M=minutes
    cin>>H>>M;

    float hourAngle = (H % 12 + (float)M / 60)*30;  //360/12 = hour angle
    float minuteAngle = M * 6; //360/60 = minute angle
    float angle = fabs(hourAngle - minuteAngle);

    if(angle > 180){
        angle = 360 - angle;
        return angle;
    }
    cout<<angle;
    return 0; 
}*/

#include <iostream>

using namespace std;
 
// Function for calculating the angle between the hour and minute hands
int findAngle(int hh, int mm)
{
// processing 24-hour recording
    hh = hh % 12;
 
    // find the position of the clock hand
    int h = (hh * 360) / 12 + (mm * 360) / (12 * 60);
 
    // find the position of the minute hand
    int m = (mm * 360) / (60);
 
    // calculating the angle difference
    int angle = abs(h - m);
 
    // we count the smaller angle and return it
    if (angle > 180) {
        angle = 360 - angle;
    }

return angle;
}

// Clock angle problem
int main()
{
    int hh, mm;
    cin>>hh>>mm;
 
    cout << findAngle(hh, mm);
 
    return 0;
}