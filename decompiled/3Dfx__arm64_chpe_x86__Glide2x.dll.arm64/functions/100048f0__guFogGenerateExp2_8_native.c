/*
 * _guFogGenerateExp2@8_native at 100048f0
 * undefined _guFogGenerateExp2@8_native(void)
 * Address ranges: 100048f0-100049ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFogGenerateExp2_8_native(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint extraout_w15;
  int extraout_w15_00;
  double dVar4;
  double extraout_d0;
  float fVar5;
  double extraout_d22;
  float extraout_s23;
  float extraout_s23_00;
  float extraout_s24;
  double extraout_d25;
  
  dVar4 = (double)FUN_10008e98(0x4000000000000000,0x4033000000000000);
  fVar5 = (float)(dVar4 * 0.125) * extraout_s23;
  FUN_10008dd8((double)-(fVar5 * fVar5));
  uVar3 = 0;
  uVar2 = 8;
  fVar5 = 3.0;
  do {
    dVar4 = (double)FUN_10008e98(0x4000000000000000,(double)((float)((int)uVar3 >> 2) + fVar5));
    fVar5 = (float)(dVar4 / (double)(int)((int)uVar2 - (extraout_w15 & 3))) * extraout_s23_00;
    iVar1 = FUN_10008dd8((double)-(fVar5 * fVar5));
    uVar3 = extraout_w15_00 + 1;
    *(char *)(extraout_w15_00 + iVar1) =
         (char)(int)((extraout_d22 - extraout_d0 * extraout_d22) / extraout_d25);
    fVar5 = extraout_s24;
  } while (uVar3 < 0x40);
  return;
}

