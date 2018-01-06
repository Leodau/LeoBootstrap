/*
** EPITECH PROJECT, =pdate=
** Project =pname= Testing
** File description:
** Unit Testing Project =pname=
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <ctype.h>
#include "main.h"

void main_redirect_stdout(void)
{
	cr_redirect_stdout();
}

Test(=pname=, Return_Value_Test)
{
	cr_assert_eq("Function to test()", "Int Output..");
}