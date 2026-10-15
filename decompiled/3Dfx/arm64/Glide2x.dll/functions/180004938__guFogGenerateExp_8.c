/*
 * _guFogGenerateExp@8 at 180004938
 * undefined __cdecl _guFogGenerateExp@8(void)
 * Address ranges: 180004938-1800049df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFogGenerateExp_8(void)

{
  longlong extraout_x0;
  uint uVar1;
  uint extraout_w14;
  ulonglong extraout_x14;
  int extraout_w15;
  undefined1 auVar2 [16];
  double extraout_d22;
  float extraout_s23;
  float extraout_s23_00;
  float fVar3;
  float extraout_s24;
  double extraout_d25;
  
                    /* 0x4938  117  _guFogGenerateExp@8
                       0x4938  273  guFogGenerateExp */
  auVar2 = FUN_180008a50(2.0,18.0);
  FUN_180008990((double)((float)(auVar2._0_8_ / 5.0) * extraout_s23));
  uVar1 = 0;
  fVar3 = 3.0;
  do {
    auVar2 = FUN_180008a50(2.0,(double)((float)((int)uVar1 >> 2) + fVar3));
    auVar2 = FUN_180008990((double)((float)(auVar2._0_8_ /
                                           (double)(int)(extraout_w15 - (extraout_w14 & 3))) *
                                   extraout_s23_00));
    *(char *)(extraout_x0 + (extraout_x14 & 0xffffffff)) =
         (char)(int)((extraout_d22 - auVar2._0_8_ * extraout_d22) / extraout_d25);
    uVar1 = (int)extraout_x14 + 1;
    fVar3 = extraout_s24;
  } while (uVar1 < 0x40);
  return;
}

