#include <stdio.h>

int main() {
  int idade;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  if (idade < 12) {
    printf("Você é uma criança.\n");
  } else if (idade >= 12 && idade < 18) {
    printf("Você é um adolescente.\n");
  } else if (idade >= 18 && idade < 60) {
    printf("Você é um adulto.\n");
  } else {
    printf("Você é um idoso.\n");
  }

  int anos;

  printf("Digite a sua idade: ");
  scanf("%d", &anos);

  if (anos > 60) {
    printf("Você é um idoso.\n");
  } else if (anos <= 60 && anos > 18) {
    printf("Você é um adulto.\n");
  } else if (anos < 18 && anos > 12) {
    printf("Você é um adolescente.\n");
  } else {
    printf("Você é uma criança.\n");
  }

  int nota;

  printf("Digite sua nota: ");
  scanf("%d", &nota);

  if (nota >= 90){
    printf("Sua nota é A.\n");
  } else if (nota >= 80){
    printf("Sua nota é B.\n");
  } else if (nota >= 70){
    printf("Sua nota é C.\n");
  } else if (nota >= 60){
    printf("Sua nota é D.\n");
   } else if (nota >= 50){
    printf("Sua nota é E.\n");
   } else {
    printf("Sua nota é F.\n");
  }

  int valor;

  printf("Digite seu valor: ");
  scanf("%d", &valor);

  if (valor <= 50){
    printf("Seu valor é F.\n");
  } else if (valor <= 60){
    printf("Seu valor é E.\n");
  } else if (valor <= 70){
    printf("Seu valor é D.\n");
  } else if (valor <= 80){
    printf("Seu valor é C.\n");
   } else if (nota < 90){
    printf("Seu valor é B.\n");
   } else {
    printf("Seu valor é A.\n");
  }

}