#include <stdio.h>

int main()
{
    int secret = 7;
    int guess;
    int i;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("1 se 10 ke beech number guess karo!\n");

    for(i = 1; i <= 3; i++)
    {
        printf("\nAttempt %d: ", i);
        scanf("%d", &guess);

        if(guess == secret)
        {
            printf("🎉 Correct! You Win!\n");
            break;
        }
        else if(guess < secret)
        {
            printf("Too Low! Thoda bada number try karo.\n");
        }
        else
        {
            printf("Too High! Thoda chhota number try karo.\n");
        }
    }

    if(guess != secret)
    {
        printf("\nGame Over! Correct number was %d\n", secret);
    }

    return 0;
}
