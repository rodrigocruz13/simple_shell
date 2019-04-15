![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)
# SIMPLE SHELL -  (15/04/2019) - 
:rocket: Star us on GitHub — *it helps*! :rocket:

![ssssshean connery](https://i.imgur.com/uLoz3WY.jpg)


**hsh - simple shell** is a simple UNIX command interpreter.  You can install it in your Linux distribution and you can use it intermediately according to your needs.

### Screenshots

![alt text](image)

### Current features
* Other stuff I can't think of right now...

### Other features!
  - a


## Shell repository


### Files

This is the list of the files required to compile and create the shell.

| Type | File   | Description |
| ------  |  -----------  | ----------- |
|Documentation| README.md |Readme file|
|Documentation|man_shell|Man page|
| Header file| holberton.h | Main file header. Contains the list of functions and the connection with some other headers|
|c file|catch_sig.c|Deals with the interruption signals|
|c file|check_builtins.c||
|c file|create_fork.c||
|c file|create_loop.c||
|c file|execute_cmd.c||
|c file|get_input2.c||
|c file|get_input.c||
|c file|get_parsed_input.c||
|c file|get_path.c||
|c file|get_tokens.c||
|c file|main.c||
|c file|process_tokens.c||
|c file|put_prompt.c| Prints the "$" as prompt|
|executable file|hsh||

If you want to install **hsh shell**, the source [files are here]([https://github.com/ryanhudson/draft_shell/tree/master](https://github.com/ryanhudson/draft_shell/tree/master)). You can download them, compile then and install it with no further permission.
#####  Caution: Install the shell under your own risk !




## Compiling process
The files will be compiled using GNU Compiler (gcc):
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```



## Usage

`Run the executable file for starting the shell: ./hsh`
- Type any command that you would use inside the regular shell and hit enter.
- The output of the command is shown, or an error message is displayed if the command was not found.

### Example Usage
```
- $				The prompt is displayed after typing: ./hsh`
- $ /bin/ls		Executes the command ls`
- $ pwd			Shows the current directory`
- $ exit 		Exits the program`
```




## License

This program is licensed under the terms of the GPL Open Source license and is available for free. 
This document is for the first shell release (1.0)




## Links & Tech
Operating systems (OS)
* [Linux](https://www.linux.org)
* [Ubuntu 14.04](http://releases.ubuntu.com/14.04/)

Editors 
* [vi basic commands](https://www.ccsf.edu/Pub/Fac/vi.html)
* [vi unix editor](https://sourceforge.net/projects/ex-vi/)
* [Emacs](https://www.gnu.org/software/emacs/)

Code
* [Source code](https://github.com/aimeos/aimeos-typo3)

Compilator
* [gcc](https://www.gnu.org/software/gcc/)

## About


- A Full Stack Engineer is an engineer who is able to understand and work on any level of a software application: starting from the hardware, system and network, to the security and scalability. Our students will be familiar with software architecture, data modeling, coding, testing, shipping, user experience, design, project management, marketing, … While one can’t be an expert in all of the layers, students will have the foundation required to be able to navigate any of those.
It also means that our students will be able to interact with low and high level technologies: for code, it will mean from assembly to the latest programming framework.
for system infrastructure, it will mean creating your infrastructure from scratch, to using a ready-to-go Cloud solution. 

Kris Bredemeier - Holberton School (SF)

## Authors

 Photo  | Name | Email
 -----  | ---- | -----
![Ryan](https://i.imgur.com/LeZPQqe.jpg)| Ryan Hudson | 654@holbertonschool.com
![Rodrigo](https://i.imgur.com/36L7XQD.jpg)| Rodrigo Cruz | 754@holbertonschool.com
#
> SPECIAL THANKS
> To all our peers, mentors, and staff from Holberton School in San Francisco, New Heaven and Bogota. 
>Every day is a journey for new discoveries, a route that you walk alone but do not feel that way, because without your time, help and dedication to try to explain those issues that we do not understand, none of this would have been possible.

![logo](https://i.imgur.com/LXW9lwr.png)
