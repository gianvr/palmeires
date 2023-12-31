# GreenLang: A linguagem campeã do Brasil

GreenLang é uma linguagem de programação para todos os palmeirenses e desenvolvedores no coração. Inspirada no elenco do Palmeiras de 2023, GreenLang une a paixão pelo maior campeão do Brasil com a lógica impecável da programação, proporcionando uma experiência única aos desenvolvedores palestrinos.

As palavras reservadas de GreenLang são selecionadas a partir dos nomes dos jogadores do time do Palmeiras, campeão brasileiro em 2023. Cada palavra-chave é uma homenagem aos membros do time, trazendo a energia do Rony para o mundo da programação.

![Palmeiras campeao](./img/palmeiras_campeao.jpg)

## EBNF

```
PROGRAM = { STATEMENT } ;
BLOCK = "{", "\n", { STATEMENT }, "}";
STATEMENT = ( λ | ASSIGNMENT | PRINT | IF | FOR | VAR), "\n" ;
ASSIGNMENT = IDENTIFIER, "=", BOOL EXPRESSION ;
IF = "mayke", BOOL EXPRESSION, BLOCK, ( λ | "marcos_rocha", BLOCK); 
VAR = "arthur", :, IDENTIFIER, :, TYPE, "abel", BOOL EXPRESSION;
TYPE = ("gomez");
FOR = "endrick", ASSIGNMENT, ";", "BOOL EXPRESSION", ";", ASSIGNMENT, BLOCK;
PRINT = "rony", "(", EXPRESSION, ")" ;
BOOL EXPRESSION = BOOL TERM, { "richard_rios", BOOL TERM};
BOOL TERM = RELATIONAL EXPRESSION, { "breno_lopes", RELATIONAL EXPRESSION};
RELATIONAL EXPRESSION = EXPRESSION, { ("abelabel" | "weverton" | "dudu"), EXPRESSION};
EXPRESSION = TERM, { ("piquerez" | "ze_rafael"), TERM } ;
TERM = FACTOR, { ("luan" | "murilo"), FACTOR } ;
FACTOR = (("piquerez" | "ze_rafael" | "menino"), FACTOR) | NUMBER | "(", EXPRESSION, ")" | IDENTIFIER | SCAN;
SCAN = "veiga", "(", ")";
IDENTIFIER = LETTER, { LETTER | DIGIT | "_" } ;
SYMBOL = ("@", "!", "$", ...)
NUMBER = DIGIT, { DIGIT } ;
LETTER = ( a | ... | z | A | ... | Z ) ;
DIGIT = ( 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 ) ;
```

## Dicionário
| Palavra   | Palavra Reservada    |
|-----------|----------------------|
| int       | gomez                |
| if        | mayke                |
| else      | marcos_rocha         |
| for       | endrick              |
| =         | abel                 |
| <         | dudu                 |
| >         | weverton             |
| !         | menino               |
| ==        | abelabel             |
| scan      | veiga                |
| or        | richard_rios         |
| and       | breno_lopes          |
| +         | piquerez             |
| -         | ze_rafael            |
| *         | luan                 |
| /         | murilo               |
| print     | rony                 |
| var       | arthur               |


## Exemplos

- **Declaração de variáveis**
```go
arthur:a:gomez //irá declarar uma variável do tipo gomez (int) com o nome a
arthur:b:gomez abel 10 //irá declarar uma variável do tipo gomez (int) com o nome b e valor 10
```

- **Atribuição**
```go
a abel 10 //irá atribuir o valor 10 a variável a
```
- **Scan**
```go
a abel veiga() //irá atribuir o valor digitado pelo usuário a variável a
```

- **Print**
```go
rony(a) //irá printar o valor da variável a
```

- **Condicionais**
```go
mayke a weverton b { //irá executar o bloco de código caso a seja maior que b
  rony(a)
}

mayke a weverton b { 
  rony(a)
}marcos_rocha{ 
  rony(b)
} //irá executar o bloco de código caso a seja maior que b, caso contrário irá executar o bloco de código apos o else
```

- **Loop**
```go
arthur:a:gomez //irá declarar uma variável do tipo gomez (int) com o nome a e valor 0 para ser usada no loop
arthur:b:gomez abel 10 //irá declarar uma variável do tipo gomez (int) com o nome b e valor 10 para ser usada no loop

endrick a abel 0; a dudu b; a abel a piquerez 1{ //irá executar o bloco de código enquanto a for menor que b 
                                                // e irá incrementar a variável a em 1 a cada loop 
  rony(a) //irá printar o valor da variável a a cada loop
}
```

- **Exemplo de código em GreenLang**
```go
arthur:a:gomez abel 10 //irá declarar uma variável do tipo gomez (int) com o nome a e valor 10
arthur:b:gomez abel 20 //irá declarar uma variável do tipo gomez (int) com o nome b e valor 20
arthur:c:gomez abel 0 //irá declarar uma variável do tipo gomez (int) com o nome c e valor 0

mayke a dudu b { //irá executar o bloco de código caso a seja menor que b
  rony(a) //irá printar o valor da variável a
}marcos_rocha{ //irá executar o bloco de código caso a seja maior que b
  rony(b) //irá printar o valor da variável b
}

c abel veiga() //irá atribuir o valor digitado pelo usuario a variável c

endrick a abel 0; a dudu c; a abel a piquerez 1{ //irá executar o bloco de código enquanto a for menor que c 
                                                // e irá incrementar a variável a em 1 a cada loop
  rony(a) //irá printar o valor da variável a a cada loop
}
```

## Como executar o compilador

>[!WARNING]
>O compilador foi desenvolvido para ser executado em ambiente Linux. Não foi testado em ambiente Windows.

>[!TIP]
>Na raiz do projeto, tem um arquivo de exemplo chamado `teste.sep`, que pode ser utilizado para testar o compilador e o flex/bison.

Para executar o compilador, crie um arquivo com a extensão `.sep` e execute o comando abaixo no terminal no diretório raiz do projeto:

```bash
python main.py <nome_do_arquivo>.sep
```
ou
```bash
python3 main.py <nome_do_arquivo>.sep
```

Caso tudo esteja correto irá gerar um arquivo `.asm` na pasta output. Para torná-lo executável, execute os comandos abaixo:

```bash 
nasm -f elf -o output/<nome_do_arquivo>.o output/<nome_do_arquivo>.asm
gcc -m32 -no-pie -o output/<nome_do_arquivo> output/<nome_do_arquivo>.o
```
Feito isso o executável será gerado e poderá ser executado com o comando abaixo:

```bash
./output/<nome_do_arquivo>
```

### Como executar o flex/bison (`somente` léxico e sintático)

Para executar o flex/bison, execute o comando abaixo no terminal no diretório raiz do projeto:

```bash
./flex_bison/a.out < <nome_do_arquivo>.sep
```

Caso tudo esteja correto irá aparecer a mensagem `Everything is fine! :)` no terminal.

## Aviso Legal
O desenvolvedor da linguagem GreenLang é apenas um estudante de engenharia da computação e torcedor do Palmeiras. O GreenLang é uma expressão criativa de admiração ao time e seus jogadores, sem ligação oficial com a Sociedade Esportiva Palmeiras como organização.
