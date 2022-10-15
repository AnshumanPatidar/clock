#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main()
{
    int hr = 0, m = 0, s = 0;
    string c;
    
    while (true)
    {
        system("cls");
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";
         cout<<"\t\t\t\t\t\t\t\t\t\t----------\n";
        cout <<"\t\t\t\t\t\t\t\t\t\t" << hr << " : " << m << " : " << s << " " <<endl;
         cout<<"\t\t\t\t\t\t\t\t\t\t----------\n";
        s++;
        if (s == 60)
        {
            m++;
            s = 0;

            if (m == 60)
            {
                hr++;
                m = 0;
            }
           
            if (hr == 24)
            {
                hr = 0;
               
            }
        }sleep(1);
    }

    return 0;
}
