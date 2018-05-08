#ifndef BLOCO_H
#define BLOCO_H
#include <allegro5/allegro.h>
#include <allegro5/allegro5.h>

class BLOCO{
    
    public:
        
	BLOCO();
        void set(int,int);
	void desenhaBloco();	
        //int get_BLOCO();
	void carregaBloco();
        ~BLOCO();

    
    private:
	
	int x, y;
	ALLEGRO_BITMAP *bloco;
        int block;

};
#endif
