let tempoinicialCronometro = $('.cronometro-frase').text();
let campoTexto = $('.campo_digitacao');

$(function () { 
    contaPalavrasFrase();
    campoTexto.on('input', function(){
        contaPalavrasInput();
        contaCaracteresInput();
    });
    campoTexto.one('input', cronometro);
    campoTexto.on('input', ConfereDigitacao);
    $(".btn-reiniciar").click(reiniciarCampos);

});


function ConfereDigitacao(){

    let frase = $('.frase').text();
    let digitado = campoTexto.val();
    let digitadoTamanho = digitado.length;
    let fraseAComparar = frase.substr(0, digitadoTamanho);

    console.log(fraseAComparar);
    console.log(digitado);

    if(digitado == fraseAComparar){
        campoTexto.addClass("borda-certa");
    }else{
        campoTexto.addClass("borda-errada");
    }

}

campoTexto.one('focus', cronometro);

function contaPalavrasFrase(){

    let frase = $('.frase').text();
    let frasedividida = frase.split(/\S+/);
    let qtdPalavras = frasedividida.length - 1;
    mudaContadorPalavrasFrase(qtdPalavras);
}

    function mudaContadorPalavrasFrase(qtdPalavras){

        $('.contador_palavras-frase').text(qtdPalavras);
    }

function contaPalavrasInput(){   

    let conteudoCampoTexto = campoTexto.val();
    let qtdPalavras = conteudoCampoTexto.split(/\S+/).length - 1;    
    mudaContadorPalavrasinput(qtdPalavras);
}
    function mudaContadorPalavrasinput(qtdPalavras){

        $(".contador_palavras-campo_digitacao").html(qtdPalavras);
    }
function contaCaracteresInput(){

    let conteudoCampoTexto = campoTexto.val();
    qtdCaracteresCampoTexto = conteudoCampoTexto.length;
    mudaContadorCaracteresInput(qtdCaracteresCampoTexto);
}
    function mudaContadorCaracteresInput(qtdCaracteresCampoTexto){

        $('.contador_caracteres-campo_digitacao').html(qtdCaracteresCampoTexto);
    }

function cronometro(){
    let cronometroCampo = $('.cronometro-frase');
    let cronometroValor = $('.cronometro-frase').text();
    $(".btn-reiniciar").attr("disabled",true)
    var cronometroID = setInterval(function(){
        cronometroValor--;
        cronometroCampo.html(cronometroValor);
        if(cronometroValor < 1){
           campoTexto.attr('disabled',true);    
           clearInterval(cronometroID);
           $(".btn-reiniciar").attr("disabled",false)
        }
    }, 1000);
}

function reiniciarCampos(){
    campoTexto.attr('disabled',false);
    campoTexto.val("");
    $(".contador_palavras-campo_digitacao").html(0);
    $(".contador_caracteres-campo_digitacao").html(0); 
    $('.cronometro-frase').text(tempoinicialCronometro);
}
function cronometro(){
    let cronometroCampo = $('.cronometro-frase');
    let cronometroValor = $('.cronometro-frase').text();
    $('.btn-reiniciar').attr('disabled', true);
    
    var cronometroID = setInterval(function(){
        
        cronometroValor--;
        cronometroCampo.html(cronometroValor);

         if(cronometroValor < 1){
            campoTexto.attr('disabled',true);
            $('.btn-reiniciar').attr('disabled', false);
            clearInterval(cronometroID);
        }
    }, 1000);

}

