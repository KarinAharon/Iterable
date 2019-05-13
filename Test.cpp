#include <iostream>
#include "range.hpp"
#include "chain.hpp"
#include "zip.hpp"
#include "product.hpp"
#include "powerset.hpp"
#include "badkan.hpp"

using namespace itertools;
using namespace std;

int main() {

	badkan::TestCase testcase;
	int grade=0;
        int wrong=0;
        int right=0;
	    int signal = setjmp(badkan::longjmp_buffer);
    if (signal == 0) {

    /**test here**/
        testcase.setname("first attempt");

	//* ------------------range ---------------------*//
        
        int temp1 = 5;
        for (int i: range(5,9)){
	testcase.CHECK_EQUAL(i, temp1);
        temp1++;
        }
         
	int temp2 = -6;
        for (int i: range(-6,1)){
	testcase.CHECK_EQUAL(i, temp2);
        temp2++;
        }
	int temp3 = 4;
        for (int i: range(4,12)){
	testcase.CHECK_EQUAL(i, temp3);
        temp3++;
        }
         
	int temp4 = -2;
        for (int i: range(-2,8)){
	testcase.CHECK_EQUAL(i, temp4);
        temp4++;
        }
	int temp5 = 8;
        for (int i: range(8,16)){
	testcase.CHECK_EQUAL(i, temp5);
        temp5++;
        }
         
	int temp6 = -3;
        for (int i: range(-3,-1)){
	testcase.CHECK_EQUAL(i, temp6);
        temp6++;
        }
	char temp7 = 'a';
        for (char i: range('a','f')){
	testcase.CHECK_EQUAL(i, temp7);
        temp7++;
        }
	char temp8 = 'j' ;
        for (char i: range('j','q')){
	testcase.CHECK_EQUAL(i, temp8);
        temp8++;
        }
	char temp9 = 'c';
        for (char i: range('c','g')){
	testcase.CHECK_EQUAL(i, temp9);
        temp9++;
        }
	char temp10 = 'b' ;
        for (char i: range('b','e')){
	testcase.CHECK_EQUAL(i, temp10);
        temp10++;
        }
	char temp11 = 'l';
        for (char i: range('l','m')){
	testcase.CHECK_EQUAL(i, temp11);
        temp11++;
        }
	char temp12 = 'n' ;
        for (char i: range('n','s')){
	testcase.CHECK_EQUAL(i, temp12);
        temp12++;
        }
	char temp13 = 'r';
        for (char i: range('r','z')){
	testcase.CHECK_EQUAL(i, temp13);
        temp13++;
        }
	char temp14 = 'u' ;
        for (char i: range('u','v')){
	testcase.CHECK_EQUAL(i, temp14);
        temp14++;
        }
        double temp15 = 0.5;
        for (double i: range(0.5,6.5)){
	testcase.CHECK_EQUAL(i, temp15);
        temp15++;
        }
	double temp16 = 2.3;
        for (double i: range(2.3,10.3)){
	testcase.CHECK_EQUAL(i, temp16);
        temp16++;
        }
 	double temp17 = 3.41;
        for (double i: range(3.41,7.41)){
	testcase.CHECK_EQUAL(i, temp17);
        temp17++;
        }
 	double temp18 = 4.5;
        for (double i: range(4.5,18.5)){
	testcase.CHECK_EQUAL(i, temp18);
        temp18++;
        }
	double temp19 = 6.6;
        for (double i: range(6.6,10.6)){
	testcase.CHECK_EQUAL(i, temp19);
        temp19++;
        }

	//* ------------------chain ---------------------*//

	int index1 = 0;
	int temp_1[] = {4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	for(int i: chain(range(4,9), range(9, 20))){
		testcase.CHECK_EQUAL(i, temp_1[index1]);
                index1++;
	}
        int index2 = 0;
	int temp_2[] = {1,2,3,4,5,6,7,8,9,10};
	for(int i: chain(range(1,3), range(3, 11))){
		testcase.CHECK_EQUAL(i, temp_2[index2]);
                index2++;
	}
	int index3 = 0;
	int temp_3[] = {-4,-3,-2,-1,0,1,2,3,4,5,6};
	for(int i: chain(range(-4,0), range(0, 7))){
		testcase.CHECK_EQUAL(i, temp_3[index3]);
                index3++;
	}
	int index4 = 0;
	double temp_4[] = {1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1};
	for(double i: chain(range(1.1,3.1), range(3.1, 9.1))){
		testcase.CHECK_EQUAL(i, temp_4[index4]);
                index4++;
	}
	int index5 = 0;
	double temp_5[] = {5.3,6.3,7.3,8.3,9.3,10.3,11.3,12.3};
	for(double i: chain(range(5.3,8.3), range(8.3, 13.3))){
		testcase.CHECK_EQUAL(i, temp_5[index5]);
                index5++;
	}
	int index6 = 0;
	double temp_6[] = {8.22,9.22,10.22,11.22,12.22,13.22,14.22,15.22};
	for(double i: chain(range(8.22,11.22), range(11.22, 16.22))){
		testcase.CHECK_EQUAL(i, temp_6[index6]);
                index6++;
	}

	int index7 = 0;
	double temp_7[] = {7.91,8.91,9.91,10.91,11.91,12.91};
	for(double i: chain(range(7.91,9.91), range(9.91, 13.91))){
		testcase.CHECK_EQUAL(i, temp_7[index7]);
                index7++;
	}

	int index8 = 0;
        int index9 = 4;
        int index10 = 0;
	int temp_8[] = {4,5,6,7,8};
        char temp_9[] = {'a','b','c','d'};
	for(auto i: chain(range(4,9), range('a','e'))){
             if(index9<=8){
		testcase.CHECK_EQUAL(i, temp_8[index8]);
                index8++;
                index9++;
	}
             else{
               testcase.CHECK_EQUAL(i, temp_9[index10]);
                index10++;
                
	}}
	

	int index11 = 0;
        int index12 = -3;
        int index13 = 0;
	int temp_10[] = {-3,-2,-1,0,1};
        char temp_11[] = {'h','i','j','k','l'};
	for(auto i: chain(range(-3,2), range('h','m'))){
             if(index12<=1){
		testcase.CHECK_EQUAL(i, temp_10[index11]);
                index11++;
                index12++;
	}
             else{
               testcase.CHECK_EQUAL(i, temp_11[index13]);
                index13++;
                
	}}

	int index14 = 0;
        int index15 = 6;
        int index16 = 0;
	char temp_12[] = {6,7,8,9,10};
        char temp_13[]= {'t','u','v','w','x'};
	for(auto i: chain(range(6,11), range('t','y'))){
             if(index15<=10){
		testcase.CHECK_EQUAL(i, temp_12[index14]);
                index14++;
                index15++;
	}
             else{
               testcase.CHECK_EQUAL(i, temp_13[index16]);

                index16++;
                
	}}

	int index17 = 0;
        int index18 = -9;
        int index19 = 0;
	int temp_14[] = {-9,-8,-7,-6,-5,-4};
        char temp_15[] = {'a','b','c','d'};
	for(auto i: chain(range(-9,-3), range('a','e'))){
             if(index18<=(-4)){
		testcase.CHECK_EQUAL(i, temp_14[index17]);
                index17++;
                index18++;
	}
             else{
               testcase.CHECK_EQUAL(i, temp_15[index19]);
                index19++;
                
	}}
	int index20 = 0;
        int index21 = 9;
        int index22 = 0;
	int temp_16[] = {9,10,11,12};
        char temp_17[] = {'r','s','t','u'};
	for(auto i: chain(range(9,13), range('r','v'))){
             if(index21<=(13)){
		testcase.CHECK_EQUAL(i, temp_16[index20]);
                index20++;
                index21++;
	}
             else{
               testcase.CHECK_EQUAL(i, temp_17[index22]);
                index22++;
                
	}}
	
	int index23 = 0;
        double index24 = 1.1;
        int index25 = 0;
	double temp_18[] = {1.1,2.1,3.1,4.1};
        char temp_19[] = {'a','b','c','d','e','f'};
	for(auto i: chain(range(1.1,5.1), range('a','g'))){
             if(index24<=(4.1)){
		testcase.CHECK_EQUAL(i, temp_18[index23]);
                index23++;
                index24++;
              }
             else{
               testcase.CHECK_EQUAL(i, temp_19[index25]);
                index25++;

                
	}}

	int index26 = 0;
        double index27 = 9.3;
        int index28 = 0;
	double temp_20[] = {9.3,10.3,11.3,12.3,13.3};
        char temp_21[] = {'k','l','m','n'};
	for(auto i: chain(range(9.3,12.3), range('k','o'))){
             if(index27<=(9.3)){
		testcase.CHECK_EQUAL(i, temp_20[index26]);
                index26++;
                index27++;
	}
             else{
               testcase.CHECK_EQUAL(i, temp_21[index28]);
                index28++;
                
	}}

	int index29 = 0;
        char index30 = 'c';
        int index31 = 0;
	char temp_22[] = {'c','d','e'};
        string temp_23 = "byebye";
	for(auto i: chain(range('c','f'), string("byebye"))){
             if(index30<=('e')){
		testcase.CHECK_EQUAL(i, temp_22[index29]);
                index29++;
                index30++;
	}
             else{
               testcase.CHECK_EQUAL(i, temp_23[index31]);
                index31++;
                
	}}

	int index32 = 0;
        char index33 = 'h';
        int index34 = 0;
	char temp_50[] = {'h','i','j'};
        string temp_51 = "cpp" ;
	for(auto i: chain(range(9.3,12.3), range('h','k'))){
             if(index33<=('j')){
		testcase.CHECK_EQUAL(i, temp_50[index32]);
                index32++;
                index33++;
	}
             else{
               testcase.CHECK_EQUAL(i, temp_51[index34]);
                index34++;
                
	}}

 	//* ------------------zip ---------------------*//
	
	/*int and int*/
	
	int tempArr1[] = {0,100,1,101,2,102,3,103,4,104,5,105,6,106,7,107,8,108,9,109};
	int tempIndex = 0;
	for(auto i: zip(range(0,10),range(100,110))){
		testcase.CHECK_EQUAL(i,tempArr1[tempIndex]);
		tempIndex++;
	}
	
	/*double and double*/
	double tempArr2[] = {10.3,200.3,11.3,201.3,12.3,202.3,13.3,203.3,14.3,204.3,15.3,205.3,16.3,206.3,17.3,207.3,18.3,208.3,19.3,209.3};
	tempIndex=0;
	for(auto i: zip(range(10.3,20.3),range(200.3,210.3))){
		testcase.CHECK_EQUAL(i,tempArr2[tempIndex]);
		tempIndex++;
	}
	
	/*char and char*/
	char tempArr3[] = {'e','0','f','1','g','2','h','3','i','4','j','5','k','6','l','7','m','8'};
	tempIndex = 0;
	for(auto i: zip(range('e','n'),range('0','9'))){
		testcase.CHECK_EQUAL(i,tempArr3[tempIndex]);
		tempIndex++;
	}

	//string and string
	string tempString =  "hweolrllod";
	tempIndex = 0;
	for(char i: zip(string("hello"),string("world"))){
		testcase.CHECK_EQUAL(i,tempString[tempIndex]);
                if(tempIndex == tempString.length()) break;
		tempIndex++;
	}
	
	/*int and char*/
	
	int tempArr4[] = {3000,3001,3002,3003,3004,3005,3006,3007,3008,3009};
	char tempArr5[] = {'c','d','e','f','g','h','i','j','k'};
	tempIndex=0;
	for(auto i: zip(range(3000,3010),range('c','k'))){
		if (tempIndex%2==0){
			testcase.CHECK_EQUAL(i,tempArr4[tempIndex]);
			tempIndex++;
		}
		else{
			testcase.CHECK_EQUAL(i,tempArr5[tempIndex]);
			tempIndex++;
		}
	}
	
	/*int and string*/
	
	int tempArr6[] = {229,230,231,232,233,234,235,236,237,238};
	string tempString2 = "gkencusotn";
	tempIndex=0;
	for(auto i: zip(range(229,239),string("gkencusotn"))){
		if (tempIndex%2==0){
			testcase.CHECK_EQUAL(i,tempArr6[tempIndex]);
			tempIndex++;
		}
		else{
			testcase.CHECK_EQUAL(i,tempString2[tempIndex]);
			tempIndex++;
		}
	}

	//* ------------------product ---------------------*//
	


	//string and string
	string tempString3 =  "hyhohuiyioiu";
	tempIndex = 0;
	for(auto i: product(string("hi"),string("you"))){
		testcase.CHECK_EQUAL(i,tempString3[tempIndex]);
                if(tempIndex==tempString3.length()) break;
		tempIndex++;
	}

        /*int and int*/
	string tempArr7[] = 			{"0,100","0,101","0,102","0,103","0,104","1,100","1,101","1,102","1,103","1,104","2,100","2,101","2,102","2,103","2,104","3,100","3,101","3,102","3,103","3,104","4,100","4,101","4,102","4,103","4,104"};
	tempIndex = 0;
	for(auto i: product(range(0,5),range(100,105))){
		testcase.CHECK_OUTPUT(i,tempArr7[tempIndex]);
		tempIndex++;
	}
	/*double and double*/
	string tempArr8[] = {"3.5,15.5","3.5,16.5","4.5,15.5","4.5,16.5"};
	tempIndex=0;
	for(auto i: product(range(3.5,5.5),range(15.5,17.5))){
		testcase.CHECK_OUTPUT(i,tempArr8[tempIndex]);
		tempIndex++;
	}

	/*char and char*/
	string tempArr9[] = {"A,E","A,F","B,E","B,F"};
	tempIndex = 0;
	for(auto i: product(range('A','D'),range('E','G'))){
		testcase.CHECK_OUTPUT(i,tempArr9[tempIndex]);
		tempIndex++;
	}

	/*int and char*/
	
	string tempArr10[] = {"404,c","404,d","404,e","405,c","405,d","405,e","406,c","406,d","406,e"};
	int next = 0;
	tempIndex=0;
	for(auto i: product(range(404,407),range('c','f'))){
			testcase.CHECK_OUTPUT(i,tempArr10[tempIndex]);
			tempIndex++;
	}
	/*int and string*/
	
	string tempArr11[] = {"229,g","229,k","229,e","230,g","230,k","230,e","231,g","231,k","231,e"};
	tempIndex=0;
	for(auto i: product(range(229,232),string("gke"))){
			testcase.CHECK_OUTPUT(i,tempArr11[tempIndex]);
			tempIndex++;	
	}
	
		


		//* ------------------powerset ---------------------*//
	/*int*/
	
	string tempArr12[] = {"{}","{1}","{2}","{3}","{1,2}","{1,3}","{2,3}","{1,2,3}"};
	tempIndex = 0;
	for(auto i: powerset(range(1,4))){
		testcase.CHECK_OUTPUT(i,tempArr12[tempIndex]);
		tempIndex++;
	}

	/*double*/
	string tempArr13[] = {"{}","{5.5}","{6.5}","{7.5}","{5.5,6.5}","{5.5,7.5}","{6.5,7.5}","{5.5,6.5,7.5}"};
	tempIndex=0;
	for(auto i: powerset(range(5.5,8.5))){
		testcase.CHECK_OUTPUT(i,tempArr13[tempIndex]);
		tempIndex++;
	}

	/*char*/
	string tempArr14[] = {"{}","{a}","{b}","{a,b}","{c}","{a,c}","{b,c}","{a,b,c}"};
	tempIndex = 0;
	for(auto i: powerset(range('a','d'))){
		testcase.CHECK_OUTPUT(i,tempArr14[tempIndex]);
		tempIndex++;
	}


	
		/**end of test**/

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

          
