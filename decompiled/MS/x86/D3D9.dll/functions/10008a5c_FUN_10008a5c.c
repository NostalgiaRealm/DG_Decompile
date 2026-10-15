/*
 * FUN_10008a5c at 10008a5c
 * undefined __thiscall FUN_10008a5c(void * this, uint param_1, char param_2)
 * Address ranges: 10008a5c-10008ae2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008a5c(void *this,uint param_1,char param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  
  uVar3 = 0;
  bVar5 = param_1 == 0;
  if (!bVar5) {
    for (; (param_1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  while (!bVar5) {
    pbVar2 = (byte *)((int)&param_1 + ((int)uVar3 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
    iVar1 = *(int *)((int)this + (uVar3 & 0xff) * 4 + 26000);
    if ((*(int **)(iVar1 + 0x44) != (int *)0x0) && ((*(uint *)(iVar1 + 0x34) & 0x200) != 0)) {
      (**(code **)(**(int **)(iVar1 + 0x44) + 0xc))(0,1,iVar1 + 0xc);
    }
    uVar3 = 0;
    bVar5 = param_1 == 0;
    if (!bVar5) {
      for (; (param_1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  if (param_2 != '\0') {
    iVar1 = *(int *)((int)this + 0x658c);
    if ((*(int **)(iVar1 + 0x40) != (int *)0x0) && ((*(uint *)(iVar1 + 0x34) & 0x200) != 0)) {
      pcVar4 = (char *)(*(int *)(iVar1 + 0x2c) + -0x66a4);
      if (*(int *)(iVar1 + 0x2c) == 0) {
        pcVar4 = &DAT_00000010;
      }
      if (*pcVar4 != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x40) + 0xc))(0,1,iVar1 + 0xc);
      }
    }
  }
  return;
}

