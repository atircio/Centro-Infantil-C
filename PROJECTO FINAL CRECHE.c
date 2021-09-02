//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//					Nome:    At�rcio Matias

					// password: 1

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


	#include<stdio.h>				
	#include<stdlib.h>					
	#include<string.h>					 
	#include<conio.h>					


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 	void menu();					
	void Cadastrar();					
	void Horario();						
	void Pesquisar();					
	void Eliminar();					
	void Folha();						
	void Relatorio();					
	void Desenvolvedor();				
	void Invalida();					
	void Listagem();					
	void Saida ();						
	void Entrada ();					
	void ES();							
	void sair();						

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
		// vaiaveis de Controlo:
	
		int op1,op11,op3,op5,opP,opT2,opF,opE2,opc2,opc3,opES,opc,opE,op8,opEn1,opEn2;	
		int senha,S=3,inf,F,M,z;
		int alergicos,mensalidade=11000;
		int cnt=0;
		int dados, dados2;	
		
		// Variaveis de controlo que v�o alterar a linha da estrutura
		int a,t, b=0,m,k;
		
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------		

	 struct creche{
	
  		// variaveis de Controlo na struct:
  		int AL,sexo,ale, total_pagar,opT;
  		
		//variaveis do tipo vetores:
  		int  n[100],emg,ocupado,entrada,saida;
  		
  		char nome[100],morada[100],n_pai[100],n_mae[100], transporte[20];
  	 	char nome_funcionario[16],data[10];
  	 	char hora_e[100], hora_s[100];
  	 	char nome_trouxe[100], nome_buscar[100], ALER[200];
		
};
 struct creche c[50]; 
        
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------       
	 main(){
	
		setlocale(LC_ALL,"Portuguese");

			//Boas Vindas Utilizador:
			system("color 1F");
	printf("\n\n\n\n\n");
	printf("\n________________________________________________________________________________________________________________________________________________________________________");
	printf("\n________________________________________________________________________________________________________________________________________________________________________");
	printf("\n________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t        SEJA BEM-VINDO \n\n\n\t\t\t\t\t\t\t\t\t        __CRECHE ITLS__");
    printf("\n________________________________________________________________________________________________________________________________________________________________________");
	printf("\n________________________________________________________________________________________________________________________________________________________________________");
	printf("\n________________________________________________________________________________________________________________________________________________________________________");
	printf("\n\n\n\n\n\n\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA CONTINUAR");
	getch();
		
		//Lendo o enunciado pude perceber que a maioria dos Utilizadores seriam Funcion�rios da CRECHE ITLS 
		// Por isso decide criar uma senha para que s� os funcion�rios possam ter acesso ao PROGRAMA
					 
				;
	SENHA:
			system("cls");
			printf("\n\n\t\t TENTATIVAS:[%d]",S);
			printf("\n\n\n\tINSIRA A SENHA:");
			scanf("%d",& senha);
			
			if(senha==1){	//A senha � 1	
				menu();
			}
			if(S==1){
			system("cls");
			printf("\n\n\t\t ESGOTOU O N�MERO DE TENTATIVAS");
			printf("\n\n\n\t\t\t O PROGRAMA VAI TERMINAR QUANDO APERTAR QUALQUEL TECLA");
			getch();
			sair();	
			}
			
			
			 if(senha!=1){	
				 S--;
			system("cls");
			printf("\n\n\t\t SENHA INCORRECTA");
			printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA TENTAR NOVAMENTE");
			getch();
			goto SENHA;
			
			}	
}	
	 
