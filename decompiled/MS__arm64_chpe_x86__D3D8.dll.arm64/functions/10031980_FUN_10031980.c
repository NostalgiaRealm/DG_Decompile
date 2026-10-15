/*
 * FUN_10031980 at 10031980
 * undefined FUN_10031980(void)
 * Address ranges: 10031980-100319a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10031980(uint param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 1) || (uVar1 = 0, (param_1 - 1 & param_1) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

