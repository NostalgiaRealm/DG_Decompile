/*
 * FUN_100fe048 at 100fe048
 * undefined FUN_100fe048(void)
 * Address ranges: 100fe048-100fe297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_100fe048(float param_1,float param_2)

{
  bool bVar1;
  ulonglong uVar2;
  double dVar3;
  double extraout_d21;
  double dVar4;
  double dVar5;
  double extraout_d22;
  
  dVar5 = (double)param_1;
  dVar3 = (double)param_2;
  if (dVar5 == 0.0) {
    if ((dVar3 <= 0.0) && (dVar3 == 0.0)) {
      return 1.0;
    }
  }
  else {
    dVar4 = dVar3;
    if (dVar5 != 2.0) {
      dVar5 = (double)FUN_100fe320(dVar5);
      dVar3 = (dVar5 * extraout_d21) / 0.6931471805599453;
      dVar4 = extraout_d21;
      dVar5 = extraout_d22;
    }
    bVar1 = dVar3 < 0.0;
    if (bVar1) {
      dVar3 = -dVar3;
    }
    uVar2 = (ulonglong)dVar3;
    if (((longlong)uVar2 < 0x40) &&
       ((dVar3 = dVar3 - (double)(longlong)uVar2, 0.0 <= dVar5 || (dVar3 == 0.0)))) {
      dVar3 = dVar3 + dVar3;
      dVar5 = (double)(1L << (uVar2 & 0x3f));
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.4142135623730951;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.189207115002721;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0905077326652577;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0442737824274138;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0218971486541166;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0108892860517005;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0054299011128027;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0027112750502025;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0013547198921082;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0006771306930664;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0003385080526823;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0001692397053021;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0000846162726944;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0000423072413958;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar5 * 1.0000211533969647;
      }
      if (1.0 <= dVar3 + dVar3) {
        dVar5 = dVar5 * 1.0000105766425498;
      }
      if (bVar1) {
        dVar5 = 1.0 / dVar5;
      }
      if (dVar4 < 0.0) {
        return (float)(1.0 / dVar5);
      }
      goto LAB_100fe28c;
    }
  }
  dVar5 = 0.0;
LAB_100fe28c:
  return (float)dVar5;
}

