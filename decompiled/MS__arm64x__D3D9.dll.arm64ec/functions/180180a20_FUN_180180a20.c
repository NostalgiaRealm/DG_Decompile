/*
 * FUN_180180a20 at 180180a20
 * undefined FUN_180180a20(void)
 * Address ranges: 180180a20-180181447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180180a20(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                  ulonglong param_5,uint param_6,char param_7,byte param_8,byte param_9)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_e0 [2];
  uint local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint *local_48;
  
  lVar7 = (param_5 & 0xff) * 2;
  bVar1 = (&DAT_18022c4a0)[param_5 & 0xff];
  uVar10 = (uint)bVar1;
  uVar9 = (uint)bVar1;
  bVar2 = (&DAT_18022c4b1)[lVar7];
  uVar3 = (&DAT_18022c4b0)[lVar7];
  uVar8 = (uint)bVar2;
  if (param_7 == '\0') {
    if ((param_8 & 1) == 0) {
      uVar4 = (uint)param_9;
      if ((param_9 != 0) || (param_6 != 0)) {
        if (param_6 == 0) {
          uVar9 = uVar10;
          uVar4 = (uint)param_9;
          param_6 = FUN_180213760(param_3 + 0x20,uVar3,1);
        }
        if (uVar4 == 0) {
          local_c8 = 0;
          local_d0 = CONCAT44(local_d0._4_4_,uVar9) | 0x100;
          local_e0[0] = uVar8;
          local_d8 = param_4;
          FUN_180214c88(param_3 + 0x20,param_2,0x36,param_6,local_e0,0x20);
        }
        else {
          local_c0 = CONCAT44(local_c0._4_4_,0xe4);
          local_98 = 0;
          local_a0 = CONCAT44(local_a0._4_4_,0x7cf0bdc2);
          local_a8 = CONCAT44(local_a8._4_4_,0x7cf0bdc2);
          local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_3 + 0xbc));
          local_b0 = CONCAT44(local_b0._4_4_,0x7cf0bdc2);
          local_b8 = 0x7cf0bdc2;
          local_d0 = CONCAT44(local_d0._4_4_,uVar9) | 0x100;
          local_e0[0] = uVar8;
          local_d8 = param_4;
          FUN_180214c88(param_3 + 0x20,param_2,0x33,param_6,local_e0,0x50);
        }
      }
    }
    else {
      if (param_6 == 0) {
        uVar9 = uVar10;
        param_6 = FUN_180213760(param_3 + 0x20,uVar3,1);
      }
      local_c8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,uVar9) | 0x100;
      local_e0[0] = uVar8;
      local_d8 = param_4;
      FUN_180214c88(param_3 + 0x20,param_2,0x42,param_6,local_e0,0x20);
    }
    goto LAB_180181424;
  }
  if (param_7 == '\x01') goto LAB_180181424;
  if (param_7 == '\x02') {
    if ((param_8 & 1) == 0) {
      if (param_6 == 0) {
        uVar9 = uVar10;
        param_6 = FUN_180213760(param_3 + 0x20,uVar3,1);
      }
      local_c8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,uVar9) | 0x100;
      local_e0[0] = uVar8;
      local_d8 = param_4;
      FUN_180214c88(param_3 + 0x20,param_2,0x56,param_6,local_e0,0x20);
    }
    else if (param_6 != 0) {
      local_c8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,(uint)bVar1) | 0x100;
      local_e0[0] = uVar8;
      local_d8 = param_4;
      FUN_180214c88(param_3 + 0x20,param_2,0x36,param_6,local_e0,0x20);
    }
    goto LAB_180181424;
  }
  if (param_7 == '\x03') {
    if ((param_8 & 1) == 0) {
      if (param_6 == 0) {
        uVar9 = uVar10;
        param_6 = FUN_180213760(param_3 + 0x20,uVar3,1);
      }
      local_c8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,uVar9) | 0x100;
      local_e0[0] = uVar8;
      local_d8 = param_4;
      FUN_180214c88(param_3 + 0x20,param_2,0x2b,param_6,local_e0,0x20);
    }
    else if (param_6 != 0) {
      local_c8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,(uint)bVar1) | 0x100;
      local_e0[0] = uVar8;
      local_d8 = param_4;
      FUN_180214c88(param_3 + 0x20,param_2,0x36,param_6,local_e0,0x20);
    }
    goto LAB_180181424;
  }
  uVar10 = (uint)param_5;
  if (param_7 == '\x04') {
    if ((param_8 & 1) == 0) {
      if (param_6 == 0) {
        uVar9 = (uint)bVar1;
        param_6 = FUN_180213760(param_3 + 0x20,uVar3,1);
      }
      if ((param_5 & 7) != 0) {
        local_c8 = 0;
        local_e0[0] = uVar8 & 7;
        local_d0 = CONCAT44(local_d0._4_4_,uVar9) | 0x100;
        local_d8 = param_4;
        FUN_180214c88(param_3 + 0x20,param_2,0x2b,param_6,local_e0,0x20);
      }
      if ((uVar10 >> 3 & 1) != 0) {
        local_d0 = CONCAT44(local_d0._4_4_,0xe4);
        local_d8 = *(undefined4 *)(param_3 + 0xb8);
        local_c0 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,0x3f800000);
        local_e0[0] = 8;
        FUN_180214c88(param_3 + 0x20,param_2,0x36,param_6,local_e0,0x28);
      }
    }
    else if ((uVar10 >> 3 & 1) != 0) {
      if (param_6 == 0) {
        uVar9 = (uint)bVar1;
        param_6 = FUN_180213760(param_3 + 0x20,uVar3,1);
      }
      if ((param_5 & 7) != 0) {
        local_c8 = 0;
        local_e0[0] = uVar8 & 7;
        local_d0 = CONCAT44(local_d0._4_4_,uVar9) | 0x100;
        local_d8 = param_4;
        FUN_180214c88(param_3 + 0x20,param_2,0x36,param_6,local_e0,0x20);
      }
      local_c0 = 0;
      local_c8 = CONCAT44(local_c8._4_4_,1);
      local_d0 = CONCAT44(local_d0._4_4_,0xe4);
      local_d8 = *(undefined4 *)(param_3 + 0xb8);
      local_e0[0] = 8;
      FUN_180214c88(param_3 + 0x20,param_2,0x36,param_6,local_e0,0x28);
    }
    goto LAB_180181424;
  }
  uVar9 = (uint)bVar2;
  if (param_7 == '\x05') {
    if (param_6 == 0) {
      param_6 = FUN_180213760(param_3 + 0x20,uVar3,1);
    }
    uVar4 = param_6;
    if ((param_5 & 7) != 0) {
      uVar5 = FUN_180213038(*(undefined4 *)(param_3 + 0x20));
      if (uVar5 < 0x50) {
        if ((param_6 & 0x3f00) != 0) {
          uVar4 = FUN_180213760(param_3 + 0x20,3,1);
        }
        if ((param_5 & 1) != 0) {
          local_d0 = 0;
          local_c8 = 0;
          local_e0[0] = 1;
          local_d8 = param_4;
          FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar4,local_e0,0x20);
        }
        if ((uVar10 >> 1 & 1) != 0) {
          local_b0 = 0;
          local_b8 = 10;
          local_c0 = CONCAT44(local_c0._4_4_,0xe4);
          local_d0 = 0;
          local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_3 + 0xb8));
          local_e0[0] = 2;
          local_d8 = param_4;
          FUN_180214c88(param_3 + 0x20,param_2,0x55,uVar4,local_e0,0x38);
        }
        if ((uVar10 >> 2 & 1) != 0) {
          local_b0 = 0;
          local_b8 = 0x14;
          local_c0 = CONCAT44(local_c0._4_4_,0xe4);
          local_d0 = 0;
          local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_3 + 0xb8));
          local_e0[0] = 4;
          local_d8 = param_4;
          FUN_180214c88(param_3 + 0x20,param_2,0x55,uVar4,local_e0,0x38);
        }
        local_b0 = 0;
        local_b8 = 0x3ff;
        local_e0[0] = uVar8 & 7;
        uVar8 = uVar4;
        if (param_8 != 0) {
          uVar8 = param_6;
        }
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_3 + 0xb8));
        local_c0 = CONCAT44(local_c0._4_4_,0xe4);
        local_d0 = CONCAT44(local_d0._4_4_,0x1a4);
        local_d8 = uVar4;
        FUN_180214c88(param_3 + 0x20,param_2,1,uVar8,local_e0,0x38);
      }
      else {
        if (((param_8 & 1) == 0) && ((param_6 & 0x3f00) != 0)) {
          uVar4 = FUN_180213760(param_3 + 0x20,3,1);
        }
        local_d8 = *(uint *)(param_3 + 0xbc);
        local_70 = 0;
        uStack_68 = 0;
        local_90 = 0x14;
        local_e0[0] = uVar9 & 7;
        local_a0 = CONCAT44(local_a0._4_4_,0x1e4);
        local_a8 = CONCAT44(local_a8._4_4_,local_d8);
        local_d0 = CONCAT44(local_d0._4_4_,0x1e4);
        local_80 = 0;
        local_88 = 10;
        local_98 = 0;
        local_b0 = CONCAT44(local_b0._4_4_,10);
        local_b8 = 10;
        local_c0 = CONCAT44(local_c0._4_4_,10);
        local_c8 = 0;
        local_78 = param_4;
        FUN_180214c88(param_3 + 0x20,param_2,0x8a,uVar4,local_e0,0x80);
      }
      if ((param_8 & 1) == 0) {
        local_e0[0] = uVar9 & 7;
        local_c8 = 0;
        local_d0 = CONCAT44(local_d0._4_4_,0x1a4);
        local_d8 = uVar4;
        FUN_180214c88(param_3 + 0x20,param_2,0x56,param_6,local_e0,0x20);
      }
    }
    if ((uVar10 >> 3 & 1) != 0) {
      if ((param_8 & 1) == 0) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = 1;
      }
      local_c8 = CONCAT44(local_c8._4_4_,uVar6);
      local_d8 = *(uint *)(param_3 + 0xb8);
      local_c0 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,0xe4);
      local_e0[0] = 8;
      FUN_180214c88(param_3 + 0x20,param_2,0x36,param_6,local_e0,0x28);
    }
  }
  else {
    if (param_7 != '\x06') {
      if (param_7 == -1) {
        if (param_6 == 0) {
          param_6 = FUN_180213760(param_3 + 0x20,uVar3,1);
        }
        local_a8 = 0;
        local_d0 = CONCAT44(local_d0._4_4_,0x1e4);
        local_d8 = *(undefined4 *)(param_3 + 0xbc);
        local_b8 = 0;
        local_b0 = CONCAT44(local_b0._4_4_,0x3f800000);
        local_c0 = local_c0 & 0xffffffff00000000;
        local_c8 = local_c8 & 0xffffffff00000000;
        local_e0[0] = (uint)bVar2;
        FUN_180214c88(param_3 + 0x20,param_2,0x36,param_6,local_e0,0x40);
      }
      goto LAB_180181424;
    }
    if (param_6 == 0) {
      param_6 = FUN_180213760(param_3 + 0x20,uVar3,1);
    }
    uVar8 = uVar10 & 7;
    uVar4 = param_6;
    if (((param_5 & 7) != 0) && ((param_6 & 0x3f00) != 0)) {
      uVar4 = FUN_180213760(param_3 + 0x20,3,1);
    }
    uVar5 = FUN_180213038(*(undefined4 *)(param_3 + 0x20));
    if (uVar5 < 0x50) {
      if ((param_5 & 1) != 0) {
        local_b0 = 0;
        local_b8 = 0x16;
        local_c0 = CONCAT44(local_c0._4_4_,0xe4);
        local_d0 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_3 + 0xb8));
        local_e0[0] = 1;
        local_d8 = param_4;
        FUN_180214c88(param_3 + 0x20,param_2,0x29,uVar4,local_e0,0x38);
      }
      if ((uVar10 >> 1 & 1) != 0) {
        local_b0 = 0;
        local_b8 = 0xc;
        local_c0 = CONCAT44(local_c0._4_4_,0xe4);
        local_d0 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_3 + 0xb8));
        local_e0[0] = 2;
        local_d8 = param_4;
        FUN_180214c88(param_3 + 0x20,param_2,0x29,uVar4,local_e0,0x38);
      }
      if ((uVar10 >> 2 & 1) != 0) {
        local_b0 = 0;
        local_b8 = 2;
        local_c0 = CONCAT44(local_c0._4_4_,0xe4);
        local_d0 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_3 + 0xb8));
        local_e0[0] = 4;
        local_d8 = param_4;
        FUN_180214c88(param_3 + 0x20,param_2,0x29,uVar4,local_e0,0x38);
      }
LAB_180180cbc:
      if ((param_5 & 7) != 0) goto LAB_180180ccc;
    }
    else {
      if (uVar8 == 0) goto LAB_180180cbc;
      local_a0 = 0;
      local_98 = 0;
      local_a8 = CONCAT44(local_a8._4_4_,2);
      local_b0 = CONCAT44(local_b0._4_4_,0xc);
      local_b8 = 0x16;
      local_c0 = CONCAT44(local_c0._4_4_,0x1e4);
      local_e0[0] = uVar9 & 7;
      local_d0 = 0;
      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_3 + 0xbc));
      local_d8 = param_4;
      FUN_180214c88(param_3 + 0x20,param_2,0x29,uVar4,local_e0,0x50);
LAB_180180ccc:
      local_48 = (uint *)(param_3 + 0xb8);
      local_b0 = 0;
      local_b8 = 0x16;
      local_c0._0_4_ = 0xe4;
      uVar9 = uVar9 & 7;
      local_d0._0_4_ = 0x1a4;
      local_c8 = CONCAT44(local_c8._4_4_,*local_48);
      local_e0[0] = uVar9;
      local_d8 = uVar4;
      FUN_180214c88(param_3 + 0x20,param_2,0x2a,uVar4,local_e0,0x38);
      local_c8 = 0;
      local_d0._0_4_ = 0x1a4;
      local_e0[0] = uVar9;
      local_d8 = uVar4;
      FUN_180214c88(param_3 + 0x20,param_2,0x2b,uVar4,local_e0,0x20);
      local_b0 = 0;
      local_b8 = 0x3b004020;
      uVar8 = uVar4;
      if (param_8 == 0) {
        uVar8 = param_6;
      }
      local_c0 = CONCAT44(local_c0._4_4_,0xe4);
      local_d0 = CONCAT44(local_d0._4_4_,0x1a4);
      local_c8 = CONCAT44(local_c8._4_4_,*local_48);
      local_e0[0] = uVar9;
      local_d8 = uVar4;
      FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar8,local_e0,0x38);
      if ((param_8 & 1) != 0) {
        local_c8 = 0;
        local_d0 = CONCAT44(local_d0._4_4_,0x1a4);
        local_e0[0] = uVar9;
        local_d8 = uVar4;
        FUN_180214c88(param_3 + 0x20,param_2,0x1b,param_6,local_e0,0x20);
      }
    }
    local_48 = (uint *)(param_3 + 0xb8);
    if ((uVar10 >> 3 & 1) != 0) {
      if ((param_8 & 1) == 0) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = 1;
      }
      local_d8 = *local_48;
      local_c8 = CONCAT44(local_c8._4_4_,uVar6);
      local_c0 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,0xe4);
      local_e0[0] = 8;
      FUN_180214c88(param_3 + 0x20,param_2,0x36,param_6,local_e0,0x28);
    }
  }
  if (uVar4 != param_6) {
    FUN_180213800(param_3 + 0x20,uVar4);
  }
LAB_180181424:
  if (param_6 == 0) {
    param_6 = param_4;
  }
  return param_6;
}

