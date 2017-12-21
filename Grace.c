#include<stdio.h>
/*
	c'est chiant
*/
#define FT(x)int main(){FILE *f=fopen("Grace_kid.c","w");fprintf(f,"#include<stdio.h>\n/*\n\tc'est chiant\n*/\n#define FT(x)%s\nFT(%s)\n", #x, #x);return 0;}
FT(int main(){FILE *f=fopen("Grace_kid.c","w");fprintf(f,"#include<stdio.h>\n/*\n\tc'est chiant\n*/\n#define FT(x)%s\nFT(%s)\n", #x, #x);return 0;})
