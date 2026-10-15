/*
 * FUN_180220d60 at 180220d60
 * undefined FUN_180220d60(void)
 * Address ranges: 180220d60-180220e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_180220d60(double param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (0.0 < param_1) {
    uVar2 = 0;
    dVar7 = 0.0;
    dVar4 = param_1;
    if (param_1 < 1.0) {
      dVar4 = 1.0 / param_1;
    }
    dVar6 = 1.0;
    dVar8 = DAT_18024c868;
    if (param_1 < 1.0) {
      dVar6 = -1.0;
    }
    while (dVar8 != 1.0) {
      dVar8 = *(double *)
               ((longlong)&DAT_18024c868 + (-(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar2 << 4));
      while (dVar4 < dVar8) {
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
        dVar8 = *(double *)
                 ((longlong)&DAT_18024c868 +
                 (-(ulonglong)(uVar1 >> 0x1f) & 0xfffffff000000000 | uVar2 << 4));
      }
      uVar3 = -(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar2 << 4;
      dVar8 = *(double *)((longlong)&DAT_18024c868 + uVar3);
      dVar4 = dVar4 / dVar8;
      dVar7 = *(double *)(&DAT_18024c860 + uVar3) + dVar7;
    }
    auVar5._0_8_ = ((1.0 - dVar4) + dVar7) * dVar6;
    auVar5._8_8_ = 0;
    return auVar5;
  }
  return ZEXT816(0);
}

