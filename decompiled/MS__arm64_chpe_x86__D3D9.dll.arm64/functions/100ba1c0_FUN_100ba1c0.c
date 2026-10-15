/*
 * FUN_100ba1c0 at 100ba1c0
 * undefined FUN_100ba1c0(void)
 * Address ranges: 100ba1c0-100ba66b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100ba1c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7
            ,char param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  code *extraout_w11;
  uint uVar13;
  undefined8 uVar14;
  int *local_6c;
  int *local_68;
  uint local_64;
  int local_60;
  int *local_5c;
  uint local_58;
  int *local_54;
  undefined1 local_50 [4];
  code *local_4c;
  
  piVar1 = param_1 + 2;
  local_6c = param_2;
  local_64 = param_6;
  local_60 = param_3;
  local_58 = param_7;
  if (param_2 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    uVar11 = 1;
    if (param_3 != 0) {
      uVar11 = 2;
    }
    iVar9 = FUN_10111c30(*(undefined4 *)(*piVar1 + 0x15d8),uVar11);
  }
  piVar2 = param_1 + 6;
  *piVar2 = iVar9;
  iVar9 = local_64 * local_58;
  if (param_4 == 0) {
    iVar10 = -1;
  }
  else {
    iVar10 = FUN_10111c30(*(undefined4 *)(*piVar1 + 0x15dc),iVar9);
  }
  piVar3 = param_1 + 7;
  *piVar3 = iVar10;
  if (param_5 == 0) {
    iVar10 = -1;
  }
  else {
    iVar10 = FUN_10111c30(*(undefined4 *)(*piVar1 + 0x15e0),iVar9);
  }
  piVar4 = param_1 + 8;
  *piVar4 = iVar10;
  if (((param_4 == 0) || (*piVar3 != -1)) && (param_5 == 0 || iVar10 != -1)) {
    if (local_6c == (int *)0x0) {
      local_6c = param_1 + 4;
      local_68 = param_1 + 3;
    }
    else {
      FUN_10112730(*(undefined4 *)(*piVar1 + 0x15d8),&local_54,*piVar2,0);
      local_5c = param_1 + 4;
      iVar9 = *local_5c;
      if ((iVar9 == 0) || (param_8 == '\0')) {
        iVar9 = param_1[3];
      }
      local_68 = param_1 + 3;
      FUN_101129b8(*param_1 + 0x520,param_1[1],iVar9,local_6c,local_54);
      local_6c = local_5c;
    }
    if (local_60 != 0) {
      FUN_10112730(*(undefined4 *)(*piVar1 + 0x15d8),&local_5c,*piVar2,1);
      iVar9 = *local_6c;
      if ((iVar9 == 0) || (param_8 == '\0')) {
        iVar9 = param_1[3];
      }
      FUN_101129b8(*param_1 + 0x520,param_1[1],iVar9,local_60,local_5c);
    }
    uVar8 = local_64;
    if (((*piVar3 != -1) || (*piVar4 != -1)) && ((param_4 != 0 || (param_5 != 0)))) {
      iVar9 = *local_6c;
      iVar10 = iVar9;
      if (iVar9 == 0) {
        iVar10 = *local_68;
      }
      local_64 = 0;
      if (local_58 != 0) {
        local_4c = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        local_68 = param_1 + 1;
        local_60 = param_5;
        local_5c = piVar3;
        local_54 = piVar4;
        do {
          uVar13 = 0;
          if (uVar8 != 0) {
            do {
              iVar6 = local_60;
              iVar5 = uVar13 + local_64 * uVar8;
              if (param_4 == 0) {
                if (iVar9 == 0) {
                  *(undefined4 *)(local_60 + 0x14) = 1;
                  uVar7 = uVar13;
                  uVar12 = local_64;
                }
                else {
                  uVar7 = local_64;
                  uVar12 = 1;
                }
                *(uint *)(local_60 + 0xc) = uVar7;
                *(uint *)(local_60 + 0x10) = uVar12;
                FUN_10112730(*(undefined4 *)(*piVar1 + 0x15e0),local_50,*local_54,iVar5);
                uVar11 = (*local_4c)();
                (*extraout_w11)(uVar11,iVar10,iVar6);
              }
              else {
                if (iVar9 == 0) {
                  *(undefined8 *)(param_4 + 0x10) = 1;
                  uVar7 = uVar13;
                  uVar12 = local_64;
                }
                else {
                  uVar7 = local_64;
                  uVar12 = 1;
                }
                *(uint *)(param_4 + 8) = uVar7;
                *(uint *)(param_4 + 0xc) = uVar12;
                FUN_10112730(*(undefined4 *)(*piVar1 + 0x15dc),&local_6c,*local_5c,iVar5);
                FUN_10112a10(*param_1 + 0x520,*local_68,iVar10,param_4,local_6c);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar8);
          }
          local_64 = local_64 + 1;
        } while (local_64 < local_58);
      }
    }
    uVar14 = 1;
  }
  else {
    iVar10 = *piVar3;
    uVar14 = 0;
    if (iVar10 != -1) {
      iVar5 = *(int *)(*piVar1 + 0x15dc);
      local_64 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_1016c074)(local_64);
      FUN_10111aa8(iVar5,iVar10,iVar9);
      (*(code *)PTR_FUN_1016c0c0)(local_64);
    }
    iVar10 = *piVar4;
    if (iVar10 != -1) {
      iVar6 = *(int *)(*piVar1 + 0x15e0);
      iVar5 = iVar6 + 0x1c;
      (*(code *)PTR_FUN_1016c074)(iVar5);
      FUN_10111aa8(iVar6,iVar10,iVar9);
      (*(code *)PTR_FUN_1016c0c0)(iVar5);
    }
    *piVar2 = -1;
    *piVar3 = -1;
    *piVar4 = -1;
  }
  return uVar14;
}

