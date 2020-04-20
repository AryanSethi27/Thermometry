#include <iostream>
#include <string> 
using namespace std;
int main() {
    char scaleName[50];
    float BP, FP, celciusR, fahrenheitR, kelvinR;
    cout<<"To make your own scale, You'll need Boiling Pt value and Freezing Pt value of your Scale\nStart with telling us your Scale's name: ";
    gets(scaleName); 
    cout<<"\nEnter the Boiling Pt. of your scale: ";
    cin>>BP;
    cout<<"\nNow Enter the Freezing Pt. of your scale: ";
    cin>>FP;
    celciusR = ((BP-FP)/100) + FP;
    fahrenheitR = (BP-FP)*(-0.172) + FP;
    kelvinR= (((-2.7215)*(BP-FP)) + FP);
    cout<<"\nYour scale comparisions are:\n";
    cout<<"1 Celcius ="<<celciusR<<scaleName<<'\n';
    cout<<"1 Fahrenheit ="<<fahrenheitR<<scaleName<<'\n';
    cout<<"1 Kelvin ="<<kelvinR<<scaleName<<'\n';
    return 0;
}
