#include <stddef.h> // NULL

const char* how_much_i_love_you(int nb_petals) {
  
  const char *strings[] = {
    "not at all",
    "I love you",
    "a little",
    "a lot",
    "passionately",
    "madly"
  };
  
  int idx = nb_petals%6;
  return strings[idx];
}