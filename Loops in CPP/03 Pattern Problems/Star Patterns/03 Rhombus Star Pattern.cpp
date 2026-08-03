/*Rhombus Star Pattern
******
 ******
  ******
   ******
    ******
*/

#include <iostream>

int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int l = 0; l < i; l++) {
            std::cout << " ";
        }

        for (int j = 0; j < 6; j++) {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}
