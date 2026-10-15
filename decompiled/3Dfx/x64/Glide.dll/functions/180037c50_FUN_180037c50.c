/*
 * FUN_180037c50 at 180037c50
 * float __fastcall FUN_180037c50(ushort param_1)
 * Address ranges: 180037c50-180037cd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_180037c50(ushort param_1)

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

