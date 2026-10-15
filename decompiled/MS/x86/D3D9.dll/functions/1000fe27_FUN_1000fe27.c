/*
 * FUN_1000fe27 at 1000fe27
 * uint __fastcall FUN_1000fe27(uint param_1)
 * Address ranges: 1000fe27-1000fe9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000fe27(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0x7ff;
  uVar1 = 0;
  uVar3 = (param_1 >> 0x14 & 0x700 | param_1 & 0x1800) >> 8;
  if (uVar3 == 0) {
    return uVar2 + 0x13;
  }
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
  if (uVar3 == 0x13) {
    uVar1 = uVar2 + 0x42a;
  }
  return uVar1;
}

