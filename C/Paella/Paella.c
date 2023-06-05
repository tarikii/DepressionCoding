#include <stdio.h>

int main(){
    int peopleEating = 0;
    // Each 4 people is 0.5 kilo of rice
    float priceRiceKilo = 0.0;
    // Each 4 people is 0.25 kilo of shrimps
    float priceShrimpsKilo = 0.0;
    // The total of each thing
    float totalRice = 0.0;
    float totalShrimps = 0.0;
    float totalPriceRice = 0.0;
    float totalPriceShrimps = 0.0;
    float totalPrice = 0.0;

    printf("How many people are gonna eat?\n");
    scanf("%d", &peopleEating);
    printf("\n");

    printf("What's the price of 1 kilo of rice?\n");
    scanf(" %f", &priceRiceKilo);
    printf("\n");

    printf("What's the price of 1 kilo of shrimps?\n");
    scanf(" %f", &priceShrimpsKilo);
    printf("\n");

    // We mul the people eating with the half kilo of rice, that we will div with the 4 people 
    totalRice = peopleEating * 0.5 / 4;
    // Same, but with 0.25 kilo of shrimps
    totalShrimps = peopleEating * 0.25 / 4;

    // We calculate the total price with the original we had and the total kilos of rice/shrimps
    totalPriceRice = priceRiceKilo * totalRice;
    totalPriceShrimps = priceShrimpsKilo * totalShrimps;

    // We calculate the total price overall of the rice and shrimps, with a simple sum
    totalPrice = totalPriceRice + totalPriceShrimps;

    // We output each result, with %1.f, so the program only gives us 1 decimal
    printf("%.1f kg rice\n",totalRice);
    printf("%.1f kg shrimps\n",totalShrimps);
    printf("%.1f euros rice\n",totalPriceRice);
    printf("%.1f euros shrimps\n",totalPriceShrimps);
    printf("TOTAL: %.1f euros\n",totalPrice);

    return 0;
}