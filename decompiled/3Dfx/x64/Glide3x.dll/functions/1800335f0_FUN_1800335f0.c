/*
 * FUN_1800335f0 at 1800335f0
 * double __fastcall FUN_1800335f0(double param_1, double param_2)
 * Address ranges: 1800335f0-18003384e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

double FUN_1800335f0(double param_1,double param_2)

{
  bool bVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  
  if (param_1 == 0.0) {
    if ((param_2 <= 0.0) && (param_2 == 0.0)) {
      return 1.0;
    }
  }
  else {
    dVar3 = param_2;
    if (param_1 != 2.0) {
      dVar3 = FUN_180033930(param_1);
      dVar3 = (dVar3 * param_2) / 0.6931471805599453;
    }
    bVar1 = dVar3 < 0.0;
    if (bVar1) {
      dVar3 = -dVar3;
    }
    lVar2 = (longlong)dVar3;
    if ((lVar2 < 0x40) && ((dVar3 = dVar3 - (double)lVar2, 0.0 <= param_1 || (dVar3 == 0.0)))) {
      dVar3 = dVar3 + dVar3;
      dVar4 = (double)(1L << ((byte)lVar2 & 0x3f));
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.4142135623730951;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.189207115002721;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0905077326652577;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0442737824274138;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0218971486541166;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0108892860517005;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0054299011128027;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0027112750502025;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0013547198921082;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0006771306930664;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0003385080526823;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0001692397053021;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0000846162726944;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0000423072413958;
        dVar3 = dVar3 - 1.0;
      }
      dVar3 = dVar3 + dVar3;
      if (1.0 <= dVar3) {
        dVar4 = dVar4 * 1.0000211533969647;
        dVar3 = dVar3 - 1.0;
      }
      if (1.0 <= dVar3 + dVar3) {
        dVar4 = dVar4 * 1.0000105766425498;
      }
      if (bVar1) {
        dVar4 = 1.0 / dVar4;
      }
      if (0.0 <= param_2) {
        return dVar4;
      }
      return 1.0 / dVar4;
    }
  }
  return 0.0;
}

