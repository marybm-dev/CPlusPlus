#ifndef _LPCLIB_H
#define _LPCLIB_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

typedef unsigned char smallint;

/** @file lpclib.h
 @brief LPCLib Functions
 
 All functions listed here are usable in any program
 you create using the standard LPCLib starter project.
 */ 


/** \name Reporting a Runtime Error */
/* @{ */
/**
 * Issues an error message and stops the programs.
 * @param str the error message to print
 */
void Error (string str);
/* @} */

/** \name Getting User Input */
/* @{ */
/** Gets one line of text input.
 @param src The input source, cin by default
 @return The string typed by the user */
string GetLine(istream & src=cin);
/** Gets one integer from an input source.
 @param src The input source, cin by default
 @return The integer typed by the user */
int GetInt(istream & src=cin);
/** Gets one number (not limited to an integer) from an input source.
 @param src The input source, cin by default
 @return The number typed by the user */
double GetDouble(istream & src=cin);
/** Gets a single character of input.
 @param src The input source, cin by default
 @return The character typed by the user */
char GetChar();
/* @} */

/** \name Converting Values */
/* @{ */
string IntToString(int num);
string DoubleToString(double num);
int StringToInt(string str);
double StringToDouble(string str);
string ConvertToLowerCase(string s);
string ConvertToUpperCase(string s);
/* @} */

/** \name Generating Random Values */
/* @{ */
/** Generates a random int within a range of values.
 @param low The lowest possible value generated
 @param high The highest possible value generated
 @return A random integer within the range specified */
int RandomInt(int low, int high);
/** Generates a random number within a range of values.
 @param low The lowest possible value generated
 @param high The highest possible value generated
 @return A random number within the range specified */
double RandomDouble(double low, double high);
/** Generates true/false value randomly, with a given probability.
 @param p The probability of getting a true value - a number between 0 and 1.0
 @return true or false */
bool RandomChance(double p);
/* @} */

/** \name Drawing Functions */
/* @{ */
/** Define (or redefine) a named color
 @param name The name of the color
 @param red The color's red value, 0 to 255
 @param green The color's green value, 0 to 255
 @param blue The color's blue value, 0 to 255 */
void DefineColor(string name, smallint red, smallint green, smallint blue);
/** Opens the main graphics window, using the given dimensions and color
 @param width The width of the window
 @param height The height of the window 
 @param color The background color of the window */
void GraphicsWindow(int width, int height, string color);
/** Draw a rectangle with specified position, size and color
 @param x,y The upper left corner of the rectangle
 @param width,height The dimensions of the rectangle
 @param color The color of the rectangle (must be a color you have already defined)
 @param filled Whether or not the rectangle is filled in */
void DrawRectangle(int x, int y, int width, int height, string color, bool filled=false);
/** Draw a triange with specified vertex positions, size and color
 @param color The color of the triangle (must be a color you have already defined)
 @param filled Whether or not the triangle is filled in */
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, string color, bool filled=false);
/** Draw a triange with specified vertex positions, size and color
 @param x,y The coordinates of the center
 @param r The radius
 @param color The color of the circe (must be a color you have already defined)
 @param filled Whether or not the circle is filled in */
void DrawCircle(int x, int y, int r, string color, bool filled=false);
/** Draws the given image in the graphics window.
 @param imageFileName The filename of the image file. This must be inside a folder named "Images" inside the project folder
 @param x,y The location at which to draw the image. */
void DrawImage(string imageFileName, int x, int y);
/** Draws the given image in the graphics window, scaled to specified dimensions
 @param imageFileName The filename of the image file. This must be inside a folder named "Images" inside the project folder
 @param x,y The location at which to draw the image
 @param width, height The scaled (stretched) dimensions to use */
void DrawImage(string imageFileName, int x, int y, int width, int height);
/* @} */

/** \name Separate image window functions */
/* @{ */
void DisplayImage(string imageFileName);
/** Displays the given image in a separate window, scaling it to the dimensions given.
 @param imageFileName The filename of the image file. This must be inside a folder named "Images" inside the project folder */
void DisplayImage(string imageFileName, int width, int height);
/** Removes any image currently being displayed. */
void RemoveImage();
/* @} */

/** \name Controlling System Messages */
/* @{ */
/** Stops the output of extra messages from the library. */
void HideSystemMessages();
/* @} */

/** \name Accessing the CS1/CS2 Database */
/* @{ */
void DBInsertRecord(int ID, int authcode, string record);
vector<string> DBRetrieveAllRecords(int ID, int authcode);
vector<string> DBRetrieveMyRecords(int ID, int authcode);
/* @} */



// adding in some code that you don't need to know about...
#include "lpclib_private.h"
#endif
