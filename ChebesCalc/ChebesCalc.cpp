// ChebesCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define PI                      3.14159265
//#define UNIVERSAL_GAS_CONSTANT  8.314 //in joule per mol

#define PAUSE                   system("pause")
#define TIMEOUT                 system("timeout /t 2 /nobreak >nul")
#define CLEAR_SCREEN            system("cls")

#define CONSOLE_TEXT_COLOR_ERROR     system("color 0C")
#define CONSOLE_BACKGROUND_COLOR     system("color 0B") // aqua on black
#define TITLE                        system("title CHEBESCALC V1.5")

#define CONSOLE_COLOR_RED       system("color c")
#define CONSOLE_COLOR_GREEN     system("color a")
using namespace std;


void greeting() {
	system("mode con: cols=84 lines=40");
	cout << endl << endl << endl
		<< "      ^JB##BY^   ^P5J     ~P5?  !P5PPPPPPP! !P5PPPPJ!.   :P5PPPPPPPJ   ^YG##B5!  " << endl
		<< "    J@@&5?5@@@5  &@@Y     @@@? .@@@BPGGGGG:.@@@BPP&@@@7  &@@&PGGGGG! J@@&PJY@@@& " << endl
		<< "   &@@Y    J&&G J@@&     5@@&  G@@#        G@@B   !@@@^ ?@@@.       ?@@@:   .JJ? " << endl
		<< "  P@@#         .@@@&PGGPP@@@~ :@@@@&&&@#  :@@@&##&@@G.  @@@@&&&&&:  :#@@@&P7.    " << endl
		<< " :@@@^         5@@&5PPPP@@@B  B@@B^~~~~:  B@@B7??G@@@. J@@&^~~~~^     .~J#@@@#.  " << endl
		<< " 7@@@.   7@@# .@@@^    :@@@: ~@@@.       !@@@.   7@@@..@@@~       !&&B    !@@@.  " << endl
		<< " 7@@@.   7@@# .@@@^    :@@@: ~@@@.       !@@@.   7@@@..@@@~       !&&B    !@@@.  " << endl
		<< " .&@@@GG&@@G. B@@#     &@@G  &@@@#&&&&&: &@@@#&#&@@B. G@@@&#&&&&7 ^@@@&GG#@@#^   " << endl
		<< "   ^?5P5?^    777.     777  .7777?????7 .7777???~:    !777??????.   ^?5PPJ~.     " << endl << endl << endl << endl << endl << endl
		<< "                    .?P#&&GJ.      ^GPG?     !GG?         :?G#&#G?.              " << endl
		<< "                  ^B@@B??G@@@^    ?@@@@&    .@@@!       ~#@@G??B@@@.             " << endl
		<< "                 !@@@:    B##~   P@@#@@&    G@@#       J@@&.   .B##:             " << endl
		<< "                .@@@7          .#@@^.@@@.  :@@@^      :@@@^                      " << endl
		<< "                P@@&          ^&@@?.:@@@.  B@@G       B@@G                       " << endl
		<< "                &@@B   .B@@J !@@@@@@@@@@~ ~@@@.       @@@5   .&@@7               " << endl
		<< "                !@@@&B#@@&7 P@@B.   .@@@J &@@@&&&&&G  J@@@#B#@@#~                " << endl
		<< "                  ~?Y5J~.  .7!~      ~!!. !!!!!!!!7:   .~JY5?~.                  " << endl;
	TIMEOUT;
}
void exit() {
	CLEAR_SCREEN;
	cout << "Goodbye. See you next time!" << endl;
	PAUSE;
}
void polycalc() {
	double r, nSide, s, a, perimeter, area, radian;
	short option;
	system("title POLYCALC");
	cout << endl
		<< "                 POLYCALC                 " << endl
		<< "------------------------------------------" << endl;


	cout << "Radius:";
	cin >> r;
	cout << "Number of Sides: ";
	cin >> nSide;

	radian = PI / nSide;
	s = 2 * r * sin(radian);
	a = r * cos(radian);
	perimeter = s * nSide;
	area = 0.5 * a * perimeter;

	CLEAR_SCREEN;

	cout << endl
		<< "                 RESULTS                  " << endl
		<< "Radius: " << r << " , " << "Number of Sides: " << nSide << endl << endl
		<< "------------------------------------------" << endl;
	cout << "Side Measure: " << s << endl
		<< "Apothem Measure: " << a << endl
		<< "Perimeter Measure: " << perimeter << endl
		<< "Area Measure: " << area << endl
		<< "------------------------------------------" << endl;
	cout << "Do you want to do it again?" << endl << "(1 for Yes , 0 for No) ";
	cin >> option;

	if (option == 1)
	{
		CLEAR_SCREEN;
		polycalc();
	}

	else
	{
		exit();
	}
}
void temp() {
	short option;

	system("title TEMPREATURE CONVERTER");
	cout << endl
		<< "           TEMPREATURE CONVERTER          " << endl
		<< "------------------------------------------" << endl
		<< "        [1] Celsius to Fahrenheit         " << endl
		<< "        [2] Fahrenheit to Celsius         " << endl
		<< endl << "Choose a menu option or write 0 to exit." << endl;


	cin >> option;
	if (option == 1)
	{
		auto cel_to_fah = []() {
			short option;
			CLEAR_SCREEN;
			cout << endl
				<< "------------------------------------------" << endl;
			cout << "Enter Celsius: ";
			double celsius;
			cin >> celsius;
			double fahrenhiet = (1.8) * celsius + 32;
			cout << "Fahrenhiet: " << fahrenhiet << endl << endl;

			cout << endl;
			cout << "Do you want to do it again?" << endl << "(1 for Yes , 0 for No) ";
			cin >> option;

			if (option == 1)
			{
				CLEAR_SCREEN;
				temp();
			}

			else
			{
				exit();
			}

			//temp();
		};
		cel_to_fah();
	}

	else if (option == 2)
	{
		auto fah_to_cel = []() {
			short option;
			CLEAR_SCREEN;
			cout << endl
				<< "------------------------------------------" << endl;
			cout << "Enter Fahrenhiet: ";
			double fahrenhiet;
			cin >> fahrenhiet;
			double celsius = (fahrenhiet - 32) * 5 / 9;
			cout << "celsius: " << celsius << endl << endl;


			cout << endl;
			cout << "Do you want to do it again?" << endl << "(1 for Yes , 0 for No) ";
			cin >> option;

			if (option == 1)
			{
				CLEAR_SCREEN;
				temp();
			}

			else
			{
				exit();
			}
		};
		fah_to_cel();
	}

	else if (option == 0)
	{
		exit();
	}

	else
	{
		CLEAR_SCREEN;
		CONSOLE_COLOR_RED;
		cout << "Please enter a valid option." << endl;
		PAUSE;
		temp();
	}
}
void circle() {
	double radius, angle;
	system("title CIRCLE CALC");
	cout << endl
		<< "             CIRCLE CALCULATOR            " << endl
		<< "------------------------------------------" << endl
		<< "Radius: ";
	cin >> radius;
	cout << "Angle of the Sector/Segment(In degrees): " << endl;
	cin >> angle;

	long double radians, arc_length, sector_area, sector_perimeter, segment_area, segment_perimeter;


	if (angle > 360)
	{
		CLEAR_SCREEN;
		CONSOLE_COLOR_RED;
		cout << "ERROR! Max value of angle is 360." << endl;
		PAUSE;
		CLEAR_SCREEN;
		CONSOLE_BACKGROUND_COLOR;
		circle();
	}
	radians = angle * PI / 180;
	arc_length = PI * radius * (radians / PI);
	sector_area = PI * radius * radius * (radians / ( PI * 2) );
	sector_perimeter = arc_length + 2 * radius;

	segment_area = sector_area - (0.5 * pow(radius, 2) * sin(radians));
	segment_perimeter = arc_length + (2 * radius * sin(radians * 0.5));
	CLEAR_SCREEN;
	cout << endl
		<< "                 RESULTS                  " << endl
		<< "Radius: " << radius << " , " << "Angle of Sector/Segment: " << angle << endl << endl
		<< "------------------------------------------" << endl;
	cout << "Arc Length: " << arc_length << endl
		<< "Sector Area: " << sector_area << endl
		<< "Sector Perimeter: " << sector_perimeter << endl
		<< "Segment Area: " << segment_area << endl
		<< "Segment Perimeter: " << segment_perimeter << endl
		<< "------------------------------------------" << endl;
	short option;

	cout << "Do you want to do it again?" << endl << "(1 for Yes , any other for No) ";
	cin >> option;

	if (option == 1)
	{
		CLEAR_SCREEN;
		circle();
	}

	else
	{
		exit();
	}
}




