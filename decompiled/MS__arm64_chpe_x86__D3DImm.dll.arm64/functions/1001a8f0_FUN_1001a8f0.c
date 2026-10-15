/*
 * FUN_1001a8f0 at 1001a8f0
 * undefined FUN_1001a8f0(void)
 * Address ranges: 1001a8f0-1001ac1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a8f0(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  int iVar9;
  uint uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int iVar11;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0x1e58) != 0) {
    puVar8 = (undefined4 *)(param_1 + 0x1e7c);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar6,*extraout_w8,*puVar8,0);
  }
  if (*(int *)(param_1 + 0x1e68) != 0) {
    puVar8 = (undefined4 *)(param_1 + 0x1e90);
    uVar6 = (*pcVar5)();
    (*extraout_w11_00)(uVar6,*extraout_w8_00,*puVar8,0);
  }
  uVar6 = *(undefined4 *)(param_4 + 0xc);
  uVar4 = *(undefined4 *)(param_3 + 0xc);
  if (param_2 == 6) {
    if (2 < param_6) {
      param_6 = param_6 - 2;
      iVar11 = 0;
      if (param_6 != 0) {
        piVar1 = (int *)(param_1 + 0x6c);
        do {
          iVar9 = *piVar1 + *(int *)(param_1 + 0x68);
          if (0x1000U - iVar9 < 0x10) {
            FUN_10017a70(param_1,0,1,0);
            iVar9 = 0;
          }
          uVar3 = (0x1000U - iVar9) / 3;
          if (param_6 < (0x1000U - iVar9) / 3) {
            uVar3 = param_6;
          }
          FUN_10017c98(param_1,4,param_3,uVar6,*(undefined4 *)(param_1 + 0x1d70),0,uVar4,0,uVar3 * 3
                      );
          uVar10 = 0;
          if (uVar3 != 0) {
            piVar2 = (int *)(param_1 + 100);
            do {
              *(uint *)*piVar2 = param_5 + iVar11 + 1 + uVar10;
              iVar9 = param_5 + iVar11 + 2 + uVar10;
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
      FUN_10017a70(param_1,0,0,0);
    }
  }
  else {
    FUN_10017c98(param_1,param_2,param_3,uVar6,*(undefined4 *)(param_1 + 8000),0,uVar4,0,0);
    uVar7 = FUN_100149a8(param_1);
    if ((uVar7 & 1) != 0) {
      uVar6 = (*pcVar5)();
      (*extraout_w11_01)(uVar6,param_6,param_5);
    }
    (*(code *)PTR_FUN_100a1044)(*(int *)(param_1 + 0x1d50) + 0x4a0);
  }
  return;
}

