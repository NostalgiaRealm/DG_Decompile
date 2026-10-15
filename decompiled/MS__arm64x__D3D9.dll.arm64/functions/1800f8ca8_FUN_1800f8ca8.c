/*
 * FUN_1800f8ca8 at 1800f8ca8
 * undefined FUN_1800f8ca8(void)
 * Address ranges: 1800f8ca8-1800f905b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f8ca8(longlong param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong *local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  int local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 auStack_170 [256];
  undefined4 local_70;
  int local_48;
  int local_44;
  
  param_2 = param_2 & 0xffffffff;
  lVar2 = param_1 + param_2 * 0x28;
  iVar5 = *(int *)(lVar2 + 0x28);
  *(int *)(lVar2 + 0x28) = iVar5 + 1;
  if (iVar5 != 0) {
    return 1;
  }
  lVar3 = param_1 + param_2 * 0x20;
  iVar5 = (**(code **)(param_1 + 0x2e0))
                    (*(undefined8 *)(lVar2 + 0x18),param_3,&DAT_18023c520,lVar3 + 0x6d0);
  if (-1 < iVar5) {
    lVar10 = param_1 + param_2 * 0x1ac0;
    (**(code **)**(undefined8 **)(lVar2 + 0x18))
              (*(undefined8 **)(lVar2 + 0x18),&DAT_1802295c8,lVar3 + 0x6d8);
    *(undefined1 *)(lVar3 + 0x6ed) = 0;
    local_208 = (longlong *)0x0;
    (**(code **)**(undefined8 **)(param_1 + 0x2e8))
              (*(undefined8 **)(param_1 + 0x2e8),&DAT_1802295b8,&local_208);
    local_210 = (longlong *)0x0;
    iVar5 = (**(code **)(*local_208 + 0xd8))(local_208,&DAT_18023c530,&local_210);
    if (-1 < iVar5) {
      (**(code **)(*local_210 + 0x40))(local_210,auStack_170);
      (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x158))
                (*(longlong **)(lVar3 + 0x6d0),&local_1f0);
      if ((local_1f0 != local_48) || (uVar9 = 1, local_1ec != local_44)) {
        uVar9 = 0;
      }
      *(undefined1 *)(lVar3 + 0x6ed) = uVar9;
      (**(code **)(*local_210 + 0x10))();
    }
    (**(code **)(*local_208 + 0x10))();
    (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x38))();
    uStack_1d8 = 0;
    local_1e0 = 0;
    (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x68))
              (*(longlong **)(lVar3 + 0x6d0),1,&local_1e0,0x10);
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    local_180 = 0;
    local_178 = 0;
    (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x68))
              (*(longlong **)(lVar3 + 0x6d0),0,&local_1b0,0x3c);
    local_1e8 = 0;
    (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x68))
              (*(longlong **)(lVar3 + 0x6d0),0x12,&local_1e8,8);
    uStack_1c8 = 0;
    local_1d0 = 0;
    local_1c0 = 0;
    (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x68))
              (*(longlong **)(lVar3 + 0x6d0),0x15,&local_1d0,0x14);
    local_1f8 = 0;
    iVar5 = (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x68))
                      (*(longlong **)(lVar3 + 0x6d0),0x2c,&local_1f8,8);
    if (iVar5 < 0) {
      local_1f8 = 0;
    }
    local_200 = 0;
    iVar6 = (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x68))
                      (*(longlong **)(lVar3 + 0x6d0),0x2d,&local_200,8);
    iVar5 = 0;
    if (-1 < iVar6) {
      iVar5 = local_200._4_4_;
    }
    local_200 = CONCAT44(iVar5,(undefined4)local_200);
    if (((int)uStack_1d8 == 0) || (uStack_1d8._4_4_ == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    *(undefined1 *)(lVar3 + 0x6e8) = uVar9;
    *(bool *)(lVar3 + 0x6e9) = uStack_1a0._4_4_ != 0;
    *(bool *)(lVar3 + 0x6ea) = 0 < local_1e8._4_4_;
    *(bool *)(lVar3 + 0x6eb) = 0xbfff < param_3 && (int)local_1f8 != 0;
    *(undefined4 *)(lVar3 + 0x6e4) = (undefined4)uStack_1c8;
    *(bool *)(lVar3 + 0x6ec) = iVar5 != 0;
    uVar7 = FUN_180101b00(lVar10 + 0x1bc0);
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_1800f84e0(param_1,param_2);
      if ((uVar7 & 1) != 0) {
        if ((*(longlong *)(param_1 + 0x2d8) == 0) ||
           (uVar7 = FUN_1800f6098(FUN_1800f6178), (uVar7 & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x30) = 0;
        }
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x40))
                  (*(longlong **)(lVar2 + 0x18),auStack_170);
        *(int *)(lVar10 + 0x900) = param_3;
        *(undefined4 *)(lVar10 + 0x904) = local_70;
        cVar4 = '\x01';
        uVar7 = 0;
        if (*(int *)(param_1 + 0x6c8) == 0) {
          return 1;
        }
        do {
          if (cVar4 == '\0') goto LAB_1800f8ff8;
          plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar7 * 8);
          cVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,param_2);
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x6c8));
        if (cVar4 != '\0') {
          return 1;
        }
LAB_1800f8ff8:
        FUN_1800f89e8(param_1,param_2);
        FUN_1800f8bc0(param_1,param_2);
      }
      FUN_180101220(lVar10 + 0x1bc0);
    }
    (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x10))();
    *(undefined8 *)(lVar3 + 0x6d0) = 0;
  }
  *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
  return 0;
}

