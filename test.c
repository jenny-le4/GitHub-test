#include<stdio.h>
#include<cs50.h>
#include <strings.h>
#include <unistd.h>

int main(void)
{
    printf("hello, world\n");

//hello
    string s = get_string ("whats your name? " );
        if (strcasecmp(s, "jenny") == 0)
        printf("hello Master, welcome home!\n");
        else if (strcasecmp(s, "helen") == 0)
        printf("I love you, %s!\n", s);
        else
        printf("I don't like you %s...\n", s);

//chat
    sleep (3);
    printf("soo....\n");
    sleep (5);
    string t = get_string ("is it lunch time now? ");
        if (strcasecmp(t, "yes") == 0)
        printf("thank god!\n" );
        else
        printf("then why are you here...?\n" );

//Dobby
char user_input[100];
    while (1)
    {
        fgets(user_input, sizeof(user_input), stdin);
        user_input[strcasecmp(user_input, "\n")] = '\0';
        if (strcasecmp(user_input, "What is your name?") == 0)
        printf("My name is Dobby.\n");
    }


}
