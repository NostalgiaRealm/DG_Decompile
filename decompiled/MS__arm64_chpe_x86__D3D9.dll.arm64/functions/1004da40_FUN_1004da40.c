/*
 * FUN_1004da40 at 1004da40
 * undefined FUN_1004da40(void)
 * Address ranges: 1004da40-1004ddb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004da40(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int iVar10;
  uint uVar11;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar11 = 0;
  do {
    if (*(int *)(param_1 + 0xf830 + uVar11 * 4) != 0) {
      iVar10 = param_1 + uVar11 * 4 + 0xc000;
      uVar6 = (*pcVar5)();
      (*extraout_w11)(uVar6,*(undefined4 *)(iVar10 + 0x3844),*(undefined4 *)(iVar10 + 0x3854),0);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  if (*(int *)(param_1 + 0xf840) != 0) {
    uVar6 = (*pcVar5)();
    (*extraout_w11_00)(uVar6,*(undefined4 *)(param_1 + 0xf864),*(undefined4 *)(param_1 + 0xf868),0);
  }
  FUN_10047f98(param_1,0,0,0);
  uVar6 = *(undefined4 *)(param_1 + 0xfa1c);
  uVar3 = *(undefined4 *)(param_1 + 0x1008);
  uVar4 = *(undefined4 *)(param_1 + 0x104c);
  if (param_2 == 6) {
    if (2 < param_6) {
      param_6 = param_6 - 2;
      iVar10 = 0;
      if (param_6 != 0) {
        piVar1 = (int *)(param_1 + 0x6c);
        do {
          iVar8 = *piVar1 + *(int *)(param_1 + 0x68);
          if (0x1000U - iVar8 < 0x10) {
            FUN_10047f98(param_1,0,1,0);
            iVar8 = 0;
          }
          uVar11 = (0x1000U - iVar8) / 3;
          if (param_6 < (0x1000U - iVar8) / 3) {
            uVar11 = param_6;
          }
          if (param_4 == 0) {
            FUN_10048180(param_1,4,param_3);
          }
          else {
            FUN_1004c200(param_1,4,param_4 + -0x18,uVar6,*(undefined4 *)(param_1 + 0xf6d0),uVar4,
                         uVar3,0,uVar11 * 3);
          }
          uVar9 = 0;
          if (uVar11 != 0) {
            piVar2 = (int *)(param_1 + 100);
            do {
              *(uint *)*piVar2 = iVar10 + param_5 + 1 + uVar9;
              iVar8 = iVar10 + param_5 + 2 + uVar9;
              uVar9 = uVar9 + 1;
              *(int *)(*piVar2 + 4) = iVar8;
              *(int *)(*piVar2 + 8) = param_5;
              *piVar2 = *piVar2 + 0xc;
            } while (uVar9 < uVar11);
          }
          param_6 = param_6 - uVar11;
          iVar10 = uVar11 + iVar10;
          *piVar1 = uVar11 * 3 + *piVar1;
        } while (param_6 != 0);
      }
      FUN_10047f98(param_1,0,0,0);
    }
  }
  else {
    if (param_4 == 0) {
      FUN_10048180(param_1,param_2,param_3);
    }
    else {
      FUN_1004c200(param_1,param_2,param_4 + -0x18,uVar6,*(undefined4 *)(param_1 + 0xfa20),uVar4,
                   uVar3,0,0);
    }
    uVar7 = FUN_10042d20(param_1);
    if ((uVar7 & 1) != 0) {
      uVar6 = (*pcVar5)();
      (*extraout_w11_01)(uVar6,param_6,param_5);
    }
    (*(code *)PTR_FUN_1016c0c0)(*(int *)(param_1 + 0xf6b0) + 0x4a0);
  }
  return;
}

