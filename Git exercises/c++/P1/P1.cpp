#include <iostream>
#include <string>

int main() {
    std::string values[15][15];

    std::cout << "Productor de graficas\n\n";

    for (int f = 0; f < 15; f++) {
        for (int s = 0; s < 15; s++) {
            values[f][s] = "*";
        }
    }

        for (int v = 0; v < 4; v++){
       for (int f = 0; f < 15; f++) {
        for (int s = 0; s < 15; s++) {

        if (s == 0 && v == 0) {
            values[f][s] = "X";

            }
        else if (f == 14 && v == 1) {
            values[f][s] = "X";
        }

        else if (s == 14 && f == 14 && v == 2) {
                for(int su = 14; su >= 0; su--){
                int newf = f - su;
                int news = s - su;
                values[newf][news] = "X";
                }
            }

        else if (v == 3){
                std::cout << values[f][s] << " ";
                if (s == 14) {
                    std::cout << "\n";}
            }

}}}




    return 0;
}


