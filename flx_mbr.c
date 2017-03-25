/*
 * File Name : flx_mbr.c
 * Creation Date : 25-03-2017
 * Last Modified :
 * 
 * Copyright (C) Mohamed L. Karaoui <mohamed.karaoui@lip6.fr>
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>

struct flx_mbr_s{
	int size;
	int data[];
};

#define SIZE1 16
struct flx_mbr_s flx_mbr1 = {SIZE1, {[0 ... SIZE1-1] = 1 }};

#define SIZE2 32
struct flx_mbr_s flx_mbr2 = {SIZE2, {[0 ... SIZE2-1] = 2 }};

int main()
{
	int i;

	for(i=0; i<SIZE1; i++)
		printf("%d\n", flx_mbr1.data[i]);

	for(i=0; i<SIZE2; i++)
		printf("%d\n", flx_mbr2.data[i]);
}
