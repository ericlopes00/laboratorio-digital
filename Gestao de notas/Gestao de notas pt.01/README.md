# 📊 Sistema de Notas Escolares em C

Esse é um projeto que desenvolvi em C para consolidar meu aprendizado na linguagem. Eu decidi estruturar todo o código utilizando **funções** porque era um assunto que eu tinha bastante dificuldade, então usei esse programa como um treino focado para dominar o conceito!

O sistema resolve um problema real de um professor: pergunta a quantidade de alunos, cadastra os nomes usando matrizes de strings, recebe as notas em um vetor, calcula a média geral e já diz na hora quem foi aprovado ou reprovado (com média mínima 6.0).

## 🧠 Conceitos que treinei na marra:
* **Criação e chamada de funções:** Com e sem retorno (`void`, `int`), dividindo as responsabilidades do código.
* **Matrizes de Char (Strings):** Para capturar e organizar os nomes dos alunos.
* **Vetores e Passagem por Referência:** Para salvar as notas na memória e atualizar tudo direto na função principal (`main`).

---

## 🚀 Próximos Passos (Organização do Projeto)

Para deixar o sistema mais profissional e seguro contra erros de digitação, dividi os próximos passos em duas fases:

### 🛠️ Melhorias para o AGORA (Foco em Validação)
* **Notas fora da realidade:** Impedir que o professor digite notas negativas (ex: `-1`) ou acima do limite permitido.
* **Nomes em branco:** Criar uma trava para o sistema não aceitar nomes vazios ou feitos apenas de espaços em branco (quando a pessoa só aperta Enter).

### 🔮 Melhorias para o FUTURO (Novas Funcionalidades)
* **Valor dinâmico da prova:** Permitir que o professor defina quanto a prova vale (ex: a prova vale 12 pontos). Assim, o sistema valida a nota máxima com base nesse valor, evitando que alguém tire 13, mas aceitando o 12 normalmente.
* **Tratamento de letras:** Impedir que o programa quebre ou entre em loop infinito caso alguém digite uma letra por engano onde deveria ser um número.
* **Economia de memória:** Implementar Alocação Dinâmica para que o vetor tenha o tamanho exato da quantidade de alunos.
* **Salvar dados:** Fazer o sistema gravar as informações em um arquivo `.txt` para não perder nada ao fechar o programa.

---
💡 Esse projeto foi um baita desafio pessoal com funções. Se quiser dar uma olhada no código ou sugerir algo, fica à vontade!
