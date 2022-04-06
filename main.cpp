/**
    CS 219 Section 1001 Programming Project 3
    @file driver.cpp
    @author Jessica Nam
    @version 2.0 4/5/2022
*/
#include <iostream>
#include <sstream> //string stream
#include <fstream> //input file stream
#include <cstdint> //for the unsigned type uint32_t

using namespace std;

int main(){

        ifstream file;
        string temp1, temp2;
	int count = 10;

        cout<< "Please enter the text file: ";
	string textfile;
        cin>> textfile; // user inputs name of text file they would like to test
        cout<< endl;

        file.open(textfile); // opens the file

        if(file){

			uint32_t r0 = 00;
			uint32_t r1 = 00;
			uint32_t r2 = 00;
			uint32_t r3 = 00;
			uint32_t r4 = 00;
			uint32_t r5 = 00;
			uint32_t r6 = 00;
			uint32_t r7 = 00;

			cout << "Register values before instructions" << endl;
			cout << "r0 = 0x" << r0 << endl; 
			cout << "r1 = 0x" << r1 << endl; 
			cout << "r2 = 0x" << r2 << endl; 
			cout << "r3 = 0x" << r3 << endl; 
			cout << "r4 = 0x" << r4 << endl; 
			cout << "r5 = 0x" << r5 << endl; 
			cout << "r6 = 0x" << r6 << endl; 
			cout << "r7 = 0x" << r7 << endl << endl << endl;

/* Instruction formats: 
   MOV Rd, #IMM
   OPCODE Rd, Rn, Rm (ADD, SUB, AND, ORR, or XOR)
   OPCODE Rd, Rn (ASR, LSR, or LSL)
*/

// create class for instance variables????
// then create functions for each operation and pass variables through functions

		  while(count != 0){
                        stringstream ss1, ss2;

			string num;

			
			string command;
			// file format
                        file >> command >> temp1 >> temp2 >> num;
           

			/*cout << "test: " << command << endl;
			cout << "temp1: " << temp1 << endl;
			cout << "temp2: " << temp2 << endl;
			cout << "num: " << num << endl;*/


			if(command == "MOV"){
				r0 = 0xFFFFFFFF;
				cout << "Operation: " << command << endl;
				cout << "The " << command << " instruction moves the immediate operand #0xFFFFFFFF into the register r0." << endl;
				cout << "The register r0 now has the value 0x" << hex << r0 << endl << endl;

				r2 = 0xB2;
				cout << "Operation: " << command << endl;
				cout << "The " << command << " instruction moves the immediate operand #0xB2 into the register r2." << endl;
				cout << "The register r2 now has the value 0x" << hex << r2 << endl << endl;

			}

			else if(temp2 == "ADD"){ // Read ADD function from file
                                r1 = r0 + r2;
				cout << "Operation: " << temp2 << endl;
				cout << "The " << temp2 << " instruction takes the sum of the operand 0x" << r0 << " and the operand 0x" << r2 << " and stores the result in the destination register r1." << endl;
                                cout << "The sum of 0x" << r0 << " + 0x" << r2 << " = 0x" << hex << r1 << endl;
				cout << "The register r1 now has the value 0x" << hex << r1 << endl << endl;
                        }

			else if(temp2 == "SUB"){
				r3 = r2 - r1;
				cout << "Operation: " << temp2 << endl;
				cout << "The " << temp2 << " instruction takes the difference between the operand 0x" << r2 << " and the operand 0x" << r1 << " and stores the result in the destination register r3." << endl;
                                cout << "The difference between 0x" << r2 << " - 0x" << r1 << " = 0x" << hex << r3 << endl;
				cout << "The register r3 now has the value 0x" << hex << r3 << endl << endl;
			}

			else if(temp2 == "AND"){
				r4 = r3 & r2;
				cout << "Operation: " << temp2 << endl;
				cout << "The " << temp2 << " instruction takes the AND value between the operand 0x" << r3 << " and the operand 0x" << r2 << " and stores the result in the destination register r4." << endl;
                                cout << "The AND value of 0x" << r3 << " and " << r2 << " = 0x" << hex << r4 << endl;
				cout << "The register r4 now has the value 0x" << hex << r4 << endl << endl;
			}

			else if(temp2 == "ORR"){
				r5 = r4 | r3;
				cout << "Operation: " << temp2 << endl;
				cout << "The " << temp2 << " instruction takes the OR value between the operand 0x" << r4 << " and the operand 0x" << r3 << " and stores the result in the destination register r5." << endl;
                                cout << "The OR value of 0x" << r4 << " and " << r3 << " = 0x" << hex << r5 << endl;
				cout << "The register r5 now has the value 0x" << hex << r5 << endl << endl;
			}

			else if(temp2 == "XOR"){
				r6 = r4 ^ r2;
				cout << "Operation: " << temp2 << endl;
				cout << "The " << temp2 << " instruction takes the XOR value between the operand 0x" << r4 << " and the operand 0x" << r2 << " and stores the result in the destination register r6." << endl;
                                cout << "The XOR value of 0x" << r4 << " and " << r2 << " = 0x" << hex << r6 << endl;
				cout << "The register r6 now has the value 0x" << hex << r6 << endl << endl;
						
			}

			else if(temp2 == "ASR"){
				r6 = r2 >> 1;
				cout << "Operation: " << temp2 << endl;
				cout << "The " << temp2 << " instruction performs a 1-bit arithmetic shift to the right on the operand 0x" << r2 << " and stores the result in the destination register r6." << endl;
                                cout << "The 1-bit arithmetic shift to the right on the operand 0x" << r2 << " = 0x" << hex << r6 << endl;
				cout << "The register r2 now has the value 0x" << hex << r2 << endl << endl;
			} 

			else if(temp1 == "LSR"){
				r7 = r3 >> 1;
				cout << "Operation: " << temp1 << endl;
				cout << "The " << temp1 << " instruction performs a 1-bit logical shift to the right on the operand 0x" << r3 << " and stores the result in the destination register r7." << endl;
                                cout << "The 1-bit logical shift to the right on the operand 0x" << r3 << " = 0x" << hex << r7 << endl;
				cout << "The register r7 now has the value 0x" << hex << r7 << endl << endl;
						
			}

			else if(temp1 == "LSL"){
				r0 = r4 << 1;
				cout << "Operation: " << temp1 << endl;
				cout << "The " << temp1 << " instruction performs a 1-bit logical shift to the left on the operand 0x" << r4 << " and stores the result in the destination register r0." << endl;
                                cout << "The 1-bit logical shift to the left on the operand 0x" << r4 << " = 0x" << hex << r0 << endl;
				cout << "The register r0 now has the value 0x" << hex << r0 << endl << endl;
						
			}

			count--;
				
                }

                file.close();   
        }
        else{
		// if filename is incorrect or nonexistent 
                cout<< "\nFile does not exist!!!" << endl; 
        }

        return 0;

}
