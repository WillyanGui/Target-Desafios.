/*4) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em uma sala diferente.
 Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser.
Seu objetivo é descobrir qual interruptor controla qual lâmpada.

Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?
*/

/*Utilizaria o metodo de aquecimento para descobrir qual interrupitor ira aquecer a lampada
   Primeira ida à sala das lâmpadas:

    Ligue o primeiro interruptor por alguns minutos e depois desligue.
    Ligue o segundo interruptor e deixe-o ligado.
    Deixe o terceiro interruptor desligado.
    Segunda ida à sala das lâmpadas:

    Entre na sala e observe as lâmpadas.
    A lâmpada que está acesa é controlada pelo segundo interruptor.
    A lâmpada que está desligada, mas ainda quente, é controlada pelo primeiro interruptor.
    A lâmpada que está desligada e fria é controlada pelo terceiro interruptor.

    Assim temos os resultados de quais lampadas acendem qual sala.
*/