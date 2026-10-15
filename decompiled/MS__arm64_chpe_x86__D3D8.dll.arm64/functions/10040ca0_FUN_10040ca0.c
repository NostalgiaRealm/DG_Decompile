/*
 * FUN_10040ca0 at 10040ca0
 * undefined FUN_10040ca0(void)
 * Address ranges: 10040ca0-10040fef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040ca0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int iVar11;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0xdacc) != 0) {
    uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar7,*(undefined4 *)(param_1 + 0xdae0),*(undefined4 *)(param_1 + 0xdaf0),0);
  }
  if (*(int *)(param_1 + 0xdadc) != 0) {
    uVar7 = (*pcVar6)();
    (*extraout_w11_00)(uVar7,*(undefined4 *)(param_1 + 0xdb00),*(undefined4 *)(param_1 + 0xdb04),0);
  }
  FUN_1003c678(param_1,0,0,0);
  uVar7 = *(undefined4 *)(param_1 + 0xdbd0);
  uVar4 = *(undefined4 *)(param_1 + 0x6e8);
  uVar5 = *(undefined4 *)(param_1 + 0x72c);
  if (param_2 == 6) {
    if (2 < param_6) {
      param_6 = param_6 - 2;
      iVar11 = 0;
      if (param_6 != 0) {
        piVar1 = (int *)(param_1 + 0x6c);
        do {
          iVar9 = *(int *)(param_1 + 0x68) + *piVar1;
          if (0x1000U - iVar9 < 0x10) {
            FUN_1003c678(param_1,0,1,0);
            iVar9 = 0;
          }
          uVar3 = (0x1000U - iVar9) / 3;
          if (param_6 < (0x1000U - iVar9) / 3) {
            uVar3 = param_6;
          }
          if (param_4 == 0) {
            FUN_1003c860(param_1,4,param_3);
          }
          else {
            FUN_1003f3d0(param_1,4,param_4 + -0x18,uVar7,*(undefined4 *)(param_1 + 0xd9d0),uVar5,
                         uVar4,0,uVar3 * 3);
          }
          uVar10 = 0;
          if (uVar3 != 0) {
            piVar2 = (int *)(param_1 + 100);
            do {
              *(uint *)*piVar2 = iVar11 + param_5 + 1 + uVar10;
              iVar9 = iVar11 + param_5 + 2 + uVar10;
              uVar10 = uVar10 + 1;
              *(int *)(*piVar2 + 4) = iVar9;
              *(int *)(*piVar2 + 8) = param_5;
              *piVar2 = *piVar2 + 0xc;
            } while (uVar10 < uVar3);
          }
          param_6 = param_6 - uVar3;
          iVar11 = uVar3 + iVar11;
          *piVar1 = *piVar1 + uVar3 * 3;
        } while (param_6 != 0);
      }
      FUN_1003c678(param_1,0,0,0);
    }
  }
  else {
    if (param_4 == 0) {
      FUN_1003c860(param_1,param_2,param_3);
    }
    else {
      FUN_1003f3d0(param_1,param_2,param_4 + -0x18,uVar7,*(undefined4 *)(param_1 + 0xdbd4),uVar5,
                   uVar4,0,0);
    }
    uVar8 = FUN_10038e98(param_1);
    if ((uVar8 & 1) != 0) {
      uVar7 = (*pcVar6)();
      (*extraout_w11_01)(uVar7,param_6,param_5);
    }
    (*(code *)PTR_FUN_101340bc)(*(int *)(param_1 + 0xd9b0) + 0x4a0);
  }
  return;
}

