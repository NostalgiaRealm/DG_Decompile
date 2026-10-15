/*
 * FUN_1008b890 at 1008b890
 * undefined FUN_1008b890(void)
 * Address ranges: 1008b890-1008baa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008b890(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar9;
  uint uVar10;
  int *local_64;
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = param_1 + 6;
  if ((*piVar1 != 0) && (uVar10 = 0, param_3 != 0)) {
    do {
      uVar9 = 0;
      if (param_2 != 0) {
        do {
          local_64 = param_1 + 1;
          iVar6 = uVar9 + param_2 * uVar10;
          iVar3 = *(int *)(*piVar1 + iVar6 * 0x1c);
          if (iVar3 != 0) {
            FUN_100d75e0(*param_1,*local_64,iVar3);
          }
          iVar3 = *(int *)(*piVar1 + iVar6 * 0x1c + 4);
          if (iVar3 != 0) {
            iVar4 = *param_1;
            iVar5 = param_1[1];
            iVar6 = iVar4 + 0x4a0;
            (*(code *)PTR_FUN_10134070)(iVar6);
            piVar2 = (int *)(iVar4 + iVar5 * 0x1510 + 0x80c);
            if (iVar3 == *piVar2) {
              *piVar2 = 0;
            }
            (*pcVar7)();
            (*extraout_w11)(iVar3);
            (*(code *)PTR_FUN_101340bc)(iVar6);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_2);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_3);
  }
  FUN_100fed00(*piVar1);
  *piVar1 = 0;
  iVar3 = param_1[5];
  if (iVar3 != 0) {
    FUN_100d7690(*param_1,param_1[1],iVar3);
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    uVar8 = (*pcVar7)();
    (*extraout_w11_00)(uVar8);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    uVar8 = (*pcVar7)();
    (*extraout_w11_01)(uVar8);
    param_1[4] = 0;
  }
  return;
}

