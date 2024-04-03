#include <iostream>

int main() {
  int year_input = 0;
  std::cout << "Is it a leap year? Let's find out!\n";
  bool in_loop = true;
  do{
    std::cout << "What year?\n";
    std::cin >> year_input;
    if(year_input > 999){
      if(year_input < 10000){
        in_loop = false;//ends loop when year is 4 digits
      }
    }
  } while (in_loop);
  /*
   * There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.
   * */

bool leapCheck(int year) {
	if (year % 4 == 0){//if year is divisible by 4
		if (year % 100 == 0){//and is also divisible by 100
			if (year % 400 == 0){//and also divisble by 400
				return true}
			else{//but not by 400
				return false
			}
		else{//and not divisble by 100
			return true
		}
	else{//if year is not evenly divisible by 4
		return false
	}
}
