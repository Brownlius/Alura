
var frase = $('.frase').text();
let frasedividida = frase.split(/\S+/);
let qtdPalavras = frasedividida.length;

let tamanhoDaFrase = $('.contador-palavras_frase').html(qtdPalavras);

let campoTexto = $('.campo_digitacao');

campoTexto.on('input', contaInfos );


    
function contaInfos(){   

    let conteudoCampoTexto = campoTexto.val();
    let qtdPalavras = conteudoCampoTexto.split(/\S+/).length - 1;    
    $(".contador_palavras-campo_digitacao").html(qtdPalavras);
    
    let qtdCaracteres = conteudoCampoTexto.length;
    $(".contador_caracteres-campo_digitacao").html(qtdCaracteres); 
}

