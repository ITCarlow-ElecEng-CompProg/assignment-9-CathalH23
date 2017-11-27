/** Sphere Calculations
 *  C00184521
 *  Cathal Hogan
 *  13/11/2017
 */

//Pre-processor directives
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void sphere(double rad,double *SA, double *V);

//main function
int main()
{
    //variable declaration
    double V=0,SA=0,r=0;

    double *SA_ptr,*V_ptr;

    cout << "Sphere Calculations" << endl;
    //
    while (r <= 0)
    {
        cout << "Enter a value for Radius: ";
        cin >> r;
    }

    SA_ptr = &SA;
    V_ptr  = &V ;

    sphere(r, SA_ptr, V_ptr );

    //Display results of Surface Area and Volume on screen
    cout << "\nSurface  Area:\t" << *SA_ptr << "m^2" << endl;
    cout << "\nVolume:       \t" << *V_ptr << "m^3" << endl;

    return 0;
}
/* Function */
void sphere(double rad,double *SA, double *V)
{
    //Calculating the SurfaceArea and Volume
    *SA =  4*M_PI*(pow(rad,2));

    *V = 1.3333*M_PI*pow(rad,3);

    return ;
}
