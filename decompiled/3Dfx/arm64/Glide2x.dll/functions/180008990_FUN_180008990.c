/*
 * FUN_180008990 at 180008990
 * undefined1[16] __cdecl FUN_180008990(double param_1)
 * Address ranges: 180008990-180008a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_180008990(double param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = ABS(param_1);
  if (DAT_18006a1c0 * 4.0 < dVar8) {
    uVar5 = 0x7ff0000000000000;
    if (param_1 <= 0.0) {
      uVar5 = 0;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5;
    return auVar4;
  }
  uVar5 = 0;
  dVar9 = 1.0;
  dVar7 = DAT_18006a1c0;
  while (dVar7 != 0.0) {
    dVar7 = *(double *)
             ((longlong)&DAT_18006a1c0 + (-(uVar5 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4));
    while (dVar8 < dVar7) {
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
      dVar7 = *(double *)
               ((longlong)&DAT_18006a1c0 +
               (-(ulonglong)(uVar1 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4));
    }
    uVar6 = -(uVar5 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4;
    dVar7 = *(double *)((longlong)&DAT_18006a1c0 + uVar6);
    dVar8 = dVar8 - dVar7;
    dVar9 = *(double *)((longlong)&DAT_18006a1c8 + uVar6) * dVar9;
  }
  dVar9 = (dVar8 + 1.0) * dVar9;
  if (0.0 <= param_1) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar9;
    return auVar3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = 1.0 / dVar9;
  return auVar2;
}

