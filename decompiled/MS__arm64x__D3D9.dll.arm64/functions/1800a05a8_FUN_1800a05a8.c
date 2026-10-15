/*
 * FUN_1800a05a8 at 1800a05a8
 * undefined FUN_1800a05a8(void)
 * Address ranges: 1800a05a8-1800a0657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a05a8(void)

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
    uVar3 = FUN_1800a0038();
    lVar1 = (ulonglong)extraout_w1 * 0x2c;
    *in_x5 = (float)((uint)(byte)(&DAT_18024a978)[lVar1] & uVar3 >> 0x18) / 255.0;
    in_x5[1] = (float)((uint)(byte)(&DAT_18024a979)[lVar1] & uVar3 >> 0x10) / 255.0;
    in_x5[2] = (float)((uint)(byte)(&DAT_18024a97a)[lVar1] & uVar3 >> 8) / 255.0;
    fVar4 = (float)((byte)(&DAT_18024a97b)[lVar1] & uVar3) / 255.0;
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

