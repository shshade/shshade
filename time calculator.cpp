#include <iostream>
using namespace std;
/* 86400 secs in a day 
3600 mins in an hr */

int main()
{
  // constants for converting
  const int secs_in_day = 86400;
  const int secs_in_hr = 3600;
  const int secs_in_min = 60;
  long long seconds;

  // ask for user input
  cout << "Enter the number of seconds: ";
  cin >> seconds;

  if (seconds >= secs_in_day) {cout << "That is about " << (seconds / secs_in_day) << " day(s)." << endl;} else if (seconds >= secs_in_hr) {
  cout << "That is about " << (seconds / secs_in_hr) << " hour(s)." << endl;} else if (seconds >= secs_in_min) {
  cout << "That is about " << (seconds / secs_in_min) << " minute(s)." << endl;}
  else {
    cout << "That is less than a minute." << endl;
  }
  return 0;
}