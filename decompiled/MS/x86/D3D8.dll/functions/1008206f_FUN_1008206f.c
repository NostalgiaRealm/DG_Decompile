/*
 * FUN_1008206f at 1008206f
 * undefined4 __stdcall FUN_1008206f(int param_1, int param_2, undefined4 * param_3, uint * param_4)
 * Address ranges: 1008206f-100820b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008206f(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + -0x38) + 0xb0c) >> 2) & 1);
  uVar2 = FUN_1000de63((void *)(iVar1 + -0x44),param_2,param_3,param_4);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

