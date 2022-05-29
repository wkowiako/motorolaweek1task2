#include <iostream>

int a,b,c,d,liczba;

int main()
{
    std::cout<<"choose a figure figure: circle (radius) press 1 , rectangle press 2 , triangle press 3 , trapeze press 4 " << std::endl ;
    std::cin >> liczba; 
     switch( liczba )
                    {
                    case 1: std::cout << " enter the length of the radius " <<std::endl ;
                            std::cin  >> a ;
                            std::cout << " the field of the wheel is "<< (a*a) *3.14159265359 << std::endl ;
                    break ;
                    case 2: std::cout << " enter the length of the side a  "<<std::endl ;
                            std::cin  >> a ;
                            std::cout << " enter the length of the side  b "<<std::endl ;
                            std::cin  >> b ;
                            std::cout << " the field of the rectangle is "<< (a*b) << std::endl ;
                    break ;
                    case 3: std::cout << " enter the base of the trapeze a  "<< std::endl ;
                            std::cin  >> a ;
                            std::cout << " ente the base of the trapeze  b "<< std::endl ;
                            std::cin  >> b ;
                            std::cout << " enter the height " << std::endl ;
                            std::cin  >> c ;
                            std::cout << " the field of the trapeze is "<< ((a+b)*c)/2 << std::endl ;
                    break ;
                    case 4: std::cout << "  " ; break ;
                    }
    return 0;
}
