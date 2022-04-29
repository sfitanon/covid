
%option noyywrap

%{

        #include<stdio.h>

        int i=0;

%}


%%

([a-zA-Z0-9])* {i++;}

\n {printf("Total number of words in a source program is %d",i); i=0;}

%%

int main()

{

        printf("Enter Sentence: ");

        yylex();

        return 0;

}