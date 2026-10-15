/*
 * FUN_1003e3f8 at 1003e3f8
 * undefined FUN_1003e3f8(void)
 * Address ranges: 1003e3f8-1003eb7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1003e3f8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
            undefined8 *param_9,undefined4 param_10,uint param_11)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  undefined4 *extraout_w8_01;
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
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  code *extraout_w11_18;
  undefined1 in_stack_00000018;
  int *in_stack_00000020;
  uint local_d8;
  int local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined8 *puStack_c4;
  undefined8 *local_c0;
  undefined1 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint3 local_88;
  undefined1 uStack_85;
  undefined1 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  uint uStack_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar6 = param_2[1];
  puVar1 = (undefined4 *)(param_4 + 4);
  if (iVar6 == -1) {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar6 = (*extraout_w11)(uVar5);
    if (iVar6 == 0) {
      iVar6 = 1;
    }
  }
  uVar7 = param_2[2];
  if (uVar7 == 0xffffffff) {
    uVar5 = (*pcVar3)();
    uVar7 = (*extraout_w11_00)(uVar5);
    if (uVar7 == 0) {
      uVar7 = 1;
    }
  }
  uVar14 = (ulonglong)uVar7;
  local_c8 = *puVar1;
  puVar15 = param_2 + 7;
  puVar18 = param_2 + 6;
  puVar16 = param_2 + 4;
  puVar17 = param_2 + 5;
  local_bc = in_stack_00000018;
  puStack_c4 = param_7;
  local_c0 = param_8;
  (*pcVar3)();
  iVar6 = (*extraout_w11_01)(param_3,*param_2,iVar6,uVar14 & 0xffffffff,*extraout_w8,*puVar16,
                             *puVar17,*puVar18,*puVar15);
  if (iVar6 == 0) {
    return 0;
  }
  (*pcVar3)();
  cVar4 = (*extraout_w11_02)(iVar6);
  if (cVar4 == '\0') {
    local_90 = 0;
    _local_88 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    local_84 = 1;
    if (param_7 == (undefined8 *)0x0) {
      iVar12 = *(int *)(param_4 + 0x1c);
      iVar8 = *(int *)(param_4 + 0x18);
      if (iVar12 == 0) {
        iVar12 = 1;
      }
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      (*(code *)PTR_FUN_1016c26c)(&local_a0,0,0,iVar8,iVar12);
    }
    else {
      uStack_98 = param_7[1];
      local_a0 = *param_7;
    }
    local_88 = (uint3)(byte)local_88;
    if (param_8 == (undefined8 *)0x0) {
      (*pcVar3)();
      uVar5 = (*extraout_w11_03)(iVar6);
      (*pcVar3)();
      uVar9 = (*extraout_w11_04)(iVar6);
      (*(code *)PTR_FUN_1016c26c)(&local_b0,0,0,uVar9,uVar5);
    }
    else {
      uStack_a8 = param_8[1];
      local_b0 = *param_8;
    }
    (*pcVar3)();
    (*extraout_w11_05)(param_3,0,0,0,0,iVar6,*puVar1,&local_b0);
  }
  if (in_stack_00000020 != (int *)0x0) {
    (*(code *)PTR_FUN_1016c1c4)(&local_d8);
    uVar13 = (*(code *)PTR_FUN_1016c228)(0,*param_2,&local_d8,1);
    iVar12 = in_stack_00000020[3];
    if (iVar12 == 0) {
                    /* WARNING: Does not return */
      uVar13 = SoftwareBreakpoint(0xf004,0x1003e70c);
      (*(code *)uVar13)();
    }
    iVar8 = 0;
    if (iVar12 != 0) {
      iVar8 = (in_stack_00000020[2] * local_d4) / iVar12;
    }
    iVar12 = in_stack_00000020[1];
    if (iVar12 == 0) {
                    /* WARNING: Does not return */
      uVar13 = SoftwareBreakpoint(0xf004,0x1003e72c);
      (*(code *)uVar13)();
    }
    iVar2 = 0;
    if (iVar12 != 0) {
      iVar2 = (int)(*in_stack_00000020 * local_d8) / iVar12;
    }
    (*pcVar3)(uVar13,iVar2,iVar8);
    (*extraout_w11_06)(iVar6);
  }
  (*pcVar3)();
  iVar8 = (*extraout_w11_07)(param_1);
  iVar12 = DAT_10170ad0;
  if (iVar8 != 0) {
    iVar2 = DAT_10170ad0 + 0x318;
    (*(code *)PTR_FUN_1016c074)(iVar2);
    if (*(char *)(iVar12 + 0x759) != '\0') {
      (*(code *)PTR_FUN_1016c258)(iVar8,0x401,0x44454745,iVar6);
    }
    (*(code *)PTR_FUN_1016c0c0)(iVar2);
  }
  (*pcVar3)();
  local_cc = (*extraout_w11_08)(param_1);
  if (local_cc == 0) goto LAB_1003eacc;
  (*pcVar3)();
  iVar8 = (*extraout_w11_09)(param_1);
  iVar12 = DAT_10170ad0;
  local_d0 = (&DAT_10171380)[iVar8 * 0x8a];
  if (param_11 == 0) {
    param_11 = (uint)(*(char *)(DAT_10170ad0 + 0x7ea) != '\0');
  }
  uVar7 = *(uint *)(DAT_10170ad0 + 0x937);
  iVar8 = *(int *)(DAT_10170ad0 + 0x933);
  uVar5 = 0;
  if ((iVar8 == 3) || (iVar8 == 2 && *(int *)(param_4 + 0x34) == 0x10)) {
LAB_1003e8d4:
    if (*(int *)(iVar12 + 0x92f) == 1) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
      if (*(int *)(iVar12 + 0x92f) == 2) {
        uVar5 = 4;
      }
    }
    if (uVar7 == 0) {
      uVar9 = *puVar1;
      uVar11 = *(uint *)(param_4 + 0x18);
      local_d8 = *(uint *)(param_4 + 0x1c);
      (*pcVar3)();
      uVar10 = (*extraout_w11_11)(uVar9);
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        uVar13 = SoftwareBreakpoint(0xf004,0x1003e948);
        (*(code *)uVar13)();
      }
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar10 / uVar11;
      }
      (*pcVar3)();
      uVar11 = (*extraout_w11_12)(uVar9);
      if (local_d8 == 0) {
                    /* WARNING: Does not return */
        uVar13 = SoftwareBreakpoint(0xf004,0x1003e980);
        (*(code *)uVar13)();
      }
      uVar10 = 0;
      if (local_d8 != 0) {
        uVar10 = uVar11 / local_d8;
      }
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      if (uVar10 == 0) {
        uVar10 = 1;
      }
      if (uVar10 <= uVar7) {
        uVar7 = uVar10;
      }
    }
  }
  else if (iVar8 == 1 && *(int *)(param_4 + 0x34) == 0x10) {
    puVar15 = (undefined4 *)(param_4 + 0x24);
    uVar9 = (*pcVar3)();
    cVar4 = (*extraout_w11_10)(uVar9,*extraout_w8_00,*puVar15);
    if (cVar4 != '\0') goto LAB_1003e8d4;
  }
  puVar15 = (undefined4 *)(param_4 + 0x24);
  uVar9 = (*pcVar3)();
  (*extraout_w11_13)(uVar9,*extraout_w8_01,*puVar15,0);
  (*(code *)PTR_FUN_1016c270)(&local_50);
  if ((param_9 != (undefined8 *)0x0) && (iVar8 = (*(code *)PTR_FUN_1016c210)(param_9), iVar8 == 0))
  {
    if ((*(uint *)(iVar12 + 0x826) >> 2 & 1) == 0) {
      (*pcVar3)();
      cVar4 = (*extraout_w11_14)(iVar6);
      if (cVar4 == '\0') goto LAB_1003ea4c;
    }
    uStack_48 = param_9[1];
    local_50 = *param_9;
  }
LAB_1003ea4c:
  FUN_10040520(param_4);
  uVar14 = FUN_10040520(param_4);
  if ((uVar14 & 1) == 0) {
    local_64 = 0;
  }
  else {
    local_64 = *(undefined4 *)(iVar12 + 0x802);
  }
  local_60 = *(undefined1 *)(iVar12 + 0x7e7);
  local_80 = *puVar1;
  uStack_74 = uStack_48;
  local_7c = local_50;
  local_6c = uVar5;
  uStack_68 = uVar7;
  uVar5 = (*pcVar3)();
  (*extraout_w11_15)(uVar5,local_cc,iVar6,param_11,&local_80);
LAB_1003eacc:
  (*pcVar3)();
  (*extraout_w11_16)(param_1);
  uVar5 = (*pcVar3)();
  iVar12 = (*extraout_w11_17)(uVar5);
  if (iVar12 != 1) {
    (*pcVar3)();
    (*extraout_w11_18)(iVar6);
  }
  return 1;
}

