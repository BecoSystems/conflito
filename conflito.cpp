/***************************************************************************
 *   conflito.cpp                             Version 20221201.160816      *
 *                                                                         *
 *   Teste conflito                                                        *
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
 *   Email: rcb@beco.cc                                                    *
 *   Webpage: http://www.beco.cc                                           *
 *   Phone: +55 (81) 3184-7555                                             *
 ***************************************************************************/

/* ---------------------------------------------------------------------- */
/* includes */
#include <iostream> /* (Input/output library) Several standard stream objects */
using namespace std;

/* ---------------------------------------------------------------------- */
/* classes : better located at libxxx.h */

class document
{
    public:
        void help(void); /* print some help */
        void copyr(void); /* print version and copyright information */
};

class calc
{
    public:
        int add(int a, int b); /* add some numbers */
};


/* ---------------------------------------------------------------------- */
/* methods */

/* ---------------------------------------------------------------------- */
/* Prints help information 
 *  usually called by opt -h or --help
 */
void document::help(void)
{
    IFDEBUG("help()");
    /* printf("%s - %s\n", "conflito", "Teste conflito"); */
    cout << "conflito - Teste conflito\n";
    cout << "\nUsage: conflito\n\n";
    cout << "This program does...\n";
    /* add more stuff here */
    cout << "\nExit status:\n\t0 if ok.\n\t1 some error occurred.\n";
    cout << "\nTodo:\n\tLong options not implemented yet.\n";
    cout << "\nAuthor:\n\tWritten by Ruben Carlo Benante <rcb@beco.cc>\n\n";
    return;
}

/* ---------------------------------------------------------------------- */
/* Prints version and copyright information 
 *  usually called by opt -V
 */
void document::copyr(void)
{
    IFDEBUG("copyr()");
    cout << "conflito - Version " << VERSION << "\n";
    cout << "\nCopyright (C) 2022 Ruben Carlo Benante <rcb@beco.cc>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This  is  free  software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.\n\n";
    return;
}

/* ---------------------------------------------------------------------- */
/* calculadora */
int calc::add(int a, int b)
{
    cout << "eh para somar";
    return a;
}

/* ---------------------------------------------------------------------- */
/* This function does ...
 *
 * It returns ...
 */
int main(void)
{
    document doc; /* create an object of a class */
    int i; /* general index */
    char s[SBUFF]; /* a string to hold ... */

    /* code */
    doc.help();
    doc.copyr();
  
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20220718.172615      */

