/*
 * FUN_10033170 at 10033170
 * undefined FUN_10033170(void)
 * Address ranges: 10033170-1003366b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10033170(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  char cVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  uint uVar11;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [4];
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined1 local_94 [4];
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined1 local_84 [4];
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined1 local_64 [4];
  undefined1 auStack_60 [8];
  undefined4 local_58 [4];
  undefined8 local_48;
  
  local_48 = 0;
  iVar3 = *(int *)(param_1 + 0x138);
  FUN_1006b8a0(*(undefined4 *)(iVar3 + 0x3300),*(undefined4 *)(iVar3 + 0x3304),2,&local_48,0);
  iVar4 = *(int *)(param_1 + 0x138);
  piVar1 = (int *)(param_1 + 0x28);
  iVar3 = param_1 + 0x344;
  iVar5 = *(int *)(*(int *)(iVar4 + 4) + 0x3f);
  local_d0 = 0;
  local_cc = 0;
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  *piVar1 = iVar5;
  uVar9 = *(undefined4 *)(iVar4 + 0xa0);
  uVar6 = *(undefined4 *)(iVar4 + 0xa4);
  uVar10 = FUN_10038af8(iVar3,uVar9,uVar6,iVar5,*(undefined1 *)(*(int *)(iVar4 + 4) + 0x54),
                        &local_cc,&local_d0);
  if ((uVar10 & 1) != 0) {
    cVar8 = FUN_10038678(param_1 + 0x13c,uVar9,uVar6,*piVar1,&local_a8,&local_98,&local_88,&local_78
                         ,&local_68);
    pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (cVar8 != '\0') {
      uVar10 = FUN_10038678(param_1 + 0x240,uVar9,uVar6,*piVar1,local_a4,local_94,local_84,local_74,
                            local_64);
      if ((uVar10 & 1) != 0) {
        uVar10 = FUN_10038678(iVar3,uVar9,uVar6,*piVar1,auStack_a0,auStack_90,auStack_80,auStack_70,
                              auStack_60);
        if ((uVar10 & 1) != 0) {
          FUN_10038c50(iVar3);
          local_c8 = param_1 + 0x1e8;
          local_c4 = param_1 + 0x1ec;
          local_c0 = param_1 + 0x1f0;
          *(undefined4 *)(param_1 + 0x438) = local_cc;
          local_bc = param_1 + 500;
          local_b8 = param_1 + 0x1f8;
          *(undefined4 *)(param_1 + 0x43c) = local_d0;
          local_b4 = param_1 + 0x1fc;
          local_b0 = param_1 + 0x164;
          uVar11 = 0;
          do {
            FUN_100389d8(param_1 + 0x13c + uVar11 * 0x104);
            *(undefined4 *)(local_c8 + uVar11 * 0x104) = *(undefined4 *)(local_a4 + uVar11 * 4 + -4)
            ;
            *(undefined4 *)(local_c4 + uVar11 * 0x104) = *(undefined4 *)(local_94 + uVar11 * 4 + -4)
            ;
            *(undefined4 *)(local_c0 + uVar11 * 0x104) = *(undefined4 *)(local_84 + uVar11 * 4 + -4)
            ;
            *(undefined4 *)(local_bc + uVar11 * 0x104) = *(undefined4 *)(local_74 + uVar11 * 4 + -4)
            ;
            *(undefined4 *)(local_b8 + uVar11 * 0x104) = *(undefined4 *)(local_64 + uVar11 * 4 + -4)
            ;
            uVar2 = uVar11 + 1;
            *(undefined4 *)(local_b4 + uVar11 * 0x104) = local_58[uVar11];
            *(undefined4 *)(local_b0 + uVar11 * 0x104) = uVar9;
            *(undefined4 *)(param_1 + 0x168 + uVar11 * 0x104) = uVar6;
            *(int *)(param_1 + 0x16c + uVar11 * 0x104) = *piVar1;
            uVar11 = uVar2;
          } while (uVar2 < 3);
          return 1;
        }
        uVar9 = (*pcVar7)();
        (*extraout_w11)(uVar9);
        uVar9 = (*pcVar7)();
        (*extraout_w11_00)(uVar9);
        uVar9 = (*pcVar7)();
        (*extraout_w11_01)(uVar9);
        uVar9 = (*pcVar7)();
        (*extraout_w11_02)(uVar9);
        uVar9 = (*pcVar7)();
        (*extraout_w11_03)(uVar9);
        uVar9 = (*pcVar7)();
        (*extraout_w11_04)(uVar9);
      }
      uVar9 = (*pcVar7)();
      (*extraout_w11_05)(uVar9);
      uVar9 = (*pcVar7)();
      (*extraout_w11_06)(uVar9);
      uVar9 = (*pcVar7)();
      (*extraout_w11_07)(uVar9);
      uVar9 = (*pcVar7)();
      (*extraout_w11_08)(uVar9);
      uVar9 = (*pcVar7)();
      (*extraout_w11_09)(uVar9);
      uVar9 = (*pcVar7)();
      (*extraout_w11_10)(uVar9);
    }
    uVar9 = (*pcVar7)();
    (*extraout_w11_11)(uVar9);
    uVar9 = (*pcVar7)();
    (*extraout_w11_12)(uVar9);
  }
  return 0;
}

