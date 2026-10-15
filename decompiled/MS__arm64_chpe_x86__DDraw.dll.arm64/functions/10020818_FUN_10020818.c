/*
 * FUN_10020818 at 10020818
 * undefined FUN_10020818(void)
 * Address ranges: 10020818-10020c73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_10020818(int *param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5,int param_6,
            int param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11,
            undefined4 param_12,undefined4 param_13,undefined4 param_14,int param_15,
            undefined4 param_16,int param_17,undefined4 param_18,char param_19,undefined4 param_20,
            char param_21,undefined4 param_22,byte param_23,undefined4 param_24,char param_25)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int iVar12;
  int extraout_w1;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int local_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong local_130;
  longlong lStack_128;
  undefined8 local_120;
  undefined4 local_110 [2];
  undefined8 local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined8 local_cc;
  int local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  *(char *)((int)param_1 + 0x39) = param_21;
  if (((*(char *)(*param_1 + param_1[1] * 0x18 + 0x530) == '\0') || (param_19 != '\0')) &&
     (param_21 != '\0')) {
    local_d0 = 0;
  }
  else {
    local_d0 = 1;
  }
  local_cc = 0;
  local_d8 = 4;
  if (local_d0 == 0) {
    local_d8 = 1;
  }
  uStack_d4 = 3;
  if (local_d0 == 0) {
    uStack_d4 = 0;
  }
  cVar9 = FUN_1001fc90(param_1,param_4,param_5);
  if (cVar9 == '\0') {
    return 0;
  }
  if (param_21 != '\0') {
    local_78 = 1;
    uStack_70 = 0;
    local_110[0] = 3;
    local_68 = 0;
    local_108 = 0;
    local_e0 = 2;
    if (param_17 == 0) {
      local_e0 = 0;
    }
    local_e0 = param_15 != 0 | local_e0;
    local_f8 = CONCAT26((short)param_4,CONCAT24((short)param_5,param_3));
    local_f0 = CONCAT44(param_6,param_7);
    local_e8 = 0;
    if (param_25 == '\0' || param_6 == 1) {
      iStack_13c = (uint)param_23 * 4 + 5;
    }
    else {
      iStack_13c = 7;
    }
    lStack_128 = 0;
    local_130 = 0;
    uStack_138 = param_11;
    switch(iStack_13c) {
    case 5:
      local_130 = -0x100000000;
      lStack_128 = (ulonglong)param_5 << 0x20;
      break;
    case 7:
      local_130 = (ulonglong)param_5 << 0x20;
      lStack_128 = 0;
      break;
    case 9:
      local_130 = -0x100000000;
      lStack_128 = 0;
    }
    local_120 = 0;
    local_a0 = 0;
    local_a8 = lStack_128;
    local_b0 = local_130;
    _local_c0 = CONCAT44(iStack_13c,param_9);
    _uStack_b8 = CONCAT44(uStack_134,param_13);
    if (iStack_13c == 5) {
      local_a0 = 1;
    }
    else if (iStack_13c == 9) {
      _local_c0 = CONCAT44(5,param_9);
      local_b0 = -0x100000000;
      local_a8 = (ulonglong)param_5 << 0x20;
      local_a0 = 0;
    }
    uStack_5c = 7;
    if (param_6 == 1) {
      uStack_5c = 5;
    }
    iStack_60 = param_15;
    local_88 = 0;
    uStack_8c = 6;
    if (param_6 == 1) {
      uStack_8c = 4;
    }
    uStack_50 = 0;
    uStack_58 = 0;
    local_84 = 0;
    local_90 = param_17;
    param_1[0xb] = param_8;
    local_7c = 0;
    if (param_15 != 0) {
      param_1[0xd] = param_15;
    }
    piVar2 = &local_90;
    if (param_17 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      param_1[0xd] = param_17;
    }
    piVar3 = &iStack_60;
    if (param_15 == 0) {
      piVar3 = (int *)0x0;
    }
    piVar4 = &local_c0;
    if (param_9 == 0) {
      piVar4 = (int *)0x0;
    }
    local_140 = param_8;
    uStack_100 = param_2 & 0xffffffff;
    uVar10 = FUN_10020310(param_1,&local_d8,&local_78,local_110,&local_140,piVar4,piVar3,piVar2,
                          param_4);
    return uVar10;
  }
  uVar11 = FUN_100728b8(param_7);
  iVar12 = FUN_10072970(param_7,uVar11);
  if (param_7 - 0x44U < 2) {
    uVar16 = 2;
  }
  else {
    if (param_7 - 0x46U < 0xf) {
      uVar18 = 4;
      uVar16 = 4;
      goto LAB_10020afc;
    }
    uVar16 = 1;
  }
  uVar18 = 1;
LAB_10020afc:
  uStack_100 = 0;
  uVar17 = 0;
  if (param_5 != 0) {
    do {
      uVar13 = 0;
      if (param_4 != 0) {
        piVar2 = param_1 + 5;
        uVar15 = param_2 & 0xffffffff;
        uVar5 = param_3;
        do {
          uVar14 = (uint)uVar15;
          if (extraout_w1 == 0) {
            if (uVar14 < uVar16) {
              uVar19 = 1;
            }
            else {
              if (uVar16 == 0) {
                    /* WARNING: Does not return */
                uVar7 = SoftwareBreakpoint(0xf004,0x10020b48);
                (*(code *)uVar7)();
              }
              uVar19 = 0;
              if (uVar16 != 0) {
                uVar19 = uVar14 / uVar16;
              }
            }
            iVar20 = uVar19 * iVar12;
            if (uVar5 < uVar18) {
              uVar19 = 1;
            }
            else {
              if (uVar18 == 0) {
                    /* WARNING: Does not return */
                uVar7 = SoftwareBreakpoint(0xf004,0x10020b68);
                (*(code *)uVar7)();
              }
              uVar19 = 0;
              if (uVar18 != 0) {
                uVar19 = uVar5 / uVar18;
              }
            }
          }
          else {
            iVar20 = uVar14 * extraout_w1;
            uVar19 = uVar5;
          }
          uVar1 = iVar20 + 0xffU & 0xffffff00;
          iVar6 = uVar1 * uVar19;
          uVar19 = (int)uStack_100 + 0x1ffU & 0xfffffe00;
          iVar20 = uVar13 + param_4 * uVar17;
          uVar13 = uVar13 + 1;
          *(uint *)(*piVar2 + iVar20 * 0x20) = uVar19;
          *(uint *)(*piVar2 + iVar20 * 0x20 + 8) = uVar1;
          uStack_100 = (ulonglong)(iVar6 + uVar19);
          *(int *)(*piVar2 + iVar20 * 0x20 + 4) = iVar6;
          uVar19 = uVar14 >> 1;
          if (uVar14 == 1) {
            uVar19 = 1;
          }
          uVar15 = (ulonglong)uVar19;
          bVar8 = uVar5 == 1;
          uVar5 = uVar5 >> 1;
          if (bVar8) {
            uVar5 = 1;
          }
        } while (uVar13 < param_4);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_5);
  }
  local_e0 = 0;
  local_110[0] = 1;
  local_108 = 0;
  local_e8 = 0x100000000;
  local_f8 = 0x1000100000001;
  local_f0 = 0x100000000;
  uVar10 = FUN_10020310(param_1,&local_d8,0,local_110,0,0,0,0,param_4);
  return uVar10;
}

