/*g. In digital world colors are specifies in RGB format from 0 to 255
RGB to CMYK conversion code

White = Max(red/255, green/255, blue/255)
Cyan = ((White - red/255) / white)
Magenta = ((White - Green/255) / White)
Yellow = ((White - blue / 255) / white)
Black = 1 - white

note: if RGB values are all 0 then the CMY values are all
zeroes and the K value is 1.
*/

#include <stdio.h>

int main()
{
    float red, green, blue;
    float white, cyan, magenta, yellow, black;
    float max;

    printf("Enter Red, Green, Blue color values (0 to 255) :\t");
    scanf("%f%f%f", &red, &green, &blue);

    if(red == 0 && green == 0 && blue == 0)
    {
        cyan = magenta = yellow = 0;
        black = 1;
    }
    else
    {
        red = red / 255;
        green = green / 255;
        blue = blue / 255;

        max = red;
        if(green > max)
            max = green;
        if(blue > max)
            max = blue;
        
        white = max;
        cyan = (white - red) / white;
        magenta = (white - green) / white;
        yellow = (white - blue) / white;
        black = 1 - white;
    }

    printf("CMYK = %f %f %f %f", cyan, magenta, yellow, black);

    return(0);
}

