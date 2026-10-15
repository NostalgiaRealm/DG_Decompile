/*
 * FUN_10006960 at 10006960
 * undefined FUN_10006960(void)
 * Address ranges: 10006960-10006d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006960(undefined4 param_1,undefined4 param_2,int param_3,undefined8 *param_4,uint param_5
                 )

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
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
  uint uVar14;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  uint uStack_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_100068a0(param_1,param_2);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(param_1);
  if (iVar6 == 0) goto LAB_10006ca8;
  (*pcVar2)();
  (*extraout_w11_00)(param_1);
  iVar3 = DAT_100be0c0;
  if (param_5 == 0) {
    param_5 = (uint)(*(char *)(DAT_100be0c0 + 0x7ea) != '\0');
  }
  uVar14 = *(uint *)(DAT_100be0c0 + 0x937);
  iVar10 = *(int *)(DAT_100be0c0 + 0x933);
  uVar11 = 0;
  if ((iVar10 == 3) || (iVar10 == 2 && *(int *)(param_3 + 0x34) == 0x10)) {
LAB_10006aa8:
    if (*(int *)(iVar3 + 0x92f) == 1) {
      uVar11 = 2;
    }
    else {
      uVar11 = 0;
      if (*(int *)(iVar3 + 0x92f) == 2) {
        uVar11 = 4;
      }
    }
    if (uVar14 == 0) {
      uVar9 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      uVar7 = *(undefined4 *)(param_3 + 4);
      (*pcVar2)();
      uVar8 = (*extraout_w11_02)(uVar7);
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        uVar4 = SoftwareBreakpoint(0xf004,0x10006b20);
        (*(code *)uVar4)();
      }
      uVar14 = 0;
      if (uVar9 != 0) {
        uVar14 = uVar8 / uVar9;
      }
      (*pcVar2)();
      uVar9 = (*extraout_w11_03)(uVar7);
      if (uVar1 == 0) {
                    /* WARNING: Does not return */
        uVar4 = SoftwareBreakpoint(0xf004,0x10006b58);
        (*(code *)uVar4)();
      }
      uVar8 = 0;
      if (uVar1 != 0) {
        uVar8 = uVar9 / uVar1;
      }
      if (uVar14 == 0) {
        uVar14 = 1;
      }
      if (uVar8 == 0) {
        uVar8 = 1;
      }
      if (uVar8 <= uVar14) {
        uVar14 = uVar8;
      }
    }
  }
  else if (iVar10 == 1 && *(int *)(param_3 + 0x34) == 0x10) {
    puVar13 = (undefined4 *)(param_3 + 0x24);
    uVar7 = (*pcVar2)();
    cVar5 = (*extraout_w11_01)(uVar7,*extraout_w8,*puVar13);
    if (cVar5 != '\0') goto LAB_10006aa8;
  }
  puVar13 = (undefined4 *)(param_3 + 0x24);
  uVar7 = (*pcVar2)();
  (*extraout_w11_04)(uVar7,*extraout_w8_00,*puVar13,0);
  (*(code *)PTR_FUN_100ba2bc)(&local_50);
  if ((param_4 != (undefined8 *)0x0) && (iVar10 = (*(code *)PTR_FUN_100ba248)(param_4), iVar10 == 0)
     ) {
    if ((*(uint *)(iVar3 + 0x826) >> 2 & 1) == 0) {
      (*pcVar2)();
      cVar5 = (*extraout_w11_05)(param_2);
      if (cVar5 == '\0') goto LAB_10006c28;
    }
    uStack_48 = param_4[1];
    local_50 = *param_4;
  }
LAB_10006c28:
  FUN_100080c8(param_3);
  uVar12 = FUN_100080c8(param_3);
  if ((uVar12 & 1) == 0) {
    local_5c = 0;
  }
  else {
    local_5c = *(undefined4 *)(iVar3 + 0x802);
  }
  local_58 = *(undefined1 *)(iVar3 + 0x7e7);
  uStack_6c = uStack_48;
  local_74 = local_50;
  local_78 = *(undefined4 *)(param_3 + 4);
  local_64 = uVar11;
  uStack_60 = uVar14;
  uVar11 = (*pcVar2)();
  (*extraout_w11_06)(uVar11,iVar6,param_2,param_5,&local_78);
LAB_10006ca8:
  (*pcVar2)();
  (*extraout_w11_07)(param_1);
  uVar11 = (*pcVar2)();
  iVar6 = (*extraout_w11_08)(uVar11);
  if (iVar6 != 1) {
    (*pcVar2)();
    (*extraout_w11_09)(param_2);
  }
  return;
}

