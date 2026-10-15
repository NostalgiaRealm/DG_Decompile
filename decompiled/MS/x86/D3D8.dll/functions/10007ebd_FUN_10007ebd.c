/*
 * FUN_10007ebd at 10007ebd
 * undefined __thiscall FUN_10007ebd(void * this, uint param_1, char param_2)
 * Address ranges: 10007ebd-10007f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007ebd(void *this,uint param_1,char param_2)

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
    iVar1 = *(int *)((int)this + (uVar3 & 0xff) * 4 + 0x57bc);
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
    iVar1 = *(int *)((int)this + 0x57b8);
    if ((*(int **)(iVar1 + 0x40) != (int *)0x0) && ((*(uint *)(iVar1 + 0x34) & 0x200) != 0)) {
      pcVar4 = (char *)(*(int *)(iVar1 + 0x2c) + -0x58d0);
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

