# 📦 Arrays

Um **array** é uma estrutura de dados linear que armazena elementos de **mesmo tipo** em **posições contínuas de memória**.  
Isso garante acesso rápido aos elementos pelo índice.

---

## ⚡ Características
- Memória contígua
- Elementos do mesmo tipo
- Índices iniciam em `0`
- Acesso direto a qualquer posição em `O(1)`

---

## 🛠️ Operações e Complexidade

| Operação               | Complexidade | Observação                                                                 |
|-------------------------|--------------|----------------------------------------------------------------------------|
| **Acesso** (`arr[i]`)  | `O(1)`       | Acesso direto por índice.                                                  |
| **Inserção no final**  | `O(1)`       | Se houver espaço alocado, caso contrário pode custar realocação (`O(n)`).  |
| **Inserção no meio**   | `O(n)`       | É necessário deslocar os elementos seguintes.                              |
| **Remoção no final**   | `O(1)`       | Apenas reduz o tamanho lógico do array.                                    |
| **Remoção no meio**    | `O(n)`       | Desloca os elementos posteriores para preencher a lacuna.                  |
