/*
 * FUN_10058820 at 10058820
 * undefined FUN_10058820(void)
 * Address ranges: 10058820-10058883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10058820(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = FUN_10003800(param_1,0x88760835,0x8007000e);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

