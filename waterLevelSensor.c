#include<reg51.h>
sbit in1=P1^0;
sbit in2=P1^1;
sbit in3=P1^2;

sbit red=P1^3;
sbit yellow=P1^4;
sbit green=P1^5;

sbit buzzer=P1^6;

void main()
{
    while(1)
    {
        if(in1==0)
        {
            red=0;
            buzzer=0;
        }
        else if(in2==0 )
        {
            yellow=0;
            buzzer=0;
        }
        else if(in3==0 )
        {
            green=0;
            buzzer=0;    
        }
        else
        {
            red=1;
            yellow=1;
            green=1;
            buzzer=1;
        }
    }
}
