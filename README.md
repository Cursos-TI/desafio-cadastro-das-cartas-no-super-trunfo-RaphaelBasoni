##### Batalha das Cartas #####

Este programa em C simula uma batalha entre duas "cartas" representando cidades brasileiras, comparando atributos como população, área, PIB, turismo, renda per capita e densidade demográfica inversa.

### Pré-requisitos

    Visual Studio (recomendado: 2019 ou superior)

    Compilador C configurado (ex: MSVC)

    Sistema Windows (compatível com o Visual Studio)

### Como compilar e executar no Visual Studio

    Abra o Visual Studio.

    Vá em File > New > Project...

    Selecione Console App (C++) ou Empty Project, e depois configure como linguagem o C.

    Dê um nome ao projeto, como BatalhaCartas, e clique em Create.

    No Solution Explorer, clique com o botão direito na pasta Source Files > Add > New Item...

    Escolha C++ File (.cpp), renomeie para main.c e clique em Add.

    Copie e cole o código fornecido no arquivo main.c.

    Pressione Ctrl + F5 para compilar e executar o programa.

### Como usar

Ao executar o programa, você verá o seguinte menu:

Vamos dar inicio a BATALHA DAS CARTAS

Escolha em qual categoria competir:

1. Populacao
2. Area
3. PIB
4. Turismo
5. Per Capita
6. Densidade Inversa

Você deverá digitar o número de um atributo para comparar entre as cidades. Em seguida, escolherá um segundo atributo diferente do primeiro.

Após a seleção, o programa exibirá os valores de ambos os atributos para as duas cidades e mostrará o resultado final da batalha:

    "Venceu!": se a primeira cidade vencer nos dois atributos.

    "Empatou!": se vencer apenas em um dos atributos.

    "Perdeu!": se não vencer em nenhum.

### Cidades no jogo

    Carta A: São Paulo

        População: 12.325.000

        Área: 1521.11 km²

        PIB: R$ 699.280.000.000

        Turismo: 50

    Carta B: Rio de Janeiro

        População: 6.748.000

        Área: 1200.25 km²

        PIB: R$ 300.500.000.000

        Turismo: 30

### Atributos disponíveis para comparação
Número	Atributo	    Descrição
1	    População	        Quantidade de habitantes
2	    Área	            Extensão territorial em km²
3	    PIB	                Produto Interno Bruto (em reais)
4	    Turismo	            Índice fictício de atratividade turística
5	    Renda Per Capita	PIB dividido pela população
6	    Densidade Inversa	Inverso da densidade demográfica (área/população) — quanto menor, melhor
