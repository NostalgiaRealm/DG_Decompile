/*
 * FUN_18004a008 at 18004a008
 * longlong * __fastcall FUN_18004a008(longlong param_1, longlong * param_2, longlong * param_3, longlong * param_4, int * param_5, undefined8 * param_6, uint param_7, uint param_8, undefined8 param_9, int param_10)
 * Address ranges: 18004a008-18004a284
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_18004a008(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,int *param_5,
             undefined8 *param_6,uint param_7,uint param_8,undefined8 param_9,int param_10)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    if (param_10 == 0) {
      lVar5 = (**(code **)(*param_3 + 0x50))(param_3);
      param_10 = *(int *)(lVar5 + 0x20);
    }
    uVar6 = FUN_18004615c(param_10);
    iVar12 = (int)uVar6;
    uVar7 = FUN_1800461f8(param_10);
    iVar9 = param_5[3];
    iVar1 = *param_5;
    iVar3 = (int)((ulonglong)(uint)(param_5[4] - param_5[1]) / (uVar7 & 0xffffffff));
    iVar13 = iVar3;
    uVar8 = FUN_1800461ac(param_10);
    uVar8 = uVar8 & 0xffffffff;
    uVar6 = FUN_180045fdc(param_10);
    iVar4 = (int)uVar6;
    if (iVar12 != 0) {
      iVar4 = iVar12;
    }
    uVar8 = (ulonglong)(uint)(iVar4 * (iVar9 - iVar1)) / (uVar8 & 0xffffffff);
    uVar17 = (uint)uVar8;
    if ((param_10 == 0x2c) || (param_10 == 0x2d)) {
      uVar15 = (iVar9 - iVar1) * 4;
      param_10 = 0x2a;
      uVar11 = uVar15 + 0xff & 0xffffff00;
    }
    else {
      uVar11 = (param_5[5] - param_5[2]) * (uVar17 + 0xff & 0xffffff00);
      uVar15 = uVar17;
    }
    bVar2 = FUN_180057114(param_4,uVar11 * iVar13,param_2);
    if (bVar2) {
      uVar15 = uVar15 + 0xff & 0xffffff00;
      if ((param_7 == uVar15) && (uVar17 == param_7)) {
        uVar16 = param_5[2];
        puVar14 = (undefined8 *)*param_2;
        if (uVar16 < (uint)param_5[5]) {
          do {
            FUN_18005f1b0(puVar14,param_6,
                          (ulonglong)((param_5[4] - param_5[1]) * uVar17) / (uVar7 & 0xffffffff));
            param_6 = (undefined8 *)((longlong)param_6 + (ulonglong)param_8);
            puVar14 = (undefined8 *)((longlong)puVar14 + (ulonglong)(uVar15 * iVar3));
            uVar16 = uVar16 + 1;
          } while (uVar16 < (uint)param_5[5]);
        }
      }
      else {
        uVar17 = param_5[2];
        if (uVar17 < (uint)param_5[5]) {
          puVar14 = (undefined8 *)*param_2;
          do {
            if (iVar3 != 0) {
              puVar10 = param_6;
              iVar9 = iVar3;
              do {
                FUN_18005f1b0(puVar14,puVar10,uVar8);
                puVar14 = (undefined8 *)((longlong)puVar14 + (ulonglong)uVar15);
                puVar10 = (undefined8 *)((longlong)puVar10 + (ulonglong)param_7);
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            uVar17 = uVar17 + 1;
            param_6 = (undefined8 *)((longlong)param_6 + (ulonglong)param_8);
          } while (uVar17 < (uint)param_5[5]);
        }
      }
      *(uint *)(param_2 + 4) = uVar11 * iVar13;
      *(int *)(param_2 + 5) = param_10;
      *(uint *)((longlong)param_2 + 0x24) = uVar15;
    }
  }
  return param_2;
}

