/*
 * FUN_1800134d0 at 1800134d0
 * undefined8 __cdecl FUN_1800134d0(longlong param_1)
 * Address ranges: 1800134d0-1800134d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800134d0(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = FUN_180008208();
  if (((bVar1 & 1) == 0) && (*(char *)(param_1 + 0x5c) != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

