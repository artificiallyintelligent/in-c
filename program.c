#include <time.h>
#include <math.h>
#include <stdio.h>



main() {



	char r[1000];



	char *strings[]= {   "\nAhhh.\n\n",
	"\nAnd?\n\n",
	"\nTell me more.\n\n", 
	"\nNo kidding?!\n\n", 
	"\nI see.\n\n", 
	"\nSooooo?\n\n", 
	"\nAnd how does that make you feel?\n\n", 
	"\nWhat do you associate with the word 'guacamole'?\n\n", 
	"\nYou don't say?!\n\n", 
	"\n*snigger*\n\n",
	"\nNothing personal, but you are kidding... aren't you?\n\n",
	"\nYawn.\n\n",
	"\nNo! Really?\n\n",
	"\nAnd why do you think that might be?\n\n",
	"\nTell me about your childhood.\n\n",
	"\nElaborate... I feel there's something you're not telling me here.\n\n",
	"\nCould you just repeat that a little louder, talking into this inconspicuous daffodil please?\n\n",
	"\nNurse Smith!!!\n We got a live one here, baby!!!\n\n",
	"\nTell me, what size do you take in strait-jackets?\n\n",
	"\nWhat do you associate with the word 'hippo'?\n\n",
	"\nI'd like to recommend you read this book. I feel could help you overcome your perversions...It's called 'Immuno-aspects of the Spleen'.\n\n"};


	printf ("\n\n\n\n\n\nWelcome to Dr Quack's consulting room.\n");
	printf ("Please feel free to divulge all of your deepest secrets.\n");
	printf ("Rates are by the hour or part thereof.\n");
	printf ("To leave the session simply type 'bye'.\n");
	printf ("Thank you.\n\n\n\n");

	printf ("So, how are you today?\n\n");
	gets(r);
	printf ("\nHmm. That good, eh?\n\nI think we should talk about this. So, if your sitting comfortably... SPILL THE BEANS!\n\n");



	gets(r);



start:


	if(r[0] == 'b' && r[1] == 'y' && r[2] == 'e' )
		{ printf ("\nGoodbye.  See you again. \n\n");
		exit (0);}

	else {if(r[0] == '\0')
	{printf ("\nTell me, you godforsaken toad, why do you have such a problem with polite conversation?!\n *smeghead*\n\n");
			gets(r); }

	else 



while ((r[0] != '\0') && (r[0] != 'b' && r[1] != 'y' && r[2] != 
'e' )){
			srandom(time(0));
			printf("%s\n", strings[random()%21]);
			gets(r); }



	if(r[0] == 'b' && r[1] == 'y' && r[2] == 'e' )
		{printf("\nBye.\n\n");
		exit (0);}



	if(r[0]=='\0')printf("\nAhh, come now, don't be shy. You cant help being such a pathetic weed, and no-one expects you to try. There, there, now.\n\n");
	gets(r);
        if (r[0] != '\0')goto start; end:



	if(r[0]=='\0')printf("Be like that then!\n\n*sniffle*\n\nGoodbye!\n\n");} }
