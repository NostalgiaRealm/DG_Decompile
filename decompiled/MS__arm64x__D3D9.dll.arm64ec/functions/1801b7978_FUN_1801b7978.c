/*
 * FUN_1801b7978 at 1801b7978
 * undefined FUN_1801b7978(void)
 * Address ranges: 1801b7978-1801b79cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801b7978(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1 & 0xf;
  if (((uVar1 < 3) || (uVar1 - 3 < 2)) ||
     (((1 < uVar1 - 6 && (uVar1 == 5)) &&
      (((param_1 & 0xc00) != 0 || ((param_1 >> 7 & 1) != (param_1 >> 8 & 1))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

