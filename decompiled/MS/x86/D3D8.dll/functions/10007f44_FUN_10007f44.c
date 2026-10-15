/*
 * FUN_10007f44 at 10007f44
 * undefined __thiscall FUN_10007f44(void * this, uint param_1, char param_2)
 * Address ranges: 10007f44-10007fba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007f44(void *this,uint param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  
  uVar4 = 0;
  bVar6 = param_1 == 0;
  if (!bVar6) {
    for (; (param_1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  while (!bVar6) {
    pbVar3 = (byte *)((int)&param_1 + ((int)uVar4 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
    iVar1 = *(int *)((int)this + (uVar4 & 0xff) * 4 + 0x57bc);
    piVar2 = *(int **)(iVar1 + 0x44);
    if ((piVar2 != (int *)0x0) && ((*(uint *)(iVar1 + 0x34) & 0x200) != 0)) {
      (**(code **)(*piVar2 + 0x10))();
    }
    uVar4 = 0;
    bVar6 = param_1 == 0;
    if (!bVar6) {
      for (; (param_1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  if (param_2 != '\0') {
    iVar1 = *(int *)((int)this + 0x57b8);
    if ((*(int **)(iVar1 + 0x40) != (int *)0x0) && ((*(uint *)(iVar1 + 0x34) & 0x200) != 0)) {
      pcVar5 = (char *)(*(int *)(iVar1 + 0x2c) + -0x58d0);
      if (*(int *)(iVar1 + 0x2c) == 0) {
        pcVar5 = &DAT_00000010;
      }
      if (*pcVar5 != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x40) + 0x10))();
      }
    }
  }
  return;
}

