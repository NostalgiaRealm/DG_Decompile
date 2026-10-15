/*
 * FUN_1802209f0 at 1802209f0
 * undefined FUN_1802209f0(void)
 * Address ranges: 1802209f0-180220cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1802209f0(float param_1,float param_2)

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
    dVar8 = (double)param_2;
    dVar9 = (double)param_1;
    dVar11 = 0.0;
    dVar10 = dVar8;
    if (param_1 != 2.0) {
      if (param_1 <= 0.0) {
        dVar10 = (dVar8 * 0.0) / 0.6931471805599453;
      }
      else {
        uVar4 = 0;
        dVar10 = dVar9;
        if (dVar9 < 1.0) {
          dVar10 = 1.0 / dVar9;
        }
        dVar7 = 1.0;
        dVar6 = DAT_18024c868;
        if (dVar9 < 1.0) {
          dVar7 = -1.0;
        }
        while (dVar6 != 1.0) {
          dVar6 = *(double *)
                   ((longlong)&DAT_18024c868 + (-(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4))
          ;
          while (dVar10 < dVar6) {
            uVar1 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar1;
            dVar6 = *(double *)
                     ((longlong)&DAT_18024c868 +
                     (-(ulonglong)(uVar1 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4));
          }
          uVar5 = -(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4;
          dVar6 = *(double *)((longlong)&DAT_18024c868 + uVar5);
          dVar10 = dVar10 / dVar6;
          dVar11 = *(double *)(&DAT_18024c860 + uVar5) + dVar11;
        }
        dVar10 = (((1.0 - dVar10) + dVar11) * dVar7 * dVar8) / 0.6931471805599453;
      }
    }
    bVar3 = dVar10 < 0.0;
    if (bVar3) {
      dVar10 = -dVar10;
    }
    uVar4 = (ulonglong)dVar10;
    if (((longlong)uVar4 < 0x40) &&
       ((dVar10 = dVar10 - (double)(longlong)uVar4, 0.0 <= dVar9 || (dVar10 == 0.0)))) {
      dVar10 = dVar10 + dVar10;
      dVar11 = (double)(1L << (uVar4 & 0x3f));
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.4142135623730951;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.189207115002721;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0905077326652577;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0442737824274138;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0218971486541166;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0108892860517005;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0054299011128027;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0027112750502025;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0013547198921082;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0006771306930664;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0003385080526823;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0001692397053021;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0000846162726944;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0000423072413958;
      }
      dVar10 = dVar10 + dVar10;
      if (1.0 <= dVar10) {
        dVar10 = dVar10 - 1.0;
        dVar11 = dVar11 * 1.0000211533969647;
      }
      if (1.0 <= dVar10 + dVar10) {
        dVar11 = dVar11 * 1.0000105766425498;
      }
      if (bVar3) {
        dVar11 = 1.0 / dVar11;
      }
      if (dVar8 < 0.0) {
        return (float)(1.0 / dVar11);
      }
      goto LAB_180220cd0;
    }
  }
  dVar11 = 0.0;
LAB_180220cd0:
  return (float)dVar11;
}

