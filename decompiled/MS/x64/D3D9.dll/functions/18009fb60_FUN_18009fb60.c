/*
 * FUN_18009fb60 at 18009fb60
 * undefined1 __fastcall FUN_18009fb60(longlong param_1)
 * Address ranges: 18009fb60-18009ff39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18009fb60(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  bool bVar10;
  int local_a8;
  undefined4 local_a4;
  int local_9c;
  longlong local_88;
  uint uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    if (*(uint *)(*(longlong *)(param_1 + 0x130) + 0x1cf04) <=
        *(uint *)(&DAT_1800ff000 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4)) goto LAB_18009fcae;
  }
  else if (*(int *)(param_1 + 0x2c) - 0x15U < 0xb) {
LAB_18009fcae:
    if (((*(float *)(param_1 + 0x244) == 1.0) && (*(float *)(param_1 + 0x248) == 1.0)) &&
       (*(int *)(param_1 + 0x1a0) == 1)) {
      uVar9 = 1;
      cVar3 = '\0';
      goto LAB_18009fba6;
    }
  }
  cVar3 = '\x01';
  uVar9 = 0;
LAB_18009fba6:
  *(char *)(param_1 + 0x24e) = cVar3;
  if (cVar3 != '\0') {
    FUN_18009ac8c(param_1 + 0x140,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
    uStack_80 = *(uint *)(param_1 + 0x20);
    local_88 = *(longlong *)(param_1 + 0x50);
    uStack_7c = local_88 + 0x900 + (ulonglong)uStack_80 * 0x1ac0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_5c = 0xffffffff;
    local_58 = 0xffffffff;
    uStack_54 = 0xffffffff;
    uStack_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_3c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_48 = 0;
    if (*(int *)(param_1 + 0x44) - 3U < 3) {
      uVar4 = FUN_18009f438(param_1);
      piVar5 = (int *)FUN_1800ac1a8((undefined8 *)&local_a8,(uint)uVar4);
      uVar6 = 0x1688;
      uVar2 = *(uint *)(param_1 + 0x2c);
      if (((uVar2 == 0x24) || (uVar2 == 0x25)) || ((uVar2 == 0x28 || (uVar2 == 0x29)))) {
        uVar6 = 0x1249;
      }
      cVar3 = FUN_18009a7d8(&local_88,*(uint *)(param_1 + 0x198),*(uint *)(param_1 + 0x19c),
                            *(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34),
                            *(int *)(param_1 + 0x1a0),*piVar5,piVar5[1],piVar5[2],
                            *(undefined4 *)(&DAT_1800fe8f0 + (ulonglong)uVar2 * 4),uVar6,0,piVar5[4]
                            ,'\x01','\x01',0,'\x01');
      if (cVar3 == '\0') {
        return uVar9;
      }
      plVar1 = (longlong *)(param_1 + 0x60);
      FUN_18009f474(param_1,(longlong)plVar1,(longlong)&local_88);
      FUN_18009ac8c((longlong)plVar1,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x34));
      *plVar1 = local_88;
      *(ulonglong *)(param_1 + 0x68) = CONCAT44((undefined4)uStack_7c,uStack_80);
      *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_74,uStack_7c._4_4_);
      *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_6c,uStack_70);
      *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_64,uStack_68);
      *(ulonglong *)(param_1 + 0x88) = CONCAT44(local_5c,uStack_60);
      *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_54,local_58);
      *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_4c,uStack_50);
      *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_44,local_48);
      *(ulonglong *)(param_1 + 0xa8) = CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
    }
    else {
      FUN_1800ac794(param_1,(undefined8 *)&local_a8);
      lVar8 = 0x38;
      uVar6 = *(undefined4 *)(&DAT_1800fe8f0 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      if (*(char *)(param_1 + 0x24c) != '\0') {
        bVar10 = *(uint *)(param_1 + 0x2c) != 0x15;
        lVar7 = 0x48;
        if (bVar10) {
          lVar7 = 0x38;
        }
        local_a8 = *(int *)(lVar7 + *(longlong *)(param_1 + 0x130));
        uVar2 = 0x4c;
        if (bVar10) {
          uVar2 = 0x3c;
        }
        local_a4 = *(undefined4 *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x130));
        uVar2 = 0x50;
        if (bVar10) {
          uVar2 = 0x40;
        }
        local_9c = *(int *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x130));
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        lVar8 = 0x30;
      }
      uVar2 = *(uint *)(lVar8 + param_1);
      if ((1 < uVar2) || (1 < *(uint *)(param_1 + 0x34))) {
        *(undefined4 *)(param_1 + 0x1a0) = 1;
      }
      cVar3 = FUN_18009a7d8(&local_88,*(uint *)(param_1 + 0x198),*(uint *)(param_1 + 0x19c),uVar2,
                            *(uint *)(param_1 + 0x34),*(int *)(param_1 + 0x1a0),local_a8,local_a4,0,
                            uVar6,0,local_9c,0,'\x01','\x01',0,'\0');
      if (cVar3 == '\0') {
        return uVar9;
      }
      plVar1 = (longlong *)(param_1 + 0x60);
      FUN_18009f474(param_1,(longlong)plVar1,(longlong)&local_88);
      if (*(int *)(param_1 + 0x2c) == 0) {
        *(longlong *)(param_1 + 0x1a4) = *plVar1;
        *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x1b4) = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x1bc) = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x1c4) = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x1d4) = *(undefined8 *)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x1e4) = *(undefined8 *)(param_1 + 0xa0);
        *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(param_1 + 0xa8);
        FUN_18009ff3c(param_1);
        lVar8 = uStack_7c;
      }
      else {
        FUN_18009ac8c((longlong)plVar1,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x34));
        lVar8 = uStack_7c;
      }
      uStack_7c._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
      uStack_7c._0_4_ = (undefined4)lVar8;
      *plVar1 = local_88;
      *(ulonglong *)(param_1 + 0x68) = CONCAT44((undefined4)uStack_7c,uStack_80);
      *(uint *)(param_1 + 0x3c) = uVar2;
      *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_74,uStack_7c._4_4_);
      *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_6c,uStack_70);
      *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_64,uStack_68);
      *(ulonglong *)(param_1 + 0x88) = CONCAT44(local_5c,uStack_60);
      *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_54,local_58);
      *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_4c,uStack_50);
      *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_44,local_48);
      *(ulonglong *)(param_1 + 0xa8) = CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
    }
    uVar9 = 1;
  }
  return uVar9;
}

