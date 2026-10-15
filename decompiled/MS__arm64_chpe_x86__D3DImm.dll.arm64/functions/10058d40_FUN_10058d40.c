/*
 * FUN_10058d40 at 10058d40
 * undefined FUN_10058d40(void)
 * Address ranges: 10058d40-10058db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10058d40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = FUN_10003870(param_1,param_2,0x80070057,0x88760836);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

