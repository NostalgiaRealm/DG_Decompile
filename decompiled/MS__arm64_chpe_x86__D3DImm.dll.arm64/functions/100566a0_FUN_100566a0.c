/*
 * FUN_100566a0 at 100566a0
 * undefined FUN_100566a0(void)
 * Address ranges: 100566a0-10056717
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100566a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = FUN_10004dd0(param_1,param_2,param_3,0x80070057);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

