/*
 * FUN_1801849b8 at 1801849b8
 * undefined FUN_1801849b8(void)
 * Address ranges: 1801849b8-180184b9f;180184bac-180184e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801849b8(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 local_120;
  longlong local_118;
  uint local_110;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined2 local_10a;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined2 local_f2;
  longlong local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_120 = 0x4e475349;
  local_118 = 0x800000000;
  local_e0 = 0x210;
  local_d8 = 1;
  local_c8 = param_2;
  local_f0 = FUN_1802229a8(0x210);
  lStack_e8 = local_f0;
  FUN_180214fe8(&local_f0,&local_120,0x10);
  uVar10 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(char *)(param_3 + 0x1cb) == '\0') {
    uVar7 = 0;
    if (*(int *)(param_3 + 0x158) != 0) {
      local_d0 = param_3 + 0x146;
      local_120 = param_3 + 0x134;
      do {
        uVar3 = 0;
        bVar1 = *(byte *)(local_d0 + (ulonglong)uVar10);
        uVar8 = (ulonglong)bVar1;
        uVar6 = 3;
        if (bVar1 == 2) {
          uVar6 = 1;
        }
        if (param_4 == '\0') {
          if (bVar1 == 0x10) {
            uVar8 = 1;
          }
          uVar7 = (uint)(*(ulonglong *)(*(longlong *)(param_3 + 0x1b0) + 0x48) >>
                        ((uVar8 & 0xf) << 2)) & 0xf;
          if (uVar7 < 2) {
LAB_180184cc0:
            uVar6 = 3;
            goto LAB_180184cc4;
          }
          if (uVar7 - 3 < 2) {
            uVar6 = 2;
            goto LAB_180184cc4;
          }
          if (1 < uVar7 - 5) {
            if (uVar7 != 2) goto LAB_180184cc0;
            uVar6 = 1;
            goto LAB_180184cc4;
          }
          uVar6 = 1;
          uVar9 = 1;
        }
        else {
LAB_180184cc4:
          uVar9 = 0xf;
        }
        pcVar4 = (char *)0x0;
        switch((uint)bVar1) {
        case 0:
          pcVar4 = s_POSITION_18022a9d0;
          goto LAB_180184da4;
        case 1:
          pcVar4 = s_TEXCOORD_18022a9e0;
          uVar3 = 9;
          break;
        case 2:
          pcVar4 = s_TEXCOORD_18022a9e0;
          uVar3 = 10;
          break;
        case 3:
          pcVar4 = s_TEXCOORD_18022a9e0;
          uVar3 = 8;
          break;
        case 4:
          pcVar4 = s_TEXCOORD_18022a9e0;
          uVar3 = 0xd;
          uVar9 = 1;
          break;
        case 5:
          pcVar4 = s_COLOR_18022c1c4;
          goto LAB_180184da4;
        case 6:
          pcVar4 = s_COLOR_18022c1c4;
          goto LAB_180184d10;
        case 7:
          pcVar4 = s_TEXCOORD_18022a9e0;
          goto LAB_180184da4;
        case 8:
          pcVar4 = s_TEXCOORD_18022a9e0;
LAB_180184d10:
          uVar3 = 1;
          break;
        case 9:
          pcVar4 = s_TEXCOORD_18022a9e0;
          uVar3 = 2;
          break;
        case 10:
          pcVar4 = s_TEXCOORD_18022a9e0;
          uVar3 = 3;
          break;
        case 0xb:
          pcVar4 = s_TEXCOORD_18022a9e0;
          uVar3 = 4;
          break;
        case 0xc:
          pcVar4 = s_TEXCOORD_18022a9e0;
          uVar3 = 5;
          break;
        case 0xd:
          pcVar4 = s_TEXCOORD_18022a9e0;
          uVar3 = 6;
          break;
        case 0xe:
          uVar3 = 7;
          pcVar4 = s_TEXCOORD_18022a9e0;
          break;
        case 0xf:
          uVar3 = 0xb;
          pcVar4 = s_TEXCOORD_18022a9e0;
          break;
        case 0x11:
          uVar9 = 7;
          pcVar4 = s_NFACT_18022c490;
LAB_180184da4:
          uVar3 = 0;
        }
        local_108 = FUN_180212e90(&local_c0,pcVar4);
        local_100 = 0;
        local_f3 = *(undefined1 *)(local_120 + (ulonglong)(uint)bVar1);
        local_f2 = 0;
        uStack_104 = uVar3;
        uStack_fc = uVar6;
        local_f8 = uVar10;
        local_f4 = uVar9;
        FUN_180214fe8(&local_f0,&local_108,0x18);
        uVar10 = uVar10 + 1;
        uVar7 = *(uint *)(param_3 + 0x158);
      } while (uVar10 < uVar7);
    }
  }
  else {
    uVar7 = 0;
    do {
      uVar5 = 3;
      if (uVar10 == 2) {
        uVar5 = 1;
      }
      if (param_4 == '\0') {
        uVar5 = uVar10;
        if (uVar10 == 0x10) {
          uVar5 = 1;
        }
        uVar5 = (uint)(*(ulonglong *)(*(longlong *)(param_3 + 0x1b0) + 0x48) >>
                      (((ulonglong)uVar5 & 0xf) << 2)) & 0xf;
        if (uVar5 < 2) {
LAB_180184acc:
          uVar5 = 3;
          goto LAB_180184ad0;
        }
        if (uVar5 - 3 < 2) {
          uVar5 = 2;
          goto LAB_180184ad0;
        }
        if (1 < uVar5 - 5) {
          if (uVar5 != 2) goto LAB_180184acc;
          uVar5 = 1;
          goto LAB_180184ad0;
        }
        uVar5 = 1;
        uVar9 = 1;
      }
      else {
LAB_180184ad0:
        uVar9 = 0xf;
      }
      pcVar4 = s_TEXCOORD_18022a9e0;
      switch(uVar10) {
      default:
        pcVar4 = s_POSITION_18022a9d0;
        goto LAB_180184bac;
      case 1:
        pcVar4 = s_TEXCOORD_18022a9e0;
        uVar6 = 9;
        break;
      case 2:
        pcVar4 = s_TEXCOORD_18022a9e0;
        uVar6 = 10;
        break;
      case 3:
        pcVar4 = s_TEXCOORD_18022a9e0;
        uVar6 = 8;
        break;
      case 4:
        pcVar4 = s_TEXCOORD_18022a9e0;
        uVar6 = 0xd;
        uVar9 = 1;
        break;
      case 5:
        pcVar4 = s_COLOR_18022c1c4;
        goto LAB_180184bac;
      case 6:
        pcVar4 = s_COLOR_18022c1c4;
        goto LAB_180184b18;
      case 7:
LAB_180184bac:
        uVar6 = 0;
        break;
      case 8:
LAB_180184b18:
        uVar6 = 1;
        break;
      case 9:
        pcVar4 = s_TEXCOORD_18022a9e0;
        uVar6 = 2;
        break;
      case 10:
        pcVar4 = s_TEXCOORD_18022a9e0;
        uVar6 = 3;
        break;
      case 0xb:
        pcVar4 = s_TEXCOORD_18022a9e0;
        uVar6 = 4;
        break;
      case 0xc:
        pcVar4 = s_TEXCOORD_18022a9e0;
        uVar6 = 5;
        break;
      case 0xd:
        pcVar4 = s_TEXCOORD_18022a9e0;
        uVar6 = 6;
        break;
      case 0xe:
        uVar6 = 7;
        break;
      case 0xf:
        uVar6 = 0xb;
        break;
      case 0x10:
        goto switchD_180184ae4_caseD_10;
      }
      uVar3 = FUN_180212e90(&local_c0,pcVar4);
      local_120 = CONCAT44(uVar6,uVar3);
      local_118 = (ulonglong)uVar5 << 0x20;
      local_10a = 0;
      local_110 = (uint)*(byte *)(param_3 + 0x146 + (ulonglong)uVar10);
      local_10b = *(undefined1 *)(param_3 + 0x134 + (ulonglong)uVar10);
      local_10c = uVar9;
      FUN_180214fe8(&local_f0,&local_120,0x18);
      uVar7 = uVar7 + 1;
switchD_180184ae4_caseD_10:
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x11);
  }
  FUN_180213160(&local_f0,uVar7,&local_c0);
  lVar2 = local_f0;
  FUN_180214fe8(local_c8,local_f0,lStack_e8 - local_f0);
  FUN_1802229d8(lVar2);
  return 1;
}

