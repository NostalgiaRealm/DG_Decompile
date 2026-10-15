/*
 * FUN_1009eb19 at 1009eb19
 * undefined4 __stdcall FUN_1009eb19(int param_1, undefined4 * param_2, int * param_3, SIZE_T param_4, uint param_5)
 * Address ranges: 1009eb19-1009eb5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009eb19(int param_1,undefined4 *param_2,int *param_3,SIZE_T param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + -0x34) + 0xdd0) >> 2) & 1);
  uVar2 = FUN_10011763((void *)(iVar1 + -0x40),param_2,param_3,param_4,param_5);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

