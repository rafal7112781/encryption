#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>
std::string encrypt(std::string msg, std::string key)
{

    std::string tmp(key);               //zeby klucz byl taki sam jak wiadomosc
    while (key.size() < msg.size())
        key += tmp;


    for (std::string::size_type i = 0; i < msg.size(); ++i)
        msg[i] ^= key[i];
    return msg;
}
std::string decrypt(std::string msg, std::string key)
{
    return encrypt(msg, key);
}

int main()
{

        srand( time( NULL ) );
        //char litera[ 5 ];
        char key[6];
       /* for( int i = 0; i < 5; i++ )
        {
            switch(( rand() % 2 ) + 1 ) {
            case 1: litera[ i ] =( rand() % 25 ) + 65; break;
            case 2: litera[ i ] =( rand() % 25 ) + 97; break;

            }
        }*/

        for( int i = 0; i < 1; i++ )
        {
           // std::cout << litera[ i ];
            //litera[i]=key[i];
            std::string message = encrypt("wiadomosc", key);
            std::cout << "\nEncrypted: " << message;
            std::cout << "\nDecrypted: " << decrypt(message, key);
        }
        return 0;

}
