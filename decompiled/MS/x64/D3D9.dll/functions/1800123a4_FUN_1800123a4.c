/*
 * FUN_1800123a4 at 1800123a4
 * uint __fastcall FUN_1800123a4(uint param_1)
 * Address ranges: 1800123a4-18001241b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800123a4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0x7ff;
  uVar3 = param_1 >> 0x14 & 0x700 | param_1 & 0x1800;
  if (uVar3 < 0x100) {
    return uVar2 + 0x13;
  }
  uVar3 = uVar3 >> 8;
  if (uVar3 == 1) {
    return uVar2;
  }
  if (uVar3 == 2) {
    return uVar2 + 0x26;
  }
  if (uVar3 == 3) {
    return uVar2 + 0x429;
  }
  if (uVar3 == 4) {
    return uVar2 + 0x455;
  }
  if (uVar3 == 5) {
    return uVar2 + 0x458;
  }
  if (uVar3 == 6) {
    return uVar2 + 0x44d;
  }
  uVar1 = 0;
  if (uVar3 == 0x13) {
    uVar1 = uVar2 + 0x42a;
  }
  return uVar1;
}

