
// OPENPIPE FINGERING TABLES
// FILE AUTOMATICALLY GENERATED USING fingerings.py
// DO NOT EDIT BY HAND

    
// GAITA GALEGA
const char fingering_name_0[]={"GAITA GALEGA"};
const unsigned long fingering_table_0[]={
	71,72,48,
	0x80FFFEFF, 0x00000000,
	0x80FEFEFF, 0x01000000,
	0x80FDFEFF, 0x02000000,
	0x80FCFEFF, 0x03000000,
	0x80FAFEFF, 0x04000000,
	0x80F8FEFE, 0x80FBFEFF, 0x05000000,
	0x80F0FEF8, 0x80F6FEFE, 0x06000000,
	0x80E8FEFB, 0x80EFFEFF, 0x07000000,
	0x80E0FEF8, 0x80EEFEFF, 0x08000000,
	0x80D0FEF0, 0x09000000,
	0x80C0FEF0, 0x0A000000,
	0x80A0FEF0, 0x0B000000,
	0x8080FEF0, 0x807FFEFF, 0x80BFFEFF, 0x0C000000,
	0x8000FEF0, 0x807EFEFF, 0x80B0FEF1, 0x0D000000,
	0x807DFEFF, 0x0E000000,
	0x807CFEFF, 0x0F000000,
	0x807AFEFF, 0x10000000,
	0x8078FEFE, 0x807BFEFF, 0x11000000,
	0x8070FEF8, 0x12000000,
	0x8068FEFB, 0x806FFEFF, 0x13000000,
	0x8060FEF8, 0x806EFEFF, 0x14000000,
	0x8050FEF0, 0x15000000,
	0x8040FEF0, 0x16000000,
	0x8020FEF0, 0x17000000,
	0x803FFEFF, 0x18000000,
	0x803EFEFF, 0x19000000,
	0xFFFFFFFF
};
    
// GAITA ASTURIANA
const char fingering_name_1[]={"GAITA ASTURIANA"};
const unsigned long fingering_table_1[]={
	71,72,48,
	0x80FFFEFF, 0x00000000,
	0x80FEFEFF, 0x01000000,
	0x80FDFEFF, 0x02000000,
	0x80FCFEFF, 0x03000000,
	0x80F8FEFF, 0x04000000,
	0x80FAFEFF, 0x05000000,
	0x80F6FEFF, 0x06000000,
	0x80F7FEFF, 0x07000000,
	0x80EEFEFF, 0x80EAFEFF, 0x80E6FEFF, 0x08000000,
	0x80C6FEFF, 0x09000000,
	0x80CEFEFF, 0x80CFFEFF, 0x0A000000,
	0x808EFEFF, 0x0B000000,
	0x804EFEFF, 0x80BFFEFF, 0x807FFEFF, 0x0C000000,
	0x807EFEFF, 0x80BEFEFF, 0x0D000000,
	0x8036FEFF, 0x0E000000,
	0x807CFEFF, 0x80BCFEFF, 0x0F000000,
	0x8078FEFF, 0x10000000,
	0x807AFEFF, 0x11000000,
	0x8076FEFF, 0x12000000,
	0xFFFFFFFF
};
    
// GREAT HIGHLAND BAGPIPE
const char fingering_name_2[]={"GREAT HIGHLAND BAGPIPE"};
const unsigned long fingering_table_2[]={
	67,69,57,
	0x80FFFEFF, 0x00000000,
	0x80FEFEFF, 0x02000000,
	0x80FCFEFF, 0x04000000,
	0x80F9FEFF, 0x80F8FEFC, 0x05000000,
	0x80F1FEFF, 0x80F0FEFC, 0x07000000,
	0x80EEFEFF, 0x80E0FEF0, 0x09000000,
	0x80CEFEFF, 0x80C0FEF0, 0x0A000000,
	0x808EFEFF, 0x8080FEF0, 0x0C000000,
	0x800EFEFF, 0x8000FEF0, 0x0E000000,
	0xFFFFFFFF
};
    
// UILLEANN PIPE
const char fingering_name_3[]={"UILLEANN PIPE"};
const unsigned long fingering_table_3[]={
	62,62,0,
	0x80FFFEFF, 0x00000000,
	0x80FCFEFF, 0x02000000,
	0x80FBFEFF, 0x04000000,
	0x80F3FEFF, 0x05000000,
	0x80EFFEFF, 0x07000000,
	0x80CFFEFF, 0x09000000,
	0x80BBFEFF, 0x0A000000,
	0x80BFFEFF, 0x0B000000,
	0x807FFEFF, 0x0C000000,
	0xFFFFFFFF
};
    
// SACKPIPA
const char fingering_name_4[]={"SACKPIPA"};
const unsigned long fingering_table_4[]={
	62,63,45,
	0x80FFFEFF, 0x00000000,
	0x80FEFEFF, 0x02000000,
	0x80FCFEFF, 0x04000000,
	0x80FAFEFE, 0x05000000,
	0x80F8FEFC, 0x06000000,
	0x80F0FEF0, 0x07000000,
	0x80E0FEF0, 0x09000000,
	0x80C0FEE0, 0x0A000000,
	0x80A0FEF0, 0x0B000000,
	0x8080FEC0, 0x0D000000,
	0x8000FEC0, 0x0F000000,
	0xFFFFFFFF
};

#define FINGERING_GAITA_GALEGA 0
#define FINGERING_GAITA_ASTURIANA 1
#define FINGERING_GREAT_HIGHLAND_BAGPIPE 2
#define FINGERING_UILLEANN_PIPE 3
#define FINGERING_SACKPIPA 4


typedef struct{
    char* name;
    unsigned long* table;
}fingering_t;

#define TOTAL_FINGERINGS 5
const fingering_t fingerings[TOTAL_FINGERINGS]={
	{(char*)fingering_name_0, (unsigned long*)fingering_table_0},
	{(char*)fingering_name_1, (unsigned long*)fingering_table_1},
	{(char*)fingering_name_2, (unsigned long*)fingering_table_2},
	{(char*)fingering_name_3, (unsigned long*)fingering_table_3},
	{(char*)fingering_name_4, (unsigned long*)fingering_table_4},
};