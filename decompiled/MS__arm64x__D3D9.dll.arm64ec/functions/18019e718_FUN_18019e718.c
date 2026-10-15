/*
 * FUN_18019e718 at 18019e718
 * undefined FUN_18019e718(void)
 * Address ranges: 18019e718-18019eaa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18019e718(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong extraout_x12;
  longlong extraout_x12_00;
  undefined1 uVar10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  longlong local_70;
  uint uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x249) != '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    if (*(uint *)(*(longlong *)(param_1 + 0x110) + 0x1cf04) <=
        *(uint *)(&DAT_18022e050 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4)) goto LAB_18019e85c;
LAB_18019e760:
    bVar4 = true;
    uVar10 = 0;
  }
  else {
    if (10 < *(int *)(param_1 + 0x2c) - 0x15U) goto LAB_18019e760;
LAB_18019e85c:
    if ((((*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 +
                   0x6cc) == 0xa000) || (*(float *)(param_1 + 0x240) != 1.0)) ||
        (*(float *)(param_1 + 0x244) != 1.0)) || (*(int *)(param_1 + 0x178) != 1))
    goto LAB_18019e760;
    bVar4 = false;
    uVar10 = 1;
  }
  *(bool *)(param_1 + 0x24a) = bVar4;
  if (bVar4) {
    lVar1 = 0x30;
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar1 = 0x38;
    }
    FUN_180198b40(param_1 + 0x118,*(undefined4 *)(param_1 + lVar1),*(undefined4 *)(param_1 + 0x34));
    lVar1 = 0x30;
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar1 = 0x38;
    }
    FUN_180198b40(param_1 + 0x200,*(undefined4 *)(param_1 + lVar1),*(undefined4 *)(param_1 + 0x34));
    local_70 = *(longlong *)(param_1 + 0x50);
    local_50 = 0;
    uStack_48 = 0;
    uStack_68 = *(uint *)(param_1 + 0x20);
    local_40 = 0;
    uStack_38 = 0;
    local_60 = local_70 + (ulonglong)uStack_68 * 0x18c0 + 0x6b0;
    uStack_58 = 0;
    if (*(int *)(param_1 + 0x44) - 3U < 3) {
      FUN_18019bf60(param_1);
      FUN_1801bad48(&local_90);
      uVar8 = 0x48;
      uStack_a8 = uStack_88;
      local_b0 = local_90;
      uVar6 = local_b0;
      local_b0._4_4_ = (undefined4)(local_90 >> 0x20);
      uVar3 = local_b0._4_4_;
      if (*(int *)(extraout_x12 + 0x6cc) == 0xa000) {
        bVar4 = *(int *)(param_1 + 0x178) == 1;
        uVar9 = 0;
        if (bVar4) {
          uVar9 = local_b0._4_4_;
        }
        uVar8 = 0x48;
        if (!bVar4) {
          uVar8 = 0x40;
        }
        uVar3 = 0;
        if (*(int *)(param_1 + 0x34) == 1) {
          uVar3 = uVar9;
        }
      }
      uVar9 = 4;
      if (*(int *)(param_1 + 0x34) == 1) {
        uVar9 = 0;
      }
      local_b0 = uVar6;
      uVar6 = FUN_180198608(&local_70,*(undefined4 *)(param_1 + 0x170),
                            *(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x30),
                            *(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x178),
                            local_90 & 0xffffffff,uVar3,0,local_80,0,uVar8,0,uVar9,0,0,1);
      if ((uVar6 & 1) == 0) goto LAB_18019ea80;
      FUN_18019bfb8(param_1,param_1 + 0x60,&local_70);
      FUN_180198b40(param_1 + 0x60,1,1);
    }
    else {
      iVar5 = FUN_1801bad48(&local_b0,*(undefined4 *)(param_1 + 0x2c));
      if (*(char *)(param_1 + 0x248) == '\0') {
      }
      else {
        bVar4 = iVar5 == 0x15;
        lVar1 = 0x38;
        if (bVar4) {
          lVar1 = 0x48;
        }
        local_b0._0_4_ = *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 8));
        lVar1 = 0x3c;
        if (bVar4) {
          lVar1 = 0x4c;
        }
        local_b0._4_4_ = *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 8));
        lVar1 = 0x40;
        if (bVar4) {
          lVar1 = 0x50;
        }
        uStack_a8._4_4_ = *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 8));
      }
      lVar1 = 0x30;
      if (*(int *)(param_1 + 0x38) != 0) {
        lVar1 = 0x38;
      }
      uVar2 = *(uint *)(param_1 + lVar1);
      if ((1 < uVar2) || (uVar7 = *(uint *)(param_1 + 0x34), 1 < uVar7)) {
        uVar7 = *(uint *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x178) = 1;
      }
      if (*(int *)(extraout_x12_00 + 0x6cc) == 0xa000) {
        uVar7 = *(uint *)(param_1 + 0x34);
        if (uVar7 == 1) {
          uVar7 = 1;
        }
        else {
          local_b0._4_4_ = 0;
        }
      }
      uVar8 = 4;
      if (uVar7 == 1) {
        uVar8 = 0;
      }
      uVar6 = FUN_180198608(&local_70,*(undefined4 *)(param_1 + 0x170),
                            *(undefined4 *)(param_1 + 0x174),uVar2,uVar7,
                            *(undefined4 *)(param_1 + 0x178),(undefined4)local_b0,local_b0._4_4_,
                            uStack_a8._4_4_,0,0,0x28,0,uVar8,0,0,0);
      if ((uVar6 & 1) == 0) goto LAB_18019ea80;
      FUN_18019bfb8(param_1,param_1 + 0x60,&local_70);
      if (*(int *)(param_1 + 0x2c) == 0) {
        *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x90);
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          FUN_18019c270(param_1);
        }
      }
      else {
        FUN_180198b40(param_1 + 0x60,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x34)
                     );
      }
      *(uint *)(param_1 + 0x3c) = uVar2;
    }
    uVar10 = 1;
    *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_64,uStack_68);
    *(longlong *)(param_1 + 0x60) = local_70;
    *(undefined8 *)(param_1 + 0x78) = uStack_58;
    *(longlong *)(param_1 + 0x70) = local_60;
    *(undefined8 *)(param_1 + 0x88) = uStack_48;
    *(undefined8 *)(param_1 + 0x80) = local_50;
    *(undefined8 *)(param_1 + 0x98) = uStack_38;
    *(undefined8 *)(param_1 + 0x90) = local_40;
  }
LAB_18019ea80:
  *(undefined1 *)(param_1 + 0x249) = uVar10;
  return uVar10;
}

