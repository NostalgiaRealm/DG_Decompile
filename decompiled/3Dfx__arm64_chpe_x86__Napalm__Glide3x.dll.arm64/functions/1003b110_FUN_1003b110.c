/*
 * FUN_1003b110 at 1003b110
 * undefined FUN_1003b110(void)
 * Address ranges: 1003b110-1003b61b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003b110(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int *extraout_w11;
  int *piVar9;
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
  code *extraout_w11_13;
  int extraout_w12;
  int iVar10;
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
  iVar10 = *(int *)(param_1 + 0x138);
  FUN_10070f40(*(undefined4 *)(iVar10 + 0x3680),*(undefined4 *)(iVar10 + 0x3684),2,&local_48,0);
  iVar10 = *(int *)(param_1 + 0x138);
  piVar9 = (int *)(iVar10 + 4);
  iVar6 = *(int *)(*piVar9 + 0x3f);
  if (iVar6 == 0) {
    iVar6 = FUN_100244d0(iVar10 + 0xc);
    iVar10 = extraout_w12;
    piVar9 = extraout_w11;
  }
  piVar1 = (int *)(param_1 + 0x28);
  local_d0 = 0;
  local_cc = 0;
  *piVar1 = iVar6;
  uVar7 = *(undefined4 *)(iVar10 + 0xa0);
  uVar3 = *(undefined4 *)(iVar10 + 0xa4);
  iVar10 = param_1 + 0x344;
  uVar8 = FUN_10038810(iVar10,uVar7,uVar3,iVar6,*(undefined1 *)(*piVar9 + 0x54),&local_cc,&local_d0)
  ;
  if ((uVar8 & 1) != 0) {
    cVar5 = FUN_10038390(param_1 + 0x13c,uVar7,uVar3,*piVar1,&local_a8,&local_98,&local_88,&local_78
                         ,&local_68);
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (cVar5 != '\0') {
      uVar8 = FUN_10038390(param_1 + 0x240,uVar7,uVar3,*piVar1,local_a4,local_94,local_84,local_74,
                           local_64);
      if ((uVar8 & 1) != 0) {
        uVar8 = FUN_10038390(iVar10,uVar7,uVar3,*piVar1,auStack_a0,auStack_90,auStack_80,auStack_70,
                             auStack_60);
        if ((uVar8 & 1) != 0) {
          FUN_10038970(iVar10);
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
            FUN_100386f0(param_1 + 0x13c + uVar11 * 0x104);
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
            *(undefined4 *)(local_b0 + uVar11 * 0x104) = uVar7;
            *(undefined4 *)(param_1 + 0x168 + uVar11 * 0x104) = uVar3;
            *(int *)(param_1 + 0x16c + uVar11 * 0x104) = *piVar1;
            uVar11 = uVar2;
          } while (uVar2 < 3);
          return 1;
        }
        uVar7 = (*pcVar4)();
        (*extraout_w11_00)(uVar7);
        uVar7 = (*pcVar4)();
        (*extraout_w11_01)(uVar7);
        uVar7 = (*pcVar4)();
        (*extraout_w11_02)(uVar7);
        uVar7 = (*pcVar4)();
        (*extraout_w11_03)(uVar7);
        uVar7 = (*pcVar4)();
        (*extraout_w11_04)(uVar7);
        uVar7 = (*pcVar4)();
        (*extraout_w11_05)(uVar7);
      }
      uVar7 = (*pcVar4)();
      (*extraout_w11_06)(uVar7);
      uVar7 = (*pcVar4)();
      (*extraout_w11_07)(uVar7);
      uVar7 = (*pcVar4)();
      (*extraout_w11_08)(uVar7);
      uVar7 = (*pcVar4)();
      (*extraout_w11_09)(uVar7);
      uVar7 = (*pcVar4)();
      (*extraout_w11_10)(uVar7);
      uVar7 = (*pcVar4)();
      (*extraout_w11_11)(uVar7);
    }
    uVar7 = (*pcVar4)();
    (*extraout_w11_12)(uVar7);
    uVar7 = (*pcVar4)();
    (*extraout_w11_13)(uVar7);
  }
  return 0;
}

