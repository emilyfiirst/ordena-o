# 📚 Algoritmos de Ordenação em C

Este repositório contém implementações em **C** de diversos algoritmos de ordenação clássicos.  
Todos os códigos foram criados para **fins de estudo e aprendizado**.

---

## 📂 Algoritmos incluídos

1. **Bubble Sort** (`bubbleSort.c`)  
   - Compara elementos adjacentes e troca-os até que o vetor esteja ordenado.  
   - Otimizado com uma variável para reduzir comparações desnecessárias.

2. **Insertion Sort** (`insertionSort.c`)  
   - Insere cada elemento na posição correta do subvetor previamente ordenado.  

3. **Selection Sort** (`selectionSort.c`)  
   - Procura o menor elemento e o coloca na posição correta, repetindo para todo o vetor.  

4. **Merge Sort** (`mergeSort.c`)  
   - Algoritmo de **dividir e conquistar** que divide o vetor em partes menores e depois faz a fusão ordenada.  
   - Requer alocação de memória temporária.

5. **Quick Sort** (`quickSort.c`)  
   - Algoritmo eficiente de divisão e conquista.  
   - Usa um pivô para particionar o vetor em elementos menores e maiores, aplicando recursivamente.

---

## ⚙️ Como Compilar e Executar

Para qualquer arquivo `.c`:

```bash
# Compilar
gcc nome_do_arquivo.c -o nome_do_programa

# Executar
./nome_do_programa
```

Por exemplo, para o `bubbleSort.c`:

```bash
gcc bubbleSort.c -o bubbleSort
./bubbleSort
```

---

## 📄 Estrutura do Código

- Cada algoritmo é implementado em **uma função específica**.  
- O `main()` lê um vetor do usuário (`N` elementos) e chama a função de ordenação correspondente.  
- Ao final, imprime o vetor ordenado na tela.

---

## 🧠 Observações

- Os códigos são **didáticos** e visam o aprendizado de cada algoritmo.  
- Alguns ajustes podem ser necessários para **índices de arrays** ou limites, principalmente em `mergeSort` e `quickSort`.  
- Ideal para estudo de **complexidade e comportamento de algoritmos de ordenação**.

---

## 👨‍💻 Autor

Criado para **fins de estudo** e prática de algoritmos clássicos em linguagem C.
