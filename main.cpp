#include <iostream>
#include "DateTimeStamper.h"

// For sleeping...
#include <chrono>
#include <thread>

using namespace std; 

int main() {
    DateTimeStamper d;
    cout << "Initialized at: " << d.getInitializedAtString() << endl;
    this_thread::sleep_for( chrono::milliseconds(2000) );
    cout << "The datetime is: " << d.getNowString() << endl;
    return 0;
}

