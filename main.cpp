#include <iostream>

using namespace std;

int main()
{
    int age,experiance;
    double gpa;
    string security;
    cout<<"enter age \n";
    cin>>age;
    cout<<"enter gpa minimum 2.5\n";
    cin>>gpa;
    cout<<"enter you experiance\n";
    cin>>experiance;
    cout<<" have security clearance\n";
    cin>>security;
    if(age>=22 && age<=25){
            if(gpa>=3.5){
                cout<<"qualify for senior role\n";
            }
    if(gpa>=2.5 &&gpa<3.5){
        if(experiance>3){
            cout<<"they qualify for mid level developer";
        }
        else{
            cout<<"junior developer";
        }
    }
    if(security=="yes"){
        cout<<"extra bonus";
    }
    else{
        cout<<"no extra bonus";
    }
    }

    else{
        cout<<"age is not valid";
    }
    return 0;
}
