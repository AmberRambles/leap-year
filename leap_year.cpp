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
   //Test 1
   bool hope = false;
   if(year_input%4==0){
     hope = true;
     //Test 1 pass, test 2 start
     }
   else{hope = false;} 
   if(year_input%100==0){
       //continue to final test
     }
     
         
         //std::cout << "Yeah, that looks like a leap year!\n";
       
       
   
   
   if(!hope){//if there is no hope (hope is false, so statement is true)
     std::cout << "Sorry, not a leap year.\n";
   }
  return 0;
}