//______MENU de Op��es______________________________________________________________________________________________________________________________________________________________________

	
	void menu(){
	

						system("cls");
						printf("\n\n________________________________________________________________________________________________________________________________________________________________________");

						system("color 1F");
						printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t  _MENU DE OP��ES_\n\n\n\n\n");
						
					
  						
  						
	printf("\t\t\t\t ___________________________________________________________________________________________________________\n");
	printf("\t\t\t\t|          |                                                                                                |\n");
	printf("\t\t\t\t|     1    |                                       CADASTRAR BEB�                                           |\n");
	printf("\t\t\t\t|          |________________________________________________________________________________________________|\n");
	printf("\t\t\t\t|          |                                                                                                |\n");
	printf("\t\t\t\t|     2    |                                      HOR�RIO & PRE�ARIO                                        |\n");
	printf("\t\t\t\t|          |________________________________________________________________________________________________|\n");
	printf("\t\t\t\t|          |                                                                                                |\n");
	printf("\t\t\t\t|     3    |                                      LOCALIZAR CADASTRO                                        |\n");
	printf("\t\t\t\t|          |________________________________________________________________________________________________|\n");
	printf("\t\t\t\t|          |                                                                                                |\n");
	printf("\t\t\t\t|     4    |                                      ELIMINAR CADASTRO                                         |\n");
	printf("\t\t\t\t|          |________________________________________________________________________________________________|\n");
	printf("\t\t\t\t|          |                                                                                                |\n");
	printf("\t\t\t\t|     5    |                                        FOLHA DO DIA                                            |\n");
	printf("\t\t\t\t|          |________________________________________________________________________________________________|\n");
	printf("\t\t\t\t|          |                                                                                                |\n");
	printf("\t\t\t\t|     6    |                                      RELAT�RIO DA CRECHE                                       |\n");
	printf("\t\t\t\t|          |________________________________________________________________________________________________|\n");
	printf("\t\t\t\t|          |                                                                                                |\n");
	printf("\t\t\t\t|     7    |                           INFORMA��ES DO PROGRAMA & DESENVOLVEDOR                              |\n");
	printf("\t\t\t\t|          |________________________________________________________________________________________________|\n");
	printf("\t\t\t\t|          |                                                                                                |\n");
	printf("\t\t\t\t|     8    |                                        LISTAR CADASTROS                                        |\n");	
	printf("\t\t\t\t|          |________________________________________________________________________________________________|\n");
	printf("\t\t\t\t|          |                                                                                                |\n");
	printf("\t\t\t\t|     0    |                                              SAIR                                              |\n");
	printf("\t\t\t\t|__________|________________________________________________________________________________________________|\n");
	
						printf("\n\t\t\t\t\t\t\t\t\t\t\t   ");
						scanf("%d",& op1);
	
//______________________________________________________________________________________________________________________________________________________________________
		
					if(op1==1){
					Cadastrar();	
					}
//______________________________________________________________________________________________________________________________________________________________________
	
					if(op1==2){
					Horario();
					}
		
//______________________________________________________________________________________________________________________________________________________________________
			
					if(op1==3){
					Pesquisar();
					}
		
//______________________________________________________________________________________________________________________________________________________________________
		
					if(op1==4){
					Eliminar();
					}
		
//______________________________________________________________________________________________________________________________________________________________________
			
					if(op1==5){
					Folha();
					}
		
//______________________________________________________________________________________________________________________________________________________________________
		
					if(op1==6){
					Relatorio();
					}
		
//______________________________________________________________________________________________________________________________________________________________________
	
					if(op1==7){
					Desenvolvedor();
					}
		
//______________________________________________________________________________________________________________________________________________________________________

					if(op1==0){
					sair();
					}
					
//______________________________________________________________________________________________________________________________________________________________________

					if(op1==8){
					 Listagem();
					}
//______________________________________________________________________________________________________________________________________________________________________
	
					if((op1<0) || (op1>8)){ 
				 	Invalida();
					}	
//______________________________________________________________________________________________________________________________________________________________________
}


