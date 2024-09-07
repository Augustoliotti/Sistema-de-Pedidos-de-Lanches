#include <iostream>
#include <string>

using namespace std;

string nome;
int categorias, quantidade;
double total = 0.0, desconto;
bool continuar = true;
char adicionarMais;
int opcaoLanche, opcaoSobremesa, opcaoBebida;

int main() {
    // Inicio
    cout << "BEM VINDO A LANCHONETE!" << endl;
    cout << "Por favor, informe o seu Nome: ";
    getline(cin, nome);
    cout << "Ola, " << nome << "! Vamos começar o seu pedido." << endl;

    while (continuar) {
        // Exibir categorias
        cout << "Escolha uma categoria: " << endl;
        cout << "1 - Lanches" << endl;
        cout << "2 - Bebidas" << endl;
        cout << "3 - Sobremesas" << endl;
        cout << "4 - Finalizar Pedido" << endl;
        cout << "Escolha uma opcao: ";
        cin >> categorias;

        switch (categorias) {
            case 1:
                cout << "Lanches Disponiveis" << endl;
                cout << "1 - Hamburguer (R$ 10.00)" << endl;
                cout << "2 - Cheeseburguer (R$ 12.00)" << endl;
                cout << "3 - X-Bacon (R$ 15.00)" << endl;
                cout << "Escolha uma opcao: ";
                cin >> opcaoLanche;

                cout << "Digite a quantidade: ";
                cin >> quantidade;

                switch (opcaoLanche) {
                    case 1:
                        total += 10.0 * quantidade;
                        cout << "Hamburguer(es) adicionado(s) ao pedido" << endl;
                        break;
                    case 2:
                        total += 12.0 * quantidade;
                        cout << "Cheeseburguer(es) adicionado(s) ao pedido" << endl;
                        break;
                    case 3:
                        total += 15.0 * quantidade;
                        cout << "X-Bacon(es) adicionado(s) ao pedido" << endl;
                        break;
                }
                break;

            case 2:
                cout << "Bebidas Disponiveis" << endl;
                cout << "1 - Refrigerante (R$ 5.00)" << endl;
                cout << "2 - Suco (R$ 7.00)" << endl;
                cout << "3 - Agua (R$ 3.00)" << endl;
                cout << "Escolha uma opcao: ";
                cin >> opcaoBebida;

                cout << "Digite a quantidade: ";
                cin >> quantidade;

                switch (opcaoBebida) {
                    case 1:
                        total += 5.0 * quantidade;
                        cout << "Refrigerante(s) adicionado(s) ao pedido" << endl;
                        break;
                    case 2:
                        total += 7.0 * quantidade;
                        cout << "Suco(s) adicionado(s) ao pedido" << endl;
                        break;
                    case 3:
                        total += 3.0 * quantidade;
                        cout << "Agua(s) adicionado(s) ao pedido" << endl;
                        break;
                }
                break;

            case 3:
                cout << "Sobremesas Disponiveis" << endl;
                cout << "1 - Sorvete (R$ 8.00)" << endl;
                cout << "2 - Bolo (R$ 6.00)" << endl;
                cout << "3 - Pudim (R$ 5.00)" << endl;
                cout << "Escolha uma opcao: ";
                cin >> opcaoSobremesa;

                cout << "Digite a quantidade: ";
                cin >> quantidade;

                switch (opcaoSobremesa) {
                    case 1:
                        total += 8.0 * quantidade;
                        cout << "Sorvete(s) adicionado(s) ao pedido" << endl;
                        break;
                    case 2:
                        total += 6.0 * quantidade;
                        cout << "Bolo(s) adicionado(s) ao pedido" << endl;
                        break;
                    case 3:
                        total += 5.0 * quantidade;
                        cout << "Pudim(ns) adicionado(s) ao pedido" << endl;
                        break;
                }
                break;

            case 4:
                continuar = false;  // Finalizar o pedido
                break;

            default:
                cout << "Opcao invalida!" << endl;
                break;
        }

        if (continuar) {
            cout << "Deseja adicionar mais itens? (s/n): ";
            cin >> adicionarMais;
            if (adicionarMais == 'n' || adicionarMais == 'N') {
                continuar = false;
            }
        }
    }

    // Aplicar desconto se o total for maior que 50
    if (total > 50.0) {
        desconto = total * 0.10;
        total -= desconto;
        cout << "Desconto de 10% aplicado: R$ " << desconto << endl;
    }

    // Valor Final do pedido
    cout << "Valor final: R$ " << total << endl;
    cout << "Obrigado por comprar na nossa lanchonete, " << nome << endl;

    return 0;
}
