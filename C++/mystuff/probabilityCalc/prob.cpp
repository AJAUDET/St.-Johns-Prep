/*
    probability breakdown: 
        .6% chance of obtaining a 5 star + .6 each pull
            .3% for featured & .3 for standard(7)
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double fiveStarProb[] = {.6, .3};

double pityCalc(int pity);

int main()
{
    // variables to calculate chance of featured character
    int pity = 0;
    double obtainingFiveStar = 0, obtainingFeatured = 0;
    string featured = "";

    // prompt for input of character
    cout << "Enter the current featured character: ";
    cin >> featured;

    // get pity stats
    cout << "Enter the pity are you at: ";
    cin >> pity;

    obtainingFiveStar = pityCalc(pity);
    obtainingFeatured = pityCalc(pity) / 2;
    
    cout << fixed << setprecision(3) << "You have a " << obtainingFiveStar << "% chance of obtaining a five star" << endl;
    cout << fixed << setprecision(3) << "You have a " << obtainingFeatured << "% chance of obtaining " << featured << endl;

    return 0;
}

double pityCalc(int pity)
{
    double fiveStarChance = 0;
    // breakdown of how pity is calculated
        // whenever pity is <= 75 additive
        // whenever pity is > 75 multiplicitive
    for (int i = -1; i < pity; i++)
    {
        if(i <= 75)
        {
            fiveStarChance += fiveStarProb[0];
        }
        else if(i > 75)
        {
            fiveStarChance *= 2*fiveStarProb[0];
        }
    }

    return fiveStarChance;
}