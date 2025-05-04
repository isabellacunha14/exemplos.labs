# 🔢 Cálculo de f(x) = x + x² + x^x

[![Linguagem C](https://img.shields.io/badge/linguagem-C-blue)](https://www.open-std.org/jtc1/sc22/wg14/)  
Este programa em C lê um número de ponto flutuante `x` e calcula o valor da função **f(x) = x + x² + x^x**, onde `x²` é o quadrado de `x` e `x^x` é `x` elevado a ele mesmo.

---

## 🧠 Objetivo

O objetivo deste programa é demonstrar como realizar cálculos com operações matemáticas simples e o uso da função `pow` da biblioteca `math.h` para realizar a exponenciação.

---

## 🧪 Exemplo

**Entrada:**
```
Digite um número: 2
```

**Saída esperada:**
```
f(x) = 12.0000
```

---

## 🔧 Como funciona

A função **f(x) = x + x² + x^x** é calculada da seguinte forma:

1. `x` é somado com o quadrado de `x` (`x²`).
2. Em seguida, o valor de `x` é somado com `x^x`, que é calculado utilizando a função `pow(x, x)`.

---

## 📂 Arquivo

- `calcula_fx.c` → Código-fonte do programa em linguagem C.

---

## ▶️ Como compilar e executar

### Usando GCC (Linux/macOS/WSL):

```bash
gcc calcula_fx.c -o calcula_fx -lm
./calcula_fx
```

### Usando Windows com MinGW:

```bash
gcc calcula_fx.c -o calcula_fx.exe -lm
calcula_fx.exe
```

---

## ✅ Requisitos

- Compilador C (como `gcc`, `clang`, ou outro)
- Terminal ou IDE compatível com C (Code::Blocks, Dev-C++, VSCode, etc)
- Biblioteca `math.h` para funções matemáticas.

---

## 👩‍💻 Autoria

Desenvolvido por [Isabella Cunha](https://github.com/IsabellaCunha14) como parte dos estudos de programação em C.

---

## 📘 Licença

Este projeto está licenciado sob a [MIT License](LICENSE).
