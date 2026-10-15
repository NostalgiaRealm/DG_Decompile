/*
 * FUN_10021c10 at 10021c10
 * undefined FUN_10021c10(void)
 * Address ranges: 10021c10-10022147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10021c10(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int *extraout_w11;
  int *piVar11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int extraout_w12;
  int iVar12;
  uint uVar13;
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
  iVar12 = *piVar1;
  piVar11 = (int *)(iVar12 + 4);
  iVar8 = *(int *)(*piVar11 + 0x3f);
  if (iVar8 == 0) {
    iVar8 = FUN_100244d0(iVar12 + 0xc);
    iVar12 = extraout_w12;
    piVar11 = extraout_w11;
  }
  local_a0 = 0;
  local_9c = -1;
  piVar2 = (int *)(param_1 + 0x28);
  local_98 = -1;
  *piVar2 = iVar8;
  uVar9 = *(undefined4 *)(iVar12 + 0xa0);
  uVar4 = *(undefined4 *)(iVar12 + 0xa4);
  iVar12 = param_1 + 0x380;
  uVar10 = FUN_100325e0(iVar12,uVar9,uVar4,iVar8,*(undefined1 *)(*piVar11 + 0x54),&local_a0,
                        &local_98,&local_9c);
  if ((uVar10 & 1) != 0) {
    local_94 = param_1 + 0x140;
    cVar7 = FUN_100320a0(local_94,uVar9,uVar4,*piVar2,&local_88,&local_78,local_68,local_58);
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (cVar7 != '\0') {
      uVar10 = FUN_100320a0(param_1 + 0x260,uVar9,uVar4,*piVar2,local_84,local_74,local_68 + 1,
                            local_58 + 1);
      if ((uVar10 & 1) != 0) {
        uVar10 = FUN_100320a0(iVar12,uVar9,uVar4,*piVar2,auStack_80,auStack_70,auStack_60,auStack_50
                             );
        if ((uVar10 & 1) != 0) {
          FUN_100328d0(iVar12);
          iVar12 = local_94;
          local_8c = param_1 + 0x168;
          local_90 = param_1 + 0x1fc;
          *(int *)(param_1 + 0x44c) = local_a0;
          *(int *)(param_1 + 0x454) = local_9c;
          *(int *)(param_1 + 0x450) = local_98;
          local_9c = param_1 + 0x200;
          local_a0 = param_1 + 0x204;
          uVar13 = 0;
          local_98 = param_1 + 0x1f8;
          do {
            FUN_10032448(iVar12 + uVar13 * 0x120);
            *(undefined4 *)(local_98 + uVar13 * 0x120) = *(undefined4 *)(local_84 + uVar13 * 4 + -4)
            ;
            *(int *)(local_9c + uVar13 * 0x120) = local_68[uVar13];
            *(int *)(local_a0 + uVar13 * 0x120) = local_58[uVar13];
            uVar3 = uVar13 + 1;
            *(undefined4 *)(local_90 + uVar13 * 0x120) = *(undefined4 *)(local_74 + uVar13 * 4 + -4)
            ;
            *(undefined4 *)(local_8c + uVar13 * 0x120) = uVar9;
            *(undefined4 *)(param_1 + 0x16c + uVar13 * 0x120) = uVar4;
            *(int *)(param_1 + 0x170 + uVar13 * 0x120) = *piVar2;
            uVar13 = uVar3;
          } while (uVar3 < 3);
          return 1;
        }
        uVar9 = (*pcVar6)();
        (*extraout_w11_00)(uVar9);
        uVar9 = (*pcVar6)();
        (*extraout_w11_01)(uVar9);
        if (local_68[1] != -1) {
          iVar8 = *(int *)(*(int *)(*piVar1 + 0x3688) + 0x15d8);
          iVar12 = iVar8 + 0x1c;
          (*(code *)PTR_FUN_100a803c)(iVar12);
          FUN_100675c8(iVar8,local_68[1],2);
          (*(code *)PTR_FUN_100a8090)(iVar12);
        }
        if (local_58[1] != -1) {
          iVar8 = *(int *)(*(int *)(*piVar1 + 0x3688) + 0x15dc);
          iVar12 = iVar8 + 0x1c;
          (*(code *)PTR_FUN_100a803c)(iVar12);
          FUN_100675c8(iVar8,local_58[1],2);
          (*(code *)PTR_FUN_100a8090)(iVar12);
        }
      }
      uVar9 = (*pcVar6)();
      (*extraout_w11_02)(uVar9);
      uVar9 = (*pcVar6)();
      (*extraout_w11_03)(uVar9);
      if (local_68[0] != -1) {
        iVar8 = *(int *)(*(int *)(*piVar1 + 0x3688) + 0x15d8);
        iVar12 = iVar8 + 0x1c;
        (*(code *)PTR_FUN_100a803c)(iVar12);
        FUN_100675c8(iVar8,local_68[0],2);
        (*(code *)PTR_FUN_100a8090)(iVar12);
      }
      if (local_58[0] != -1) {
        iVar8 = *(int *)(*(int *)(*piVar1 + 0x3688) + 0x15dc);
        iVar12 = iVar8 + 0x1c;
        (*(code *)PTR_FUN_100a803c)(iVar12);
        FUN_100675c8(iVar8,local_58[0],2);
        (*(code *)PTR_FUN_100a8090)(iVar12);
      }
    }
    uVar9 = (*pcVar6)();
    (*extraout_w11_04)(uVar9);
    iVar12 = local_9c;
    if (local_9c != -1) {
      iVar5 = *(int *)(*(int *)(*piVar1 + 0x3688) + 0x15e0);
      iVar8 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_100a803c)(iVar8);
      FUN_100675c8(iVar5,iVar12,1);
      (*(code *)PTR_FUN_100a8090)(iVar8);
    }
    iVar12 = local_98;
    if (local_98 != -1) {
      iVar5 = *(int *)(*(int *)(*piVar1 + 0x3688) + 0x15d8);
      iVar8 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_100a803c)(iVar8);
      FUN_100675c8(iVar5,iVar12,1);
      (*(code *)PTR_FUN_100a8090)(iVar8);
    }
  }
  return 0;
}

