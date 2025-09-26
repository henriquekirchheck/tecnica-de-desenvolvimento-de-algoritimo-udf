// Escreva um programa em linguagem C que solicite ao usuário a média para
// aprovação em um curso e em seguida solicite ao usuário o nome, sexo e as 03
// notas do aluno e ao final imprima a frase: "O aluno XXXXX foi aprovado com
// media YY" considerando o gênero do(a) aluno(a) e se foi aprovado(a) ou
// reprovado(a)
#include <cstdio>
#include <iostream>
#include <ostream>
#include <print>
#include <string>
int main() {
  std::string input;

  std::print("Digite nota para aprovação: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto approval = std::stof(input);

  char gender;

  std::print("Digite genero do(a) aluno(a) [F/M/O]: ");
  std::flush(std::cout);
  std::scanf(" %c", &gender);

  switch (gender) {
  case 'F':
    gender = 'a';
    break;
  case 'M':
    gender = 'o';
    break;
  case 'O':
    gender = 'e';
    break;
  default:
    std::println(std::cerr,
                 "Genero invalido, escolha uma das 3 opções validas!");
    return 1;
  }

  std::print("Digite o nome d{0} alun{0}: ", gender);
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto name = input;

  std::print("Digite a primeira nota: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto score1 = std::stof(input);

  std::print("Digite a primeira nota: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto score2 = std::stof(input);

  std::print("Digite a primeira nota: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto score3 = std::stof(input);

  auto res = (score1 + score2 + score3) / 3;

  std::println("{0} alun{0} {1} {3}foi aprovad{0} com media {2}", gender, name,
               res, res >= approval ? "" : "não ");
}