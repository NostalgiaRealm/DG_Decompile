/*
 * FUN_18001fe78 at 18001fe78
 * undefined __fastcall FUN_18001fe78(longlong * param_1, uint param_2, float * param_3, byte param_4)
 * Address ranges: 18001fe78-18001ffe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001fe78(longlong *param_1,uint param_2,float *param_3,byte param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
  if (*(int *)(param_1[0x631] + 0x54) != 4) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
    *(undefined4 *)(param_1[0x631] + 0x54) = 4;
  }
  uVar7 = 0;
  if (param_4 != 0) {
    uVar5 = 1;
    iVar8 = 0;
    if (0 < (int)param_2 / 2) {
      do {
        if ((int)uVar7 != 0) break;
        iVar2 = iVar8 * 2;
        iVar8 = iVar8 + 1;
        lVar4 = (longlong)iVar2;
        auVar1._4_4_ = -(uint)(1e+06 < ABS(param_3[lVar4 * 0xf + 0xf]));
        auVar1._0_4_ = -(uint)(1e+06 < ABS(param_3[lVar4 * 0xf + 0x10]));
        auVar1._8_4_ = -(uint)(1e+06 < ABS(param_3[lVar4 * 0xf + 1]));
        auVar1._12_4_ = -(uint)(1e+06 < ABS(param_3[lVar4 * 0xf]));
        uVar6 = movmskps(0,auVar1);
        uVar7 = (ulonglong)(uVar6 & 0xf);
      } while (iVar8 < (int)param_2 / 2);
    }
    uVar6 = (uint)uVar7;
    if ((param_2 & 1) != 0) {
      lVar4 = (longlong)(int)param_2 + -1;
      auVar9._4_4_ = -(uint)(1e+06 < ABS(param_3[lVar4 * 0xf]));
      auVar9._0_4_ = -(uint)(1e+06 < ABS(param_3[lVar4 * 0xf + 1]));
      auVar9._8_8_ = 0;
      uVar3 = movmskps((int)lVar4,auVar9);
      uVar6 = uVar6 | uVar3 & 3;
    }
    if (uVar6 != 0) {
      if (1 < (int)(param_2 - 1)) {
        do {
          uVar6 = (int)uVar5 + 1;
          FUN_18001edd0((longlong)param_1,param_3,param_3 + uVar5 * 0xf,
                        param_3 + (longlong)(int)uVar6 * 0xf);
          uVar5 = (ulonglong)uVar6;
        } while ((int)uVar6 < (int)(param_2 - 1));
      }
      goto LAB_18001ffba;
    }
    uVar7 = (ulonglong)param_4;
  }
  FUN_18001f710((longlong)param_1,param_2,param_3,uVar7);
LAB_18001ffba:
  if ((*(byte *)((longlong)param_1 + 0x2b4c) & 2) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018001ffe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  return;
}

