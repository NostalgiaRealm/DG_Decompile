/*
 * _guGammaCorrectionRGB@12 at 180005af8
 * undefined __cdecl _guGammaCorrectionRGB@12(float param_1, float param_2, float param_3)
 * Address ranges: 180005af8-180005c13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guGammaCorrectionRGB_12(float param_1,float param_2,float param_3)

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
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double extraout_d22;
  double extraout_d22_00;
  
                    /* 0x5af8  100  _guGammaCorrectionRGB@12
                       0x5af8  200  guGammaCorrectionRGB */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    lVar7 = *(longlong *)(lVar1 + 0x18);
    fVar9 = 1.0;
    lVar5 = 0x11e8;
    uVar3 = 1;
    lVar4 = lVar7 + 0x11f0;
    *(undefined4 *)(lVar7 + 0x11f0) = 0;
    fVar12 = 1.0 / param_1;
    *(undefined8 *)(lVar7 + 0x11e8) = 0;
    fVar11 = 1.0 / param_2;
    lVar6 = lVar7 + 0x11ec;
    fVar10 = 1.0 / param_3;
    lVar7 = lVar7 + 0x11e8;
    do {
      auVar8 = FUN_180038f80((double)((float)uVar3 / 255.0),(double)fVar12);
      fVar13 = fVar9;
      if ((float)auVar8._0_8_ <= fVar9) {
        fVar13 = (float)auVar8._0_8_;
      }
      *(float *)(lVar7 + extraout_x14 * 4) = fVar13;
      auVar8 = FUN_180038f80(extraout_d22,(double)fVar11);
      fVar13 = fVar9;
      if ((float)auVar8._0_8_ <= fVar9) {
        fVar13 = (float)auVar8._0_8_;
      }
      *(float *)(lVar6 + extraout_x14_00 * 4) = fVar13;
      auVar8 = FUN_180038f80(extraout_d22_00,(double)fVar10);
      uVar3 = extraout_w1 + 1;
      fVar13 = fVar9;
      if ((float)auVar8._0_8_ <= fVar9) {
        fVar13 = (float)auVar8._0_8_;
      }
      *(float *)(lVar4 + extraout_x14_01 * 4) = fVar13;
    } while (uVar3 < 0x100);
    plVar2 = *(longlong **)(lVar1 + 0x18);
    (**(code **)(*plVar2 + 0x68))(plVar2,(longlong)plVar2 + lVar5);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

