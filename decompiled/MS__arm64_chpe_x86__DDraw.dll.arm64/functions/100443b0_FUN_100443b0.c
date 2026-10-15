/*
 * FUN_100443b0 at 100443b0
 * undefined FUN_100443b0(void)
 * Address ranges: 100443b0-1004440b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100443b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = FUN_1004f590(param_1);
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

