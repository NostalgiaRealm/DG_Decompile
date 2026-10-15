/*
 * FUN_1000ccdb at 1000ccdb
 * uint __fastcall FUN_1000ccdb(uint param_1)
 * Address ranges: 1000ccdb-1000cd43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000ccdb(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar2 = param_1 & 0x1fff;
  uVar3 = param_1 & 0x70000000;
  if (uVar3 == 0) {
    return uVar2 + 0x13;
  }
  if (uVar3 == 0x10000000) {
    return uVar2;
  }
  if (uVar3 == 0x20000000) {
    return uVar2 + 0x26;
  }
  if (uVar3 == 0x30000000) {
    return uVar2 + 0x429;
  }
  if (uVar3 == 0x40000000) {
    return uVar2 + 0x432;
  }
  if (uVar3 == 0x50000000) {
    return uVar2 + 0x435;
  }
  if (uVar3 == 0x60000000) {
    uVar1 = uVar2 + 0x42a;
  }
  return uVar1;
}