void Cadastrar(){
	
	//CADASTRAMENTO:
			
			
			system("cls");
			
			do{
			
					a++;		//Incrementa a variavel de controlo da struct
		 			b++;
		 			
					system("cls");
					printf("\n\n\t\t\t  INICIANDO CADASTRO N�:[%d]",a);
			
			
					printf("\n\n\t\t Insira o nome do Beb�:");
					fflush(stdin);
					gets(c[a].nome);
					printf("\n________________________________________________________________________________________________________________________________________________________________________");
					
					printf("\n\n\t\tEXEMPLO: DD/MM/AA:");
					printf("\n\t\t Insira a Data de Nascimento:__");
					fflush(stdin);
					gets(c[a].data);
					printf("\n________________________________________________________________________________________________________________________________________________________________________");
					
					SEXO:
						system("cls");
					printf("\n\n\t\tEXEMPLO: [1]Masculino ou [2]Femenino");
					printf("\n\n\t\t Insira o Sexo do Beb�:");
					scanf("%d", & c[a].sexo );
					if( c[a].sexo==1 ){
						M++;// quantidade de meninos
					}
					if( c[a].sexo==2 ){
						F++; // quantidade de meninas
					}
					
						
					if(c[a].sexo >2 || c[a].sexo <1){
					system("cls");
					printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
					printf("\n\n\t\tOP��O INV�LIDA");
					printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA TENTAR NOVAMENTE");
					getch();
					goto SEXO;
			}
					printf("\n________________________________________________________________________________________________________________________________________________________________________");
					printf("\n\n\t\tInsira a sua morada:");
					scanf("%s", & c[a].morada );
					printf("\n________________________________________________________________________________________________________________________________________________________________________");
					
					c[a].ocupado=1;	// Permite saber se o cadastramento foi feito em que linha da estrutura
					
					printf("\n\n\t\t Insira o nome do Pai:");
					fflush(stdin);
					gets(c[a].n_pai);
					printf("\n________________________________________________________________________________________________________________________________________________________________________");
					
					printf("\n\n\t\t Insira o nome da M�e:");
					fflush(stdin);
					gets(c[a].n_mae);
					printf("\n________________________________________________________________________________________________________________________________________________________________________");
					
					system("cls");
					printf("\n\n\t\tCaso haja alguma Emerg�ncia deixe o Contacto de Emerg�ncia");
					printf("\n\n\t\t Insira o Contacto de Emerg�ncia:");
					scanf("%d", & c[a].emg);
					
						Alergia:
					system("cls");
					printf("\n________________________________________________________________________________________________________________________________________________________________________");

					printf("\n\n\t\t\t\t\t\t\t\t\t O B�BE TEM ALERGIAS?  ");
					printf("\n\n\n\t\t[1]SIM \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t[0]N�O\n\t\t\t\t\t\t\t\t\t\t    ");
					scanf("%d", & c[a].ale);
					
					if(c[a].ale >1 || c[a].ale <0){
					system("cls");
		    		printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
                	printf("\n\n\t\tOP��O INV�LIDA");
					printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA TENTAR NOVAMENTE");
					getch();
					goto Alergia;
					}	
			
					if(c[a].ale==1){
						alergicos++; // quantidade de Alergicos
						c[a].AL=1;
						
						system("cls");
						printf("\n\n\t\t Insira Detalhadamente:");
						fflush(stdin);
						gets(c[a].ALER);
					}
					
					if(c[a].ale==0){
						c[a].AL=0;
					}
					
					transporte:
					system("cls");
					printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
					printf("\n\n\t\t\t\t\t\t\t\t\t DESEJA PAGAR O TRANSPORTE?");
					printf("\n\n\t\t [1]SIM \t\t\t\t\t\t\t\t\t\t\t\t\t\t [0]N�O\n\t\t\t\t\t\t\t\t\t\t   ");
					scanf("%d", & c[a].opT);
					
										if(c[a].opT >1 || c[a].opT <0){
										system("cls");
										printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
	                                	printf("\n\n\t\tOP��O INV�LIDA");
										printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA TENTAR NOVAMENTE");
										getch();
										goto transporte;
										}
									
							if(c[a].opT==0){
								c[a].total_pagar=mensalidade;
								goto processo;
							}
							
							if(c[a].opT==1){
								cnt++;// Quantidade de beb�s no transporte
								tp:
						system("cls");
						printf("\n\n\n\t\t\t\t\t\t\t\t\t\tTABELA DOE PRE�OS\n");
						printf("\n\t\t\t\t\t\t\t*---------------*-------------*--------------*--------------*");
						printf("\n\t\t\t\t\t\t\t|   MENSALIDADE |                TRANSPORTE                 |");
						printf("\n\t\t\t\t\t\t\t*---------------*-------------*--------------*--------------*");
						printf("\n\t\t\t\t\t\t\t|               |   1-ZANGO   |    2-VILA    |   3-KIKUXI   |");
						printf("\n\t\t\t\t\t\t\t*    11.000kz   *-------------*--------------*--------------*");
						printf("\n\t\t\t\t\t\t\t|               |    5000kz   |     6500kz   |     6500kz   |");
						printf("\n\t\t\t\t\t\t\t*---------------*-------------*--------------*--------------*");
						
						printf("\n\n\t O TRANSPORTE FUCIONA EM RELA��O AS ZONAS NA TABELA ACIMA\n\n ");


						printf("\n________________________________________________________________________________________________________________________________________________________________________");						
						printf("\n\n\t\t\t\t\t\t\t\t\t\t QUAL � A SUA ZONA?");
						printf("\n\n\n\t\t\t\t\t[1]ZANGO\t\t\t\t\t[2]VILA\t\t\t\t\t[3]KIKUXI");
						printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t   ");
						scanf("%d", & opT2);
						
						if(opT2==1){
							
							c[a].total_pagar=mensalidade+5000;	
						}
						
						if(opT2==2){
							
							c[a].total_pagar=mensalidade+6500;	
						}
						
						if(opT2==3){
							
							c[a].total_pagar=mensalidade+6500;	
						}
						
						if((opT2<1) || (opT2>3)){
						system("cls");
					    printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
			 			printf("\n\n\t\tOP��O INV�LIDA");
			 			printf("\n\n\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR ");
			 			getch();
			 			goto tp;
						}
								
							}
							
						processo:
						system("cls");
						printf("\n\t\t*--------------------------*");
						printf("\n\t\t|   TOTAL A PAGAR: %dkz |", c[a].total_pagar);
						printf("\n\t\t*--------------------------*");

								
						printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
						printf("\n\n\t\t\t\t\t\t\t\t\t O SEU N� DE PROCESSO �:___ [%d]",a);
														
						//Condi��o que permitira que o ciclo se repita
						printf("\n\n\n\n\t\t [1] CADASTRAR NOVAMENTE \t\t\t\t\t\t\t\t\t\t\t\t [0] MENU\n\n\t\t\t\t\t\t\t\t\t\t ::_");
						scanf("%d", & op11);
					
						if(op11>1 || op11<0){
						system("cls");
						printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
		                printf("\n\n\t\tOP��O INV�LIDA");
						printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA TENTAR NOVAMENTE");
						getch();
						goto processo;
						}
				
						if(op11==0){
							 menu();
						}
					
							
					}while(op11==1);
					
																
}

