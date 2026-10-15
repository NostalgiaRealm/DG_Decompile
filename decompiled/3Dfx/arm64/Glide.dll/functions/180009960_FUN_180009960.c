/*
 * FUN_180009960 at 180009960
 * undefined1[16] __cdecl FUN_180009960(double param_1, double param_2)
 * Address ranges: 180009960-180009b9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_180009960(double param_1,double param_2)

{
  bool bVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double extraout_d21;
  
  if (param_1 == 0.0) {
    if (param_2 <= 0.0) {
      auVar4 = ZEXT816(0x3ff0000000000000);
      if (param_2 != 0.0) {
        auVar4 = ZEXT816(0);
      }
      return auVar4;
    }
  }
  else {
    dVar6 = param_2;
    if (param_1 != 2.0) {
      auVar4 = FUN_180009c30(param_1);
      dVar6 = (auVar4._0_8_ * param_2) / 0.6931471805599453;
      param_1 = extraout_d21;
    }
    bVar1 = dVar6 < 0.0;
    if (bVar1) {
      dVar6 = -dVar6;
    }
    uVar2 = (ulonglong)dVar6;
    if (((longlong)uVar2 < 0x40) &&
       ((dVar6 = dVar6 - (double)(longlong)uVar2, 0.0 <= param_1 || (dVar6 == 0.0)))) {
      dVar6 = dVar6 + dVar6;
      dVar3 = (double)(1L << (uVar2 & 0x3f));
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.4142135623730951;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.189207115002721;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0905077326652577;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0442737824274138;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0218971486541166;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0108892860517005;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0054299011128027;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0027112750502025;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0013547198921082;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0006771306930664;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0003385080526823;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0001692397053021;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0000846162726944;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0000423072413958;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar3 = dVar3 * 1.0000211533969647;
      }
      if (1.0 <= dVar6 + dVar6) {
        dVar3 = dVar3 * 1.0000105766425498;
      }
      if (bVar1) {
        dVar3 = 1.0 / dVar3;
      }
      if (param_2 < 0.0) {
        auVar4._0_8_ = 1.0 / dVar3;
        auVar4._8_8_ = 0;
        return auVar4;
      }
      goto LAB_180009b98;
    }
  }
  dVar3 = 0.0;
LAB_180009b98:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3;
  return auVar5;
}

