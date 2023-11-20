#include <string.h>

int calculateStringDistance(char* String, char* subString) {

  if(strlen(String) < strlen(subString)) return 0;

  if(strncmp(String, subString, strlen(subString)) == 0) {
    if(strncmp(String + strlen(String) - strlen(subString), subString, strlen(subString)) == 0) {
      return strlen(String);
    } else {
      return calculateStringDistance(strndup(String, strlen(String) - 1), subString);
    }
  }
  
  return calculateStringDistance(String + 1, subString);
}

int main(){
    char String[101];
    char subString[101];

    scanf("%s", String);
    scanf("%s", subString);
    
    int result = calculateStringDistance(String, subString);
    printf("%d\n", result);
}