//______________________________________________________________________________________________________________________________________________________________________________________________


	void Horario(){
	system("cls");
			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");

			printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tTABELA DO HOR�RIO\n");
	printf("\n\t\t\t\t\t\t  *---------------*-------------*--------------*--------------*-------------*");
	printf("\n\t\t\t\t\t\t  |Segunda-Feira  | Terca-Feira | Quarta-Feira | Quinta-Feira | Sexta-Feira |");
	printf("\n\t\t\t\t\t\t  *---------------*-------------*--------------*--------------*-------------*");
	printf("\n\t\t\t\t\t\t  |  7h00-13h00   |  7h00-13h00 |  7h00-13h00  |  7h00-13h00  |  7h00-13h00 |");
	printf("\n\t\t\t\t\t\t  *---------------*-------------*--------------*--------------*-------------*");
	printf("\n\t\t\t\t\t\t  | 13h00-18h00   | 13h00-18h00 | 13h00-18h00  | 13h00-18h00  | 13h00-18h00 |");
	printf("\n\t\t\t\t\t\t  *---------------*-------------*--------------*--------------*-------------*\n\n");
	
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\tTABELA DOE PRE�OS\n");
	printf("\n\t\t\t\t\t\t\t*---------------*-------------*--------------*--------------*");
	printf("\n\t\t\t\t\t\t\t|   MENALIDADE  |                TRANSPORTE                 |");
	printf("\n\t\t\t\t\t\t\t*---------------*-------------*--------------*--------------*");
	printf("\n\t\t\t\t\t\t\t|               |    ZANGO    |     VILA     |     KIKUXI   |");
	printf("\n\t\t\t\t\t\t\t*    11.000kz   *-------------*--------------*--------------*");
	printf("\n\t\t\t\t\t\t\t|               |    5000kz   |     6500kz   |     6500kz   |");
	printf("\n\t\t\t\t\t\t\t*---------------*-------------*--------------*--------------*");
	
	printf("\n\n\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR AO _MENU_");
	


		getch();
			 menu();
			
	
}

//_______________________________________________________________________________________________________________________________________________________________________________________________________


	void Pesquisar(){
		
			//Pesquisa:
						
							EL0:
			system("cls");
			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");

			printf("\n\n\t\t\t\t\t\t\t\t\tDESEJA LOCALIZAR O CADASTRO?");
			printf("\n\n\n\t\t [1]SIM\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t[0]N�O");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t   ");
			scanf("%d", & opP);
			
			if(opP>1 || opP<0){
			system("cls");
			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
			printf("\n\n\t\t\t\tOP��O INV�LIDA");
			printf("\n\n\n\t\t\tPOR FAVOR:\n\n\t\tPRESSIONE _ENTER_ PARA TENTAR NOVAMENTE");
			getch();
			goto EL0;

				
			}
			if(opP==0){
				menu();
			}
			if(opP==1){
					
				
							EL2:
							system("cls");
							printf("\n\n\t\t INSIRA O N� DE PROCESSO:");
							printf("\n\n\n\n\t\t::_");
								scanf("%d", & t);

								
								if(c[t].ocupado==1){  // Permite saber se j� foi feito algum cadastro se sim os dados iram ser apresentados
									
									system("cls");
									
					printf("\n\n\t\t\t\t\t\t\t\t\t\t  PROCESSO N� [%d]",t);
					
					printf("\n\n\t\t\t\t DADOS DO BEB� :");
					printf("\n\n\t\t NOME:__%s",  c[t].nome);
					
					printf("\n\n\t\t DATA DE NASCIMENTO:__%s" , c[t].data );
						
					if(c[t].sexo==1){
					printf("\n\n\t\t SEXO: MASCULINO");	}
					
					if(c[t].sexo==2){
						printf("\n\n\t\t SEXO: FEMENINO");	
					}
					
					printf("\n\n\t\t MORADA:__%s",c[t].morada);
					
					printf("\n\n\t\t NOME DO PAI:__%s",c[t].n_pai);
					
					printf("\n\n\t\t NOME DA M�E:__%s",c[t].n_mae);
					
					printf("\n\n\t\t CONTACTO DE EMERG�NCIA:__ %d",c[t].emg);
							
					if(c[t].AL==1){
					printf("\n\n\t\t ALERGIA: %s",c[t].ALER);	
					}
					if(c[t].AL==0){
					printf("\n\n\t\t ALERGIA: N�O � ALERGICO");	
					}		
					printf("\n\n\t\t TOTAL do PAGAMENTO %dkz", c[t].total_pagar);
			
					printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tPOR FAVOR:\n\n \t\t\t\t\t\t\t\t\t\t\t\t\t\tPRESSIONE _ENTER_ PARA CONTINUAR");
		
								getch();
								goto L1;
	
							}
							if(c[t].ocupado==0){ // caso n�o for feito nenhum cadastro na linha t  da struct c 
								ocupado0:
								system("cls");
							printf("\n\n\t\t CADASTRO INEXISTENTE");
							printf("\n\n\n\n\t\t [1] LOCALIZAR NOVAMENTE \t\t\t\t\t\t\t\t\t\t\t\t [0] MENU\n\n\t\t\t\t\t\t\t\t\t\t    ");
							scanf("%d", & op5);
							
										if(op5==1){
											goto EL2;
										}
										if(op5==0){
											menu();
										}
										if((op1<0) || (op1>1)){
											system("cls");
											printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
											printf("\n\n\t\tOP��O INV�LIDA");
											printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
											getch();
											goto ocupado0;

										}
									
							
							}
										}
										L1:
							          system("cls");
				printf("\n\n\n\n\t\t [1] LOCALIZAR NOVAMENTE \t\t\t\t\t\t\t\t\t\t\t\t [0] MENU\n\n\t\t\t\t\t\t\t\t\t\t    ");
										scanf("%d", & op3);
										if(op3==1){
											goto EL2;
										}
										if(op3==0){
											menu();
										}
										if((op3<0) || (op3>1)){
										system("cls");
										printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
										printf("\n\n\t\tOP��O INV�LIDA");
										printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
										getch();
										goto L1;
									}
	
	}

