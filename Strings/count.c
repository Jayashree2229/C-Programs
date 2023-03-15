#include<stdio.h>

int main()
{
 /*Count Vowels, Consonants, Digits and Spaces in Given String*/
    char line[1000];
    int i, v, c, ch, d, s, o;
 
    o = v = c = ch = d = s = 0;
    printf("\n\nEnter a Line of String: \n\n");
 
    gets(line);
    
    for(i=0;line[i]!='\0';++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
            ++v;
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
            ++c;
        else if(line[i]>='0'&&c<='9')
            ++d;
        else if (line[i]==' ')
            ++s;
    }
    printf("\n\nOutput Is Below\n\n");

    printf("\n\nTotal Number of Vowels Are: %d",v);
    printf("\nTotal Number of Consonants Are: %d",c);
    printf("\nTotal Number of Digits Are: %d",d);
    printf("\nTotal Number of White spaces Are: %d\n\n",s);
    return 0;
}