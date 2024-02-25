/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       richie                                                    */
/*    Created:      12/2/2023, 10:00:03 PM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#include "file.h"
#include "vex.h"
vex::competition Competition;

void pre_auton(void) {}
void autonomous(void) {}

vex::brain Brain;

void usercontrol() {
  vex::brain Brain;
  Brain.SDcard.savefile(fname, filebuffer, sizeof(filebuffer));

  printf("Finished writing");
  fflush(stdout);
  // vexSystemErrorMessageSet("asdsadfasfdsa");
}
int main() { usercontrol(); }
