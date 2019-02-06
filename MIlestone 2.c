#pragma config(Motor,  motor1,          DriveR,        tmotorVexIQ, PIDControl, reversed, driveRight, encoder)
#pragma config(Motor,  motor2,          DriveL,        tmotorVexIQ, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motor3,          armAltitude,   tmotorVexIQ, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//todo install 2 buttons
/*Milestone 2
 *Step 1: Move forward 1 meter (button press) and turn 90 degrees on command (button press) pulling cable
 *Step 2: place robot in position then activate cable connection process
 */

/*
 *readButton()
 *runs all the time to see if a button is pressed
 *take from the previous code they gave us
 *
 */
task readButton(){}
/*
 *driveForwards()
 *drive forward and turn on command
 *drive about 1 meter (distance not important more about strait line)
 *(min distance is 75 cm
 *avoid skidding as much as possible
 */
task driveForwards(){}
/*
 *DriveBackwards()
 *Unessisary for step one of milestone 2
 *neccisary for cable connection
 */
task driveBackwards(){}
/*
 *turnRight()
 *Milestone 2: Robot turns 90 degrees at the push of a button
 */
task turnRight(){}
task turnLeft(){}
/*
 *raiseArm()
 *Purpose: raises the arm holding the connection point of the cable
 *will use hard numbers for amount to raise/lower to connect cable on target object
 */
task raiseArm(){}
/*
 *lowerArm()
 *Purpose: same as raiseArm
 */
task lowerArm(){}

task main()
{


}
