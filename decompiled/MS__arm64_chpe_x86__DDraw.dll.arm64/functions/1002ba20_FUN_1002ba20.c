/*
 * FUN_1002ba20 at 1002ba20
 * undefined FUN_1002ba20(void)
 * Address ranges: 1002ba20-1002ba67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002ba20(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  if (((uVar1 >> 0x11 & 1) == 0) || (bVar2 = true, (uVar1 & 0x180) != 0)) {
    bVar2 = false;
  }
  if (((uVar1 & 0xa000) == 0) && (((uVar1 & 0x70) != 0 || (bVar2)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