//___________________________________________________________________________________________________________________________________________________________________________________________________________________
		

	void Desenvolvedor(){
			// Informa��es do Programa e do Desenvolvedor
			system("cls");
			printf("\n\n\n________________________________________________________________________________________________________________________________________________________________________");
			printf("\n\n\n________________________________________________________________________________________________________________________________________________________________________");
			printf("\n\n\n________________________________________________________________________________________________________________________________________________________________________");
			printf("\n\n\n\t\t\t Este Programa � o Projecto do Curso de Gest�o de Redes e Sistemas Inform�ticos do INSTITUTO T�CNICO LUCR�CIO DOS SANTSOS__");
			printf("\n\n\t\t\t Objectivo: Tem como principal objectivo simular a Gest�o de uma Creche__ ");
			printf("\n\n\n\n\t\t\t\t\t\t\t[1]Voltar\t\t [2]Desenvolvedor\t\t [3] Sair\n\n\t\t\t\t\t\t\t\t\t\t    ");
			scanf("%d", & inf );
			
				  if(inf==1){
				  	 menu();
				  }
				  if(inf==2){
				  	system("cls");
				  	printf("\n________________________________________________________________________________________________________________________________________________________________________");
				  	printf("\t\t\t\t\t\t\t\t\t\t_DESENVOLVEDOR_");
				  	printf("\n________________________________________________________________________________________________________________________________________________________________________");
					printf("\n\n\n\t\t\tPROGRAMADOR:");
				  	printf("\n\n\t\t\tAt�rcio Avelino Matias ------> Estudante do ITLS do Curso Gest�o de Redes e Sistemas Inform�ticos");
				  	printf("\n________________________________________________________________________________________________________________________________________________________________________");
				  	printf("\n\n\n\t\t\t_PRESSIONE ENTER PARA VOLTAR AO MENU_");
					getchar();
				  	system("pause");
				  	// pedir ajuda no alvaro para usar o getchar
				  	 menu();
				  	
				  }
				  if(inf==3){
				  	system("cls");
				  	sair();
				  }
				  
				  if ((inf!=1) && (inf!=2) && (inf!=3 )){
				  	 Invalida();
				  }
				 
	}
	
//__________________________________________________________________________________________________________________________________________________________________________________________________________
	
	
	void Invalida(){
			Invalida:
			system("cls");
			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
			printf("\n\n\t\t\t\t\t\t\t\t\t\tOP��O INV�LIDA");
			printf("\n\n\n\n\t\t [1] VOLTAR AO MENU \t\t\t\t\t\t\t\t\t\t\t\t [0] SAIR\n\n\t\t\t\t\t\t\t\t\t\t    ");

			scanf("%d", & op8);
			
				if(op8==1){
				 menu();
				}
				
				if(op8==0){
					system("cls");
					sair();
				}
					    
				if( (op8!=1)&&(op8!=0) ){
					system("cls");
					printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
					printf("\n\n\t\tOp��o Inav�lida");
					getchar();
					goto Invalida;
					
				}		
		
	}

//_________________________________________________________________________________________________________________________________________________________________________________________________________

	void Eliminar(){
		EL1:
				system("cls");
				printf("\n\n________________________________________________________________________________________________________________________________________________________________________");

				printf("\n\n\t\t\t\t\t\t\t\t\tDESEJA ELIMINAR O CADASTRO?");
				printf("\n\n\n\t\t [1]SIM\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t[0]N�O");
				printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t   ");;
				scanf("%d", & opE);
				
				if(opE>1 || opE<0){
					system("cls");
					printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
					printf("\n\n\t\tOP��O INV�LIDA");
					printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA TENTAR NOVAMENTE");
					getch();
					goto EL1;
				
				}
				
				if(opE==0){
					menu();
				}
				
				if(opE==1){
				el1:
				system("cls");
				printf("\n\n\t\t INSIRA O N� DE PROCESS0:");
				printf("\n\n\n\n\t\t::_");
				scanf("%d", & t);
									
				if(c[t].ocupado==1){
					c[t].ocupado=0;
					b--;
					
//______________________________________________________________________________________________________________________________________________________________________________________________________________________________---								
								
				if(c[t].ale==1){
					alergicos--;	
				}
//______________________________________________________________________________________________________________________________________________________________________________________________________________________________
		
				if( c[t].sexo==2 ){
				    F--;
				}
//______________________________________________________________________________________________________________________________________________________________________________________________________________________________
									
				else{
		        	M--;
				}
		//______________________________________________________________________________________________________________________________________________________________________________________________________________________________
												
				if(c[t].opT==1){
					cnt--;
				}
//______________________________________________________________________________________________________________________________________________________________________________________________________________________________
						
				if(c[t].ocupado==0){	
								
					printf("\n\n\t\t O CADASTRO FOI ELIMINADO COM SUCESSO");
					printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR AO MENU");
					getch();
				}
							
							}
				else{
				system("cls");
				El2:
				printf("\n\n\t\t CADASTRO INEXISTENTE");
				printf("\n\n\n\t\t [1]TENTAR NOVAMENTE\t\t\t\t\t\t\t\t\t[0]VOLTAR AO MENU");
				printf("\n\n\n\n\t\t   ");
				scanf("%d", & opE2);
				
				if(opE2==1){
				goto el1;	
				}
				
				if(opE2==0){
				menu();	
				}
				
				if(opE2>1 || opE2<0){
					system("cls");
				printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
				printf("\n\n\t\tOP��O INV�LIDA");
				printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA TENTAR NOVAMENTE");
				getch();
				goto El2;
					}
	}
	menu();
	}
}
	
