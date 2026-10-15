/*
 * FUN_1800377a8 at 1800377a8
 * float __fastcall FUN_1800377a8(ushort param_1)
 * Address ranges: 1800377a8-180037829
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1800377a8(ushort param_1)

{
  ushort uVar1;
  float fVar2;
  
  fVar2 = 0.0;
  uVar1 = param_1 & 0xf00;
  if ((param_1 & 0xf0) == 0) {
    if (uVar1 == 0x100) {
      return 1.0;
    }
    if (uVar1 == 0x300) {
      return -0.5;
    }
  }
  else {
    if (uVar1 == 0x100) {
      fVar2 = 1.0;
    }
    else if (uVar1 == 0x300) {
      fVar2 = -0.5;
    }
    else if (uVar1 == 0x400) {
      fVar2 = -1.0;
    }
    else if (uVar1 == 0x500) {
      fVar2 = 0.5;
    }
    if ((param_1 >> 0xd & 1) != 0) {
      fVar2 = fVar2 * 255.0;
    }
  }
  return fVar2;
}

