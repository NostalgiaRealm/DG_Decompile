/*
 * FUN_1004aa98 at 1004aa98
 * undefined FUN_1004aa98(void)
 * Address ranges: 1004aa98-1004ab27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1004aa98(uint param_1)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = 0.0;
  uVar1 = param_1 & 0xf00;
  if ((param_1 & 0xf0) == 0) {
    if (uVar1 != 0) {
      if (uVar1 == 0x100) {
        fVar2 = 1.0;
      }
      else if (uVar1 == 0x300) {
        fVar2 = -0.5;
      }
    }
  }
  else {
    if (uVar1 < 0x300) {
      if (uVar1 == 0x100) {
        fVar2 = 1.0;
      }
    }
    else if (uVar1 < 0x301) {
      fVar2 = -0.5;
    }
    else if (uVar1 == 0x400) {
      fVar2 = -1.0;
    }
    else if (uVar1 == 0x500) {
      fVar2 = 0.5;
    }
    if ((param_1 & 0x2000) != 0) {
      fVar2 = fVar2 * 255.0;
    }
  }
  return fVar2;
}

