/*
 * FUN_18001fc50 at 18001fc50
 * undefined __fastcall FUN_18001fc50(longlong * param_1, float * param_2, float * param_3, float * param_4, char param_5)
 * Address ranges: 18001fc50-18001fd53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001fc50(longlong *param_1,float *param_2,float *param_3,float *param_4,char param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auVar7 [16];
  longlong *plVar6;
  
  plVar6 = (longlong *)param_1[0x630];
  (**(code **)(*plVar6 + 0x50))(plVar6,0,2);
  uVar4 = SUB84(plVar6,0);
  lVar3 = param_1[0x631];
  if (*(int *)(lVar3 + 0x54) != 4) {
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x2a0))();
    uVar4 = SUB84(plVar6,0);
    lVar3 = param_1[0x631];
    *(undefined4 *)(lVar3 + 0x54) = 4;
  }
  if (param_5 == '\0') {
    param_5 = '\0';
  }
  else {
    auVar1._4_4_ = -(uint)(1e+06 < *param_4);
    auVar1._0_4_ = -(uint)(1e+06 < param_4[1]);
    auVar1._8_4_ = -(uint)(1e+06 < param_4[1]);
    auVar1._12_4_ = -(uint)(1e+06 < *param_4);
    uVar5 = movmskps(uVar4,auVar1);
    auVar7._4_4_ = -(uint)(1e+06 < ABS(*param_3));
    auVar7._0_4_ = -(uint)(1e+06 < ABS(param_3[1]));
    auVar7._8_4_ = -(uint)(1e+06 < ABS(param_2[1]));
    auVar7._12_4_ = -(uint)(1e+06 < ABS(*param_2));
    uVar2 = movmskps((int)lVar3,auVar7);
    if ((uVar2 & 0xf) != 0 || (uVar5 & 3) != 0) {
      FUN_18001edd0((longlong)param_1,param_2,param_3,param_4);
      goto LAB_18001fd26;
    }
  }
  FUN_18001f648((longlong)param_1,param_2,param_3,param_4,param_5);
LAB_18001fd26:
  if ((*(byte *)((longlong)param_1 + 0x2b4c) & 2) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018001fd4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  return;
}

