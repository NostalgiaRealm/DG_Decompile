/*
 * FUN_10056910 at 10056910
 * undefined FUN_10056910(void)
 * Address ranges: 10056910-10056973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056910(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = FUN_10006bd0(param_1,0x887602f8,0x887601c2);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

