#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    time_t start, end;
    double dif;
    long int zahl = 1;
    long int count;
    int i = 0;

    time (&start);
    while(zahl <= 1000000000)
    {
        count = (long) sqrt(zahl);
        while(count != 0)
        {
            if(zahl % 2 == 0)
            {
                count = 0;
                continue;
            }
            else if(zahl%count == 0 && count != zahl && count != 1)
            {
                count = 0;
                continue;
            }
            if( (zahl/count == zahl) && (zahl/zahl == 1))
            {
                ++i;
                cout<<i<<". primzahl: "<<zahl<<endl;
            }
            --count;
        }
        ++zahl;
    }
    time (&end);
    dif = difftime (end,start);
    cout<<"benötigte Zeit: "<<dif<<"s"<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
