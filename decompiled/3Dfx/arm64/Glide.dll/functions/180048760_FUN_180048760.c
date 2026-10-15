/*
 * FUN_180048760 at 180048760
 * undefined8 __cdecl FUN_180048760(longlong param_1, uint param_2, int param_3)
 * Address ranges: 180048760-180048b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180048760(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  longlong lVar12;
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
  
  uVar10 = (ulonglong)param_2;
  lVar2 = param_1 + uVar10 * 0x28;
  iVar6 = *(int *)(lVar2 + 0x28);
  *(int *)(lVar2 + 0x28) = iVar6 + 1;
  if (iVar6 != 0) {
    return 1;
  }
  lVar3 = param_1 + uVar10 * 0x20;
  iVar6 = (**(code **)(param_1 + 0x2e0))
                    (*(undefined8 *)(lVar2 + 0x18),param_3,&DAT_180065f90,lVar3 + 0x6d0);
  if (-1 < iVar6) {
    lVar12 = param_1 + uVar10 * 0x1ac0;
    (**(code **)**(undefined8 **)(lVar2 + 0x18))
              (*(undefined8 **)(lVar2 + 0x18),&DAT_1800624a0,lVar3 + 0x6d8);
    *(undefined1 *)(lVar3 + 0x6ed) = 0;
    local_208 = (longlong *)0x0;
    (**(code **)**(undefined8 **)(param_1 + 0x2e8))
              (*(undefined8 **)(param_1 + 0x2e8),&DAT_180062490,&local_208);
    local_210 = (longlong *)0x0;
    iVar6 = (**(code **)(*local_208 + 0xd8))(local_208,&DAT_180065fa0,&local_210);
    if (-1 < iVar6) {
      (**(code **)(*local_210 + 0x40))(local_210,auStack_170);
      (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x158))
                (*(longlong **)(lVar3 + 0x6d0),&local_1f0);
      if ((local_1f0 != local_48) || (uVar11 = 1, local_1ec != local_44)) {
        uVar11 = 0;
      }
      *(undefined1 *)(lVar3 + 0x6ed) = uVar11;
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
    iVar6 = (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x68))
                      (*(longlong **)(lVar3 + 0x6d0),0x2c,&local_1f8,8);
    if (iVar6 < 0) {
      local_1f8 = 0;
    }
    local_200 = 0;
    iVar7 = (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x68))
                      (*(longlong **)(lVar3 + 0x6d0),0x2d,&local_200,8);
    iVar6 = 0;
    if (-1 < iVar7) {
      iVar6 = local_200._4_4_;
    }
    local_200 = CONCAT44(iVar6,(undefined4)local_200);
    if (((int)uStack_1d8 == 0) || (uStack_1d8._4_4_ == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    *(undefined1 *)(lVar3 + 0x6e8) = uVar11;
    *(bool *)(lVar3 + 0x6e9) = uStack_1a0._4_4_ != 0;
    *(bool *)(lVar3 + 0x6ea) = 0 < local_1e8._4_4_;
    *(bool *)(lVar3 + 0x6eb) = 0xbfff < param_3 && (int)local_1f8 != 0;
    *(undefined4 *)(lVar3 + 0x6e4) = (undefined4)uStack_1c8;
    *(bool *)(lVar3 + 0x6ec) = iVar6 != 0;
    bVar4 = FUN_180043ca0((undefined4 *)(lVar12 + 0x1bc0));
    if ((bVar4 & 1) != 0) {
      uVar8 = FUN_180047f48(param_1,param_2);
      if ((uVar8 & 1) != 0) {
        if ((*(longlong *)(param_1 + 0x2d8) == 0) ||
           (uVar8 = FUN_18005d4f8(FUN_18005d5d8), (uVar8 & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x30) = 0;
        }
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x40))
                  (*(longlong **)(lVar2 + 0x18),auStack_170);
        *(int *)(lVar12 + 0x900) = param_3;
        *(undefined4 *)(lVar12 + 0x904) = local_70;
        cVar5 = '\x01';
        uVar8 = 0;
        if (*(int *)(param_1 + 0x6c8) == 0) {
          return 1;
        }
        do {
          if (cVar5 == '\0') goto LAB_180048ab0;
          plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar8 * 8);
          cVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,uVar10);
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x6c8));
        if (cVar5 != '\0') {
          return 1;
        }
LAB_180048ab0:
        FUN_180048468(param_1,uVar10);
        FUN_180048668(param_1,uVar10);
      }
      FUN_1800433c0(lVar12 + 0x1bc0);
    }
    (**(code **)(**(longlong **)(lVar3 + 0x6d0) + 0x10))();
    *(undefined8 *)(lVar3 + 0x6d0) = 0;
  }
  *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
  return 0;
}

