/***************************************************************************
 *   conflito.c                               Version 20221215.142238      *
 *                                                                         *
 *   Teste de conflito                                                     *
 *   Copyright (C) 2022         by Ruben Carlo Benante                     *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Ruben Carlo Benante                                                   *
 *   Email: rcb@upe.br                                                     *
 *   Webpage: http://www.beco.cc                                           *
 *   Phone: +55 (81) 3184-7555                                             *
 ***************************************************************************/

/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* ---------------------------------------------------------------------- */
/* definitions */

#ifndef VERSION /* gcc -DVERSION="0.1.160612.142306" */
#define VERSION "20221215.142238" /* Version Number (string) */
#endif

#define SBUFF 256 /* string buffer */

/* ---------------------------------------------------------------------- */
/* prototypes */

int f0(int x); /* funcao do professor */
int f1(int x); /* Prof. Ruben , outra */
int f5(int x); /* funcao numero 6*/
int f10(int x); /* funcao do Leonardo Correia santos Galvao */
int f12(int x); /* func Gabriel Costa */
int f13(int x); /* funcao do Cicero Moacir Soares */
int f14(int x); /* funcao do Leonardo Correia Santos Galvao*/
int f15(int x); /* funcao do Pedro Augusto Souza Barros Modesto Jaco*/
int f16(int x); /* funcao do Jose Lucas De Lima Moura*/
int f17(int x); /* funcao do Gabriel Dos Santos Albuquerque */

/* ---------------------------------------------------------------------- */
/* chama 18 funcoes
 * retorna sucesso
 */
int main(void)
{
    int i; /* general index */
    i = 1;

    i=f0(i);
    i=f1(i);
    i=f5(i);
    i=f10(i);
    i=f12(i);
    i=f13(i);
    i=f15(i);
    i=f16(i);
    i=f17(i);

    printf("Valor final: %d\n", i);
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* f0 Prof. Ruben */
/* funcao do professor */
int f0(int x)
{
    int y;

    y = x-1;

    return y;
}

/* ---------------------------------------------------------------------- */
/* f1 Prof. Ruben outra */
int f1(int x)
{
    return x/3;
}

/* ---------------------------------------------------------------------- */
/* f5 Vinicius Gomes Epifanio*/
/* funcao numero 6 */
int f5(int x)
{
    int z;

    z = x+10;

    return z;
}

/* ---------------------------------------------------------------------- */
/* f10 Leonardo Correia Santos Galvao*/
int f10(int x)
{
    return x*2;
}

/* ---------------------------------------------------------------------- */
/* f15 Pedro */
/* funcao do aluno */
int f15 (int x)
{
    int w;
    w = x-1;
    return w;
}

/* ---------------------------------------------------------------------- */
/* f12  Gabriel Costa*/

int f12(int x)
 {
     return x+1;
 }


/* ---------------------------------------------------------------------- */
/* f13 Cicero */
/* funcao do aluno */
int f13 (int x)
{
   int y;

   y = x-1;

   return y;
}
/*----------------------------------------------------------------------- */
/* f14 Leonardo */
int f14 (int x)
{
    x=0;
    return x;
}

/*----------------------------------------------------------------------- */
/* f16 Jose Lucas */
/* funcao do aluno */
int f16 (int x)
{
    int a;
    a = x+2;
    return a;
}

/*----------------------------------------------------------------------- */
/* f17 Gabriel Dos Santos*/
/* funcao do aluno */
int f17 (int x)
{
    int a;
    a = x+10;
    return a;
}

/*----------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */

