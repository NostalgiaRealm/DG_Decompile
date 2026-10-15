/*
 * FUN_10091a00 at 10091a00
 * undefined FUN_10091a00(void)
 * Address ranges: 10091a00-10091abf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_10091a00(int param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0xc9) == '\0') {
    uVar1 = FUN_1008e630(param_1,param_2 & 0xffffffff,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_100dcf80(*(int *)(param_1 + -0x48),param_2,param_1 + -0x88);
    uVar1 = FUN_1008dec8(param_1 + -0x88,param_2 & 0xffffffff,param_3,param_4,param_5,param_6);
    (*(code *)PTR_FUN_101340bc)(*(int *)(param_1 + -0x48) + 0x4a0);
  }
  return uVar1;
}

