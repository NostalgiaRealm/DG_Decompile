/*
 * FUN_180098440 at 180098440
 * undefined FUN_180098440(void)
 * Address ranges: 180098440-1800987db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180098440(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  longlong local_80;
  uint uStack_78;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  
  if (*(char *)(param_1 + 0x24d) != '\0') {
    return 1;
  }
  FUN_180101df0(*(longlong *)(param_1 + 0x58) + 0x12c0);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      uVar7 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        do {
          uVar2 = uVar7 + *(int *)(param_1 + 0x3c) * uVar5;
          uVar7 = uVar7 + 1;
          lVar1 = param_1 + ((ulonglong)(uVar2 >> 6) + 0x22) * 8;
          uVar8 = (ulonglong)(uVar2 >> 3) & 7;
          *(byte *)(lVar1 + uVar8) = *(byte *)(lVar1 + uVar8) | (byte)(1 << ((ulonglong)uVar2 & 7));
        } while (uVar7 < *(uint *)(param_1 + 0x30));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x130) + 0x1cf04);
    bVar3 = *(uint *)(&DAT_180231470 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4) <= uVar5;
    bVar4 = uVar5 == *(uint *)(&DAT_180231470 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
  }
  else {
    uVar5 = *(int *)(param_1 + 0x2c) - 0x15;
    bVar3 = 9 < uVar5;
    bVar4 = uVar5 == 10;
  }
  if ((((bVar3 && !bVar4) || (*(float *)(param_1 + 0x244) != 1.0)) ||
      (*(float *)(param_1 + 0x248) != 1.0)) || (*(int *)(param_1 + 0x1a0) != 1)) {
    bVar4 = true;
    uVar9 = 0;
  }
  else {
    bVar4 = false;
    uVar9 = 1;
  }
  *(bool *)(param_1 + 0x24e) = bVar4;
  if (bVar4) {
    FUN_180091218(param_1 + 0x140,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    uStack_78 = *(uint *)(param_1 + 0x20);
    local_80 = *(longlong *)(param_1 + 0x50);
    local_6c = 0;
    uStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_34 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_74 = local_80 + (ulonglong)uStack_78 * 0x1ac0 + 0x900;
    uStack_54 = 0xffffffff;
    uStack_50 = 0xffffffff;
    local_4c = 0xffffffff;
    uStack_48 = 0xffffffff;
    local_44 = 0xffffffff;
    uStack_40 = 0;
    if (*(int *)(param_1 + 0x44) - 3U < 3) {
      FUN_180095d10(param_1);
      func_0x0001801bad48(&local_a0);
      uVar6 = 0x1688;
      if ((*(uint *)(param_1 + 0x2c) - 0x24 & 0xfffffffa) == 0) {
        uVar6 = 0x1249;
      }
      uVar8 = FUN_180090aa8(&local_80,*(undefined4 *)(param_1 + 0x198),
                            *(undefined4 *)(param_1 + 0x19c),*(undefined4 *)(param_1 + 0x30),
                            *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1a0),
                            local_a0,uStack_9c,local_98,
                            *(undefined4 *)
                             (&DAT_180231360 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4),uVar6,0,
                            local_90,1,1,0,1);
      if ((uVar8 & 1) == 0) goto LAB_1800987b4;
      FUN_180095d68(param_1,param_1 + 0x60,&local_80);
      FUN_180091218(param_1 + 0x60,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x34));
      lVar1 = uStack_74;
    }
    else {
      uVar5 = func_0x0001801bad48(&local_a0,*(undefined4 *)(param_1 + 0x2c));
      uVar6 = *(undefined4 *)(&DAT_180231360 + (ulonglong)uVar5 * 4);
      if (*(char *)(param_1 + 0x24c) != '\0') {
        bVar4 = uVar5 == 0x15;
        lVar1 = 0x40;
        if (bVar4) {
          lVar1 = 0x50;
        }
        local_94 = *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 0x130));
        lVar1 = 0x3c;
        if (bVar4) {
          lVar1 = 0x4c;
        }
        uStack_9c = *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 0x130));
        lVar1 = 0x38;
        if (bVar4) {
          lVar1 = 0x48;
        }
        local_a0 = *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 0x130));
      }
      lVar1 = 0x30;
      if (*(int *)(param_1 + 0x38) != 0) {
        lVar1 = 0x38;
      }
      uVar5 = *(uint *)(param_1 + lVar1);
      if ((1 < uVar5) || (1 < *(uint *)(param_1 + 0x34))) {
        *(undefined4 *)(param_1 + 0x1a0) = 1;
      }
      uVar8 = FUN_180090aa8(&local_80,*(undefined4 *)(param_1 + 0x198),
                            *(undefined4 *)(param_1 + 0x19c),uVar5,*(undefined4 *)(param_1 + 0x34),
                            *(undefined4 *)(param_1 + 0x1a0),local_a0,uStack_9c,0,uVar6,0,local_94,0
                            ,1,1,0,0);
      if ((uVar8 & 1) == 0) goto LAB_1800987b4;
      FUN_180095d68(param_1,param_1 + 0x60,&local_80);
      if (*(int *)(param_1 + 0x2c) == 0) {
        *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x1a4) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x1bc) = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x1b4) = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x1c4) = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x1d4) = *(undefined8 *)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0x1e4) = *(undefined8 *)(param_1 + 0xa0);
        FUN_1800961f0(param_1);
      }
      else {
        FUN_180091218(param_1 + 0x60,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x34)
                     );
      }
      *(uint *)(param_1 + 0x3c) = uVar5;
      lVar1 = uStack_74;
    }
    uStack_74._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
    uStack_74._0_4_ = (undefined4)lVar1;
    uVar9 = 1;
    *(ulonglong *)(param_1 + 0x68) = CONCAT44((undefined4)uStack_74,uStack_78);
    *(longlong *)(param_1 + 0x60) = local_80;
    *(ulonglong *)(param_1 + 0x78) = CONCAT44(local_64,uStack_68);
    *(ulonglong *)(param_1 + 0x70) = CONCAT44(local_6c,uStack_74._4_4_);
    *(ulonglong *)(param_1 + 0x88) = CONCAT44(uStack_54,uStack_58);
    *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)(param_1 + 0x98) = CONCAT44(local_44,uStack_48);
    *(ulonglong *)(param_1 + 0x90) = CONCAT44(local_4c,uStack_50);
    *(ulonglong *)(param_1 + 0xa8) = CONCAT26(uStack_32,CONCAT24(uStack_34,uStack_38));
    *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_3c,uStack_40);
  }
LAB_1800987b4:
  *(undefined1 *)(param_1 + 0x24d) = uVar9;
  return uVar9;
}

