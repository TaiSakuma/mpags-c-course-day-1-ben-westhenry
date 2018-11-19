#include <iostream>
#include <string>
#include <vector>
int main(int argc, char* argv[])

{

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
		value += "ONE";
		break;

	      case '2':
		value += "TWO";
		break;

	      case '3':
		value += "THREE";
		break;

	      case '4':
		value += "FOUR";
		break;

	      case '5':
		value += "FIVE";
		break;

	      case '6':
		value += "SIX";
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
