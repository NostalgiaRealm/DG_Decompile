/*
 * FUN_1001ad1e at 1001ad1e
 * undefined __thiscall FUN_1001ad1e(void * this, undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, byte param_4)
 * Address ranges: 1001ad1e-1001adad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001ad1e(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,byte param_4)

{
  int *piVar1;
  
  FUN_1002cb52(*(void **)((int)this + 0x3160),3,3);
  FUN_1001a4d8(*(void **)((int)this + 0x3160),param_1,1,param_4);
  FUN_1001a4d8(*(void **)((int)this + 0x3160),param_2,1,param_4);
  FUN_1001a4d8(*(void **)((int)this + 0x3160),param_3,1,param_4);
  **(int **)(*(int *)((int)this + 0x3160) + 0x28) =
       *(int *)(*(int *)((int)this + 0x3160) + 0x2c) + -3;
  *(int *)(*(int *)(*(int *)((int)this + 0x3160) + 0x28) + 4) =
       *(int *)(*(int *)((int)this + 0x3160) + 0x2c) + -2;
  *(int *)(*(int *)(*(int *)((int)this + 0x3160) + 0x28) + 8) =
       *(int *)(*(int *)((int)this + 0x3160) + 0x2c) + -1;
  piVar1 = (int *)(*(int *)((int)this + 0x3160) + 0x28);
  *piVar1 = *piVar1 + 0xc;
  return;
}

