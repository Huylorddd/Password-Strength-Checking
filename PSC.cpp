#include <stdio.h>
#include <string.h>


bool checkLength(char passwd[]){                            //this function is used for checking the length of password 
    int count = -1;                                         //(more than 6 characters and less than 32 characters) !
    for(int i = 0; i <= strlen(passwd); i++){
        count++;
    }
    if(count < 6 || count > 32) return 1;
    else return 0;
}

void checksymbols(char passwd[]){                                                        
    int symbols = 0, numbers = 0, uppercase = 0, lowercase = 0, special = -1;        //this function is used for checking the symbols of password 
    for(int i = 0; i <= strlen(passwd); i++){
        switch(passwd[i]){

        //symbols:
            case '!': symbols++; break;
            case '@': symbols++; break;
            case '#': symbols++; break;
            case '$': symbols++; break;
            case '%': symbols++; break;
            case '^': symbols++; break;
            case '&': symbols++; break;
            case '*': symbols++; break;
            case '(': symbols++; break;
            case ')': symbols++; break;
            case '-': symbols++; break;
            case '_': symbols++; break;
            case '=': symbols++; break;
            case '+': symbols++; break;
            case '{': symbols++; break;
            case '[': symbols++; break;
            case '}': symbols++; break;
            case ']': symbols++; break;
            case ':': symbols++; break;
            case ';': symbols++; break;
            case '"': symbols++; break;
            case '\'': symbols++; break;
            case '<': symbols++; break;
            case ',': symbols++; break;
            case '>': symbols++; break;
            case '.': symbols++; break;
            case '?': symbols++; break;
            case '/': symbols++; break;
            case '|': symbols++; break;
            case '\\': symbols++; break;
            case '~': symbols++; break;
            
        //numbers:
            case '0': numbers++; break;
            case '1': numbers++; break;
            case '2': numbers++; break;
            case '3': numbers++; break;
            case '4': numbers++; break;
            case '5': numbers++; break;
            case '6': numbers++; break;
            case '7': numbers++; break;
            case '8': numbers++; break;
            case '9': numbers++; break;

        //uppercases:
            case 'A': uppercase++; break;
            case 'B': uppercase++; break;
            case 'C': uppercase++; break;
            case 'D': uppercase++; break;
            case 'E': uppercase++; break;
            case 'F': uppercase++; break;
            case 'G': uppercase++; break;
            case 'H': uppercase++; break;
            case 'I': uppercase++; break;
            case 'J': uppercase++; break;
            case 'K': uppercase++; break;
            case 'L': uppercase++; break;
            case 'M': uppercase++; break;
            case 'N': uppercase++; break;
            case 'O': uppercase++; break;
            case 'P': uppercase++; break;
            case 'Q': uppercase++; break;
            case 'R': uppercase++; break;
            case 'S': uppercase++; break;
            case 'T': uppercase++; break;
            case 'U': uppercase++; break;
            case 'V': uppercase++; break;
            case 'W': uppercase++; break;
            case 'X': uppercase++; break;
            case 'Y': uppercase++; break;
            case 'Z': uppercase++; break;

        //lowercases:
            case 'a': lowercase++; break;
            case 'b': lowercase++; break;
            case 'c': lowercase++; break;
            case 'd': lowercase++; break;
            case 'e': lowercase++; break;
            case 'f': lowercase++; break;
            case 'g': lowercase++; break;
            case 'h': lowercase++; break;
            case 'i': lowercase++; break;
            case 'j': lowercase++; break;
            case 'k': lowercase++; break;
            case 'l': lowercase++; break;
            case 'm': lowercase++; break;
            case 'n': lowercase++; break;
            case 'o': lowercase++; break;
            case 'p': lowercase++; break;
            case 'q': lowercase++; break;
            case 'r': lowercase++; break;
            case 's': lowercase++; break;
            case 't': lowercase++; break;
            case 'u': lowercase++; break;
            case 'v': lowercase++; break;
            case 'w': lowercase++; break;
            case 'x': lowercase++; break;
            case 'y': lowercase++; break;
            case 'z': lowercase++; break;
        
        default: special++; break;
        }
    }

    if(symbols >= 1 && numbers >= 1 && uppercase >= 1 && lowercase >= 1) printf("\nYour password is strong enough.");
    else if(special != 0) printf("\n<!>Your password has SPECIAL CHARACTERS.");
    else printf("\nYour password is weak and easily to be cracked !\nStrengthen your password by adding (a-z, A-Z, 1-9 and symbols) !"); 
}


int main(){

    char passwd[100];

    do{
        printf("<!>Password must equal to 6 and less than 32 characters<!>\n");
        printf("Enter your password: ");
        scanf("%s", passwd);
    }while(checkLength(passwd) == true);

    checksymbols(passwd);

    return 0;
}
