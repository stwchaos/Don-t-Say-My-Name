#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <string.h>



int main() {
  int fr = 0;
  int action, contratos=0, caminho=0;
  char nome[50];
  char cod[50];
  int res_charada, entregas=0;
  int chances = 3; 
  int characorreta = 0;
  int karma = 25, lugar, pvez[15];
  bool valid=false, sair = false;
  bool troll = true, chavebanhei = false, foracasa = false;
  while (valid!=true){
        ////////////////////////////////menu/////////////////////////////////
        if(pvez[4]!=1){
          printf("\n (✖╭╮✖) Bem-vindo ao Don't Say My Name,\n    uma aventura lhe espera ao digitar um número:");
          pvez[4]=1;
        }
        printf("\n\n");
        printf(" 1. Jogar\n 2. Informações\n 3. Fechar jogo\n 4. Segredo\n\n");
        printf("Escolha sua opção: ");
        scanf("%d", &action);
        printf("\n");
        switch(action){
            case 1:
              printf("Loading…\n█▒▒▒▒▒▒▒▒▒\n");
              sleep(2);
              printf("10%% \n███▒▒▒▒▒▒▒\n");
              sleep(2);
              printf("30%%\n█████▒▒▒▒▒\n");
              sleep(1);
              printf("50%%\n███████▒▒▒\n");
              sleep(1);
              printf("100%%\n██████████\n");
              sleep(1);
               valid=true;
            break;
            case 2:
                printf("Este jogo trabalha com fantasia, um toque de mistério e muitas surpresas! Mas caro jogador, tenha cuidado, pois, o karma pesa neste game! Que a sorte esteja ao seu lado!\n");
            break;
            case 3:
                return 0;
            break;
            case 4:
                printf("Além de linda é curiosa kk ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ ͡°)ʖ ͡°) ͡°)\n");
        }
        ////////////////////////////////////////////////////////////////////////
  }
  //////////////////////////inicio//////////////////////////////////////////////
  printf("\n");
  while(troll==true){
      troll=false;
      valid=false;
      sair=false;
    printf("...\n\n");
    printf("Você acorda com dor de cabeça, não se lembrando de nada e em um ambiente desconhecido, seus pensamentos se mergulham em confusão\n\n");
    sleep(1);
    printf("...\n");
    sleep(1);
    printf("\n");
    printf("Você nota uma coisa estranha, suas mãos estão diferentes de um ser humano comum. Suas memórias sumiram, seu passado agora é uma repleta escuridão. Você está desesperado por respostas e nota que está em um lugar escuro e úmido, uma caverna.\n");
    while(valid!=true){
    printf("O que você faz a seguir?\nDigite o número da opção\n\n1. Inspeciona a caverna\n2. Tenta achar algo que reflita sua imagem para se ver\n3. Tenta achar uma saída da caverna\n");
    printf("Escolha sua opção: ");
    scanf("%d", &action);
    printf("\n");

    switch (action) {
    case 1:
      printf("Você olha ao redor e percebe que há um enorme dragão dormindo ali, desesperado, você corre até sair da caverna.\n\n");
      valid = true;
      break;
    case 2:
      printf("Achando um lago, você observa seu reflexo, você... não consegue descrever a criatura a sua frente, botando suas mãos em seu rosto e confirmando que aquela... coisa é você, em desespero começa a correr pela caverna e, em um golpe do destino, você acaba achando a saída da caverna\n\n");
      valid = true;
      break;

    case 3:
      printf("Você anda, anda e anda e acha uma saida.\n\n");
      valid = true;
      break;

    default:
      valid = false;
      printf("Erro: coloque uma opção valida.\n\n");
      break;
    }
  }
  valid = false;
  printf("Quando você finalmente sai da caverna, se depara com um pedaço de papel velho no chão. Ele está molhado, mas mesmo assim você o pega.\nÉ um mapa da região em que você se encontra. Olhando o mapa, você sente que deve ir a algum lugar\n");
  while(valid == false){
    sair = false;
    sleep(1);
    printf("\n");
    printf("Aonde voce deseja ir?\n1. Trilha misteriosa ao norte.\n2. Trilha misteriosa ao sul.\n3. Trilha misteriosa ao leste.\n4. Trilha misteriosa ao noroeste\n");
    printf("Escolha sua opção: ");
    scanf("%d", &lugar);
    printf("\n");

  //////////////////////////////mapa//////////////////////////////////
    switch (lugar) {
    case 1:
        while(sair!=true){
            if(pvez[0]==0){
                printf("Você anda pela trilha ao norte, após vários passos você vê ao longe um ser brilhante com asas, você deduz que é uma fada.\n");
                printf("\n");
                pvez[0]=1;
            } else{
                printf("Você volta a trilha em que uma fada misteriosa se encontra\n");
                printf("\n");
            }
            printf("O que você deseja fazer a seguir?\n1. Interagir com a fada.\n2. Voltar a trilha.\n");
            printf("Escolha sua opção: ");
            scanf("%d", &action);
            printf("\n");
            switch (action){
            case 1:
                printf("A fada percebe que seu coração é puro e confuso, te deixando assim, passar diretamente por ela\n");
                printf("\n");
                sleep(1);
                valid = true;
                sair = true;
            break;
            case 2:
                printf("Você decide voltar a trilha\n");
                sair = true;
            break;
            default:
                printf("Erro: coloque uma opção valida.\n");
                printf("\n");
            break;
            }    
        }
    break;

    case 2:
        while(sair!=true){
            if(pvez[1]==0){
                printf("Voce decide ir para a trilha ao sul, lá você encontra um gnomo. O gnomo é o mestre das charadas, ele propõe que para passar pela sua trilha, você deve desvendar uma de suas charadas.\n\n");
                pvez[1]=1;
            } else{
                printf("Você volta a trilha em que um gnomo saltitante se encontra\n\n");
            }
            printf("O que você deseja fazer a seguir?\n1. Interagir com o gnomo.\n2. Voltar a trilha.\n3. Seguir a trilha\n");
            printf("Escolha sua opção: ");
            scanf("%d", &action);
            switch (action){
                case 1:
                    if(characorreta == 1){
                        sleep(2);
                        printf("\n");
                        printf("Você já desvendou minha charada hahaha, não tenho mais nenhuma hahahaha\n");
                        printf("\n");
                    } else{
                    sleep(2);
                    printf("\n");
                    printf("Gnomo: Olá jovem aventureiro! Eu sou um gnomo, e sou mestre em charadas. Para minha trilha atravessar, esta charada você deve desvendar.\n\n");
                    sleep(1);
                    printf("Gnomo: Quantos graus tem uma onça morta?\n\n");
                    printf("Digite sua resposta: ");
                    scanf("%d", &res_charada);
                    printf("\n");
                    while (characorreta == 0){
                        if(res_charada == 360) {
                            printf("Gnomo: Parabéns jovem aventureiro, você acertou, é uma ex fera! HAHAHAHA. Atravesse minha trilha até o final, e algo bom (ou não) lhe aguardará!\n\n");
                            characorreta = 1;
                            break;
                        }
                        else{
                            if((res_charada != 360)&&(res_charada!=0)){
	                            chances--;
                            }
                        }
                        if(res_charada == 0){
                            printf("Você desiste da charada do gnomo\n");
                            break;
                        }
	                    if((chances!=0)&&(res_charada!=0)){
                            printf("Gnomo: Você errou! lhe darei mais %d, se errar todas, você morrerá! Tenha cuidado. Se quiser desistir digite 0\n", chances);
	                    }
	                    if (chances == 0) {
	                        printf("\n\n∧__∧\n( ͡° ͜ʖ ͡°)\n⊂　　つcxxxx{}:::vc morreu kk::::>\n(つ ﾉ\n(ノ\n");
	                        return 0;	
	                   }
	                   scanf("%d", &res_charada);
                    }
                    }
                break;
                case 2:
                    printf("Você decide voltar a trilha\n");
                    sair = true;  
                break;
                case 3:
                    if(characorreta==1){
                        valid = true; 
                        sair = true;
                    }else{
                        sleep(2);
                        printf("\n");
                        printf("Gnomo: Não, não, não, você não pode atrevessar sem desvendar minha charada\n\n");
                    }
                break;
                default:
                printf("Erro: coloque uma opção valida.\n");
                printf("\n");
                break;
            }
        }
    break;


    case 4:
      printf("Você decide ir pela trilha misteriosa ao noroeste, nela você ve um gato sorridente. Ele é pilantra e te manda diretamente de volta para a caverna.\n");
      printf("\n");
      sleep(1);
      printf("...");
      sleep(1);
      printf("Você voltou para o começo\n\n");
      printf("              .'\\   /`.\n");
    printf("            .'.-.`-'.-.`.\n");
    printf("       ..._:   .-. .-.   :_...\n");
    printf("     .'    '-.(o ) (o ).-'    `.\n");
    printf("    :  _    _ _`~(_)~`_ _    _  :\n");
    printf("   :  /:   ' .-=_   _=-. `   ;\\  :\n");
    printf("   :   :|-.._  '     `  _..-|:   :\n");
    printf("    :   `:| |`:-:-.-:-:'| |:'   :\n");
    printf("     `.   `.| | | | | | |.'   .'\n");
    printf("       `.   `-:_| | |_:-'   .'\n");
    printf("         `-._   ````    _.-'\n");
    printf("             ``-------''\n");
    printf("\n");
    printf("==\n");
    printf("\n");
    valid = true;
    troll = true;
    sair = true;
    sleep(3);
    break;
    default:
      printf("[ERRO] Escolha uma opção válida.");
      valid = false;
      break;
    case 3:
        if(pvez[3]==0){
                printf("Você anda pela trilha ao leste em que o guardião é um ogro. Você não sabe as intenções dele.\n");
                printf("\n");
                pvez[3]=1;
            } else{
                printf("Você volta a trilha ao qual a um misterioso ogro\n");
                printf("\n");
            }
            printf("O que você deseja fazer a seguir?\n");
            printf("1. Interagir com o ogro.\n");
            printf("2. Voltar a trilha.\n");
            printf("Escolha sua opção: ");
            scanf("%d", &action);
            printf("\n");
            switch (action){
                case 1: 
                    printf("Qual abordagem deseja fazer?.\n");
                    printf("1. Olá Sr.Ogro. Como vai?\n");
                    printf("2. Ogro maldito! Deixe-me passar imediatamente!\n");
                    printf("Escolha sua opção: ");
                    scanf("%d", &action);
                    sleep(1);
                    printf("...\n");
                    if (action == 1){
                        printf("O ogro admirou sua atitude, viu que seu coração é puro e permitiu sua passagem.\n");
                        karma += 10;
                        valid = true;
                    }else{
                        printf("O ogro te olha com olhar assustado, logo depois, seu olhar enfureceu.\n");
                        karma -= 10;
                        sleep(1);
                        printf("\n");
                        printf("O ogro está te atacando! Você precisa revidar\n");
                        printf("\n");
                        printf("Você avista um machado perto de um tronco de árvore cortada e um arco e flechas caído sobre o mato. Qual deseja escolher?\n");
                        printf("1. Machado\n");
                        printf("2. Arco e flechas\n");
                        printf("Escolha sua opção: ");
                        scanf("%d", &action);
                        printf("\n");
                        if (action == 1){
                            printf("Você pegou o machado e tenta acertar a perna do ogro, mas ele se esquiva! Qual seu próximo movimento?\n");
                        }else{
                            printf("Você pegou o arco e flecha, depois tentou acertar a perna do ogro, mas ele se esquiva! Qual seu próximo movimento?\n");
                        }
                        printf("1. Tenta acertar o braço que o ogro está usando para segurar a sua lança\n");
                        printf("2. Tenta se esquivar a todo custo do Ogro\n");
                        printf("3. Ajoelha e pede perdão\n");
                        printf("Escolha sua opção: ");
                        scanf("%d", &action);
                        printf("\n");
                        switch (action){
                        case 1:
                            printf("Você acertou o braço do ogro. Mas ele é mais forte do que pensava, está usando o outro braço para te atacar!\n");
                            printf("O que você fará a seguir?\n");
                            printf("1. Insultá-lo mais\n");
                            printf("2. Você se assusta com a crueldade que acabou de cometer e cai em choro. Você pede perdão ao ogro e o promete nunca mais ser maldoso na vida\n");
                            printf("3. Você dá o golpe fatal no ogro\n");
                            printf("Escolha sua opção: ");
                            scanf("%d", &action);
                            printf("\n");
                            karma -= 10;
                            if (action == 1){
                                printf("O ogro se espanta com sua crueldade e cai em lágrimas. Você acaba passando pela trilha dele.\n");
                                karma -= 10;
                                valid = true;
                            } else if (action == 2){
                                printf("O ogro admira sua atitude de redenção. Te olha com um olhar de empatia e permite que você ultrapasse a trilha.\n");
                                karma += 5;
                                valid = true;
                            } else if (action == 3){
                                printf("Você matou o ogro. Seu caminho da trilha está livre.\n");
                                karma-= 20;
                                valid = true;
                            } else{
                                printf("Você ficou parado pensando em sua próxima estratégia, infelizmente o ogro foi mais rápido e lhe acertou um golpe fatal");
                                printf("\n\n∧__∧\n( ͡° ͜ʖ ͡°)\n⊂　　つcxxxx{}:::vc morreu kk::::>\n(つ ﾉ\n(ノ\n");         return 0;
                            }
                        break;
                        case 2: 
                            printf("O ogro se irrita com você apenas fugindo depois de tê-lo tratado com desdém. Então te dá um golpe fatal.\n");
                            sleep(2);
                            printf("\n\n∧__∧\n( ͡° ͜ʖ ͡°)\n⊂　　つcxxxx{}:::vc morreu kk::::>\n(つ ﾉ\n(ノ\n");                           return 0;
                        break;
                        case 3:
                            printf("O ogro se espantou com a sua atitude desesperada, mas ele decidiu lhe dar uma chance de redençao. Ele parou de lutar e lhe encarou friamente. \n");
                            printf("\n");
                            sleep(1);
                            printf("Ogro: Escute aqui jovenzinho, sua atitude grosseira comigo com base na minha aparência não foi muito nobre. Mas vejo desespero no seu olhar e por isso lhe darei outra chance. Permito sua passagem através da minha trilha.\n");
                            printf("\n");
                            sleep(1);
                            karma -= 5;
                            valid = true;
                        break;
                        default:
                            printf("Você ficou parado pensando em sua próxima estratégia, infelizmente o ogro foi mais rápido e lhe acertou um golpe fatal, morreu kk");
                            return 0;
                    }
                break;
                case 2:
                    printf("Você decide voltar a trilha\n");
                    sair = true;  
                break;
            }
    break;
            
    }
  }
} ///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////cidade/////////////////////////////////////////////////////////////
}  printf("\n");
  printf("Você atravessou a trilha e chegou em uma cidade. Há muitos moradores nesta cidade, e ao longe, você avista um grandioso castelo em cima de um grande morro.\n");
  printf("O que você deseja fazer a seguir?\n");
  printf("1. Você explora a cidade.\n");
  printf("2. Você aborda o primeiro morador da cidade que consegue enxergar.\n\n");
  valid=false;

while(valid!=true){
  printf("Escolha sua opção: ");
  scanf("%d", &action);
  switch (action) {
///////////////////////////////a aventura começa//////////////////////////////////
    case 1:
    valid=true;
    printf("\nVocê avista um bar, à primeira vista, é bem rústico. Decide entrar nele e lá se depara com muitos viajantes que estão de passagem. Todos estão com malas enormes. Você decide que seria bom perambular pelo bar atrás de itens que possam te lembrar de quem você é.\n");
    sleep(1);
    printf("...\n");
    sleep(1);
    printf("\nVocê encontrou uma foto rasgada. Mas o que é isso? É um homem que você nunca viu antes, mas por alguma razão, você sente que o conhece.\n");
    printf("Procurar mais objetos pelo mundo?\n");
    printf("1. Sim\n");
    printf("2. Não\n");
    printf("Escolha sua opção: ");
    scanf("%d", &action);
    
    if(action == 1){
      printf("\nvocê decide sair do bar para achar mais algo. E pensou que talvez os moradores da cidade possam lhe ajudar com isso. Enquanto você caminhava, acabou esbarrando em uma senhorinha.\n");
    } else{
        printf("\nVocê sai do bar e decide procurar um morador para conversar sobre a cidade. Por um momento de descuido você acabou esbarrando em uma senhorinha.\n");    
    }
    	printf("Como deseja abordá-la?\n");
      printf("1. Me desculpe senhora, estou meio desastrado hoje. Você está bem?\n");
      printf("2. Olha por onde anda!\n");
      printf("Escolha sua opção: ");
      scanf("%d", &action);

      if (action == 1){
      printf("\nSenhora desconhecida: Tudo bem meu jovem, eu estou bem. Como posso lhe ajudar?\n\n");
      sleep(1);
      printf("Você mostrou a fotografia que encontrou no bar para a senhorinha, e a perguntou se ela o reconhece.\n\n");
      sleep(1);
      printf("Senhora desconhecida: Oh, sim!! Eu o reconheço, ele é meu querido filho. Seu nome é Gusman, ele está na nossa casa hoje, é só virar a esquina!\n");
      karma+=10;
      } else {
        printf("\nA senhora te olha com um olhar de decepção. E em seguida diz:\n");
        printf("\n");
        sleep(1);
        printf("Senhora desconhecida: O que você quer?\n\n");
        karma-=10;
        printf("E então você pergunta a ela se reconhece o homem na foto\n\n");
        printf("Senhora desconhecida: Conheço, mas não contarei a alguém grosseiro como você\n\n");
        printf("Qual sua resposta a isso?\n");
        printf("1. Se desculpar e perguntar novamente\n");
        printf("2. Obriga-la a responder\n");
        printf("Escolha sua opção: ");
        scanf("%d", &action);
        karma-=10;
        if(action==1){
          printf("\nA senhorinha aceita as suas desculpas e explica quem é o homem na foto\n\n");
          printf("Senhora desconhecida: Ele é meu querido filho. Seu nome é Gusman, ele está na nossa casa hoje, é só virar a esquina!\n");
          karma += 5;
        } else{
          printf("\nA senhorinha te da um golpe de karate");
          printf("\n\n∧__∧\n( ͡° ͜ʖ ͡°)\n⊂　　つcxxxx{}:::vc morreu kk::::>\n(つ ﾉ\n(ノ\n");
          return 0;
        }
      }
    break;
  case 2:
    valid=true;
    printf("\nVocê esbarra com uma senhorinha pela estrada, como deseja abordá-la?\n");
    printf("1. Me desculpe senhora, estou meio desastrado hoje. Você está bem?\n");
    printf("2. Olha por onde anda!\n");
    printf("Escolha sua opção: ");
    scanf("%d", &action);

    if (action == 1){
      printf("\nSenhora desconhecida: Tudo bem meu jovem, eu estou bem. Como posso lhe ajudar?\n");
      sleep(1);
      printf("\nVocê pergunta para a senhora se há algo na cidade com coisas antigas que você possa utilizar para se lembrar de quem é. Ela lhe aponta o bar da cidade, onde os viajantes e moradores da cidade, colocam coisas que acharam por aí, alguns dos objetos são estranhos e antigos.\n");
      sleep(1);
      printf("Você decide ir até o bar, à primeira vista, é bem rústico. Decide entrar nele e lá se depara com muitos viajantes que estão de passagem. Todos estão com malas enormes. Você decide que seria bom perambular pelo bar atrás de itens que possam te lembrar de quem você é.\n");
      sleep(1);
      printf("...\n");
      sleep(1);
      printf("Você encontrou uma foto rasgada. Mas o que é isso? É um homem que você nunca viu antes, mas por alguma razão, você sente que o conhece.\n");
      sleep(1);
      printf("Você saiu do bar e perguntou a um jovem sentado na frente do mesmo sobre o homem que acabara de ver na foto. Ele lhe diz ser o filho da dona Jacinta, uma senhorinha local. O nome do homem é Gusman. O jovem aponta sua residência.\n");

      karma+=10;
      } else {
        printf("\nA senhora te olha com um olhar de decepção. E em seguida diz:\n\n");
        sleep(1);
        printf("Senhora desconhecida: O que você quer?\n\n");
        printf("Voce pergunta para a senhora se há algo na cidade com coisas antigas que você possa utilizar para se lembrar de quem é.\n\n");
        printf("Senhora desconhecida: Não irei ajudar um bárbaro igual a você\n\n");
        printf("Qual sua resposta a isso?\n");
        printf("1. Se desculpar e perguntar novamente\n");
        printf("2. Obriga-la a responder\n");
        printf("Escolha sua opção: ");
        scanf("%d", &action);
        karma-=10;
        if(action==1){
          printf("\nA senhorinha aceita as suas desculpas e aponta para o bar\n\n");
          printf("Senhora desconhecida: Aquele bar é onde os viajantes e moradores da cidade, colocam coisas que acharam por aí, alguns dos objetos são estranhos e antigos.\n");
          karma += 5;
        } else{
          printf("\nA senhorinha te da um golpe de karate");
          printf("\n\n∧__∧\n( ͡° ͜ʖ ͡°)\n⊂　　つcxxxx{}:::vc morreu kk::::>\n(つ ﾉ\n(ノ\n");
          return 0;
        }     }
    
    break;
  
  default:
    printf("\nVocê planeja friamente seus próximos passos, você está tão sério e pensante que fica imóvel por longos segundos...\n\n");
    sleep(3);
    printf(".\n\n");
    sleep(2);
    printf("..\n\n");
    sleep(2);
    printf("...\n\n");
    sleep(1);
    printf("Até que você decide fazer alguma coisa\n");

    break;
  }
}
  sleep(1);
    printf("\n\nVocê segue até a casa do homem Gusman. Bate na porta e quando o homem atende seu chamado, ele se assusta, pergunta o que você estava fazendo lá, e se iria machucá-lo. Confuso, você pensa que é por ter uma aparência horrenda e indescritível, e então explica que você pode parecer um monstro, mas não quer lhe fazer mal.\n\n");

  sleep(1);
    printf("Gusman está congelado na sua frente, sem reação alguma, como você irá abordá-lo?\n1. Ser gentil e tentar acalmá-lo.\n2. Ser grosseiro e fazê-lo acordar a força.\n");
    printf("Escolha sua opção: ");
    scanf("%d", &action);

  if(action == 1){
    printf("\n\nApós muitas tentativas você finalmente conseguiu acalmar Gusman, mas ele ainda o olhava com um olhar assustado e confuso, há alguma pergunta que você queira fazer a Gusman?\n");
    karma += 5;

  }else{
    printf("\n\nApós sacudir Gusman diversas vezes, ele finalmente voltou a sí, mas estava ainda um pouco assustado, como se suas sacudidas comprovasse sua teoria de que você veio machucá-lo, há alguma pergunta que você queira fazer a Gusman? \n");
    karma -= 5;

  }

  while(action != 5){
  printf("1. O que esta foto misteriosa tem a ver comigo?\n2. Você me conhece?\n3. Sabe como eu me chamo?\n4. Por que com minha aparência tão horrenda, ninguém se assusta?\n5. Terminar conversa.\n");
  printf("Escolha sua opção: ");
  scanf("%d", &action);
  printf("\n\n");

    switch (action){
      case 1:
        printf("\nGusman se assusta, já que a imagem contém apenas ele. Então diz: \n\n Gusman: nada ue, sou eu na imagem, tá doido?\n\nVocê fica desconcertado, mas faz outra pergunta\n");
        break;
      case 2:
        printf("\nGusman assustado com sua pergunta esquisita, retruca:\n\nGusman: ora! Mas é claro que sim, você vive nesta cidade infernizando cada um que cruza seu caminho e infelizmente eu fui um dos azarados.\n\nVocê fica perplexo e boquiaberto com tamanha informação,  já que esperava que ele não o reconhecesse, por estar aparentando ser um monstro horrível. E como ele pode achar normal que um monstro conviva em civilização? Você indagou em seu pensamento.\nMas decide continuar seu interrogatório por busca da verdade.\nQual sua próxima pergunta?\n");
        break;
      case 3: 
        printf("\nGusman solta um olhar de desespero. E tremendo diz:\n\nGusman: eu não sei o seu nome, ninguém nesta cidade sabe. E mesmo se eu soubesse, não poderia lhe dizer.\n\nAquilo fica matutando na sua cabeça, mas você decide continuar com o interrogatório.\n");
        break;
      case 4:
      printf("\nGusman, desnorteado, tenta entender o que você quis dizer com aparência horrenda. E então lhe diz:\n\nGusman: que?\n\nVocê não entendeu como que ele não entendeu uma pergunta tão simples. Mas segue o baile.\n");
    }
  }
  sleep(1);
  printf("\nApós terminar a conversa, você nota que a perna de Gusman está toda enfaixada, você provavelmente não percebeu antes pois estava focado demais naquela pista de seu passado.\n\n1. Perguntar sobre a perna\n2. Ignorar.\n");
  printf("Escolha sua opção: ");
  scanf("%d", &action);

  if(action == 1){
    printf("\nGusman: Minha perna? Eu acabei machucando ela enquanto entregava jornal, ando precisando de dinheiro, então é uma pena que eu não possa ir trabalhar hoje.\n1. Oferecer ajuda.\n2. Não oferecer ajuda.\n");
    printf("Escolha sua opção: ");
    scanf("%d", &action);

  /////////////////////////////////missao de karma//////////////////////////////////////////////
    if(action == 1){
      printf("Gusman lhe olha com uma expressão de surpresa, como se não esperasse que tais palavras saíssem de sua boca.\n\nGusman: S-sério? Você faria isso por mim? Não é nenhuma espécie de golpe, não é?\nEspero que não, mas se realmente for me ajudar, precisará disso.\nGusman lhe entrega uma pilha de jornal e um papel com diversos endereços.\n");
      printf("Após receber os itens que Gusman lhe entregou, você imediatamente vai entregar os jornais,\nDando uma espiada no papel que Gusman lhe entregou, você nota que falta apenas quatro entregas a serem feitas\n\n");
    while(entregas<4){
        printf("Em qual casa você planeja entregar agora?\n");
        if(pvez[5]!=1){
            printf("1. Casa ao norte\n");
        }else{
            printf("1. Feito!\n");
        }
        if(pvez[6]!=1){
            printf("2. Casa ao sul\n");
        }else{
            printf("2. Feito!\n");
        }
        if(pvez[7]!=1){
            printf("3. Casa ao sudeste\n");
        }else{
            printf("3. Feito!\n");
        }
        if(pvez[8]!=1){
            printf("4. Casa ao leste\n");
        }else{
            printf("4. Feito!\n");
        }
        printf("Escolha sua opção: ");
        scanf("%d", &action);
        switch(action){
            case 1:
                if(pvez[5]==1){
                    printf("Já fez\n");
                }else{
                printf("Você decide ir na casa ao norte, chegando lá você se depara com uma humilde casa rosa\nVocê pensa que vai ser um trabalho fácil, e realmente vai ser... só existe um problema\n");
                printf("O muro separando a calçada e casa é alto demais, você não consegue ver outra maneira de entregar o jornal além de joga-lo\n");
                printf("E lá vamos nós...\n");
                sleep(2);
                printf("Aqui vai...\n");
                sleep(2);
                printf("...");
                sleep(1);
                printf("Alguma coisa está errada, você está tentando lançar o jornal mas seu braço não tem força,\nacho que isso é um bug do jogo, bem... alguém tem que consertar, e não serei eu.\n");
                printf("Relaxa, é fácil, é só escrever o seguinte código: //EuNaoSeiProgramarAlguemMeAjuda2xchttp\n");
                printf("Linha de código:  ");
                scanf("%s", cod);
                while(strcmp(cod,"//EuNaoSeiProgramarAlguemMeAjuda2xchttp")!=0){
                    printf("Não deu certo, tenta de novo:\n//EuNaoSeiProgramarAlguemMeAjuda2xchttp\nLinha de código:  ");
                    scanf("%s", cod);
                }
                printf("Você conserta o bug no jogo e lança o jornal, um trabalho bem feito\n\n");
                pvez[5]=1;
                entregas++;
                }
            break;
            case 2:
                if(pvez[6]==1){
                    printf("Já fez\n");
                }else{
                printf("Você decide ir na casa ao sul, chegando lá, você se depara com uma formosa casa verde\nO portão é incrivelmente baixo, você aproveita essa chance para ir entregar o jornal,\npassando pelo portão e indo até a porta...\n");
                printf("Até que você ouve latidos... latidos altos e ferozes, olhando para trás você vê im cachorro do seu tamanho indo na sua direção\nComo você vai reagir a isso?\n");
                printf("1. Tentar assustar o cão\n2. Fugir do cão\nEscolha sua opção: ");
                scanf("%d", &action);
                if(action==2){
                    printf("Você foge do cão e vai correndo até a porta entregar o jornal\n");
                    printf("Após entregar o jornal, você se vê encurralado pelo cão\nO que você faz a seguir?\n");
                    printf("1. Se esquivar do cachorro e correr frenéticamente\n2. Bater na porta igual e pedir ajuda\nEscolha sua opção: ");
                    scanf("%d", &action);
                    if(action==1){
                        printf("Você consegue fugir do cachorro, e começa a correr sem olhar para trás\n");
                        printf("Após passar pelo grade, você se lembra que o portão é pequeno, e quando você olha para trás...\n");
                        printf("Você vê o cachorro parado no portão apenas latindo... Que cachorro leal\n\n");
                        pvez[6]=1;
                        entregas++;
                    }else{
                        printf("Acho que não tinha ninguém em casa ¯\\_(ツ)_/¯");
                        printf("\n\n∧__∧\n( ͡° ͜ʖ ͡°)\n⊂　　つcxxxx{}:::vc morreu kk::::>\n(つ ﾉ\n(ノ\n");
                        return 0;
                    }
                    
                }else{
                    printf("\"Eles tem mais medo de mim do que eu deles\", eles disseram,\"Eles não vão me atacar\", eles disseram\n");   
                    printf("\n\n∧__∧\n( ͡° ͜ʖ ͡°)\n⊂　　つcxxxx{}:::vc morreu kk::::>\n(つ ﾉ\n(ノ\n");
                    return 0;
                }
                }
                
            break;
            
            case 3:
                if(pvez[7]==1){
                    printf("Já fez\n");
                }else{
                printf("Você decide ir na casa ao sudeste, chegando lá você se depara com uma bela casa azul, com um belo jardim florido\nEntretanto, para conseguir entregar o jornal, você deve passar pelo portão, e para passar o portão, você deve abrir o portão, e para abrir o portão você deve descobrir um código, e para descobrir o código, você deve resolver diversos quebra-cabeças, e tudo para descobrir que a senha do portão é 123321..\n");
                sleep(1);
                printf("Droga... você pode fingir que não ouviu isso e resolver os quebra-cabeças?\n\n");
                printf("...\n");
                sleep(1);
                printf("Não? Tabém ._.\n\n");
                sleep(1);
                printf("Insira a senha do portão: ");
                scanf("%d", &action);
                while(action!=123321){
                    printf("Tente de novo\n\n");
                    printf("Insira a senha do portão: ");
                    scanf("%d", &action);
                }
                printf("Abrindo o portão e indo até a casa azul para entregar o jornal... você é surpreendido por uma velhinha com uma vassoura que está acusando você de invasão\nO que deseja fazer?\n\n");
                printf("1. Jogar o jornal nela e sair correndo\n2. Tentar explicar que você só está tentando entregar o jornal\nEscolha sua opção: ");
                scanf("%d", &action);
                if(action==1){
                    printf("Essa passou perto, mas você conseguiu escapar, bom trabalho\n\n");
                    pvez[7]=1;
                    entregas++;
                }else{
                    printf("A velhinha te interrompe antes de você fazer qualquer ação, e foi assim que você descobriu que vassorada dói... bastante\n");
                    printf("\n\n∧__∧\n( ͡° ͜ʖ ͡°)\n⊂　　つcxxxx{}:::vc morreu kk::::>\n(つ ﾉ\n(ノ\n");
                    return 0;
                }
                }
            break;
            case 4:
                if(pvez[8]==1){
                    printf("Já fez\n");
                }else{
                printf("Você decide ir na casa ao leste, chegando lá você se depara com uma..... casa?\n"); 
                sleep(2);
                printf("AQUILO NÃO É UM CASA, ESTÁ MAIS PARA UM CASTELO, UM FORTE SUPER BEM PROTEGIDO COM DIVERSAS ARMADILHAS E UM POÇO COM JACARÉS\n");
                sleep(3);
                printf("*cof cof*, desculpa, continuando,\nVocê sente que está talvez seje a aventura definitiva, com tragédia, descobertas, mistério e...\nparece que é seu dia de sorte, o dono da residência está ali perto, eba... tchau aventura :')\n");
                sleep(1);
                printf("Você entrega o jornal\n\n");
                pvez[8]=1;
                entregas++;
                }
            break;
        }
    }
    printf("Você entregou todos os jornais, agora resta voltar para casa do Gusman\n\n");
    karma += 20;
    printf("Após chegar a casa de Gusman você pergunta se existia algum lugar que você ia com certa frequência. Gusman sem enrolar responde a sua pergunta\n");
    }
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  }else{
    printf("\nVocê pergunta se existia algum lugar que você ia com certa frequência.\nGusman hesita em responder, ainda com medo de você.\n1. Perguntar novamente com educação\n2. Forçá-lo a responder e tratá-lo com desdém.\n");
    printf("Escolha sua opção: ");
    scanf("%d", &action);
  
    if(action == 1){
      printf("\n");
      karma += 5;
    }else{
      karma -= 5;
      printf("\nGusman está assustado! mas ");
    }
  }
    printf("Gusman lhe conta que você passava muito tempo em um lugar específico. Era um galpão, ele mostrou em seu mapa onde era e você decidiu ir até lá.\n");
    sleep(1);
    printf("\n...\n");
    sleep(1);
    printf("A primeira coisa que você vê ao chegar ao tal galpão, é outro monstro! Ele é muito parecido com você, mas você consegue ser ainda mais assustador.\nIsso te faz pensar, será que é da sua família? Mas como podem não perseguir vocês monstros pela cidade?\nSua cabeça não para de girar e as indagações começam. Você sente que deveria entrar no galpão, mas ao mesmo tempo, está com um mal pressentimento, e aquilo está te matando. O que deseja fazer?\n1. Entrar no galpão\n2. Não entrar no galpão\n");
    printf("Escolha sua opção: ");
    scanf("%d", &action);

    if(action == 1){
    //////////////////////////////////historia com 4 finais////////////////////////////////////////////////
      printf("\nVocê decide entrar no galpão, e quando o monstro te vê, corre direto em sua direção. Ele parece feliz em te ver, mas por que? Você se questiona. O monstro te abraça e diz:\n\nMonstro: A quanto tempo João mão no bolso! você sumiu do nada.\n\n(Espera? do que ele te chamou? Fala sério desenvolvedores!)Você se espanta com esse nome, João mão no bolso? Como alguém poderia se chamar assim, você indaga consigo mesmo.\nComo deseja reagir a isso?\n1. Empurrar o monstro.\n2. Tentar afastá-lo de mancinho.\n");
      printf("Escolha sua opção: ");
      scanf("%d", &action);
      if(action == 1){
        karma -= 5;
      }else{
        karma += 5;
      }
      printf("O monstro percebeu que você está confuso. Então diz:\n\nMonstro: Está tudo bem João mão no bolso?\n\n(Sério isso? É mesmo esse o nome do personagem?) Você confuso, pergunta ao monstro qual é o seu nome,então ele diz:\n\nMonstro: você sabe que eu não posso revelar meu nome verdadeiro... Mas como somos família, lhe contarei!\n");
      sleep(2);
      printf("\n...\n");
      printf("Meu nomé é...\n");
      sleep(1);
      printf("*Barulho estrondoso de trem passando*\n╰╮┏┳┳┳┓┏┳┳┳┳┓\n┏┻╋╋┻┻┫┣┻╋╋┻┫\n┗ⓞ┻┻━ⓞ┻┻ⓞ┻┻▄ ▄");
      sleep(3);
      printf("\n\nTrens aqui? Você se questiona, já que estamos no meio do mato no século XV(15).\nO monstro sorriu para você como se você tivesse entendido tudo, e disse:\n\nMonstro: vamos lá João mão no bolso! vamos trabalhar!\n\n\"Então é por isso que eu passava tanto tempo aqui! o bom e velho trabalho excessivo por mixaria.\" Você pensou. Mas claro que para trabalhar, você precisaria saber qual o seu emprego! Então você disse:\n\nJoão mão no bolso: Qual é nossa função?\n\nMonstro: Como assim João mão no bolso? Somos Agiotas!\n\nNeste momento, foi como se sua ficha finalmente tivesse caido! E você percebeu que é você quem tira proveito dos mais pobres e não o contrário.\n\nMas vida que segue, vai trabalhar!\nQual sua próxima ação?\n1. Sair desesperadamente do galpão, afinal, ser agiota é errado.\n2. hehehe vamo trabaiá!\n3. Explorar galpão atrás de pistas sobre você.\n");
      printf("Escolha uma opção: ");
      
      scanf("%d", &action);
      printf("\n");

      if(action == 1){
        printf("Você saiu correndo o mais rápido que podia daquele lugar. Afinal, como você poderia cometer tamanha maldade contra os mais vulneráveis nessa sociedade em que vivemos? pensou. (A sociedade ela...)\n\n");
        karma += 5;
      /////////////////////////////missao kasma ble///////////////////////////////////////
      }else if (action == 2){
        printf("Você segue seu amigo monstro até sua mesa, lá estão as fichas de todas as pessoas que estão te devendo e a quantia exata. Qual ficha deseja abrir primeiro?\n");


        while(contratos<6){
          foracasa=false;
          nome[0]='a';
          if(pvez[9] != 1){
            printf("\n1. Jacinta Louvável");
          }else{
            printf("\n1. Feito");
          }
          if(pvez[10] != 1){
          printf("\n2. Antônio Morrendo das Dores");
          }else{
            printf("\n2. Feito");
          }
          if(pvez[11] != 1){
          printf("\n3. Alce Barbuda");
          }else{
            printf("\n3. Feito");
          }
          if(pvez[12] != 1){
          printf("\n4. Gusman Louvável");
          }else{
            printf("\n4. Feito");
          }
          if(pvez[13] != 1){
          printf("\n5. Otávio Bundasseca");
          }else{
            printf("\n5. Feito");
          }
          if(pvez[14] != 1){
          printf("\n6. Jesus Pinto da Luz\n");
          }else{
            printf("\n6. Feito");
          }
          printf("\nEscolha sua opção: ");

        scanf("%d", &action);
        switch(action){
        case 1:
            if(pvez[9]==1){
              printf("Já fez\n");
            }else{
            strcpy(nome, "Jacinta Louvável");
            printf("\nJacinta...? Onde é que você já ouviu esse nome antes, hein jogador?\n");
            sleep(2);
            printf("...\n\n");
            sleep(2);
            printf("J-jogador? não... Eu quis dizer João mão no bolso.\nEnfim, Esse nome não te é familiar?\n\nJoão mão no bolso: Han? Falou comigo narrador? Sim, eu acho bem familiar, mas não me recordo de nada!\n\n");
            sleep(1);
            printf("...\n\nContinuando...\nVocê pegou a ficha da Jacinta Louvável, ela é uma senhorinha local de 78 anos, como consta em sua ficha, sua divída é enorme! Mas não é por ela ser uma senhorinha que você terá dó, afinal, você é um agiota implacável, poderia até criar um site para você com a URL de http://agiotasimplacaveis.com, se esse jogo não fosse do século XV.\n\n");
            printf("┏━──────────────────╮\n┃➲ Jacinta Louvável\n┃━━━━━━━━━━━━\n┃➲ Idade: 78 anos\n┃━━━━━━━━━━━━\n┃➲ Dívida: R$67.000.000,00\n┗━────────────╯\n");
            contratos++;
						foracasa=true;
            pvez[9]=1;
            }
        break;
        case 2:
            if(pvez[10] == 1){
              printf("Você já fez essa missão!\n");
            }else{
            strcpy(nome, "Antônio Morrendo das Dores");
            printf("\nVocê pegou a ficha do Antônio Morrendo das Dores, ele é um moleque local de 15 anos, como consta em sua ficha, sua divída é enorme! 10 reais, mas o suficiente para o agiota bambambam ir atrás dele! Afinal, você é um agiota implacável, poderia até criar um site para você com a URL de http://agiotasimplacaveis.com, se esse jogo não fosse do século XV.\n\n");
            printf("┏━──────────────────╮\n┃➲ Antônio Morrendo das Dores\n┃━━━━━━━━━━━━\n┃➲ Idade: 15 anos\n┃━━━━━━━━━━━━\n┃➲ Dívida: R$10,00\n┗━────────────╯\n");
            contratos++;
            pvez[10]=1;
            }
        break;
        case 3:
            if(pvez[11] == 1){
              printf("Você já fez essa missão!\n");

            }else{
            strcpy(nome, "Alce Barbuda");
            printf("\nVocê pegou a ficha da Alce Barbuda, ela é uma dama local de 28 anos, como consta em sua ficha, sua divída é enorme! Mas não é por ela ser uma dama respeitada na cidade que você terá dó, afinal, você é um agiota implacável, poderia até criar um site para você com a URL de http://agiotasimplacaveis.com, se esse jogo não fosse do século XV.\n\n");
            printf("┏━──────────────────╮\n┃➲ Alce Barbuda\n┃━━━━━━━━━━━━\n┃➲ Idade: 28 anos\n┃━━━━━━━━━━━━\n┃➲ Dívida: R$28.000.000,00\n┗━────────────╯\n");
            contratos++;
            pvez[11]=1;
            }
        break;
        case 4:
            if(pvez[12] == 1){
              printf("Você já fez essa missão!\n");
            }else{
            strcpy(nome, "Gusman Louvável");
            printf("\nVocê pegou a ficha da Gusman Louvável, ele é um vagabundo local de 38 anos, vive apostando dinheiro que não tem e rouba até da própria mãe, que é a dona Jacinta. Boatos que chamaram ele para o Squid Game. Como consta em sua ficha, sua divída é enorme! (Coitado desse homem, deve até os dentes da boca) Mas não é por ele ser um coitado que você terá dó, afinal, você é um agiota implacável, poderia até criar um site para você com a URL de http://agiotasimplacaveis.com, se esse jogo não fosse do século XV.\n\n");
            printf("┏━──────────────────╮\n┃➲ Gusman Louvável\n┃━━━━━━━━━━━━\n┃➲ Idade: 38 anos\n┃━━━━━━━━━━━━\n┃➲ Dívida: R$1000000000000000000000000000000000000000000000000000000(são tantos 0's que nem cabem na folha),00\n┗━────────────╯\n");
            contratos++;
            pvez[12]=1;
            }
        break;
        case 5:
            if(pvez[13] == 1){
              printf("Você já fez essa missão!\n");

            }else{
            strcpy(nome, "Otávio Bundasseca");
            printf("\nVocê pegou a ficha de Otávio Bundasseca, ele é um tio local, de 53 anos, como consta em sua ficha, sua divída é enorme! A família do Sr.Bundasseca é muito temida e respeitada na cidade, tenha cuidado! Mas não é por ele ser um Bundasseca que você terá dó, afinal, você é um agiota implacável, poderia até criar um site para você com a URL de http://agiotasimplacaveis.com, se esse jogo não fosse do século XV.\n\n");
            printf("┏━──────────────────╮\n┃➲ Otávio Bundasseca\n┃━━━━━━━━━━━━\n┃➲ Idade: 53  anos\n┃━━━━━━━━━━━━\n┃➲ Dívida: R$580,00\n┗━────────────╯\n");
            contratos++;
            pvez[13]=1;
            }

        break;
        case 6:
            if(pvez[14] == 1){
              printf("Você já fez essa missão!\n");

            }else{
            strcpy(nome, "Jesus Pinto da Luz");
            printf("\nVocê pegou a ficha da Jesus Pinto de Luz, ele é um bêbado local de 27 anos, como consta em sua ficha, sua divída é enorme!Uma coxinha. Ele fez essa dívida em uma aposta com você, e como você é um agiota profissional, você ganhou a aposta, e agora chegou a hora de cobrar! Mas não é por ele ser um bêbado que você terá dó, afinal, você é um agiota implacável, poderia até criar um site para você com a URL de http://agiotasimplacaveis.com, se esse jogo não fosse do século XV.\n\n");
            printf("┏━──────────────────╮\n┃➲ Jesus Pinto da Luz\n┃━━━━━━━━━━━━\n┃➲ Idade:27  anos\n┃━━━━━━━━━━━━\n┃➲ Dívida: 1 Coxinha,00\n┗━────────────╯\n");
            contratos++;
            pvez[14]=1;
            foracasa=true;
        break;
        default:
            lugar=15;
        break;
            }

        break;
        }
        
        printf("Você guarda a ficha de %s, e vai direto ao abate! Em sua ficha também consta o endereço, então você vai até o local, bate na porta mas ninguém atende. É hora de botar seu agiota interior à ação!\nComo você deseja entrar na residência?\n1. Quebrar a janela com uma pedra\n2. Chutar a porta como nos filmes\n3. Bater palma e gritar: \"ô de casa!\"\n4. Quebrar a janela com um poderoso soco supersonico\n5. Entrar pela chaminé e dizer que o presente de natal chegou\n6. Fazer um buraco na parede com um martelo\n7. Cavar o chão até chegar ao outro lado\n8. Fingir que é o entregador de pizza\n9. Fingir que é o Gusman e que quer entregar um jornal.\nEscolha sua opção: ", nome);
        scanf("%d", &action);
        printf("\n\n");
        if(lugar==15){
          lugar=0;
        }else{
        if(foracasa==true){
          printf("%s acabou esquecendo a porta aberta por engano, sorte sua, eu acho, com isso você invadiu a casa de %s, mas não tinha ninguém em casa. Agora você terá duas missões para realizar. Terá que fuçar a casa de %s e ir atrás do seu devedor pela cidade. Mas tome cuidado! Há muitos ladrões escondidos nesta cidadezinha pacata.\n\n", nome, nome, nome);
          printf("Entrando para checar a redidência de %s, você não consegue achar a quantia que cobre a dívida do seu devedor, mas acha alguns objetos interessantes. Quer roubá-los?\n1. Sim\n2. Não\nEscolha sua opção: ", nome);
          scanf("%d", &action);
          if(action == 1){
            printf("Você pegou joias e um manequim charmoso. Então saiu da residência do seu devedor e começou sua caçada.\n\n");
            karma -= 10;
          }
          printf("Você saiu da residência de seu devedor e começou sua caçada pela cidade.\n\nQual caminho deseja seguir?\n1. Lado norte\n2. Lado sul\n\nEscolha sua opção: ");
          scanf("%d", &action);
          printf("\n\n");
            
            if(action == 1){
              printf("Você decide ir pelo lado norte. É para esse lado que a famosa padaria do seu Joaquim fica, ele é um velho ranzinza que não gosta de forasteiros e está armado.\n");
              sleep(1);
              printf("\nVocê precisa passar pela padaria do seu Joaquim para chegar até o seu devedor. %s está do outro lado da padaria. Qual a sua abordagem?\n1. Tenta entrar na padaria sem ser visto\n2. Entra no maior fuzuê doa quem doer\n", nome);
              printf("Escolha sua opção: ");
              scanf("%d", &action);
              printf("Antes de você fazer qualquer coisa, o velho Joaquim te percebe e chama sua atenção\n\nJoaquim: EI VOCÊ AÍ, você tem cara de esperto, resolve isso aqui pra mim\n\nJoaquim lhe entrega um pedaço de papel com diversos números\n\nJoaquim: Se não...\n\nJoaquim bota a arma na mesa\n\nJoão Mão no Bolso: o.O\n\n");
              do{
                printf("10-2*7+23+6/2-2*0\nReposta da conta: ");
                scanf("%d", &action);    
              }while(action!=22);
              printf("Finalmente respondendo aquela conta matemática aleatória, você corre atrás de %s\n", nome);
            }else{
               printf("Você vai para o lado sul e acaba entrando em um labirinto, mas quando se dá conta a entrada atrás de você fechou\nÉ jogador, vai ter que passar por esse tormento eheh\n");
              do{
          printf("Para qual lado você desje ir?\n");
          printf("1. Esquerda\n2. Frente\n3. Direita\nCaminho escolhido: ");
          scanf("%d", &action);
        if(action==3){
            printf("\nVocê ouve um barulho de sino\n");
            caminho++;
            printf("Para qual lado você desje ir?\n");
            printf("1. Esquerda\n2. Frente\n3. Direita\nCaminho escolhido: ");
            scanf("%d", &action);
            if(action==3){
                printf("\nVocê ouve um barulho de sino\n");
                caminho++;
                printf("Para qual lado você desje ir?\n");
                printf("1. Esquerda\n2. Frente\n3. Direita\nCaminho escolhido: ");
                scanf("%d", &action);
                if(action==1){
                    printf("\nVocê ouve um barulho de sino\n");
                    caminho++;
                    printf("Para qual lado você desje ir?\n");
                    printf("1. Esquerda\n2. Frente\n3. Direita\nCaminho escolhido: ");
                    scanf("%d", &action);
                    if(action==2){
                        printf("\nVocê ouve um barulho de sino\n");
                        caminho++;
                        printf("Para qual lado você desje ir?\n");
                        printf("1. Esquerda\n2. Frente\n3. Direita\nCaminho escolhido: ");
                        scanf("%d", &action);
                        if(action==1){
                            printf("\nVocê ouve um barulho de sino\n");
                            caminho++;
                            printf("Para qual lado você desje ir?\n");
                            printf("1. Esquerda\n2. Frente\n3. Direita\nCaminho escolhido: ");
                            scanf("%d", &action);
                            if(action==3){
                                printf("\nVocê ouve um barulho de sino\n");
                                caminho++;
                                printf("Para qual lado você desje ir?\n");
                                printf("1. Esquerda\n2. Frente\n3. Direita\nCaminho escolhido: ");
                                scanf("%d", &action);
                                if(action==2){
                                    printf("\nVocê ouve um barulho de sino\n");
                                    caminho++;
                                    printf("Para qual lado você desje ir?\n");
                                    printf("1. Esquerda\n2. Frente\n3. Direita\nCaminho escolhido: ");
                                }else{
                                    printf("\nVocê não ouve nada\n");
                                    caminho=0;
                                } 
                            }else{
                                printf("\nVocê não ouve nada\n");
                                caminho=0;
                            }  
                        }else{
                            printf("\nVocê não ouve nada\n");
                            caminho=0;
                        } 
                    }else{
                        printf("\nVocê não ouve nada\n");
                        caminho=0;
                    }  
                }else{
                    printf("\nVocê não ouve nada\n");
                    caminho=0;
                } 
            }else{
                printf("\nVocê não ouve nada\n");
                caminho=0;
            } 
        }else{
            printf("\nVocê não ouve nada\n");
            caminho=0;
        }      
    }while(caminho<7);
    printf("Finalmente depois de sair daquele maldito labirinto, você pode ir atrás de %s\n", nome);         
          }
          printf("\nApós alcançar %s, você o encurra-la, e agora o destino dele está em suas mãos\nO que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ", nome);
          scanf("%d", &action);
          if(action==1){
            printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
          }else{
            printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
          }
        }else{
        switch (action){
          case 1:
            printf("Você coleta a pedra mais próxima da casa de %s, arremessando-a na janela, você cria um rombo na janela, um buraco grande o sufisciente para você passar\n Utilizando esse buraco para invadir a casa, você da de cara com %s", nome, nome);
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
            scanf("%d", &action);
            if(action==1){
              printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
            }else{
              printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
          }
            
          break;

          case 2:
            printf("Inspirado em filmes de ação, você faz uma pose de respeito e mete uma bicuda na porta, a bicuda foi tão linda, que até mesmos os Devs ficaram impressionados, olhando para direita você vê %s boquiaberto e impressionado com sua performance\n", nome);
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
            scanf("%d", &action);
            if(action==1){
              printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
            }else{
              printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
            }

          break;
          
          case 3:
            printf("Você pensa em bater palma e gritar para chamar a atenção de %s\nMas você lembra que é um agiota, e agiotas resolvem as coisas de uma forma incrivel e exagerada,", nome);
            sleep(3);
            printf("Você puxa sua bazuca de confiança e dá um único tiro na porta, abrindo uma enorme cratera, %s está encolhido embaixo da escada de sua casa, assutado com o que aconteceu\n", nome);
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
            scanf("%d", &action);
            if(action==1){
              printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
            }else{
              printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
            }
          break;
          
          case 4:
            printf("Você se sente um protagonista de anime shounem genérioco, e esse sentimento lhe da vontade de mostrar os frutos de seu treinamente\nFazendo uma pose única e exagerada, você prepara seu poderoso ataque: soco supersonico, você dispara sua poderosa técnica na janela enquanto grita desnecessáriamente\nTudo que se vê é pó e estilhaços de vidro pelo ar, um buraco se abriu na janela, mas infelizmente a janela não foi a unica coisa que quebrou, sua mão também :')\nFingindo não ter acontecido nada, você invade a casa de %s e o encontra\n", nome);
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
            scanf("%d", &action);
            if(action==1){
              printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
            }else{
              printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
            }

          break;
          case 5:
            printf("Você sobe o telhado da casa de sua vítima, encontrando uma chaminé perfeita para um agiota noel entrar, uma pena que não vai ter leite e biscoitos para o agiota noel, descendo pela chaminé e encontrando %s você diz\n\nAgiota noel: Por ser uma criança malvada esse ano toma aqui seu carvão\n\nVocê joga um pedaço de carvão em %s\n", nome, nome);
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
            scanf("%d", &action);
            if(action==1){
              printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
            }else{
              printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
            }
         
          break;
          case 6:
            printf("Você normalmente pega um martelo normal e normalmente bate com toda força na parede normal da casa normal de %s, após normalmente entrar na casa normal você vê %s te olhando com uma face normal\n", nome, nome);
            printf("░░░░░░░░░░░░▄▄▄▄▄▄▄▄▄▄▄▄▄░░░░░░░░░░░░\n░░░░░░▄▄████▀▀▀▀▀░░░░░░▀▀█▄▄░░░░░░░░░\n░░░▄██▀▀░░░░░░░░░░░░░░░░░░▀██▄░░░░░░░\n░░▄█▀░░░░░░░░░░░░░░░░░░░░░░░░▀█▄░░░░░\n░██░░░░░░░░░░░░░░░░░░░░░░░░░░░▀█▄░░░░\n██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▀█▄░░░\n██░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄░░▀█░░░\n█░░░░░░░░░░░░░░░░░░░░░░░░░░▀██▄░░██░░\n█░░░░░████░░░░░░░░░░░░░░░░░░░░░░░░█▄░\n█░░░░░▀▀▀█░░░░░░░░░░░░░░░░░░░░░░░░██░\n█░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄█████▀░█▄\n█░░░░░░░░░░▄▄▄▄▄██████▀▀▀▀▀▀░░░░░░░██\n█░░░░▄█████▀▀▀▀▀░▄▄▄████░░░░░░░░░░░██\n██░░░░░░░░░░░░░░░░▀░░░░░░░░░░░░░░░░██\n▀█▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█▀\n░▀█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄█░\n░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██░\n░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄█░░\n░░░░▀██▄░░░░░░░░░░░░░░░░░░░░░░▄▄█▀░░░\n░░░░░░▀██▄░░░░░░░░░░░░░░░░░▄▄█▀░░░░░░\n░░░░░░░░░▀██▄░░░░░░░░░░░▄▄█▀░░░░░░░░░\n░░░░░░░░░░░░▀██▄▄▄▄▄▄▄▄█▀░░░░░░░░░░░░\n░░░░░░░░░░░░░░░░░░█░░░░░░░░░░░░░░░░░░\n░░░░░░░░░░░░░░░░░░█░░░░░░░░░░░░░░░░░░\n░░░░░░░░░░░░░░░░░░█░░░░░░░░░░░░░░░░░░\n░░░░░░░░░░░░░░░░░░█░░░░░░░░░░░░░░░░░░\n░░░░░░░░░░░░░░░░░░█░░░░░░░░░░░░░░░░░░\n░░░░░░░░░░░░░░░░░░█░░░░░░░░░░░░░░░░░░\n\n");
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
            scanf("%d", &action);
            if(action==1){
              printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
            }else{
              printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
            }

          break;
          case 7:
            printf("Invocando mágicamente uma pá, você começa a cavar para chegar até dentro da casa de %s\nNo meio do caminho você acaba achando 3 tesouros incríveis...", nome);
            sleep(3);
            printf("Mas você os abandona, porque você é um agiota super determinado e não aceita distrações\nApós cavar muito, você consegue penetrar nas defesas da base inimiga e já de imediato você enxerga seu alvo\n");
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
            scanf("%d", &action);
            if(action==1){
              printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
            }else{
              printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
            }

          break;
          case 8:
            printf("Ah, um dos clássicos,\n você se veste de entregador de pizza e bate na porta de %s\n%s: Pizza? Mas eu não pedi pizza\nJoão Mãos no Bolso: EU SEI!!!\nVocê joga a caixa de pizza na cara de %s\n", nome, nome, nome);
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
            scanf("%d", &action);
            if(action==1){
              printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
            }else{
              printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
            }

          break;
          case 9:
          //fingindo ser o gusman com o gusman
          if(strcmp(nome, "Gusman Louvável")==0){
            printf("Gusman: Calma ae Gusman, já to chegando\n\nGusman abriu a porta\n\nGusman: Espera um pouquinho..........\n");
            sleep(6);
            printf("Gusman: EU ESQUECI O BOLO DE CARNE NA FORNALHA!!! JÁ VOLTO\nGusman fecha a porta\n");
            sleep(3);
            printf("Gusman abre a porta\nGusman: Desculpe o imprevisto Gusma... Espera um pouco...\n");
            sleep(2);
            printf("Gusman: EU SOU O GUSMAN!!\n\n");
            printf("João mão no bolso: ╭∩╮（︶︿︶）você me descobriu（︶︿︶）╭∩╮\n");
            sleep(1);
            printf("João mão no bolso: Agora passa o dinheiro ︻デ═一\n\nGusman: '0'\n\n");
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
              scanf("%d", &action);
              if(action==1){
                printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
              }else{
                printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
          }
          }else{
            //Não gusman
            printf("Você finje ser o Gusman e bate na porta de sua vítima dizendo ter jornal para entregar\n%s abriu a porta\nJoão Mão no Bolso: Surpresa surpresa", nome);
            printf("O que você decide fazer?\n1. Cobrar o dinheiro\n2. Utilizar seus poderes de agiota >:)\nEscolha sua opção: ");
            scanf("%d", &action);
            if(action==1){
              printf("Você recolhe o dinheiro e deixa %s em estado de falencia\n",nome);
            }else{
              printf("No maior estilo Obito, você absorve %s com a chupada dimensional e o manda para a dimensão do Kamui\n", nome);
            }
          }
          break;
        }
        }
        }
        
        

      
      }
      karma -= 20;
      ///////////////////////////////////////////////////////////////////////////////////////////////
      }else{
        printf("Você decide explorar o galpão atrás de mais pistas. Onde deseja ir primeiro?\n1. Sala de espera\n2. banheiro\n3. Copa\n4. Sua sala\n");
        printf("Escolha sua opção: ");
        scanf("%d", &action);
      ///////////////////////////////////////lugares//////////////////////////////////////////////////
        switch (action) {
          case 1:
          printf("Você decidiu ir à sala de espera. À sua frente tem uma mesa com vários itens perdidos, e ao lado, um sofá para suas vítimas\n");
          sleep(1);
          printf("...\n");
          sleep(2);
          printf("D-digo... Para seus CLIENTES se sentarem. E ao lado do sofá tem uma caixa simples de papelão, repleta de coisas de achados e perdidos.");
          sair=false;
          while(sair!=true){
            printf("\nO que você deseja conferir?\n1. Sofá\n2. Mesa\n3. Caixa\n4. Bancada\n5. Ligar dispositivo estranho que faz barulho\n6. Sair\n");
          sair=false;
          printf("Escolha sua opção: ");
          scanf("%d", &action);
          ////////////////////////itens////////////////////////////////////
          switch(action){
            case 1:
              printf("Você decide checar o sofá, e atrás dele você encontra poeira, nada aqui que valha sua atenção.\n");

            break;

            case 2:
              printf("Você checa a mesa, há um prato de comida fria que está cheirando muito mál ali, você com certeza não quer chegar nem perto\n");
            break;

            case 3:
              printf("Você checa a caixa de papelão, há diversas coisas estranhas, o que você quer ver primeiro?\n1. Palhaço\n2. Pedaço de papel rasgado\n3. Um fundo falso '0'\nEscolha sua opção: ");
              scanf("%d", &action);
              printf("\n\n");
              
              if(action == 1){
                printf("Você nota um treco esquisito dentro da caixa, uma fantasia de palhaço. Ela é bem feia e mórbida.\n\n");
                sleep(1);
                printf("Monstro: Então você achou sua roupa de cobrança? HaHaHaHa, João mão no bolso agora você pode trabalhar e sem mais desculpas!\nJoão Mão no Bolso: Tabom '-'");
              }else if(action ==2){
                printf("Você encontra um pedaço de papel rasgado e nele algo está escrito\n\n╭══════════💜═╮\nPor favor me salve ele esta vindo scr deus\n╰═💜══════════╯\n\nVocê pensa:\"ué\"");
                }else{
                  printf("Você percebe que a caixa tem um fundo falso e então o vasculha. E tudo que você encontra é uma quantia exuberante de dinheiro que por um acaso você cobriria a dívida de todas as pessoas que estão te devendo. ");
                }
           
            break;
            /////////////////////////////////////////////////////////////////////////

            case 4:
              printf("Você checa a bancada em busca de alguma coisa:\n");
              sleep(3);
              printf("Procurando.\n");
              sleep(3);
              printf("Procurando..\n");
              sleep(3);
              printf("Procurando...\n");
              sleep(3);
              printf("Procurando....\n");
              sleep(3);
              printf("Procurando.....\n");
              sleep(3);
              printf("Parabéns, você não encontrou nada\n\n");
             
            break;

            case 5:
              printf("Você nota um dispositivo estranho em cima de uma bancada, tem uma fita colada nele escrito \"RÁDIO\"");
              printf("Você liga o dispositivo\n\"EI EI EI, aqui vamos tocar as melhores música de de 1480\"\n*melhoresde1480.mp4 começa a tocar*\n");
              sleep(7);
              printf("Mas você não escuta nada\n");
              sleep(2);
              printf("\n...\n\n");
              sleep(1);
              printf("É jogador, acho que os devs estão de sacanagem com a sua cara...");
            break;
            case 6:
              sair=true;
            break;
          }
          }
        break;
        
        //locais
        
         case 2:
            printf("Você adentra o banheiro, a primeira coisa que te aborda nesse cenário é um cheiro terrível, mas como o sangue de agiota brabo em suas veias você encara aquele fedor\n");
            sair=false;
            while(sair!=true){
              printf("O que você deseja checar?\n1. Privada\n2. Chuveiro\n3. Gaveta\n4. Espelho\n5. Sair do galpão\n");
              sair=false;
              printf("Escolha sua opção: ");
              scanf("%d", &action);
              switch(action){
                case 1:
                printf("Você encara a privada, em sua cabeça ecoa o pensamento que esta privada teria sido útil em momentos atrás\n");
                if(chavebanhei==false){
                printf("Se aproximando para análiser aquela privada (Não sei porque carambas você faria isso),uma chave chama sua atenção em cima da privada, você instintivamente a pega\n\n");
                chavebanhei=true;
                }else{
                    printf("Realmente, a privada é o item mais sofisticado dentro do banheiro\n");
                };
                break;
                case 2:
                  printf("Você análisa o chuveiro, é um chuveiro simples, cortina básica, esponja daquelas que quase arranca a pele, sabonete mais fedido que seu suvaco, chuveiro com fiação exposta, um banheiro digno de um agiota forte igual a você\n");
                break;
                case 3:
                  printf("Você checa a gaveta, a abrindo você ve alguns itens, algo de seu interesse?\n1. Escova de dentes\n2. Fio dental\n3. A cura para sua amnésia\n4. Papel estranho\nEscolha sua opção: ");
                  scanf("%d", &action);
                  if(action==1){
                    printf("Você olha duas escovas de dentes idênticas uma do lado da outra, você sente pena dos desafortunados que usam aquelas escovas de dentes\n");               
                  }else if(action==2){
                    printf("Você nota um pequeno pacote de fio dental que não foi tocado por anos e, de alguma forma desconhecida, está até criando mofo\n");
                  }else if(action==3){
                    printf("hahaha, só estava brincando com você, nem sonhando você acharia a cura para sua amnésia em uma gaveta de um banheiro aleatório");  
                  }else if(action==4){
                    printf("Coletando e abrindo aquele papel estranho, você lê instruções, mas não faz idéia para que serve:\n\n╭══════════💜═╮\nInstruções para desbloquear o final secreto. LEIA COM ATENÇÃO:\n\n-Desvendar a charada do gnomo\n-Ter o menor karma possível\n-Encontrar a chave do banheiro\nn╰═💜══════════");
                    printf("\n\n\nParece que os devs gostam de ajudar você jogador. Tão te dando de mão beijada assim\n");
                 
                     }
                break;
                case 4:
                  printf("Você encara o espelho, você sente vontade de se elogiar, mas você está com uma aparência monstruosa demais para isso :(\n");
                break;
                case 5:
                  sair=true;
                break;           
                }
          }
          
          break;
          case 3:
            printf("Você decide entrar na Copa e tudo que você encontra são comidas vencidas a mais de 1 ano.");
          break;
         
          case 4:
            printf("Você decide entrar na sua sala, a que você costumava trabalhar. Lá estão suas fichas antigas, das pessoas que você extorquia, aquilo te deu uma sensação esquisita, você não sabe como se sentir com isso. Como você se sente?\n1. Triste e arrependido\n2. kkk eu ganhava muita grana mal vejo a hora de trabalhar de novo\nEscolha sua opção: ");
            scanf("%d", &action);
            printf("\n\n");
            if(action == 1){
              printf("Você demonstra estar arrependido com suas ações passadas. Mas será que isso é suficiente para uma redenção?\n\n\nVeja nos próximos capítulos.\n\n");
              karma += 5;
            }else{
              printf("Você não mudou nada, a vida de agiota talvez te caia bem.\n\n\n");
              karma -= 5;
            }
         
          break;

         
        }


      }
      //dps q sai do galpao    
    
     printf("\nApós sair do galpão, sua cabeça começa a rodar graças ao conjunto dessas lembranças, sua memórias retornam em um flash branco, você se lembra de tudo,\n se lembra quem você era, onde você morava, como vivia, lembra até do seu nome, e ele é...\n");
      sleep(3);  
      if((karma<=-20)&&(chavebanhei == true)&&(characorreta == 1)){
        fr=1;
      }
      if(karma>50){
      	printf("???: Antonio Manso Pacífico de Oliveira Sossegado\n\nVocê vira para trás lentamente, encarando a pessoa que está atrás de você.\n\nAntonio Manso Pacífico de Oliveira Sossegado: Jacinta? O que tu faz aqui mulher?\n\nJacinta: Eu tenho uma revelação a fazer a você meu caro Antonio Manso Pacífico de Oliveira Sossegado. Eu na verdade sou a bruxa que lhe enfeitiçou. Mas não se queixe! Fiz isso para que você pudesse evoluir como pessoa e não cometer os mesmos erros do passado. Te dei uma segunda chance.\n\nAntonio Manso Jacinto de Oliveira Sossegado: Eu entendo dona Bruxa Jacinta, me desculpe por todas as atrocidades que cometi para com você e seu filho Gusman.\n\n");
        sleep(2);
        printf("Parabéns jogador, você escolheu as melhores opções e chegou ao melhor final!\n\n");
      }else if(karma>25){
      	printf("???: Tony Ramos\n\n");
      	printf("Você vira para trás lentamente, encarando a pessoa que está falando atrás de você\n\nTony Ramos: OLá? quem é você?\n");
        sleep(2);
        printf("Bruxa Jacinta: Eu sou a pessoa que te jogou essa maldição\n\nTony Ramos: Dona Jacinta! Eu lembro das atrocidades que cometi com você.\n\nTony Ramos: Mas eu ainda quero ser pago. Cade meu dinheiro?\n\nBruxa Jacinta: Eu lhe joguei esta maldição em você para lhe ensinar uma lição, mas aparentemente funcionou pela metade já que você chegou ao final neutro.\n\n");
        sleep(3);
        printf("...\n\nVocê lembrou de tudo o que ocorreu, lembrou do seu passado, suas mentiras e atrocidades, mas como suas ações ficaram em um meio termo de bom e mau, você viveu o resto de seus dias como o agiota que era, mas dessa vez, se tornou um agiota que não mata pessoas que não lhe pagam.");
        sleep(5);
        printf("\n\n\n\n\nCaro jogador, você chegou ao final neutro, ele se dá pelo seu karma durante a partida.\n");
      }else if(fr!=1){
      	printf("???: João Mão Sem Bolso\n\n");
      	printf("Você vira para trás lentamente, encarando a pessoa que está falando atrás de você\n\nJoão Mão Sem Bolso: Realmente, eu admito, não sou bom com codenomes, já que meu nome de agiota é parecido com meu nome real, mas e você, quem seria?\n");
        sleep(2);
        printf("Bruxa Jacinta: Eu sou a pessoa que te jogou essa maldição\n\nJoão Mão sem Bolso: Ah, sim, eu me lembro de você, você tem uma grande dívida comigo.\n\nJoão Mão Sem Bolso: Não pense que você vai se safar sem me pagar só porque eu perdi as memórias\n\nBruxa: Eu lhe joguei esta maldição em você para lhe ensinar uma lição, mas aparentemente não funcionou\n\n");
        printf("Bruxa Jacinta: Chegou a hora de decidir, meu jovem. DECIDA!\n");
        printf("1. Aceitar quem você é\n2. Insultar a bruxa velha\n");
        
          printf("Escolha sua opção: ");
          scanf("%d", &action);
          
          if(action == 1){
            printf("\n\nVocê optou por aceitar seu passado obscuro e continuar nele. A bruxa velha deve estar de fato muito decepcionada com você. Mesmo te dando uma segunda chance, você a jogou fora e deve tudo isso ao jogador que te controlou esse tempo todo.\n\nJoão Mão Sem Bolso: Então é verdade? vivemos todos em um jogo, e todos aqueles erros na matrix que aconteceram durante toda a minha história eram os devs tirando uma com a minha cara '0'\n\nSim João Mão Sem Bolso. E agora você viverá uma vida de agiotagem para sempre!!!\n\nJoão Mão Sem Bolso: Então é isso, tudo que me resta agora é aceitar e viver com minhas escolhas\n\n");
            sleep(6);
            printf("Decidi mandar uma lembrancinha para o jogador por ser tão malvado!");
            sleep(3);
            printf("Baixando vírus do Agiota…\n█▒▒▒▒▒▒▒▒▒\n");
            sleep(2);
            printf("10%% \n███▒▒▒▒▒▒▒\n");
            sleep(2);
            printf("30%%\n█████▒▒▒▒▒\n");
            sleep(1);
            printf("50%%\n███████▒▒▒\n");
            sleep(1);
            printf("100%%\n██████████\n");
            sleep(1);
            printf("░░░░░░░░███████████████░░░░░░░░\n░░░░░█████████████████████░░░░░\n░░░░████████████████████████░░░\n░░░██████████████████████████░░\n░░█████████████████████████████\n░░███████████▀░░░░░░░░░████████\n░░███████████░░░░░░░░░░░░░░░███\n░████████████░░░░░░░░░░░░░░░░██\n░█░░███████░░░░░░░░░░░▄▄░░░░░██\n█░░░░█████░░░░░░▄███████░░██░░█\n█░░█░░░███░░░░░██▀▀░░░░░░░░██░█\n█░░░█░░░░░░░░░░░░▄██▄░░░░░░░███\n█░░▄█░░░░░░░░░░░░░░░░░░█▀▀█▄░██\n█░░░░░░░░░░░░░░░░░░░░░░█░░░░██░\n░███░░░░░░░░░░░░░░░░░░░█░░░░█░░\n░░█░█░░░░░░░█░░░░░██▀▄░▄██░░░█░\n░░█░█░░░░░░█░░░░░░░░░░░░░░░░░█░\n░░░██░░░░░░█░░░░▄▄▄▄▄▄░░░░░░█░░\n░░░██░░░░░░░█░░█▄▄▄▄░▀▀██░░█░░░\n░░░██░░░░░░░█░░▀████████░░█░░░░\n░░█░░█░░░░░░░█░░▀▄▄▄▄██░░█░░░░░\n░░█░░░█░░░░░░░█░░░░░░░░░█░░░░░░\n░█░░░░░█░░░░░░░░░░░░░░░░█░░░░░░\n░░░░░░░░█░░░░░░█░░░░░░░░█░░░░░░\n░░░░░░░░░░░░░░░░████████░░░░░░░ O vírus do Agiota foi baixado no seu computador!\n");
          }else{
            printf("Você insulta a velha Bruxa e ela se assuata com tamanha audácia, na hora da raiva e decepção, ela te mata.\n\n\n\n∧__∧\n( ͡° ͜ʖ ͡°)\n⊂　　つcxxxx{}:::vc morreu kk::::>\n(つ ﾉ\n(ノ\n");
          }
      }
      if(fr==1){
            printf("???: Bob o construtor\n\n");
      	    printf("Você vira para trás lentamente, encarando a pessoa que está falando atrás de você\n\nBob o construtor: Realmente, eu admito, eu sou ótimo com codenomes, já que meu nome real ultrapassa o mais de 8000 no valor zoeira. Quem é você?\n");
            sleep(2);
            printf("Bruxa Jacinta: Eu sou a pessoa que te jogou essa maldição\n\nBob o construtor: Ah sim, eu me lembro de você, você tem uma grande dívida comigo, agora me de o os diamantes que você me deve no minecraft.\n\nBob o construtor: Não pense que você vai se safar sem me pagar só porque eu perdi as memórias\n\nBruxa Jacinta: Eu lhe joguei esta maldição para lhe ensinar uma lição, mas aparentemente não funcionou\n\nAgora você está fadado à vida de agiotagem.\n\n\n");
            sleep(3);
            printf("Anos se passaram e você se juntou à gangue dos carecas. Agora, além de agiota, você também faz parte de uma gangue. Sua vida ficou ainda pior do que já era, seu karma apenas acumulou com o passar dos anos, e uma hora ou outra ele teria que voltar para te cobrar!\n");
            sleep(3);
            printf("Bob o construtor: Espera aí narrador, estou apurado, preciso ir ao banheiro. Um minutinho.\n\n\n");
            sleep(10);
            printf("Já fazem cinco horas que ele não volta, será que está tudo bem com ele, jogador?\n\nÉ melhor eu conferir...\n\n");
            sleep(3);
            printf("...\n\n");
            sleep(3);
            printf("Jogador, o Bob o construtor morreu. Ele escorregou em um sabonete no banheiro e bateu a cabeça.\nÉ... O karma sempre volta pra assombrar.\n\n\n\n");
            
            printf("░░░░░░░░███████████████░░░░░░░░\n░░░░░█████████████████████░░░░░\n░░░░████████████████████████░░░\n░░░██████████████████████████░░\n░░█████████████████████████████\n░░███████████▀░░░░░░░░░████████\n░░███████████░░░░░░░░░░░░░░░███\n░████████████░░░░░░░░░░░░░░░░██\n░█░░███████░░░░░░░░░░░▄▄░░░░░██\n█░░░░█████░░░░░░▄███████░░██░░█\n█░░█░░░███░░░░░██▀▀░░░░░░░░██░█\n█░░░█░░░░░░░░░░░░▄██▄░░░░░░░███\n█░░▄█░░░░░░░░░░░░░░░░░░█▀▀█▄░██\n█░░░░░░░░░░░░░░░░░░░░░░█░░░░██░\n░███░░░░░░░░░░░░░░░░░░░█░░░░█░░\n░░█░█░░░░░░░█░░░░░██▀▄░▄██░░░█░\n░░█░█░░░░░░█░░░░░░░░░░░░░░░░░█░\n░░░██░░░░░░█░░░░▄▄▄▄▄▄░░░░░░█░░\n░░░██░░░░░░░█░░█▄▄▄▄░▀▀██░░█░░░\n░░░██░░░░░░░█░░▀████████░░█░░░░\n░░█░░█░░░░░░░█░░▀▄▄▄▄██░░█░░░░░\n░░█░░░█░░░░░░░█░░░░░░░░░█░░░░░░\n░█░░░░░█░░░░░░░░░░░░░░░░█░░░░░░\n░░░░░░░░█░░░░░░█░░░░░░░░█░░░░░░\n░░░░░░░░░░░░░░░░████████░░░░░░░ Você morreu kk\n");
      }
    }else{
      //história com 1 final neutro
      printf("Em um momento de indecisão você acabou optando em não entrar naquele galpão, dando meia volta e começando a andar, para onde? Eu não sei, você não sabe, nem os Devs devem saber, mas você continuou andando sem olhar para trás, com medo da verdade.\n\n");
      sleep(2);
      printf("Anos se passaram e você ainda não conseguia tirar aquele galpão da cabeça, você poderia ir visita-lo agora, mas ele já foi fechado, demolido, e construíram um loja de sapatos em cima, e mesmo depois de todos esses anos, você ainda questiona se sua escolha naquele passado distante foi sábia ou não.\n");
      sleep(2);
      printf("Mas isso não importa mais, você continuou sua vida, adotou o nome Amado Bastista e agora é dono de uma loja de sapatos, isso mesmo, a mesma loja de sapatos que falei anteriormente, os negocios não andam muito bem, mas é o sufisciente para sobreviver\n");
      sleep(2);
      printf("Falando em negócios, uma cliente nova adentrou sua loja\n\nCliente Misteriosa: Então é isso? Sr... Amado Bastista? Que nomezinho cafona\n\nAmado Bastista: Me desculpe madame, mas meu nome não é cafona, e o que você quis dizer com \"então é isso?\"\n");
      sleep(5);
      printf("Cliente Misteriosa: Quando eu joguei esta maldição em você, eu não esperava que você apenas abandonasse tudo e fosse viver uma vida de sapateiro\n\nAmado Batista: Maldição? Então foi você quem fez eu perder as memórias e virar um monstro?\n\nBruxa: Sim, fui eu, e aparentemente você está se dando melhor do que eu pensava\n\nAmado Batista: Sim, demorou muitos anos para eu perceber que eu não tinha virado um monstro, apenas me via como um, e por isso, ninguém tem medo de mim, para eles eu sou apenas uma pessoa normal, mas por algum motivo alguns ainda possuem esse medo.\n");
      sleep(7);
      printf("Bruxa: Sabe... tinha tanta história interessante que você descobriria naquele galpão... informações sobre seu pássado...Seria bom se tivesse uma forma de voltar no tempo, fazer tudo de novo, escolher outras opções... neh\n");
      sleep(2);
      printf("Bruxa: Mas fazer o que né... a vida é assim... parabéns pelo seu final super produzido e trabalhado, eu até sei que seu karma é %d, mas esse valor não significa nada graças a esse final ¯\\_(ツ)_/¯\n", karma);
      printf("[FINAL NEUTRO OBSCURO]");
      }

      sleep(15);

///creditos
  printf("\n\n\n==============\n\n");
  printf("(V)\n(. .)\nc(”)(”) ");
  printf("Jogo realizado por:\n\nGiovanna Thaís Pfleger Mendes.\nLuís Eduardo Zordan.\n\n\n==============\n\nAgradecimentos especiais:\na você jogador, por ter jogado nosso jogo\n\n\n==============\n\n\nSe você curtiu nosso jogo, vota na gente! :)");
  return 0;
}
  
 
