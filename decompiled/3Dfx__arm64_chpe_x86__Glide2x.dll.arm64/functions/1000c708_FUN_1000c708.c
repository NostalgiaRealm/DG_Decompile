/*
 * FUN_1000c708 at 1000c708
 * undefined FUN_1000c708(void)
 * Address ranges: 1000c708-1000cb83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1000c708(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,int *param_6,undefined4 param_7,undefined4 *param_8,uint param_9)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  ulonglong uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar9;
  char cVar10;
  uint in_stack_00000010;
  uint local_130;
  char *pcStack_12c;
  code **local_128;
  char *local_124;
  undefined1 *local_120;
  char local_100 [4];
  code *local_fc;
  code *local_f8;
  code *local_f4;
  undefined4 local_f0;
  undefined4 *local_ec;
  code *local_e8;
  int *local_e4;
  code *local_e0;
  code *pcStack_dc;
  int *local_d8;
  code *local_d4;
  code *local_d0;
  undefined1 auStack_c8 [136];
  
  local_f4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = 1;
  cVar10 = '\0';
  local_f0 = param_7;
  local_ec = param_8;
  if (param_9 != 1) {
    local_100[0] = cVar10;
    if (1 < param_9) {
      return 0;
    }
    goto LAB_1000c99c;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar3 = (*extraout_w11)(param_2,param_3,param_4,0);
  local_fc = (code *)0x0;
  local_f8 = (code *)uVar3;
  uVar8 = FUN_10009da0(uVar3,s_unforced_10095998,&DAT_10095521,&local_fc);
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_10009da0(uVar3,&DAT_100959b4,&DAT_100959a8,&local_fc);
    if ((uVar8 & 1) != 0) {
      iVar6 = -1;
LAB_1000c8dc:
      *param_6 = iVar6;
      *param_5 = iVar6;
      goto LAB_1000c8e4;
    }
    uVar8 = FUN_10009da0(uVar3,0x100959c8,&DAT_100959b8,&local_fc);
    if ((uVar8 & 1) != 0) {
      iVar6 = -2;
      goto LAB_1000c8dc;
    }
    uVar8 = FUN_10009da0(uVar3,0x100959e0,&DAT_100959d0,&local_fc);
    if ((uVar8 & 1) != 0) {
      iVar6 = -3;
      goto LAB_1000c8dc;
    }
    uVar8 = FUN_10009da0(uVar3,0x10095a00,&DAT_100959e8,&local_fc);
    if ((uVar8 & 1) != 0) {
      iVar6 = -4;
      goto LAB_1000c8dc;
    }
    uVar8 = FUN_10009da0(uVar3,0x10095a20,&DAT_10095a10,&local_fc);
    if ((uVar8 & 1) != 0) {
      iVar6 = -5;
      goto LAB_1000c8dc;
    }
    uVar8 = FUN_10009da0(uVar3,0x10095a40,&DAT_10095a28,&local_fc);
    pcVar2 = local_f8;
    if ((uVar8 & 1) != 0) {
      iVar6 = -6;
      goto LAB_1000c8dc;
    }
    uVar8 = FUN_10009da0(local_f8,s_desktop_10095a60,s_desktop__ux_10095a50,&local_fc);
    if ((uVar8 & 1) != 0) {
      iVar6 = -8;
      goto LAB_1000c8dc;
    }
    local_120 = auStack_c8;
    local_124 = local_100;
    local_128 = &local_fc;
    local_130 = (uint)pcVar2;
    pcStack_12c = s__u_c_s_10095a68;
    iVar6 = FUN_1007c2c0(&local_130,0x14);
    if (local_100[0] != 'x' || iVar6 != 2) {
LAB_1000ca9c:
      uVar8 = FUN_1000c658(local_f8,param_5,param_6,local_f0,local_ec);
      local_100[0] = cVar10;
      if ((uVar8 & 1) == 0) {
        uVar9 = 0;
      }
      goto LAB_1000c99c;
    }
    *param_5 = -7;
    *param_6 = (int)local_fc;
    if ((code *)0xfd < local_fc + -2) goto LAB_1000ca9c;
LAB_1000c954:
    *param_6 = (int)local_fc;
  }
  else {
    *param_6 = 0;
    *param_5 = 0;
LAB_1000c8e4:
    if (local_fc + -2 < (code *)0xfe) goto LAB_1000c954;
  }
  iVar6 = *param_5;
  if (iVar6 == -8) {
    if (in_stack_00000010 < 0x275) {
      uVar9 = 0;
    }
    else {
LAB_1000c984:
      uVar9 = (uint)(*param_6 == iVar6 || 0x277 < in_stack_00000010);
    }
  }
  else if (iVar6 != 0 && iVar6 != -7) goto LAB_1000c984;
  local_100[0] = (char)uVar9;
LAB_1000c99c:
  pcVar2 = local_f4;
  uVar3 = 0;
  if (uVar9 != 0) {
    pcVar7 = FUN_1008d968;
    local_e8 = local_f4;
    local_f4 = FUN_1008da08;
    local_d4 = FUN_1008dab0;
    local_d0 = pcVar2;
    local_e0 = FUN_1008dab0;
    pcStack_dc = pcVar2;
    local_fc = FUN_1008dab0;
    local_f8 = pcVar2;
    local_e4 = param_5;
    local_d8 = param_6;
    do {
      (*pcVar2)(pcVar7);
      uVar4 = (*extraout_w11_00)(param_2,param_3,param_4);
      if (uVar4 <= uVar3) {
        return uVar9;
      }
      (*local_f8)();
      uVar5 = (*extraout_w11_01)(param_2,param_3,param_4,uVar3);
      iVar6 = FUN_1007a140(uVar5,&DAT_10095ae0);
      if (iVar6 == 0) {
        if (local_100[0] == '\0') {
          (*local_e8)();
          piVar1 = local_e4;
          pcVar7 = extraout_w11_02;
LAB_1000ca84:
          pcVar7 = (code *)(*pcVar7)(param_2,param_3,param_4,uVar3,piVar1);
LAB_1000cb54:
          uVar9 = (uint)pcVar7 & 0xff;
        }
        else {
LAB_1000cb00:
          pcVar7 = (code *)0x0;
          uVar9 = 0;
        }
      }
      else {
        iVar6 = FUN_1007a140(uVar5,&DAT_10095ae4);
        if (iVar6 == 0) {
          if (local_100[0] == '\0') {
            (*pcStack_dc)();
            piVar1 = local_d8;
            pcVar7 = extraout_w11_03;
            goto LAB_1000ca84;
          }
          goto LAB_1000cb00;
        }
        pcVar7 = (code *)FUN_1007a140(uVar5,s_refrate_10095ae8);
        if (pcVar7 == (code *)0x0) {
          (*local_d0)();
          pcVar7 = (code *)(*extraout_w11_04)(param_2,param_3,param_4,uVar3,local_f0);
          *local_ec = 1;
          goto LAB_1000cb54;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar9 != 0);
  }
  return 0;
}

