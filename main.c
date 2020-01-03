#include <stdio.h>
#include <stdlib.h>

int main(){

    char running = 1;
    char buffer[3];
    int user_selection;

    printf("Beta Crawler is active.\n");

    while(running){

        printf("-------------------------------------------------------------\n");
        printf("1: PWD | 2: List files | 3: Crawl | 4: Clear screen | 5: Quit\n");
        
        scanf("%s", buffer);
        user_selection = atoi(buffer);

        if(user_selection < 1 || user_selection > 5){
            printf("Invalid selection, please try again\n");
        }else{
            if(user_selection == 1){ // PWD
                
            }else if(user_selection == 2){ // List files
                
            }else if(user_selection == 3){ // Crawl
                
            }else if(user_selection == 4){ // Clear screen

            }else if(user_selection == 5){ // Quit
                running = 0;
            }
        }
    }

    return 0;
}