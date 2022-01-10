#include <iostream>
#include <fstream>
#include <string.h>
#include "escultor.h"

using namespace std;

int main()
{

    // Declara o objeto escudo
    Sculptor shild(30,30,30);
    // Para mudar a cor do voxel
    shild.setColor(0.3,0.2,0,1.0); // Castanho escuro
    // Ativa os voxels na faixa de [x,y,z]
    shild.putBox(0,20,0,25,6,9);
    shild.putBox(8,12,7,17,0,6);
    // Desativa os voxels na faixa de [x,y,z]
    shild.cutBox(0,5,0,1,6,9);
    shild.cutBox(15,20,0,1,6,9);
    shild.cutBox(0,3,1,2,6,9);
    shild.cutBox(17,20,1,2,6,9);
    shild.cutBox(0,2,2,5,6,9);
    shild.cutBox(18,20,2,5,6,9);
    shild.cutBox(0,1,5,6,6,9);
    shild.cutBox(19,20,5,6,6,9);
    shild.cutBox(0,1,21,22,6,9);
    shild.cutBox(0,2,22,23,6,9);
    shild.cutBox(0,3,23,24,6,9);
    shild.cutBox(0,4,24,25,6,9);
    shild.cutBox(9,20,24,25,6,9);
    shild.cutBox(10,16,23,24,6,9);
    shild.cutBox(11,15,22,23,6,9);
    shild.cutBox(16,20,23,24,6,9);
    shild.cutBox(8,12,9,15,4,6);
    shild.cutBox(8,12,10,14,3,6);
    shild.cutBox(8,12,10,14,0,1);
    shild.cutBox(8,12,7,10,0,2);
    shild.cutBox(8,12,14,17,0,2);
    shild.cutBox(8,12,16,17,2,3);
    shild.cutBox(8,12,7,8,2,3);
    // Muda a cor para fazer a marca do escudo
    shild.setColor(0.6,0.3,0,1.0); // Marrom claro
    // Ativa um voxel no ponto [x,y,z]
    shild.putVoxel(10,19,8);
    shild.putVoxel(9,19,8);
    shild.putVoxel(8,18,8);
    shild.putVoxel(7,17,8);
    shild.putVoxel(6,16,8);
    shild.putVoxel(6,15,8);
    shild.putVoxel(5,14,8);
    shild.putVoxel(5,13,8);
    shild.putVoxel(6,12,8);
    shild.putVoxel(6,11,8);
    shild.putVoxel(7,10,8);
    shild.putVoxel(8,9,8);
    shild.putVoxel(9,8,8);
    shild.putVoxel(10,8,8);
    shild.putVoxel(11,9,8);
    shild.putVoxel(12,10,8);
    shild.putVoxel(13,11,8);
    shild.putVoxel(14,12,8);
    shild.putVoxel(14,13,8);
    shild.putVoxel(14,14,8);
    shild.putVoxel(13,15,8);
    shild.putVoxel(12,16,8);
    shild.putVoxel(11,16,8);
    shild.putVoxel(10,15,8);
    shild.putVoxel(13,10,8);
    shild.putVoxel(13,9,8);
    shild.putVoxel(13,8,8);
    shild.putVoxel(12,7,8);
    shild.putVoxel(11,6,8);
    shild.putVoxel(10,6,8);
    shild.putVoxel(9,6,8);
    shild.putVoxel(8,6,8);
    shild.putVoxel(7,7,8);
    // Grava a escultura digital no arquivo "dekushild.off"
    shild.writeOFF("dekushild.off");

    return 0;
}
