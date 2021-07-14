// *** Simple weight conversion chart using other planets relative gravity to find the users weight on that planet*** 

// Ask him what his weight is 
/*
1. ask user for weight 
2. input user weight in var weight 
*/

// Enter num for selected planet
/*
3. Output planets, display string value
4. conversion initiated into int var 
*/

// Convert weight on that planet
/*
5. Use the weight var and mulitply it by the realitive gravity and store it into weight_convert var 
6. output the 
*/

#include <iostream> 
int main() {

  double weight, conversion;
  int planet;
  std::cout << "What is your earth weight?\n";

  std::cin >>  weight;



  std::cout << "1. Mercury\n" << "2.Venus\n" << "3.Mars\n" << "4.Jupiter\n" << "5.Saturn\n" << "6.Uranus\n" << "7.Neptune\n";  
   std::cout << "Enter a number for the planet you want to fight on\n";

  std::cin >> planet; 

  switch (planet) {

    case 1 :
    std::cout << "Mercury Weight: " << weight * (.38); 
    break;
    case 2 :
    std::cout << "Venus Weight: " << weight* (.91);
    std::cout << weight* (.91);
    break;
    case 3 :
    std::cout << "Mars Weight: " << weight * (.38);
    break;
    case 4 :
    std::cout << "Jupiter Weight: " << weight * (2.34);
    break;
    case 5 :
    std::cout << "Saturn Weight: " << weight * (1.06);
    case 6 :
    break;
    std::cout << "Uranus Weight: " << weight * (.92);
    break;
    case 7 :
    std::cout << "Neptune Weight: " << weight * (1.19);
    break;
    default : 
    std::cout << "Not a number\n";
    break;
  } 
  
  
  
  
  
  
  
  
  
  
}