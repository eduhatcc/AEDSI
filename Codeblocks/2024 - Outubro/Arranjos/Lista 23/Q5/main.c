void cavalo(int vetor[])
{

   for(int i=0;i<5;i++)
   {
       printf("\nDigite o %d.o numero:\n",i+1);
       scanf("%d",&vetor[i]);
    }
    int menor = 0;
    for(int i=1; i<5; i++)
    {
        if(vetor[i]< vetor[menor])
        {
           menor= i;
        }
    }

        int temp=vetor[0];
        vetor[0]=vetor[menor];
        vetor[menor]=temp;


   printf("\n O menor numero eh:\n%d",vetor[0] );
   for(int i=0;i<=4;i++)
   {
    printf("\nO %d.o numero eh:\n%d",i+1,vetor[i]);
   }
}
int main()
{
    int vetor[5];
    cavalo(vetor);
    return 0;
}
