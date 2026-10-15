/*
 * FUN_100d1450 at 100d1450
 * undefined FUN_100d1450(void)
 * Address ranges: 100d1450-100d148f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100d1450(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  if (uVar1 < 3) {
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + (uVar1 + 1) * 4 + 2) = param_2[1];
    *(undefined8 *)(param_1 + (uVar1 + 1) * 4) = uVar2;
    *param_1 = *param_1 + 1;
  }
  return uVar1 < 3;
}

