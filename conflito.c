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
int f5(int x); /* funcao numero 6*/
int f10(int x); /* funcao do Leonardo Correia santos Galvao */
int f13(int x); /* funcao do Cicero Moacir Soares */
int f15(int x); /* funcao do Pedro Augusto Souza Barros Modesto Jaco*/

/* ---------------------------------------------------------------------- */
/* chama 18 funcoes
 * retorna sucesso
 */
int main(void)
{
    int i; /* general index */
    i = 1;

    i=f0(i);
    i=f5(i);
    i=f10(i);

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
    ;
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

int f12(void)
 {
 ;
  printf("espero que haja conflito\n");
     return EXIT_SUCCESS;
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

/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */

