/*
 * _guFogGenerateLinear@12 at 180005a68
 * undefined __cdecl _guFogGenerateLinear@12(float param_1)
 * Address ranges: 180005a68-180005aef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFogGenerateLinear_12(float param_1)

{
  longlong extraout_x0;
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_w14;
  int extraout_w15;
  undefined1 auVar4 [16];
  float extraout_s22;
  float fVar5;
  float extraout_s23;
  float extraout_s24;
  
                    /* 0x5a68  98  _guFogGenerateLinear@12
                       0x5a68  198  guFogGenerateLinear */
  uVar3 = 0;
  fVar5 = 3.0;
  uVar1 = 8;
  do {
    auVar4 = FUN_180038f80(2.0,(double)((float)((int)uVar3 >> 2) + fVar5));
    iVar2 = (int)((((float)(auVar4._0_8_ / (double)(int)((int)uVar1 - (extraout_w14 & 3))) - param_1
                   ) * extraout_s22) / extraout_s24);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (0xff < iVar2) {
      iVar2 = extraout_w15;
    }
    *(char *)(extraout_x0 + (ulonglong)extraout_w14) = (char)iVar2;
    uVar3 = extraout_w14 + 1;
    fVar5 = extraout_s23;
  } while (uVar3 < 0x40);
  return;
}

