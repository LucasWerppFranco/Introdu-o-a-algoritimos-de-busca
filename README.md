# Algoritmos de Busca

Este diretório contém exemplos de **busca linear** e **busca binária** em C, além de um exemplo simples de busca por CPF.
---
## Diferenças entre Linear e Binária
- **Busca Linear**:
  - Percorre os elementos um por um.
  - Funciona em **vetores desordenados**.

- **Busca Binária**:
  - Divide o vetor ao meio a cada passo.
  - Exige que o vetor esteja **ordenado**.
---
## Como compilar e executar
No terminal, dentro da pasta `algoritmos-de-busca/`:

```bash
# Compilar busca linear
gcc busca_linear.c -o busca_linear
./busca_linear

# Compilar busca binária
gcc busca_binaria.c -o busca_binaria
./busca_binaria

# Compilar busca de CPF
gcc cpf_busca.c -o cpf_busca
./cpf_busca
---
# Quando usar cada técnica?

- Linear: quando o vetor é pequeno ou não está ordenado.
- Binária: quando o vetor é grande e já está ordenado (ou pode ser ordenado previamente).
- Busca por string (ex: CPF): normalmente linear, mas pode ser adaptada para binária se a lista for ordenada.
---
# Colaboradores

- Lucas Werpp Franco - RM: 556044
- Lucas Alves Antunes Almeida - RM: 566362
- Lucca Rosseto Rezende - RM: 564180
- Massayoshi Bando Fogaça e Silva - RM: 561779
