/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "ascii.h"


void
chartoascii_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	var  convert_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, CHARTOASCII, CONVERTION, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	printf("Enter a character: ");
	scanf("%c", &(convert_1_arg.chara));

	result_1 = convert_1(&convert_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	printf("The ASCII Value : %d\n",*result);
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	chartoascii_1 (host);
exit (0);
}
