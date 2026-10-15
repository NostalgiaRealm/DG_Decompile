/*
 * FUN_1004ccea at 1004ccea
 * undefined __thiscall FUN_1004ccea(void * this, int param_1)
 * Address ranges: 1004ccea-1004cd73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004ccea(void *this,int param_1)

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
        FUN_1003ba29(this,piVar1);
        *(undefined4 *)(param_1 + 0xd7c + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  FUN_1003c73a(*(void **)(iVar2 + 0x1c98 + (int)this),*(int **)(param_1 + 0xd84),2,(int *)0x0,0,0);
  FUN_1003c73a(*(void **)(iVar2 + 0x1c9c + (int)this),*(int **)(param_1 + 0xd88),2,(int *)0x0,0,0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

