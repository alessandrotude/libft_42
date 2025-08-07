# 📚 Libft – 42 Common_core

## ✨ Descrição

Este projeto foi o meu primeiro grande desafio na 42. A proposta é recriar, do zero, várias funções da biblioteca padrão da linguagem C (`<string.h>`, `<ctype.h>`, entre outras), e integrá-las em uma biblioteca estática chamada `libft.a`. Essa biblioteca será usada como base em diversos projetos futuros da 42, como `ft_printf`, `get_next_line` e `push_swap`.

Além das funções obrigatórias, o projeto também oferece a oportunidade de implementar funções bônus, como operações em listas encadeadas simples.

> 💬 **Nota pessoal:**  
> Desenvolver a Libft foi uma jornada de aprendizado profundo. Me forçou a entender como a memória funciona em C, como lidar com strings, ponteiros e edge cases. É o tipo de projeto que muda a forma como você pensa como programador.

---

## 🧠 Conteúdos abordados

- Manipulação de strings e memória
- Implementação de funções da libc
- Manipulação de ponteiros e arrays
- Alocação dinâmica
- Criação de biblioteca estática com `ar`
- Uso de `Makefile`
- Modularização e organização de código

---

## ⚙️ Compilação

Para compilar a biblioteca, basta executar:

```bash
make
```

Isso criará o arquivo `libft.a` com todas as funções implementadas.  
Outros comandos disponíveis:

```bash
make clean      # Remove os arquivos .o
make fclean     # Remove os arquivos .o e libft.a
make re         # Refaz tudo do zero
```

---

## 🧪 Como usar

Você pode usar a libft em qualquer projeto C. Exemplo:

```c
#include "libft.h"
#include <unistd.h>

int	main(void)
{
	char *str = "Hello, Libft!";
	ft_putstr_fd(str, 1);
	return (0);
}
```

Compile assim:

```bash
gcc main.c libft.a -I.
```

---

## 🛠️ Algumas funções implementadas

- `ft_strlen`
- `ft_strdup`
- `ft_memcpy`
- `ft_memset`
- `ft_strlcpy`
- `ft_strncmp`
- `ft_atoi`
- `ft_calloc`
- `ft_substr`
- `ft_strjoin`
- `ft_split`
- `ft_itoa`
- `ft_putstr_fd`
- `ft_putchar_fd`
- *(e muitas outras...)*

Se você estiver fazendo o bônus:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## 📂 Estrutura

```
libft/
├── ft_*.c              # Arquivos com funções implementadas
├── libft.h             # Header com protótipos
├── Makefile
└── libft.a             # Biblioteca gerada após make
```

---

## 📌 Regras da 42

- Sem variáveis globais
- Sem uso de funções proibidas como `malloc`, `free` ou `write`, exceto onde permitido
- Compilação obrigatória com flags: `-Wall -Wextra -Werror`
- Norminette sempre!

---

## 🚀 Próximo passo

O conhecimento adquirido aqui vai ser essencial para os próximos projetos, como:
-	printf
-	get_next_line
-	born2beroot
---
