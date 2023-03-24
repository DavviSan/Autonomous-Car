#include <Arduino.h>

//RANGE: 0 a 100
#define DEFAULT_Velocidade 50

class DCMotor { 

    public:  
        int Velocidade;
        uint8_t pin1;
        uint8_t pin2;

        void begin(int in1, int in2);

        void Speed(int Velocidade=DEFAULT_Velocidade);


        void Forward();
        void Backward();
        void Stop();
};