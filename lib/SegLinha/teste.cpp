#include <teste.hpp>
#include <DCMotor.hpp>

DCMotor M1, M2;

void teste::teste1(int vl, int vl2, int C) {

    if (vl > 70 and vl2 > 80){
        M1.Speed(70);
        M1.Forward();

        M2.Speed(70);
        M2.Forward();
    }

    int P = (vl - vl2) * C;
    
    if (P < 0){
        M1.Speed(P);
        M1.Backward();

        M2.Speed(P);
        M2.Forward();
    }

    if (P > 0){
        M1.Speed(P);
        M1.Forward();

        M2.Speed(P);
        M2.Backward();
    }
}