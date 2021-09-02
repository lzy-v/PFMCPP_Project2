#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 bool: true or false
 char: one byte
 int: fits the compiler size for int
 float: single-precision floating point, what is precision?
 double: double-precision floating point, what is precision? decimals?
 void: emptiness, shunyat, very zen
 wchar_t: wide? i dont get it. more bytes?



 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    bool upOrDown = True;
    bool yesOrNo = False;
    bool rightOrLeft = True;

    char myNameFirstChar = "l";
    char animalFirstChar = "e";
    char sportFirstChar = "y";

    int age = 104;
    int month = 12;
    int daysInYear = 360;

    float distance = 3.6f;
    float height = 50.4f;
    float weight = 32.3f;

    double time = 1.531;
    double guessDecimal = 0.433;
    double pi = 3.14159;
    
    ignoreUnused(number
                 upOrDown,
                 yesOrNo,
                 rightOrLeft,
                 myNameFirstchar,
                 animalFirstchar,
                 sportFirstChar,
                 age,
                 month,
                 daysInYear,
                 distance,
                 height,
                 weight,
                 time,
                 guessDecimal,
                 pi); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
}

/*
 1)
 */
 bool drinkTea(float waterTemperature, bool honey = 0, char timeOfDay = "am")
 {
   ignoreUnused(waterTemperature, honey, timeOfDay);
   return {};
 }

/*
 2)
 */
  int changeFrequency(bool freqChange, int endFreq)
  {
    ignoreUnused(freqChange, endFreq);
    return {};
  }
 
/*
 3)
 */
 char findLetterInSoup(char targetLetter, int numberOfLetters)
 {
   ignoreUnused(targetLetter, numberOfLetters);
   return {};
 }

/*
 4)
 */
char routeAudio(int rightChan = 1, int leftChan = 0)
{
  ignoreUnused(rightChan, leftChan);
  return {};
}

}
/*
 5)
 */
bool flightOrFight(int risk, int reward)
{
  ignoreUnused(risk, reward);
  return {};

}

/*
 6)
 */
 bool screenInvestment(int irr, int moic)
 {
   ignoreUnused(irr, moic);
   return {};
 }

/*
 7)
 */
 int investmentReturn(int cashFlow, int holdTime)
 {
   ignoreUnused(cashFlow, holdTime);
   return {};
 }

/*
 8)
 */
 bool meditate(bool watchBreath, bool feelBody = True)
 {
   ignoreUnused(watchBreath, feelBody);
   return {};
 }

/*
 9)
 */
bool runWebSite(char siteName, int siteType = 1)
{
  ignoreUnused(siteName, siteType);
  return {};
}


/*
 10)
 */
 bool sitOrStand(int timeStanding, int timeSitting, bool tired = 0)
 {
   ignoreUnused(timeStanding, timeSitting, tired);
   return {};
 }

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto chai = drinkTea(88.93, 1);
    
    //2)
    auto alienRadio = changeFrequency(1, 108);
    
    //3)
    auto pickNoodle = findLetterInSoup(l, 12);
    
    //4)
    char routeAudio(int rightChan = 1, int leftChan = 0)

    //5)
    auto whatToDo = flightOrFight(5, 5);
    
    //6)
    bool screenInvestment(int irr, int moic)
    
    //7)
    int investmentReturn(int cashFlow, int holdTime)
    
    //8)
    bool meditate(bool watchBreath, bool feelBody = True)
    
    //9)
    bool runWebSite(char siteName, int siteType = 1)
    
    //10)
    bool sitOrStand(int timeStanding, int timeSitting, bool tired = 0)
    
    
    ignoreUnused(carRented,
                 chai,
                 alienRadio,
                 pickNoodle,
                 whatToDo,
                 );

    std::cout << "good to go!" << std::endl;
    return 0;    
}