//_________________________________________________________________________________________________________________________________________________________________________________________________________________________________


	void Entrada(){
		
			
			m=0;
		
			e1:
			system("cls");
			printf("\n\n\t\t INSIRA O N� DE PROCESSO:");
			scanf("%d", & m);
			
			if(c[m].entrada==1){  // Verifica se j� foi feito algum registo com a varialvel m , verifica se o usuario est� a cadastrar novamente na mesma linha
			system("cls");
			e2:
			printf("\n\n\n\t\t ERRO: J� FOI FEITO UM REGISTRO DE ENTRADA HOJE COM ESSE MESMO NUMERO DE PROCESSO");
			printf("\n\n\n\n\t\t [1] INSERIR NOVAMENTE \t\t\t\t\t\t\t\t\t\t\t\t [0] MENU\n\n\t\t\t\t\t\t\t\t\t\t    ");
			scanf("%d", & opc);
				
			if(opc==1){
				goto e1;
				}
			if(opc==0){
				menu();
				}
	
										if((opc<0) || (opc>1)){ // caso a opc�o n�o for entre 0 � 1 
										system("cls");
										printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
										printf("\n\n\t\tOP��O INV�LIDA");
										printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
										getch();
										goto e2;
										}
									

		}
		
			if(c[m].ocupado==0){ // verifica se j� foi inicialmente foi feito algum cadastro na linha m
			system("cls");
			h1:
			printf("\n\n\t\t\t\t\t\tCADASTRO INEXISTENTE\n\n\n\n\t\t\t\t DESEJA INSERIR NOVEMENTE");
			printf("\n\n\t\t [1]SIM \t\t\t\t\t\t\t\t\t\t\t\t\t\t [0]N�O\n\n\t\t\t\t\t\t\t\t\t\t    ");
			scanf("%d", & opEn1 );
			
					if((opEn1<0) || (opEn1>1)){
						system("cls");
						printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
						printf("\n\n\t\tOP��O INV�LIDA");
						printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
						getch();
						goto h1;
				 	
					}
					
				if(opEn1==1){
					goto e1;
				}
				if(opEn1==0){
					menu();
				}
					
		}
				
		if(c[m].ocupado==1){  // verifica se j� foi inicialmente foi feito algum cadastro na linha m pk n�o � possivel fazer o registo sem ter o n� de processo
		q:	
		printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t  PROCESSO N� [%d]",m);
		printf("\n\n\t\t NOME:__%s",  c[m].nome);
		printf("\n\n\t\t DATA DE NASCIMENTO:__%s" , c[m].data );
		printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
		
		printf("\n\n\n\n\t\t\t\t\t\t\t\t\t OS DADOS CORRESPONDEM?");
		printf("\n\n\t\t [1]SIM \t\t\t\t\t\t\t\t\t\t\t\t\t\t [0]N�O\n\n\t\t\t\t\t\t\t\t\t\t    ");
		scanf("%d", & dados);
			
				if((dados<0) || (dados>1)){
						system("cls");
						printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
						printf("\n\n\t\tOP��O INV�LIDA");
						printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
						getch();
						goto q;
				 	
					}
			
			if(dados == 1 ){
			system("cls");
			printf("\n\n\t\t NOME DO BEB�: %s", c[m].nome);
			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
			printf("\n\n\t\t\t\t\t\t\t\t\t\t  REGISTRO SENDO FEITO NO PROCESSO N� [%d]",m);
		
			printf("\n\n\t\t INSIRA A HORA EM QUE TROUXE");
			printf("\n\t\t EX: 6h30 ");
			printf("\n\t\t::_");
			fflush(stdin);
			gets(c[m].hora_e);
		
			printf("\n\n\t\t INSIRA O NOME DE QUEM TROUXE");
			printf("\n\t\t::_");
			fflush(stdin);
			gets(c[m].nome_trouxe);
		
			c[m].entrada=1; // permirira saber se j� foi feito algum registo de entrada na linha m
		
	}
			w:
			if(dados == 0){
			system("cls");
			printf("\n\n\n\n\t\t [1] INSERIR NOVAMENTE \t\t\t\t\t\t\t\t\t\t\t\t [0] MENU\n\n\t\t\t\t\t\t\t\t\t\t    ");
			scanf("%d", & opEn2);
			
				if((opEn2<0) || (opEn2>1)){
						system("cls");
						printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
						printf("\n\n\t\tOP��O INV�LIDA");
						printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
						getch();
						goto w;
				 	
					}
			
			if(opEn2==1){
				goto e1;
			}
			if(opEn2==0){
				menu();
			}
			
	}
			
			menu();
	
}
}

