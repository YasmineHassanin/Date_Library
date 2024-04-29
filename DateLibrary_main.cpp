#include <iostream>
#include "ClsDateLibrary.h";
using namespace std;
int main()
{
    /*Local Time */
    ClsDateLibrary Date;
    Date.Print();
    /*Time As String From User*/
    ClsDateLibrary Date2("35/2/2024");
    Date2.Print();
    ClsDateLibrary Date3(19,1 ,2000);
    Date3.Print();
    ClsDateLibrary Date4(25, 2000);
    Date4.Print();

    Date.GetSystemDate();
    cout << Date.days << "/" << Date.months << "/" << Date.year << endl;
   
    cout << "My Age InDays:" <<
        ClsDateLibrary::CalculateMyAgeInDays(ClsDateLibrary(2,1, 2001));
    cout << endl;
    cout << Date2.IsTheDateIsValidOrNot();

    
   
}
