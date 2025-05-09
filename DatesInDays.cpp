#include <iostream>
#include <ctime>

using namespace std;

tm parseDate(const string& dateStr) {
    tm tmDate = {};
    sscanf(dateStr.c_str(), "%d-%d-%d", &tmDate.tm_year, &tmDate.tm_mon, &tmDate.tm_mday);
    tmDate.tm_year -= 1900;  // tm_year is years since 1900
    tmDate.tm_mon -= 1;      // tm_mon is 0-based (0 = January)
    return tmDate;
}

int main() {
    string dateStr1 = "2024-03-19";
    string dateStr2 = "2024-03-21";

    tm tm1 = parseDate(dateStr1);
    tm tm2 = parseDate(dateStr2);

    time_t time1 = mktime(&tm1);
    time_t time2 = mktime(&tm2);

    double difference = difftime(time2, time1) / (60 * 60 * 24);

    cout << "Difference in days: " << (int)difference << endl;

    return 0;
}
