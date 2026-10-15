/*
 * _guFogGenerateExp@8_native at 10004970
 * undefined _guFogGenerateExp@8_native(void)
 * Address ranges: 10004970-10004a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFogGenerateExp_8_native(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint extraout_w15;
  int extraout_w15_00;
  double dVar4;
  double extraout_d0;
  double extraout_d22;
  float extraout_s23;
  float extraout_s23_00;
  float fVar5;
  float extraout_s24;
  double extraout_d25;
  
  dVar4 = (double)FUN_100092f8(0x4000000000000000,0x4032000000000000);
  FUN_10009238((double)((float)(dVar4 / 5.0) * extraout_s23));
  uVar3 = 0;
  uVar2 = 8;
  fVar5 = 3.0;
  do {
    dVar4 = (double)FUN_100092f8(0x4000000000000000,(double)((float)((int)uVar3 >> 2) + fVar5));
    iVar1 = FUN_10009238((double)((float)(dVar4 / (double)(int)((int)uVar2 - (extraout_w15 & 3))) *
                                 extraout_s23_00));
    uVar3 = extraout_w15_00 + 1;
    *(char *)(extraout_w15_00 + iVar1) =
         (char)(int)((extraout_d22 - extraout_d0 * extraout_d22) / extraout_d25);
    fVar5 = extraout_s24;
  } while (uVar3 < 0x40);
  return;
}

