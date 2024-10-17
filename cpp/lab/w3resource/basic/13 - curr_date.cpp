#include <iostream>
#include <ctime>

using namespace std;

int main()
{

        // get all date time for today with timestamp
        // The localtime() and gmtime() functions can convert timestamps into datetime structures.
        time_t timestamp;
        time_t ts = time(&timestamp);
        struct tm dt = *localtime(&timestamp);
        cout << dt.tm_hour << ":" << dt.tm_min << ":" << dt.tm_sec << endl;

        // get all date time for today with structure that allow us to access data with pointer
        struct tm datetime;
        mktime(&datetime);
        cout << datetime.tm_hour << ":" << datetime.tm_min << ":" << datetime.tm_sec;



        return 0;
}