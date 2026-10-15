/*
 * FUN_10007206 at 10007206
 * byte __stdcall FUN_10007206(byte * param_1, byte * param_2)
 * Address ranges: 10007206-1000732b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10007206(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = 0;
  if (*param_2 < 0xb) {
    bVar1 = (&DAT_10054584)[*param_2];
    bVar2 = 0;
    if ((bVar1 & 2) != 0) {
      bVar2 = 0;
      if (param_2[1] < 0xd) {
        bVar3 = (&DAT_10054574)[param_2[1]];
        if ((bVar3 & 0xc) != 0) {
          bVar2 = (param_2[2] != 0) - 1U & 0x30;
        }
      }
      else {
        bVar3 = 0;
      }
      if ((bVar3 & 1) != 0) {
        bVar2 = (param_2[3] != 0) - 1U & 0x30 | bVar2;
      }
    }
    if ((bVar1 & 1) != 0) {
      bVar2 = bVar2 | (param_2[3] != 0) - 1U & 0x30;
    }
    if ((bVar1 & 0xc) != 0) {
      bVar2 = bVar2 | (param_2[2] != 0) - 1U & 0x30;
    }
  }
  if (*param_1 < 0xb) {
    bVar1 = (&DAT_10054584)[*param_1];
    if ((bVar1 & 2) != 0) {
      if (param_1[1] < 0xd) {
        bVar3 = (&DAT_10054574)[param_1[1]];
        if ((bVar3 & 4) != 0) {
          bVar2 = bVar2 | (param_1[2] != 0) - 1U & 0x28;
        }
      }
      else {
        bVar3 = 0;
      }
      if ((bVar3 & 8) != 0) {
        bVar2 = bVar2 | (param_2[2] != 0) - 1U & 0x30;
      }
      if ((bVar3 & 1) != 0) {
        bVar2 = bVar2 | (param_2[3] != 0) - 1U & 0x30;
      }
    }
    if ((bVar1 & 1) != 0) {
      bVar2 = bVar2 | (param_1[3] != 0) - 1U & 0x28;
    }
    if ((bVar1 & 4) != 0) {
      bVar2 = bVar2 | (param_1[2] != 0) - 1U & 0x28;
    }
    if ((bVar1 & 8) != 0) {
      bVar2 = bVar2 | (param_2[2] != 0) - 1U & 0x30;
    }
  }
  return bVar2;
}

