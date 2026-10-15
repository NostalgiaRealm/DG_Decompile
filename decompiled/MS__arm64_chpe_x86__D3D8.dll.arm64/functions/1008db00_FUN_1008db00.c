/*
 * FUN_1008db00 at 1008db00
 * undefined FUN_1008db00(void)
 * Address ranges: 1008db00-1008db9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1008db00(int param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  FUN_100dcf80(*(int *)(param_1 + -0x48),param_2,param_1 + -0x88);
  uVar1 = FUN_1008d128(param_1 + -0x88,param_2 & 0xffffffff,param_3,param_4,param_5,param_6,param_7)
  ;
  (*(code *)PTR_FUN_101340bc)(*(int *)(param_1 + -0x48) + 0x4a0);
  return uVar1;
}

