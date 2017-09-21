#include "DateTimeStamper.h"

DateTimeStamper::DateTimeStamper() { 
    initialized_at = now();
}
    
time_t DateTimeStamper::now() {
    return time(0);
}

string DateTimeStamper::getDateTimeString(time_t *t) {
    return string(ctime(t));
}
        
string DateTimeStamper::getNowString() {
    time_t t = now();
    return getDateTimeString(&t);
}

string DateTimeStamper::getInitializedAtString() {
    return getDateTimeString(&initialized_at);
}

