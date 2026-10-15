/*
 * _grGammaCorrectionValue@4 at 180003198
 * undefined __cdecl _grGammaCorrectionValue@4(float param_1)
 * Address ranges: 180003198-180003293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGammaCorrectionValue_4(float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int extraout_w1;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong extraout_x14;
  longlong extraout_x14_00;
  longlong extraout_x14_01;
  undefined1 auVar8 [16];
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double extraout_d22;
  double extraout_d22_00;
  
                    /* 0x3198  44  _grGammaCorrectionValue@4
                       0x3198  205  grGammaCorrectionValue */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    fVar10 = 1.0;
    lVar7 = *(longlong *)(lVar1 + 0x18);
    fVar11 = 255.0;
    lVar6 = 0x1170;
    uVar3 = 1;
    lVar4 = lVar7 + 0x1178;
    *(undefined4 *)(lVar7 + 0x1178) = 0;
    *(undefined8 *)(lVar7 + 0x1170) = 0;
    lVar5 = lVar7 + 0x1170;
    lVar7 = lVar7 + 0x1174;
    dVar9 = (double)(1.0 / param_1);
    do {
      auVar8 = FUN_180009960((double)((float)uVar3 / fVar11),dVar9);
      fVar12 = fVar10;
      if ((float)auVar8._0_8_ <= fVar10) {
        fVar12 = (float)auVar8._0_8_;
      }
      *(float *)(lVar5 + extraout_x14 * 4) = fVar12;
      auVar8 = FUN_180009960(extraout_d22,dVar9);
      fVar12 = fVar10;
      if ((float)auVar8._0_8_ <= fVar10) {
        fVar12 = (float)auVar8._0_8_;
      }
      *(float *)(lVar7 + extraout_x14_00 * 4) = fVar12;
      auVar8 = FUN_180009960(extraout_d22_00,dVar9);
      uVar3 = extraout_w1 + 1;
      fVar12 = fVar10;
      if ((float)auVar8._0_8_ <= fVar10) {
        fVar12 = (float)auVar8._0_8_;
      }
      *(float *)(lVar4 + extraout_x14_01 * 4) = fVar12;
    } while (uVar3 < 0x100);
    plVar2 = *(longlong **)(lVar1 + 0x18);
    (**(code **)(*plVar2 + 0x60))(plVar2,(longlong)plVar2 + lVar6);
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

