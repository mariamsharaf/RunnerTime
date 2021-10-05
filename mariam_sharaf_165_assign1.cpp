#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;




int main()
{
    string runner1,runner2,runner3;
    double time1, time2, time3;
    // identifies variables as runner names and finish times.
    cout << "Enter the names of three runners and then I will tell you who came in first, second and third."  << endl;
    
    // asks users for input for runner's name and finish time.
    cout << "\nName of Runner 1: " ;
    getline(cin, runner1);
// uses getline instead of cin so user can input first and last name without the code skipping through the next lines.
    cout << "Runner 1's finishing time: ";
    cin >> time1;

    cout << "\nName of Runner 2: ";
    cin.ignore();
    getline(cin, runner2);
    
    cout << "Runner 2's finishing time: " ;
    cin >> time2;
    
    cout << "\nName of Runner 3: ";
    cin.ignore();
    getline(cin, runner3);
    
    cout << "Runner 3's finishing time: ";
    cin >> time3;
    cout << "\n";
   
    // if runner time values are less than zero an error message is displayed.
    if (time1 < 0 || time2 < 0 || time3 < 0)
       {
        cout << "Error. Enter positive values only for each runner's time" << endl;
       }
   // if loop to test the condition comparing finish times
    //if runner 1's finish time is less than runner 2's time code will display that runner 1 is in 1st first place.
    if (time1 < time2)
    {
        if (time1 < time3)
        { cout << runner1 << " came in 1st place." <<endl;
            if (time2 < time3)
            {
                cout << runner2 << " came in 2nd place." << endl;
                cout <<runner3 << " came in 3rd place." << endl;
            }
            else
            {
                cout << runner3 << " came in 2nd place." << endl;
                cout << runner2 << " came in 3rd place." << endl;
            }
        }
    }
    // if runner 2's finish time is less than runner 3's finish time then code will continue.
    if (time2 < time3)
    {
        // if runner 2's finish time is also less than runner 1's time then the cout code will compile and the out put will be that runner 2 came in 1st place.
        if (time2 < time1)
        {
            cout << runner2 << " came in 1st place." << endl;
            if (time1 < time3)
            {
                cout << runner1 <<" came in 2nd place" << endl;
                cout << runner3 << " came in 3rd place.";
            }
            // if previous statemeny is not true then code will show that runner 3 came in 2nd place and runner 1 came in 3rd.
            else
            {
                cout << runner3 << " came in 2nd place. " << endl;
                cout << runner1 << " came in 3rd place." << endl;
            }
    }
// if runner 3's finish time is less than runner 2's finish time then code will continue.
}
if (time3 < time2)
{
    // if runner 2's finish time is also less than runner 1's time then the cout code will compile and the out put will be that runner 3 came in 1st place and runner 2 came in 2nd place.
    if (time2 < time1)
    {
        cout << runner3 << " came in 1st place." << endl;
        if ( time1 > time2)
        {
            cout << runner1 << " came in 2nd place." << endl;
            cout << runner2 << " came in 3rd place." << endl;
        }
        else
        {
            cout << runner2 << " came in 2nd place." << endl;
            
        }
        }
    }
}

