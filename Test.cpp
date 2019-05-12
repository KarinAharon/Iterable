#include <iostream>
using namespace std;
#include "range.hpp"
#include "chain.hpp"
#include "zip.hpp"
#include "product.hpp"
#include "powerset.hpp"
#define COMMA ,

using namespace bullpgia;

int main() {

	badkan::TestCase testcase;
	int grade=0;
        int wrong=0;
        int right=0;
	int signal = setjmp(badkan::longjmp_buffer);
if (signal == 0) {

      
		
    grade = testcase.grade();
    wrong= testcase.wrong();
    right= testcase.right();

} 

else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout <<"Your grade is: "  << grade<<" "<<"Wrong: "<< wrong<< " "<<"Right: "<<right<< " "<< endl;
	return 0;

}

