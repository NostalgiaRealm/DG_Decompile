/*
 * _guFogGenerateLinear@12_native at 100059c0
 * undefined _guFogGenerateLinear@12_native(void)
 * Address ranges: 100059c0-10005a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFogGenerateLinear_12_native(float param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_w15;
  double extraout_d0;
  float extraout_s22;
  float fVar6;
  float extraout_s23;
  float extraout_s24;
  
  uVar5 = 0;
  fVar6 = 3.0;
  uVar2 = 8;
  uVar3 = 0xff;
  do {
    iVar1 = FUN_1004be18(0x4000000000000000,(double)((float)((int)uVar5 >> 2) + fVar6));
    iVar4 = (int)((((float)(extraout_d0 / (double)(int)((int)uVar2 - (extraout_w15 & 3))) - param_1)
                  * extraout_s22) / extraout_s24);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (0xff < iVar4) {
      iVar4 = (int)uVar3;
    }
    uVar5 = extraout_w15 + 1;
    *(char *)(extraout_w15 + iVar1) = (char)iVar4;
    fVar6 = extraout_s23;
  } while (uVar5 < 0x40);
  return;
}

