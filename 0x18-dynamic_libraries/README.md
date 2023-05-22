# 0. A library is not a luxury but one of the necessities of life
mandatory

Create the dynamic library libdynamic.so containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your main.h file in your repository, containing at least all the prototypes of the above functions.
-------------------------
# 1. Without libraries what have we? We have no past and no future
mandatory

Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
--------------------------
# 2. Let's call C functions from Python
#advanced

I know, you’re missing C when coding in Python. So let’s fix that! // NOO i wasnt

Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
----------------------------
# 3. Code injection: Win the Giga Millions!
#advanced

I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

    Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:

/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus

    You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
    The system is an Linux Ubuntu 16.04
    The server has internet access
    Our mole will be only able to run two commands from a shell script, without being detected by MSS
    Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
    Our mole has only the authorization to upload one file on the server. It will be your shell script
    Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
    Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
    MSS will use the same terminal and session than our mole
    Before running the gm program, MSS always check the content of the directory
    MSS always exit after running the program gm
    TL;DR; This is what is going to happen

mss@gm_server$ . ./101-make_me_win.sh
mss@gm_server$ rm 101-make_me_win.sh
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ history -c
mss@gm_server$ clear
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ md5sum gm
d52e6c18e0723f5b025a75dea19ef365  gm
mss@gm_server$ ./gm 9 8 10 24 75 9
--> Please make me win!
mss@gm_server$ exit

Tip: LD_PRELOAD
