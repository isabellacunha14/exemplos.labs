# 🔁 Troca de Variáveis sem Variável Auxiliar

[![Linguagem C](https://img.shields.io/badge/linguagem-C-blue)](https://www.open-std.org/jtc1/sc22/wg14/)  
Um pequeno programa em C que lê dois valores inteiros e **troca seus conteúdos sem utilizar variável auxiliar**, apenas com operações matemáticas.

---

## 🧠 Objetivo

Este projeto tem como foco exercitar **lógica de programação** e manipulação de variáveis, mostrando como é possível realizar uma troca de valores usando **apenas as duas variáveis originais**.

---

## 🧪 Exemplo

**Entrada:**
```
x = 2  
y = 10
```

**Saída esperada:**
```
x = 10  
y = 2
```

---

## 🔧 Como funciona

A lógica é baseada em somas e subtrações:

```c
x = x + y;
y = x - y;
x = x - y;
```

Assim, a troca ocorre sem a necessidade de uma terceira variável.

---

## 📂 Arquivo

- `troca_sem_auxiliar.c` → Código-fonte do programa em linguagem C.

---

## ▶️ Como compilar e executar

### Usando GCC (Linux/macOS/WSL):

```bash
gcc troca_sem_auxiliar.c -o troca
./troca
```

### Usando Windows com MinGW:

```bash
gcc troca_sem_auxiliar.c -o troca.exe
troca.exe
```

---

## ✅ Requisitos

- Compilador C (como `gcc`, `clang`, ou outro)
- Terminal ou IDE compatível com C (Code::Blocks, Dev-C++, VSCode, etc)

---

## 👩‍💻 Autoria

Desenvolvido por [Isabella Cunha](https://github.com/IsabellaCunha14) como parte dos estudos de lógica de programação e linguagem C.

---

## 📘 Licença

Este projeto está licenciado sob a [MIT License](LICENSE).
