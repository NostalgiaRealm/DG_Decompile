/*
 * FUN_1801022b0 at 1801022b0
 * undefined FUN_1801022b0(void)
 * Address ranges: 1801022b0-180102597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1801022b0(float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (param_1 == 0.0) {
    if (param_2 <= 0.0) {
      fVar2 = 1.0;
      if (param_2 != 0.0) {
        fVar2 = 0.0;
      }
      return fVar2;
    }
  }
  else {
    dVar10 = (double)param_2;
    dVar9 = (double)param_1;
    dVar7 = 0.0;
    dVar6 = dVar10;
    if (param_1 != 2.0) {
      if (param_1 <= 0.0) {
        dVar6 = (dVar10 * 0.0) / 0.6931471805599453;
      }
      else {
        uVar4 = 0;
        dVar6 = dVar9;
        if (dVar9 < 1.0) {
          dVar6 = 1.0 / dVar9;
        }
        dVar11 = 1.0;
        dVar8 = DAT_18024b258;
        if (dVar9 < 1.0) {
          dVar11 = -1.0;
        }
        while (dVar8 != 1.0) {
          dVar8 = *(double *)
                   ((longlong)&DAT_18024b258 + (-(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4))
          ;
          while (dVar6 < dVar8) {
            uVar1 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar1;
            dVar8 = *(double *)
                     ((longlong)&DAT_18024b258 +
                     (-(ulonglong)(uVar1 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4));
          }
          uVar5 = -(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4;
          dVar8 = *(double *)((longlong)&DAT_18024b258 + uVar5);
          dVar6 = dVar6 / dVar8;
          dVar7 = *(double *)(&DAT_18024b250 + uVar5) + dVar7;
        }
        dVar6 = (((1.0 - dVar6) + dVar7) * dVar11 * dVar10) / 0.6931471805599453;
      }
    }
    bVar3 = dVar6 < 0.0;
    if (bVar3) {
      dVar6 = -dVar6;
    }
    uVar4 = (ulonglong)dVar6;
    if (((longlong)uVar4 < 0x40) &&
       ((dVar6 = dVar6 - (double)(longlong)uVar4, 0.0 <= dVar9 || (dVar6 == 0.0)))) {
      dVar6 = dVar6 + dVar6;
      dVar7 = (double)(1L << (uVar4 & 0x3f));
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.4142135623730951;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.189207115002721;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0905077326652577;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0442737824274138;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0218971486541166;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0108892860517005;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0054299011128027;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0027112750502025;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0013547198921082;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0006771306930664;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0003385080526823;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0001692397053021;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0000846162726944;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0000423072413958;
      }
      dVar6 = dVar6 + dVar6;
      if (1.0 <= dVar6) {
        dVar6 = dVar6 - 1.0;
        dVar7 = dVar7 * 1.0000211533969647;
      }
      if (1.0 <= dVar6 + dVar6) {
        dVar7 = dVar7 * 1.0000105766425498;
      }
      if (bVar3) {
        dVar7 = 1.0 / dVar7;
      }
      if (dVar10 < 0.0) {
        return (float)(1.0 / dVar7);
      }
      goto LAB_180102590;
    }
  }
  dVar7 = 0.0;
LAB_180102590:
  return (float)dVar7;
}

