# CS219Project3
# Project 3 For Cs219 Computer Organization
> In the previous programming assignments, the code processed commands from a text file and displayed the results of each command. 
> The purpose of this project is to leverage the ALU functions from project 2 to process commands in assembly language format.
> The input for this simulator will come from a text file where each line of input will contain one assembly language instruction in the format of ARM version 7 ISA
> The instructions will perform their operations on eight 32-bit registers (r0 - r7) 
> This program first asks the user to input a name of the text file. If the program is able to identify and open the given file, it will read the file and identify the different commands according to the code.
> The program then prints out the results calculated into the console
> If the program is unsuccessful in opening the file, the program prints an error message and exits.

[![WSL Version][wsl-image]][https://docs.microsoft.com/en-us/windows/wsl/install]

This software is designed as is for an in class project.

## Installation
> Install Linux or the windows subsystem

## Usage example
> Navigate to build folder
> In the console, compile the program by running "make"
> Then, run the executable by typing "./a.out"
> Input the file name "inputFile.txt"
```
## Development setup
```
sudo apt-add-repository ppa:ubuntu-desktop/ubuntu-make
sudo apt-get update
sudo apt-get install ubuntu-make
```
## Release History
* 3.0
* CHANGE: Made edits, added comments, and cleaned up. Final version
* 2.0
* CHANGE: New code with new method
* 1.0
* CHANGE: Initial code

## Meta
Jessica Nam - jessicanam@nevada.unr.edu
Distributed under the MIT license. See ``LICENSE`` for more information.
[Github](github goes here)
## Contributing
1. Fork it (<github fork>)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git commit -am 'Add some fooBar'`)
4. Push to the branch (`git push origin feature/fooBar`)
5. Create a new Pull Request
<!-- Markdown link & img dfn's -->
[wsl-image]: https://www.techrepublic.com/a/hub/i/2016/01/27/e0e94fb7-
d058-4d62-8027-c497e7c0e069/ubuntuhero.jpg