void main()
{
	CONSOLE_BACKGROUND_COLOR;
	greeting();
	TIMEOUT;
	CLEAR_SCREEN;
	system("mode con: cols=42 lines=38");
	TITLE;


	short option;

	cout << endl
		<< "         WELCOME TO CHEBESCALC!!!         " << endl
		<< "------------------------------------------"
		<< "       [1] Tempreature converter " << endl
		<< "       [2] PolyCalc  " << endl
		<< "       [3] Circle Calculator" << endl
		<< "       [0] Exit" << endl
		<< endl << "Choose a menu option." << endl;

	cin >> option;


	if (option == 1)
	{
		CLEAR_SCREEN;
		temp();
	}

	else if (option == 2)
	{
		CLEAR_SCREEN;
		polycalc();
	}

	else if (option == 3)
	{
		CLEAR_SCREEN;
		circle();
	}

	else if (option == 69)
	{
		CLEAR_SCREEN;

		auto easter_egg = []() {
			CLEAR_SCREEN;
			system("title ");

			for (int i = 0; i < 1001; i++) {
				if (i % 2 == 0) {
					CONSOLE_COLOR_GREEN;
					cout << "CHEBES TOGETHER, FOREVER!" << "  ";
				}

				else if (i % 2 >= 1) {
					CONSOLE_COLOR_RED;
					cout << "CHEBES TOGETHER, FOREVER!" << "  ";

				}
			}

			cout << endl << "------------------------------------------" << endl;
			system(" TITLE CHEBES TOGETHER, FOREVER!");
			PAUSE;
			main();


		};

		easter_egg();
	}

	else if (option == 0)
	{
		exit();
	}

	else
	{
		CLEAR_SCREEN;
		CONSOLE_COLOR_RED;
		cout << "Please enter a valid option." << endl;
		PAUSE;
		main();
	}
}

