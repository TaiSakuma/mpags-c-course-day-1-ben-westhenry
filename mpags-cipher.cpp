#include <iostream>
#include <string>
#include <vector>
int main(int argc, char* argv[])

{
	//This is a comment
	/* This is a
	multiline comment */

  //1st set of exercises

	std::cout << "Hello World!\n";
	int a{1};
	double b{3.4};
      	int c{static_cast<int>(b)};

	std::cout << "a =" << a << std::endl;
      	std::cout << b << std::endl;
       	std::cout << c << std::endl; 

	const double d{3.6};
	const int f{2};
	//	f = 3;


	std::string msg {"Ben"};
	std::cout <<msg[2] << "\n";
	std::cout << "d =" << d << std::endl;
       
	const double times{a*b};

	std::cout << "times =" << times << std::endl;
	std::cout << "mult" << a*b << std::endl;
	std::cout << "div =" << d/f << std::endl;

	std::cout << "div int =" << f/a << std::endl;

	std::string msg2{"new_string"};
	
	const char ch{msg2[3]};

	std::cout << "ch=" << ch << std::endl;


	//3rd set of exercises 
	const std::vector<std::string> cmdLineArgs{ argv, argv + argc};

	std::string input_f{""};
	std::string output_f{""};

	for (int i{0} ; i < argc ; i++)
	  {

	   
	    std::cout << "Index " << i << ": "<<  cmdLineArgs[i] << std::endl;

	    if(cmdLineArgs[i] == "-h")
	      {
		std::cout << "-h help option present" << std::endl;
	      }

	    if(cmdLineArgs[i] == "--help")
	      {
		std::cout << "--help help option present" << std::endl;
	      }

	    if(cmdLineArgs[i] == "--version")
              {
		std::cout << "version number 1.0" << std::endl;
              }

	    if(cmdLineArgs[i] == "-i")
              {
		input_f= cmdLineArgs[i+1];

		std::cout << "input file is " << input_f << std::endl;
              }
	    if(cmdLineArgs[i] == "-o")
              {
                output_f= cmdLineArgs[i+1];

		std::cout << "output file is " << output_f << std::endl;
              }

	  }

	//2nd set of exercises

	char in_char{'x'};
	char char_test{'x'};
	std::string value{""};

	std::cout << "Enter your word and then press enter and control d when finished" <<  std::endl;
	while(std::cin >> in_char)
	  {
	    char_test=in_char;
	    in_char = toupper(in_char);
	    // std::string value{in_char));                                                                                  


	    switch(in_char)
	      {
	      case '1':
		value += 'O';
		value += 'N';
		value += 'E';

		break;

	      case '2':
		value += 'T';
		value += 'W';
		value += 'O';

		break;

	      case '3':
		value += 'T';
		value += 'H';
		value += 'R';
		value += 'E';
		value += 'E';

		break;


	      case '4':
		value += 'F';
		value += 'O';
		value += 'U';
		value += 'R';

		break;

	      case '5':
		value += 'F';
		value += 'I';
		value += 'V';
		value += 'E';

		break;

	      case '6':
		value += 'S';
		value += 'I';
		value += 'X';

		break ;

	      case '7':
		value += "SEVEN";

		break;

	      case '8':
		value += "EIGHT";
		break ;

	      case '9':
		value += "NINE";

		break;

	      case '0':
		value += "ZERO";
		break;

	      default:
		if(char_test!= in_char)
		  {
		    value += in_char;
		  }
		else
		  {break;}
		break;
	      }

	  }

	std::cout << "string is " << value << std::endl;
      

}
