#include <stdio.h>
#define tam 501
int main(){
    int cont, v[tam][tam], l, c, i, j, d=0, t=0, r=0, a, b, s=0;
    scanf("%d %d", &l, &c);
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d", &v[i][j]);
        }
    }
    while((r<l || t<c)&&s!=1){
        for(i=r;i<l&&s!=1;i++){
            cont=0;
            for(j=t;j<c&& s!=1;j++){
                if(v[i][j]!=0){
                    r=i;
                    t=j; 
                    cont++;
                    j=c;
                    i=l;
                }
            }
            if(cont==0){ 
                for(a=r;a<l&&s!=1;a++){
                    for(b=0;b<c&&s!=1;b++){
                        if(v[a][b]!=0){
                            printf("N\n");
                            d=1;
                            s=1;
                        }
                    }
                }
                s=1;
            }   
        }
        for(i=r;i<l && s!=1;i++){
            for(j=0;(j<t+1) && (s!=1);j++){
                if(v[i][j]!=0 && (i!=r||j!=t)){
                    printf("N\n");d=1;s=1;
                }   
            }
        }
        r++;
        t++;
    }
    if(d==0)printf("S\n");
	return 0;
}







