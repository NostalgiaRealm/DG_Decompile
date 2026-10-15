/*
 * FUN_1801b86b0 at 1801b86b0
 * undefined FUN_1801b86b0(void)
 * Address ranges: 1801b86b0-1801b875f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801b86b0(void)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint extraout_w1;
  uint in_w3;
  uint in_w4;
  float *in_x5;
  float fVar4;
  
  if ((in_w4 & 1) == 0) {
    bVar2 = true;
    uVar3 = FUN_1801b7f38();
    lVar1 = (ulonglong)extraout_w1 * 0x2c;
    *in_x5 = (float)((uint)(byte)(&DAT_180248468)[lVar1] & uVar3 >> 0x18) / 255.0;
    in_x5[1] = (float)((uint)(byte)(&DAT_180248469)[lVar1] & uVar3 >> 0x10) / 255.0;
    in_x5[2] = (float)((uint)(byte)(&DAT_18024846a)[lVar1] & uVar3 >> 8) / 255.0;
    fVar4 = (float)((byte)(&DAT_18024846b)[lVar1] & uVar3) / 255.0;
  }
  else {
    in_x5[1] = 0.0;
    in_x5[2] = 0.0;
    *in_x5 = (float)in_w3;
    fVar4 = 0.0;
    bVar2 = in_w3 == (int)(float)in_w3;
  }
  in_x5[3] = fVar4;
  return bVar2;
}

