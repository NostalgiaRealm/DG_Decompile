/*
 * FUN_100325c0 at 100325c0
 * undefined FUN_100325c0(void)
 * Address ranges: 100325c0-10032ae7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100325c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  char cVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar12;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined1 local_84 [4];
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined1 auStack_70 [8];
  int local_68 [2];
  undefined1 auStack_60 [8];
  int local_58 [2];
  undefined1 auStack_50 [16];
  
  piVar1 = (int *)(param_1 + 0x138);
  iVar5 = *piVar1;
  piVar2 = (int *)(param_1 + 0x28);
  iVar3 = param_1 + 0x380;
  iVar6 = *(int *)(*(int *)(iVar5 + 4) + 0x3f);
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  *piVar2 = iVar6;
  local_a0 = 0;
  local_9c = -1;
  local_98 = -1;
  uVar10 = *(undefined4 *)(iVar5 + 0xa0);
  uVar7 = *(undefined4 *)(iVar5 + 0xa4);
  uVar11 = FUN_10040318(iVar3,uVar10,uVar7,iVar6,*(undefined1 *)(*(int *)(iVar5 + 4) + 0x54),
                        &local_a0,&local_98,&local_9c);
  if ((uVar11 & 1) != 0) {
    local_94 = param_1 + 0x140;
    cVar9 = FUN_1003fdd8(local_94,uVar10,uVar7,*piVar2,&local_88,&local_78,local_68,local_58);
    pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (cVar9 != '\0') {
      uVar11 = FUN_1003fdd8(param_1 + 0x260,uVar10,uVar7,*piVar2,local_84,local_74,local_68 + 1,
                            local_58 + 1);
      if ((uVar11 & 1) != 0) {
        uVar11 = FUN_1003fdd8(iVar3,uVar10,uVar7,*piVar2,auStack_80,auStack_70,auStack_60,auStack_50
                             );
        if ((uVar11 & 1) != 0) {
          FUN_10040600(iVar3);
          iVar3 = local_94;
          local_8c = param_1 + 0x168;
          local_90 = param_1 + 0x1fc;
          *(int *)(param_1 + 0x44c) = local_a0;
          *(int *)(param_1 + 0x454) = local_9c;
          *(int *)(param_1 + 0x450) = local_98;
          local_9c = param_1 + 0x200;
          local_a0 = param_1 + 0x204;
          uVar12 = 0;
          local_98 = param_1 + 0x1f8;
          do {
            FUN_10040180(iVar3 + uVar12 * 0x120);
            *(undefined4 *)(local_98 + uVar12 * 0x120) = *(undefined4 *)(local_84 + uVar12 * 4 + -4)
            ;
            *(int *)(local_9c + uVar12 * 0x120) = local_68[uVar12];
            *(int *)(local_a0 + uVar12 * 0x120) = local_58[uVar12];
            uVar4 = uVar12 + 1;
            *(undefined4 *)(local_90 + uVar12 * 0x120) = *(undefined4 *)(local_74 + uVar12 * 4 + -4)
            ;
            *(undefined4 *)(local_8c + uVar12 * 0x120) = uVar10;
            *(undefined4 *)(param_1 + 0x16c + uVar12 * 0x120) = uVar7;
            *(int *)(param_1 + 0x170 + uVar12 * 0x120) = *piVar2;
            uVar12 = uVar4;
          } while (uVar4 < 3);
          return 1;
        }
        uVar10 = (*pcVar8)();
        (*extraout_w11)(uVar10);
        uVar10 = (*pcVar8)();
        (*extraout_w11_00)(uVar10);
        if (local_68[1] != -1) {
          iVar6 = *(int *)(*(int *)(*piVar1 + 0x3188) + 0x15d8);
          iVar3 = iVar6 + 0x1c;
          (*(code *)PTR_FUN_1009d03c)(iVar3);
          FUN_1005e718(iVar6,local_68[1],2);
          (*(code *)PTR_FUN_1009d090)(iVar3);
        }
        if (local_58[1] != -1) {
          iVar6 = *(int *)(*(int *)(*piVar1 + 0x3188) + 0x15dc);
          iVar3 = iVar6 + 0x1c;
          (*(code *)PTR_FUN_1009d03c)(iVar3);
          FUN_1005e718(iVar6,local_58[1],2);
          (*(code *)PTR_FUN_1009d090)(iVar3);
        }
      }
      uVar10 = (*pcVar8)();
      (*extraout_w11_01)(uVar10);
      uVar10 = (*pcVar8)();
      (*extraout_w11_02)(uVar10);
      if (local_68[0] != -1) {
        iVar6 = *(int *)(*(int *)(*piVar1 + 0x3188) + 0x15d8);
        iVar3 = iVar6 + 0x1c;
        (*(code *)PTR_FUN_1009d03c)(iVar3);
        FUN_1005e718(iVar6,local_68[0],2);
        (*(code *)PTR_FUN_1009d090)(iVar3);
      }
      if (local_58[0] != -1) {
        iVar6 = *(int *)(*(int *)(*piVar1 + 0x3188) + 0x15dc);
        iVar3 = iVar6 + 0x1c;
        (*(code *)PTR_FUN_1009d03c)(iVar3);
        FUN_1005e718(iVar6,local_58[0],2);
        (*(code *)PTR_FUN_1009d090)(iVar3);
      }
    }
    uVar10 = (*pcVar8)();
    (*extraout_w11_03)(uVar10);
    iVar3 = local_9c;
    if (local_9c != -1) {
      iVar5 = *(int *)(*(int *)(*piVar1 + 0x3188) + 0x15e0);
      iVar6 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_1009d03c)(iVar6);
      FUN_1005e718(iVar5,iVar3,1);
      (*(code *)PTR_FUN_1009d090)(iVar6);
    }
    iVar3 = local_98;
    if (local_98 != -1) {
      iVar5 = *(int *)(*(int *)(*piVar1 + 0x3188) + 0x15d8);
      iVar6 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_1009d03c)(iVar6);
      FUN_1005e718(iVar5,iVar3,1);
      (*(code *)PTR_FUN_1009d090)(iVar6);
    }
  }
  return 0;
}

