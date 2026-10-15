/*
 * FUN_18004e008 at 18004e008
 * undefined FUN_18004e008(void)
 * Address ranges: 18004e008-18004e043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004e008(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1800361b0(param_1 + 8);
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

