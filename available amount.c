#include <stdio.h>
#include <math.h>
#define TIME 10
float final_amonut(float); /*function prototype*/

int main()
{
    int amount = 1000;
    float total;
    final_amonut(total); /*function call*/
    return 0;
}
float final_amonut(float total_available)
{
    int iteration;
    float interest = .08;
    for (iteration = 1; iteration <= TIME; iteration++)
    {
        total_available = 1000 * (pow((1 + interest), iteration));
        printf("The total available amount after %2d year: $%0.2f\n", iteration, total_available);
    }
}
