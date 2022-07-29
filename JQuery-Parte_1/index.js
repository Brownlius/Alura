
var frase = $('.frase').text();
let frasedividida = frase.split(/\S+/);
let qtdPalavras = frasedividida.length;

let tamanhoDaFrase = $('.contador_palavras-frase').html(qtdPalavras);

let campoTexto = $('.campo_digitacao');

campoTexto.on('input', contaInfos);

campoTexto.one('focus', cronometro);

    
function contaInfos(){   

    let conteudoCampoTexto = campoTexto.val();
    let qtdPalavras = conteudoCampoTexto.split(/\S+/).length - 1;    
    $(".contador_palavras-campo_digitacao").html(qtdPalavras);
    
    let qtdCaracteres = conteudoCampoTexto.length;
    $(".contador_caracteres-campo_digitacao").html(qtdCaracteres); 
}

function cronometro(){
    let cronometroCampo = $('.cronometro-frase');
    let cronometroValor = $('.cronometro-frase').text();
    console.log("Chamei");
    var cronometroID = setInterval(function(){
        cronometroValor--;
        cronometroCampo.html(cronometroValor);
         if(cronometroValor < 1){
            campoTexto.attr('disabled',true);
            clearInterval(cronometroID);
        }
    }, 1000);

}
