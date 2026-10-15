/*
 * FUN_180071738 at 180071738
 * undefined FUN_180071738(void)
 * Address ranges: 180071738-18007190f;18007191c-180071b9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180071738(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)

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
  undefined8 local_130;
  longlong local_128;
  uint local_120;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined2 local_11a;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined1 local_104;
  undefined1 local_103;
  undefined2 local_102;
  longlong local_100;
  longlong lStack_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  local_130 = 0x4e475349;
  local_128 = 0x800000000;
  local_f0 = 0x210;
  local_e8 = 1;
  local_e0 = param_2;
  local_100 = thunk_FUN_180102f80(0x210);
  lStack_f8 = local_100;
  FUN_1800f5a90(&local_100,&local_130,0x10);
  uVar10 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(char *)(param_3 + 0x1cb) == '\0') {
    uVar7 = 0;
    if (*(int *)(param_3 + 0x158) != 0) {
      local_130 = param_3 + 0x146;
      do {
        uVar3 = 0;
        bVar1 = *(byte *)(local_130 + (ulonglong)uVar10);
        uVar8 = (ulonglong)bVar1;
        uVar6 = 3;
        if (bVar1 == 2) {
          uVar6 = 1;
        }
        if ((param_4 & 1) == 0) {
          if (bVar1 == 0x10) {
            uVar8 = 1;
          }
          uVar7 = (uint)(*(ulonglong *)(*(longlong *)(param_3 + 0x1b0) + 0x48) >>
                        ((uVar8 & 0xf) << 2)) & 0xf;
          if (uVar7 < 2) {
LAB_180071a20:
            uVar6 = 3;
            goto LAB_180071a24;
          }
          if (uVar7 - 3 < 2) {
            uVar6 = 2;
            goto LAB_180071a24;
          }
          if (1 < uVar7 - 5) {
            if (uVar7 != 2) goto LAB_180071a20;
            uVar6 = 1;
            goto LAB_180071a24;
          }
          uVar6 = 1;
          uVar9 = 1;
        }
        else {
LAB_180071a24:
          uVar9 = 0xf;
        }
        pcVar4 = (char *)0x0;
        switch((uint)bVar1) {
        case 0:
          pcVar4 = s_POSITION_180233a80;
          goto LAB_180071b04;
        case 1:
          pcVar4 = s_TEXCOORD_180233a70;
          uVar3 = 9;
          break;
        case 2:
          pcVar4 = s_TEXCOORD_180233a70;
          uVar3 = 10;
          break;
        case 3:
          pcVar4 = s_TEXCOORD_180233a70;
          uVar3 = 8;
          break;
        case 4:
          pcVar4 = s_TEXCOORD_180233a70;
          uVar3 = 0xd;
          uVar9 = 1;
          break;
        case 5:
          pcVar4 = s_COLOR_180234878;
          goto LAB_180071b04;
        case 6:
          pcVar4 = s_COLOR_180234878;
          goto LAB_180071a70;
        case 7:
          pcVar4 = s_TEXCOORD_180233a70;
          goto LAB_180071b04;
        case 8:
          pcVar4 = s_TEXCOORD_180233a70;
LAB_180071a70:
          uVar3 = 1;
          break;
        case 9:
          pcVar4 = s_TEXCOORD_180233a70;
          uVar3 = 2;
          break;
        case 10:
          pcVar4 = s_TEXCOORD_180233a70;
          uVar3 = 3;
          break;
        case 0xb:
          pcVar4 = s_TEXCOORD_180233a70;
          uVar3 = 4;
          break;
        case 0xc:
          pcVar4 = s_TEXCOORD_180233a70;
          uVar3 = 5;
          break;
        case 0xd:
          pcVar4 = s_TEXCOORD_180233a70;
          uVar3 = 6;
          break;
        case 0xe:
          uVar3 = 7;
          pcVar4 = s_TEXCOORD_180233a70;
          break;
        case 0xf:
          uVar3 = 0xb;
          pcVar4 = s_TEXCOORD_180233a70;
          break;
        case 0x11:
          uVar9 = 7;
          pcVar4 = s_NFACT_1802349f8;
LAB_180071b04:
          uVar3 = 0;
        }
        local_118 = func_0x000180212e90(&local_d0,pcVar4);
        local_103 = *(undefined1 *)(param_3 + 0x134 + (ulonglong)(uint)bVar1);
        local_110 = 0;
        local_102 = 0;
        uStack_114 = uVar3;
        uStack_10c = uVar6;
        local_108 = uVar10;
        local_104 = uVar9;
        FUN_1800f5a90(&local_100,&local_118,0x18);
        uVar7 = *(uint *)(param_3 + 0x158);
        uVar10 = uVar10 + 1;
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
      if ((param_4 & 1) == 0) {
        uVar5 = uVar10;
        if (uVar10 == 0x10) {
          uVar5 = 1;
        }
        uVar5 = (uint)(*(ulonglong *)(*(longlong *)(param_3 + 0x1b0) + 0x48) >>
                      (((ulonglong)uVar5 & 0xf) << 2)) & 0xf;
        if (uVar5 < 2) {
LAB_18007183c:
          uVar5 = 3;
          goto LAB_180071840;
        }
        if (uVar5 - 3 < 2) {
          uVar5 = 2;
          goto LAB_180071840;
        }
        if (1 < uVar5 - 5) {
          if (uVar5 != 2) goto LAB_18007183c;
          uVar5 = 1;
          goto LAB_180071840;
        }
        uVar5 = 1;
        uVar9 = 1;
      }
      else {
LAB_180071840:
        uVar9 = 0xf;
      }
      pcVar4 = s_TEXCOORD_180233a70;
      switch(uVar10) {
      default:
        pcVar4 = s_POSITION_180233a80;
        goto LAB_18007191c;
      case 1:
        pcVar4 = s_TEXCOORD_180233a70;
        uVar6 = 9;
        break;
      case 2:
        pcVar4 = s_TEXCOORD_180233a70;
        uVar6 = 10;
        break;
      case 3:
        pcVar4 = s_TEXCOORD_180233a70;
        uVar6 = 8;
        break;
      case 4:
        pcVar4 = s_TEXCOORD_180233a70;
        uVar6 = 0xd;
        uVar9 = 1;
        break;
      case 5:
        pcVar4 = s_COLOR_180234878;
        goto LAB_18007191c;
      case 6:
        pcVar4 = s_COLOR_180234878;
        goto LAB_180071888;
      case 7:
LAB_18007191c:
        uVar6 = 0;
        break;
      case 8:
LAB_180071888:
        uVar6 = 1;
        break;
      case 9:
        pcVar4 = s_TEXCOORD_180233a70;
        uVar6 = 2;
        break;
      case 10:
        pcVar4 = s_TEXCOORD_180233a70;
        uVar6 = 3;
        break;
      case 0xb:
        pcVar4 = s_TEXCOORD_180233a70;
        uVar6 = 4;
        break;
      case 0xc:
        pcVar4 = s_TEXCOORD_180233a70;
        uVar6 = 5;
        break;
      case 0xd:
        pcVar4 = s_TEXCOORD_180233a70;
        uVar6 = 6;
        break;
      case 0xe:
        uVar6 = 7;
        break;
      case 0xf:
        uVar6 = 0xb;
        break;
      case 0x10:
        goto switchD_180071854_caseD_10;
      }
      uVar3 = func_0x000180212e90(&local_d0,pcVar4);
      local_128 = (ulonglong)uVar5 << 0x20;
      local_130 = CONCAT44(uVar6,uVar3);
      local_11a = 0;
      local_120 = (uint)*(byte *)(param_3 + 0x146 + (ulonglong)uVar10);
      local_11b = *(undefined1 *)(param_3 + 0x134 + (ulonglong)uVar10);
      local_11c = uVar9;
      FUN_1800f5a90(&local_100,&local_130,0x18);
      uVar7 = uVar7 + 1;
switchD_180071854_caseD_10:
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x11);
  }
  FUN_1800f5da0(&local_100,uVar7,&local_d0);
  lVar2 = local_100;
  FUN_1800f5a90(local_e0,local_100,lStack_f8 - local_100);
  thunk_FUN_180102fc0(lVar2);
  return 1;
}

