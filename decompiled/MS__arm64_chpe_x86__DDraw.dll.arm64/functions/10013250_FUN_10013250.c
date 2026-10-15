/*
 * FUN_10013250 at 10013250
 * undefined FUN_10013250(void)
 * Address ranges: 10013250-100132ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10013250(int param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  FUN_1006e8d0(*(int *)(param_1 + -0x48),param_2,param_1 + -0x88);
  uVar1 = FUN_10012878(param_1 + -0x88,param_2 & 0xffffffff,param_3,param_4,param_5,param_6,param_7)
  ;
  (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + -0x48) + 0x4a0);
  return uVar1;
}

