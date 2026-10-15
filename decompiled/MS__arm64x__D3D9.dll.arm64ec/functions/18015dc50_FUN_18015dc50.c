/*
 * FUN_18015dc50 at 18015dc50
 * undefined FUN_18015dc50(void)
 * Address ranges: 18015dc50-18015dc8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18015dc50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_180144290(param_1 + 8);
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

