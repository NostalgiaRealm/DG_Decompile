/*
 * FUN_180102620 at 180102620
 * undefined FUN_180102620(void)
 * Address ranges: 180102620-1801026c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_180102620(double param_1)

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
    dVar8 = 1.0;
    dVar6 = DAT_18024b258;
    if (param_1 < 1.0) {
      dVar8 = -1.0;
    }
    while (dVar6 != 1.0) {
      dVar6 = *(double *)
               ((longlong)&DAT_18024b258 + (-(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar2 << 4));
      while (dVar4 < dVar6) {
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
        dVar6 = *(double *)
                 ((longlong)&DAT_18024b258 +
                 (-(ulonglong)(uVar1 >> 0x1f) & 0xfffffff000000000 | uVar2 << 4));
      }
      uVar3 = -(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar2 << 4;
      dVar6 = *(double *)((longlong)&DAT_18024b258 + uVar3);
      dVar4 = dVar4 / dVar6;
      dVar7 = *(double *)(&DAT_18024b250 + uVar3) + dVar7;
    }
    auVar5._0_8_ = ((1.0 - dVar4) + dVar7) * dVar8;
    auVar5._8_8_ = 0;
    return auVar5;
  }
  return ZEXT816(0);
}

