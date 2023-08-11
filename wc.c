//this program countes words, lines, characters in the files that has been passed as arguments to the program in the command-line

#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char* argv [ ] )

{
    FILE* fp=NULL;
    int   nfiles =--argc;
    int   argidx =1;    
    char* currfile="";
    char  c;

  unsigned long nw=0,nl=0,nc=0;
    char t;

    if(nfiles==0) 
    {
        fp=stdin;
        nfiles++; 
    }
    else 
    {
        currfile=argv[argidx++];
        fp=fopen(currfile,"r");
    }
    while(nfiles>0) 
    {
       if(fp==NULL)
        {
            fprintf(stderr,"Unable to open input\n");
            exit(-1);
        }
        nc=nw=nl=0;
        while((c=getc(fp))!=EOF)
        {
            nc++;
            if (c =='\n') {
                nl++;
                }
            if (c == ' ' && (t != ' ' && t != '\n' && t != '\t')){
                nw++;
                t=c;
            }else if (c != ' ' && c != '\n' && c != '\t') {
                t=c;
            }
 
        }
        printf("%ld, %ld, %ld, %s\n",nc, nl+1, nw+1, currfile);
        
        nfiles--;
        if(nfiles>0)
        {
            currfile=argv[argidx++];
            fp     =fopen(currfile,"r");
        }
    }
	return 0;
}
