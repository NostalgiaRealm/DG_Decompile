/*
 * FUN_180008ee0 at 180008ee0
 * byte __fastcall FUN_180008ee0(undefined8 param_1, byte * param_2, byte * param_3)
 * Address ranges: 180008ee0-180009052
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180008ee0(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (*param_3 < 0xb) {
    bVar3 = 0;
    bVar2 = (&DAT_1800628b0)[*param_3];
    bVar4 = 0;
    if ((bVar2 & 2) != 0) {
      if (param_3[1] < 0xd) {
        bVar1 = (&DAT_1800628a0)[param_3[1]];
        bVar3 = 0;
        if ((bVar1 & 0xc) != 0) {
          bVar3 = ~-(param_3[2] != 0) & 0x30;
        }
      }
      else {
        bVar1 = 0;
      }
      bVar4 = bVar3;
      if ((bVar1 & 1) != 0) {
        bVar4 = bVar3 | ~-(param_3[3] != 0) & 0x30U;
      }
    }
    if ((bVar2 & 1) != 0) {
      bVar4 = ~-(param_3[3] != 0) & 0x30U | bVar4;
    }
  }
  else {
    bVar4 = 0;
    bVar2 = 0;
  }
  bVar3 = 0;
  if ((bVar2 & 0xc) != 0) {
    bVar4 = bVar4 | ~-(param_3[2] != 0) & 0x30U;
  }
  if (*param_2 < 0xb) {
    bVar2 = (&DAT_1800628b0)[*param_2];
    if ((bVar2 & 2) != 0) {
      if ((param_2[1] < 0xd) && (bVar3 = (&DAT_1800628a0)[param_2[1]], (bVar3 & 4) != 0)) {
        bVar4 = bVar4 | ~-(param_2[2] != 0) & 0x28U;
      }
      if ((bVar3 & 8) != 0) {
        bVar4 = bVar4 | ~-(param_3[2] != 0) & 0x30U;
      }
      if ((bVar3 & 1) != 0) {
        bVar4 = ~-(param_3[3] != 0) & 0x30U | bVar4;
      }
    }
  }
  else {
    bVar2 = 0;
  }
  if ((bVar2 & 1) != 0) {
    bVar4 = ~-(param_2[3] != 0) & 0x28U | bVar4;
  }
  if ((bVar2 & 4) != 0) {
    bVar4 = bVar4 | ~-(param_2[2] != 0) & 0x28U;
  }
  if ((bVar2 & 8) != 0) {
    bVar4 = bVar4 | ~-(param_3[2] != 0) & 0x30U;
  }
  return bVar4;
}