//_____________________________________________________________________________________________________________________________________________________________________________________________________

	void Saida(){
		
			m=0;
			system("cls");
			A1:
			system("cls");
			printf("\n\n\t\t INSIRA O N� DE PROCESSO:");
			scanf("%d", & m);
			
			if(c[m].saida==1){ // Verifica se j� foi feito algum registo com a varialvel m , verifica se o usuario est� a cadastrar novamente na mesma linha
			system("cls");
			e2:
			printf("\n\n\n\t\t ERRO: J� FOI FEITO UM REGISTRO DE ENTRADA HOJE COM ESSE MESMO NUMERO DE PROCESSO");
			printf("\n\n\n\n\t\t [1] INSERIR NOVAMENTE \t\t\t\t\t\t\t\t\t\t\t\t [0] MENU\n\n\t\t\t\t\t\t\t\t\t\t    ");
			scanf("%d", & opc3);
				
			if(opc3==1){
				goto A1;
				}
			if(opc3==0){
				menu();
				}
	
										if((opc3<0) || (opc3>1)){
											hj:
										system("cls");
										printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
										printf("\n\n\t\tOP��O INV�LIDA");
										printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
										getch();
										goto hj;
										}
									

		}
		
			if(c[m].entrada==0){ // verifica se j� foi feito algum registo de entrada, porque n�o se pode fazer um registo de  
									// saida sem antes fazer o de entrada
			A2:
			printf("\n\n\n\t\t ERRO: AINDA N�O FOI FEITO UM REGISTRO DE ENTRADA COM ESSE N� DE PROCESSO");
			printf("\n\n\n\n\t\t [1] INSERIR NOVAMENTE \t\t\t\t\t\t\t\t\t\t\t\t [0] MENU\n\n\t\t\t\t\t\t\t\t\t\t    ");
			scanf("%d", & opc2);
				
			if(opc2==1){
				goto A1;
			}
			if(opc2==0){
				menu();
			}
			
										if((opc2<0) || (opc2>1)){
										system("cls");
										printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
										printf("\n\n\t\tOP��O INV�LIDA");
										printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
										getch();
										goto A2;
									}
			}
			
			
		if(c[m].ocupado==1){// verifica se j� foi inicialmente foi feito algum cadastro na linha m pk n�o � possivel fazer o registo sem ter o n� de processo
			
	
		mn:
		system("cls");
		printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t  PROCESSO N� [%d]",m);
					
		
		printf("\n\n\t\t NOME:__%s",  c[m].nome);			
		printf("\n\n\t\t DATA DE NASCIMENTO:__%s" , c[m].data );
		printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
		
		
		printf("\n\n\t\t\t\t\t\t\t\t\t OS DADOS CORRESPONDEM?");
		printf("\n\n\t\t [1]SIM \t\t\t\t\t\t\t\t\t\t\t\t\t\t [0]N�O\n\n\t\t\t\t\t\t\t\t\t\t");
		scanf("%d", & dados2);
		
			if((dados2<0) || (dados2>1)){
						system("cls");
						printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
						printf("\n\n\t\tOP��O INV�LIDA");
						printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
						getch();
						goto mn;
				 	
					}
			
		if (dados2 == 1){
				if(dados2 == 1 ){
			system("cls");
			printf("\n\n\t\t NOME DO BEB�: %s", c[m].nome);
			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
			printf("\n\n\t\t\t\t\t\t\t\t\t\t  REGISTRO SENDO FEITO NO PROCESSO N� [%d]",m);
		
			printf("\n\n\t\tINSIRA A HORA EM QUE VEIO BUSCAR:");
			printf("\n\t\t EX: 18h30 ");
			printf("\n\t\t::_");
			fflush(stdin);
			gets(c[m].hora_s);
		
			printf("\n\n\t\tINSIRA O NOME DE QUEM VEIO BUSCAR ");
			printf("\n\t\t::_");
			fflush(stdin);
			gets(c[m].nome_buscar);	
		
			c[m].saida=1; // permirira saber se j� foi feito algum registo na linha m
		}
			
			menu();
	
	}
}
}

