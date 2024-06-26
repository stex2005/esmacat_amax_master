/** @file
 * @brief This file contains the declaration of the class associated with the user-defined
 * application for the Esmacat slave project */

#ifndef MY_APP_H
#define MY_APP_H

/*****************************************************************************************
 * INCLUDES
 ****************************************************************************************/
#include <iostream>
#include <iomanip>
#include "application.h"
//Include the header file for the Esmacat slave you plan to use for e.g. Analog Input slave
#include "esmacat_amax.h"
using namespace std;


/*****************************************************************************************
 * CLASSES
 ****************************************************************************************/
/**
 * @brief Description of your custom application class
 *
 * Your custom application class my_app inherits the class 'esmacat_application'
 * Write functions to override the parent functions of 'esmacat_application'
 * Declare an object of your slave class (e.g. ecat_ai)
 * Declare any other variables you might want to add
 * Define the constructor for initialization
 */
class my_app : public esmacat_application
{
private:
    void assign_slave_sequence(); /** identify sequence of slaves and their types*/
    void configure_slaves(); /** setup the slave*/
    void init(); /** code to be executed in the first iteration of the loop */
    void loop(); /** control loop*/

    advantech_amax_4817 ecat_amax; /** create your Esmacat slave object */
public:
//    int16_t calc2sComplement(uint16_t data);
//    double convert_to_voltage(uint16_t raw);
    /** A constructor- sets initial values for class members */
    my_app()
    {

    }
};

#endif // MY_APP_H
