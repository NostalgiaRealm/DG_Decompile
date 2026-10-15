/*
 * FUN_1008c718 at 1008c718
 * byte __cdecl FUN_1008c718(uint param_1)
 * Address ranges: 1008c718-1008c747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __cdecl FUN_1008c718(uint param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  uVar1 = param_1 & 0xf;
  bVar2 = (byte)(param_1 >> 9) & 2;
  bVar3 = bVar2 | 1;
  if (uVar1 != 2) {
    if (uVar1 == 1) {
      bVar3 = bVar2 | 0xd;
    }
    else if (uVar1 == 0) {
      bVar3 = bVar2 | 5;
    }
  }
  return bVar3;
}

