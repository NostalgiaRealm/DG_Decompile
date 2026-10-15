/*
 * FUN_1000cefd at 1000cefd
 * undefined __thiscall FUN_1000cefd(void * this, int param_1)
 * Address ranges: 1000cefd-1000cf54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000cefd(void *this,int param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x589c) == 0) {
    FUN_10016bad(this,param_1);
  }
  else {
    pcVar1 = *(char **)(*(int *)((int)this + 0x589c) + 4);
    uVar3 = 0;
    uVar2 = 2;
    if (*pcVar1 == '\0') {
      uVar2 = 0;
    }
    uVar4 = uVar2 | 4;
    if (pcVar1[1] == '\0') {
      uVar4 = uVar2;
    }
    do {
      if (pcVar1[uVar3 + 0x2a] != '\0') {
        uVar4 = uVar4 | 8 << ((byte)uVar3 & 0x1f);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
    FUN_10016a8c(this,param_1,uVar4);
  }
  return;
}

