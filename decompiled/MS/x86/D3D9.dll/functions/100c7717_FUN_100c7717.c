/*
 * FUN_100c7717 at 100c7717
 * undefined __thiscall FUN_100c7717(void * this, int param_1)
 * Address ranges: 100c7717-100c77a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c7717(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 8) * 0x16c0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      piVar1 = *(int **)(param_1 + 0xd7c + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        FUN_100bdcba(this,piVar1);
        *(undefined4 *)(param_1 + 0xd7c + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  FUN_100b9fca(*(void **)(iVar2 + 0x1c98 + (int)this),*(int **)(param_1 + 0xd84),2,(int *)0x0,0,0);
  FUN_100b9fca(*(void **)(iVar2 + 0x1c9c + (int)this),*(int **)(param_1 + 0xd88),2,(int *)0x0,0,0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

