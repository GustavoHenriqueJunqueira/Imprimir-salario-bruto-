//
//  main.cpp
//  Exercicio 35
//
//  Created by Gustavo Henrique Furtado Junqueira on 12/05/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include <iostream>
using namespace std;
int main (){

    string nome;
    int codigo_cargo, turno;
    float horas_trabalhadas, salario_base1, salario_base2;
    
    cout<<"Digite o nome do funcionario:\n";
    cin>>nome;
    cout<<"Digite as horas trabalhadas:\n";
    cin>>horas_trabalhadas;
    cout<<"Digite o cargo do funcionario sendo 1 ou 2:\n";
    cin>>codigo_cargo;
    cout<<"Digite o turno do horario de trabalho sendo 1 ou 2 ou 3:\n";
    cin>>turno;
    
    salario_base1=horas_trabalhadas*5;
    salario_base2=horas_trabalhadas*8;
    
    if (codigo_cargo==1 && turno==1){
        cout<<"O funcionario "<<nome<<" tem um salario de:\n"<<salario_base1*1.30<<"\n";
        }
    else if(codigo_cargo==1 && turno==2){
        cout<<"O funcionario "<<nome<<" tem um salario de:\n"<<salario_base1*1.40<<"\n";
    }
    
     else if (codigo_cargo==1 && turno==3){
        cout<<"O funcionario "<<nome<<" tem um salario de:\n"<<salario_base1*1.50<<"\n";
    }
    else if(codigo_cargo==2 && turno==1){
        cout<<"O funcionario "<<nome<<" tem um salario de:\n"<<salario_base2*1.30<<"\n";
    }
    
    if (codigo_cargo==2 && turno==2 ){
        cout<<"O funcionario "<<nome<<" tem um salario de:\n"<<salario_base2*1.40<<"\n";
    }
    else if(codigo_cargo==2 && turno==3){
        cout<<"O funcionario "<<nome<<" tem um salario de:\n"<<salario_base2*1.50<<"\n";
    }
    


    return 0;




}
