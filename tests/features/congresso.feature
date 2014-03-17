# language: pt
@javascript 
Funcionalidade: Detalhes de deputados

  Cenário: Ver o detalhe de Deputados
    Dado Eu estou em "http://www2.camara.leg.br/deputados/pesquisa"
    Quando Eu seleciono "TIRIRICA" de "deputado"
        E Eu pressiono "Pesquisa"
    Então Eu devo ver "FRANCISCO EVERARDO OLIVEIRA SILVA"