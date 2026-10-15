/*
 * FUN_10082131 at 10082131
 * undefined4 __stdcall FUN_10082131(int param_1, int * param_2, uint * param_3, uint param_4)
 * Address ranges: 10082131-10082176
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10082131(int param_1,int *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + -0x38) + 0xb0c) >> 2) & 1);
  uVar2 = FUN_10011231((void *)(iVar1 + -0x94),param_2,param_3,param_4);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

