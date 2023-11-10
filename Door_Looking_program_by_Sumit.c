#include <stdio.h>
#include <string.h>

int authenticate(char enteredPassword[]) {
    char correctPassword[] = "sumit"; 

    return strcmp(enteredPassword, correctPassword) == 0;
}

int main() {
    char enteredPassword[20]; 

    printf("Enter the password: ");
    scanf("%s", enteredPassword);

    if (authenticate(enteredPassword)) {
        printf("Access granted. Door unlocked!\n");
        
    } else {
        printf("Access denied. Incorrect password!\n");
    }
return 0;
}
