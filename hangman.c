#include <stdio.h>
#include <string.h>
void drawHangman(int lives){
    switch(lives){
        case 3:
            printf(" -----\n");
            printf(" |   |\n");
            printf(" |\n");
            printf(" |\n");
            printf(" |\n");
            printf(" |\n");
            printf("=========\n");
            break;

        case 2:
            printf(" -----\n");
            printf(" |   |\n");
            printf(" |   O\n");
            printf(" |\n");
            printf(" |\n");
            printf(" |\n");
            printf("=========\n");
            break;

        case 1:
            printf(" -----\n");
            printf(" |   |\n");
            printf(" |   O\n");
            printf(" |   |\n");
            printf(" |\n");
            printf(" |\n");
            printf("=========\n");
            break;

        case 0:
            printf(" -----\n");
            printf(" |   |\n");
            printf(" |   O\n");
            printf(" |  /|\\\n");
            printf(" |  / \\\n");
            printf(" |\n");
            printf("=========\n");
            break;
    }
}

int main(){
    char secretWord[]="computer";
    int length=strlen(secretWord);

    char visibleWord[20];
    char guessedLetters[26];

    int guessCount=0;
    int lives=3;

    for(int i=0;i<length;i++){
        visibleWord[i]='_';
    }
    visibleWord[length]='\0';

    while(lives>0){
        drawHangman(lives);

        printf("Word:%s\n",visibleWord);
        printf("Lives:%d\n",lives);

        char guess;
        printf("Enter a letter:\n");
        scanf(" %c",&guess);

        int alreadyGuessed=0;

        for(int i=0;i<guessCount;i++){
            if(guess==guessedLetters[i]){
                alreadyGuessed=1;
                break;
            }
        }

        if(alreadyGuessed==1){
            printf("You already guessed that letter!\n");
            continue;
        }

        guessedLetters[guessCount]=guess;
        guessCount++;

        int found=0;

        for(int i=0;i<length;i++){
            if(secretWord[i]== guess){
                visibleWord[i]=guess;
                found=1;
            }
        }

        if(!found){
            lives--;
            printf("Wrong guess!\n");
        }

        if(strcmp(secretWord,visibleWord)==0){
            printf("%s\n",visibleWord);
            printf("You Win!\n");
            return 0;
        }
    }

    drawHangman(0);

    printf("Game Over!\n");
    printf("The word was: %s\n", secretWord);

    return 0;
}
