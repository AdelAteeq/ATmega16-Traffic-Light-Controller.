#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB = 0x07;  // PB0, PB1, PB2 as outputs

    while (1)
    {
        // RED LED - 10 seconds
        PORTB = 0x01;
        for (int i = 0; i < 10; i++)
        {
            _delay_ms(1000);
        }

        // YELLOW LED - 3 seconds
        PORTB = 0x02;
        for (int i = 0; i < 3; i++)
        {
            _delay_ms(1000);
        }

        // GREEN LED - 10 seconds
        PORTB = 0x04;
        for (int i = 0; i < 10; i++)
        {
            _delay_ms(1000);
        }
    }
}
