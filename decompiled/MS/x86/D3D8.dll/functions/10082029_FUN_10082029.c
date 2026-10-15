/*
 * FUN_10082029 at 10082029
 * undefined4 __stdcall FUN_10082029(int param_1, undefined4 * param_2, int * param_3, SIZE_T param_4, uint param_5)
 * Address ranges: 10082029-1008206e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10082029(int param_1,undefined4 *param_2,int *param_3,SIZE_T param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + -0x38) + 0xb0c) >> 2) & 1);
  uVar2 = FUN_1000da3f((void *)(iVar1 + -0x44),param_2,param_3,param_4,param_5);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

