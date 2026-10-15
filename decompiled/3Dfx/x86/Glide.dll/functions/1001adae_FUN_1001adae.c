/*
 * FUN_1001adae at 1001adae
 * undefined __thiscall FUN_1001adae(void * this, uint param_1, undefined4 * param_2, byte param_3)
 * Address ranges: 1001adae-1001ae37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001adae(void *this,uint param_1,undefined4 *param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  
  FUN_1002cb52(*(void **)((int)this + 0x3160),param_1,param_1 * 3 - 6);
  FUN_1001a4d8(*(void **)((int)this + 0x3160),param_2,param_1,param_3);
  iVar2 = 1;
  if (1 < (int)(param_1 - 1)) {
    do {
      **(int **)(*(int *)((int)this + 0x3160) + 0x28) =
           *(int *)(*(int *)((int)this + 0x3160) + 0x2c) - param_1;
      *(uint *)(*(int *)(*(int *)((int)this + 0x3160) + 0x28) + 4) =
           (*(int *)(*(int *)((int)this + 0x3160) + 0x2c) - param_1) + iVar2;
      *(uint *)(*(int *)(*(int *)((int)this + 0x3160) + 0x28) + 8) =
           (*(int *)(*(int *)((int)this + 0x3160) + 0x2c) - param_1) + 1 + iVar2;
      piVar1 = (int *)(*(int *)((int)this + 0x3160) + 0x28);
      *piVar1 = *piVar1 + 0xc;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(param_1 - 1));
  }
  return;
}