//___________________________________________________________________________________________________________________________________________________________________________________________________________


	void Folha(){
		D:
		system("cls");
		printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
		printf("\n\n\n\t\t     [1]REGISTAR ENTRADA\t\t\t\t\t[2]EXIBIR \t\t\t\t\t[3]REGISTAR SA�DA \n\n\n\n\t\t\t\t\t\t\t\t\t\t[0]VOLTAR\n\n\t\t\t\t\t\t\t\t\t\t    ");
		scanf("%d", & opF);
		
		if(opF==1){
			Entrada();
		}
		
		if(opF==2){
		ES();
		}
		
		if(opF==3){
			Saida();
		}
		
		if(opF==0){
			menu();
		}
		
									if((opF<0) || (opF>3)){
										system("cls");
										printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
	                                	printf("\n\n\t\tOP��O INV�LIDA");
										printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA TENTAR NOVAMENTE");
										getch();
										goto D;
									}
			
		}
		
	


	void Relatorio(){
		system("cls");
		printf("\n\n\t\t\t\t\t\t\t\t\tRELAT�RIO\n");
		printf("\n________________________________________________________________________________________________________________________________________________________________________\n\n\n");
		
		printf("\n\t\t\t\t\t\t*-----------------------------------------------*----------*");
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t| QUANTIDADE DE BEB�S:                          |   [%d]    | ",b);
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t*-----------------------------------------------*----------*");
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t| QUANTIDADE DE MENINOS:                        |   [%d]    | ",M);
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t*-----------------------------------------------*----------*");	
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t| QUATIDADE DE MENINAS:                         |   [%d]    | ",F);
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t*-----------------------------------------------*----------*");	
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t| QUANTIDADE DE CRIAN�AS NO TRANSPORTE:         |   [%d]    | ",cnt);
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t*-----------------------------------------------*----------*");	
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t| QUANTIDADE DE ALERGICOS:                      |   [%d]    | ",alergicos);
		printf("\n\t\t\t\t\t\t|                                               |          |");
		printf("\n\t\t\t\t\t\t*-----------------------------------------------*----------*");		
		
		
		printf("\n\n\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR AO _MENU_");
		getch();
		menu();
}

//______________________________________________________________________________________________________________________________________________________________________________________________

	void Listagem(){
	z=0;
	system("cls");
	printf("\n\n\t    N� DE PROCESSO -------------------------------------------------: NOME");
	do{
	
		
	z++;
	if(c[z].ocupado==1){

	printf("\n\n\t\t [%d]--------------------------------------------------------: %s",z,c[z].nome);
	}
	
	}while(z<=50);
	
	if(c[z].ocupado==0){
		printf("\n\n\n\n\t\t PRESSIONE ENTER PARA VOLTAR AO MENU");
		getch();
		menu(); 
	}
}
 
 //______________________________________________________________________________________________________________________________________________________________________

 
	void ES(){
 	
 	
 	T:
	 		system("cls");
 			printf("\n\n\n\n\t\t [1] EXIBIR REGISTRO DE ENTRADA \t\t\t\t\t\t\t\t\t [2] EXIBIR REGISTRO DE SA�DA\n\t\t\t\t\t\t\t\t\t\t [0]MENU\n\n\n\t\t\t\t\t\t\t\t\t\t    ");
 			scanf("%d", & opES);
 			
 			if(opES==0){
 				menu();
 			}
 			
 			
 										if((opES<0) || (opES>2)){ // caso a opc�o n�o for entre 0 � 2 
										system("cls");
										printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
										printf("\n\n\t\tOP��O INV�LIDA");
										printf("\n\n\n\tPOR FAVOR:\n\n \t\tPRESSIONE _ENTER_ PARA VOLTAR");
										getch();
										goto T;
										}
 	
	 		if(opES==1){
 			k=0;
 			system("cls"); 
			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
 			printf("\n\n\t\t INSIRA O N� DE PROCESSO:");
 			scanf("%d", & k);
 		
 			if(c[k].entrada==1){// verifica se foi feito o registo de entrada
			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");	
 			printf("\n\n\t\t HORA EM QUE CHEGOU: %s",c[k].hora_e);
			printf("\n\n\t\t QUEM TROUXE: %s",c[k].nome_trouxe);
			getch();
			goto T;
	
		 }
		 
		 	if(c[k].entrada==0){ // caso n�o for feito o registo de entrada
		 	system("cls");
		 	printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
		 	printf("\n\n\t\t\t\t\t REGISTRO INEXISTENTE");
		 	printf("\n\n\n\t\t\t PRESSIONE ENTER PARA VOLTAR");
		 	getch();
		 	goto T;
		 }
		 
}



		 
 			if(opES==2){	
 			k=0;
 			system("cls");
 			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
 			printf("\n\n\t\t INSIRA O N� DE PROCESSO:");
 			scanf("%d", & k);
 			system("cls");
 			
 			if(c[k].saida==1){ // verifica se foi feito o registo de saida
 			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
 			printf("\n\n\t\tHORA EM QUE SAIU: %s",c[k].hora_e);
			printf("\n\n\t\t QUEM VEIO A BUSCA: %s",c[k].nome_trouxe);
			getch();
			goto T;
 	}
 	
 			if(c[k].saida==0){	// caso n�o for feito o registo de entrada
		 	system("cls");
			printf("\n\n________________________________________________________________________________________________________________________________________________________________________");
		 	printf("\n\n\t\t\t\t\t REGISTRO INEXISTENTE");
		 	printf("\n\n\n\t\t\t PRESSIONE ENTER PARA VOLTAR");
		 	getch();
		 	goto T;
		 }		
}
}

//______________________________________________________________________________________________________________________________________________________________________

	void sair(){
	system("cls");
	exit(0);
}

