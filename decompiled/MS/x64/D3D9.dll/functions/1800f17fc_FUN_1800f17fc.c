/*
 * FUN_1800f17fc at 1800f17fc
 * undefined8 __fastcall FUN_1800f17fc(undefined1 * param_1, uint param_2, int param_3)
 * Address ranges: 1800f17fc-1800f1bbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800f17fc(undefined1 *param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 local_res8;
  longlong *local_res20;
  longlong *local_1f8;
  undefined8 local_1f0;
  int local_1e8;
  int local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined1 local_168 [256];
  undefined4 local_68;
  int local_40;
  int local_3c;
  
  uVar13 = (ulonglong)param_2;
  iVar3 = *(int *)(param_1 + uVar13 * 0x28 + 0x28);
  uVar7 = iVar3 + 1;
  uVar5 = (ulonglong)uVar7;
  *(uint *)(param_1 + uVar13 * 0x28 + 0x28) = uVar7;
  if (iVar3 != 0) goto LAB_1800f1ba0;
  lVar8 = (ulonglong)param_2 * 0x20;
  puVar12 = (undefined8 *)(param_1 + lVar8 + 0x6d0);
  uVar5 = (**(code **)(param_1 + 0x2e0))
                    (*(undefined8 *)(param_1 + uVar13 * 0x28 + 0x18),param_3,&DAT_1801074e0,puVar12)
  ;
  if ((int)uVar5 < 0) goto LAB_1800f1b98;
  lVar11 = (ulonglong)param_2 * 0x1ac0;
  (**(code **)**(undefined8 **)(param_1 + uVar13 * 0x28 + 0x18))
            (*(undefined8 **)(param_1 + uVar13 * 0x28 + 0x18),&DAT_1800fd7e0,param_1 + lVar8 + 0x6d8
            );
  param_1[lVar8 + 0x6ed] = 0;
  local_1f8 = (longlong *)0x0;
  (**(code **)**(undefined8 **)(param_1 + 0x2e8))
            (*(undefined8 **)(param_1 + 0x2e8),&DAT_1800fd7d0,&local_1f8);
  local_res20 = (longlong *)0x0;
  iVar3 = (**(code **)(*local_1f8 + 0xd8))(local_1f8,&DAT_1801074f0,&local_res20);
  if (-1 < iVar3) {
    (**(code **)(*local_res20 + 0x40))(local_res20,local_168);
    (**(code **)(*(longlong *)*puVar12 + 0x158))((longlong *)*puVar12,&local_1e8);
    if ((local_1e8 == local_40) && (local_1e4 == local_3c)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    param_1[lVar8 + 0x6ed] = uVar10;
    (**(code **)(*local_res20 + 0x10))();
  }
  (**(code **)(*local_1f8 + 0x10))();
  (**(code **)(*(longlong *)*puVar12 + 0x38))();
  local_1d8 = 0;
  uStack_1d0 = 0;
  (**(code **)(*(longlong *)*puVar12 + 0x68))((longlong *)*puVar12,1,&local_1d8);
  local_190 = 0;
  uStack_188 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  (**(code **)(*(longlong *)*puVar12 + 0x68))((longlong *)*puVar12,0,&local_1b0,0x3c);
  local_1e0 = 0;
  (**(code **)(*(longlong *)*puVar12 + 0x68))((longlong *)*puVar12,0x12,&local_1e0);
  local_1b8 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  (**(code **)(*(longlong *)*puVar12 + 0x68))((longlong *)*puVar12,0x15,&local_1c8);
  local_res8 = 0;
  iVar3 = (**(code **)(*(longlong *)*puVar12 + 0x68))((longlong *)*puVar12,0x2c,&local_res8);
  if (iVar3 < 0) {
    local_res8 = 0;
  }
  local_1f0 = 0;
  iVar4 = (**(code **)(*(longlong *)*puVar12 + 0x68))((longlong *)*puVar12,0x2d,&local_1f0);
  iVar3 = local_1f0._4_4_;
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  local_1f0 = CONCAT44(iVar3,(undefined4)local_1f0);
  if ((int)uStack_1d0 == 0) {
LAB_1800f1a52:
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    if (uStack_1d0._4_4_ == 0) goto LAB_1800f1a52;
  }
  param_1[lVar8 + 0x6e8] = uVar10;
  param_1[lVar8 + 0x6e9] = local_1a0._4_4_ != 0;
  param_1[lVar8 + 0x6ea] = 0 < local_1e0._4_4_;
  *(undefined4 *)(param_1 + lVar8 + 0x6e4) = (undefined4)uStack_1c0;
  param_1[lVar8 + 0x6eb] = 0xbfff < param_3 && (int)local_res8 != 0;
  param_1[lVar8 + 0x6ec] = iVar3 != 0;
  cVar2 = FUN_1800fad00((undefined4 *)(param_1 + lVar11 + 0x1bc0),0x10,0x100);
  if (cVar2 != '\0') {
    uVar5 = FUN_1800f0f28(param_1,param_2);
    if ((char)uVar5 != '\0') {
      if ((*(longlong *)(param_1 + 0x2d8) == 0) ||
         (uVar6 = FUN_1800ee4f8(FUN_1800ee598), (char)uVar6 == '\0')) {
        *(undefined8 *)(param_1 + uVar13 * 0x28 + 0x30) = 0;
      }
      (**(code **)(**(longlong **)(param_1 + uVar13 * 0x28 + 0x18) + 0x40))
                (*(longlong **)(param_1 + uVar13 * 0x28 + 0x18),local_168);
      uVar9 = 0;
      *(undefined4 *)(param_1 + lVar11 + 0x904) = local_68;
      uVar5 = CONCAT71((uint7)(uint3)((uint)local_68 >> 8),1);
      *(int *)(param_1 + lVar11 + 0x900) = param_3;
      if (*(int *)(param_1 + 0x6c8) == 0) {
LAB_1800f1ba0:
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
      do {
        if ((char)uVar5 == '\0') goto LAB_1800f1b63;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar9 * 8);
        uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 0x6c8));
      if ((char)uVar5 != '\0') goto LAB_1800f1ba0;
LAB_1800f1b63:
      FUN_1800f15b4((longlong)param_1,param_2);
      FUN_1800f16c0((longlong)param_1,(ulonglong)param_2);
    }
    FUN_1800faa40((longlong)(param_1 + lVar11 + 0x1bc0));
  }
  uVar5 = (**(code **)(*(longlong *)*puVar12 + 0x10))();
  *puVar12 = 0;
LAB_1800f1b98:
  *(int *)(param_1 + uVar13 * 0x28 + 0x28) = *(int *)(param_1 + uVar13 * 0x28 + 0x28) + -1;
  return uVar5 & 0xffffffffffffff00;
}

