/*
 * FUN_100573b0 at 100573b0
 * undefined FUN_100573b0(void)
 * Address ranges: 100573b0-10057423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100573b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10005520(param_1,param_2,param_3 != 0);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return 0;
}

