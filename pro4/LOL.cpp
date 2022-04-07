// #include <cassert>
// #include <cstdlib>
// #include <iostream>

// class Cpu {
//   public:
//     virtual int dummy( int, int ) {}
//   private:
//     virtual int add_( int a, int b ) { return a + b; }  /* A */
//     virtual int sub_( int a, int b ) { return a - b; }  /* B */
//     virtual int mul_( int a, int b ) { return a * b; }  /* C */
//     virtual int div_( int a, int b ) { return a / b; }  /* D */
//     virtual int mod_( int a, int b ) { return a % b; }  /* E */
//     virtual int and_( int a, int b ) { return a & b; }  /* F */
//     virtual int or_( int a, int b )  { return a | b; }  /* G */
//     virtual int xor_( int a, int b ) { return a ^ b; }  /* H */
// };

// int main( int argc, char* argv[] ) {
//     typedef int (Cpu::*Memfun)( int, int );

//     union {
//         Memfun fn;
//         unsigned char ptr[6];
//     } u;

//     Cpu    cpu;

//     u.fn = &Cpu::dummy;

//     assert( argc == 4 );

//     int p1 = atoi( argv[ 1 ] );
//     int p2 = atoi( argv[ 3 ] );
//     char op = argv[2][0];

//     assert( op >= 'A' && op <= 'H' );

//     u.ptr[0] = 1 + 4 * ( op - 'A' + 1 );  // Don't look here!

//     std::cout << "The answer is " << ( (cpu.*(u.fn))( p1, p2 ) ) << std::endl;
// }



#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    fstream Myfile;


    // Taking the input string from the user

    string story;
    cout << "Enter a story: \n";
    getline(cin, story);

    // Converting the string to character array

    char story_char[story.length()];
    for (int i = 0; i < story.length(); i++)
    {
        story_char[i] = story[i];
    }

    // Ciphering the story and writing it into the file.....

    Myfile.open("story.txt", ios::out);
    if (Myfile.is_open())
    {
        for (int i = 0; i < story.length(); i++)
        {
            Myfile << int(story_char[i]);
        }
    }
    Myfile.close();

    // De-ciphering the numbers into story.....
    cout << "The deciphered numbers form the story:\n ";
    Myfile.open("story.txt", ios::in);
    if (Myfile.is_open())
    {
        string line;
        while(getline(Myfile, line)){
            int num = 0;
            for(int i = 0; i < line.length(); i++){
                num = num * 10 + (line[i] - '0');
                if(num>=32 && num<=122){
                    char ch = (char)num;
                    cout << ch;
                    num = 0;
                }
            }
        }
    }
    Myfile.close();

    return 0;
}