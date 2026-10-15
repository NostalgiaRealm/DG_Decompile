/*
 * FUN_180039310 at 180039310
 * undefined1[16] __cdecl FUN_180039310(double param_1)
 * Address ranges: 180039310-1800393b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_180039310(double param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (0.0 < param_1) {
    uVar3 = 0;
    dVar7 = 0.0;
    dVar5 = param_1;
    if (param_1 < 1.0) {
      dVar5 = 1.0 / param_1;
    }
    dVar8 = 1.0;
    dVar6 = DAT_18006f318;
    if (param_1 < 1.0) {
      dVar8 = -1.0;
    }
    while (dVar6 != 1.0) {
      dVar6 = *(double *)
               ((longlong)&DAT_18006f318 + (-(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4));
      while (dVar5 < dVar6) {
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
        dVar6 = *(double *)
                 ((longlong)&DAT_18006f318 +
                 (-(ulonglong)(uVar1 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4));
      }
      uVar4 = -(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4;
      dVar6 = *(double *)((longlong)&DAT_18006f318 + uVar4);
      dVar5 = dVar5 / dVar6;
      dVar7 = *(double *)((longlong)&DAT_18006f310 + uVar4) + dVar7;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = ((1.0 - dVar5) + dVar7) * dVar8;
    return auVar2;
  }
  return ZEXT816(0);
}

