using std::cout, std::endl;
#include <iostream>
#include "range.hpp"
#include "chain.hpp"
#include "zip.hpp"
#include "product.hpp"
#include "powerset.hpp"

using namespace itertools;

int main() {

	badkan::TestCase testcase;
	int grade=0;
        int wrong=0;
        int right=0;
	int signal = setjmp(badkan::longjmp_buffer);
if (signal == 0) {

   cout<<"1"<<endl;
      
		
    grade = testcase.grade();
    wrong= testcase.wrong();
    right= testcase.right();

} 

else {
		cout<<"0"<<endl;
		grade = 0;
	}
	cout <<"Your grade is: "  << grade<<" "<<"Wrong: "<< wrong<< " "<<"Right: "<<right<< " "<< endl;
	return 0;

}
