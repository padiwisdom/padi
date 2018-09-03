#include <iostream>

using namespace std;

int main()
float a;
    cout << "Enter your Score to know your grade";
    cin>>a;

    if(a >= 80 && a <= 100)
    {
       cout << "GRADE : A ";
    }

    else if(a >= 75  && a <= 79)
    {
       cout << "GRADE : B+ ";
    }

    else if(a >= 70 && a <= 74)
    {
       cout << "GRADE : B ";
    }

    else if(a >= 65 && a <= 69)
    {
       cout << "GRADE : C+ ";
    }

    else if(a >= 60 && a <= 64)
    {
       cout << "GRADE : C ";
    }

    else if(a >= 55 && a <= 59)
    {
       cout << "GRADE : D+ ";
    }

    else if(a >= 50 && a <= 54)
    {
       cout << "GRADE : D ";
    }

    else if(a >= 45 && a <= 49)
    {
       cout << "GRADE : E ";
    }

    else if(a >= 0 && a <= 44)
    {
       cout << "GRADE : F ";
    }

    else
    {
       cout << "No  grading found for your score ";
    }

    
    return 0;


}
