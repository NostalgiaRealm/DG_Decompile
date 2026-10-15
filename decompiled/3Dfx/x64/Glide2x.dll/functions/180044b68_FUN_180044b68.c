/*
 * FUN_180044b68 at 180044b68
 * undefined8 __fastcall FUN_180044b68(LPVOID param_1, uint param_2, int param_3)
 * Address ranges: 180044b68-180044f28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180044b68(LPVOID param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
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
  
  uVar15 = (ulonglong)param_2;
  iVar5 = *(int *)((longlong)param_1 + uVar15 * 0x28 + 0x28);
  uVar9 = iVar5 + 1;
  uVar7 = (ulonglong)uVar9;
  *(uint *)((longlong)param_1 + uVar15 * 0x28 + 0x28) = uVar9;
  if (iVar5 != 0) goto LAB_180044f0c;
  lVar10 = (ulonglong)param_2 * 0x20;
  puVar14 = (undefined8 *)((longlong)param_1 + lVar10 + 0x6d0);
  uVar7 = (**(code **)((longlong)param_1 + 0x2e0))
                    (*(undefined8 *)((longlong)param_1 + uVar15 * 0x28 + 0x18),param_3,
                     &DAT_180063f78,puVar14);
  if ((int)uVar7 < 0) goto LAB_180044f04;
  puVar2 = *(undefined8 **)((longlong)param_1 + uVar15 * 0x28 + 0x18);
  lVar13 = (ulonglong)param_2 * 0x1ac0;
  (**(code **)*puVar2)(puVar2,&DAT_180060590,(longlong)param_1 + lVar10 + 0x6d8);
  *(undefined1 *)(lVar10 + 0x6ed + (longlong)param_1) = 0;
  local_1f8 = (longlong *)0x0;
  (**(code **)**(undefined8 **)((longlong)param_1 + 0x2e8))
            (*(undefined8 **)((longlong)param_1 + 0x2e8),&DAT_180060580,&local_1f8);
  local_res20 = (longlong *)0x0;
  iVar5 = (**(code **)(*local_1f8 + 0xd8))(local_1f8,&DAT_180063f88,&local_res20);
  if (-1 < iVar5) {
    (**(code **)(*local_res20 + 0x40))(local_res20,local_168);
    (**(code **)(*(longlong *)*puVar14 + 0x158))((longlong *)*puVar14,&local_1e8);
    if ((local_1e8 == local_40) && (local_1e4 == local_3c)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    *(undefined1 *)(lVar10 + 0x6ed + (longlong)param_1) = uVar12;
    (**(code **)(*local_res20 + 0x10))();
  }
  (**(code **)(*local_1f8 + 0x10))();
  (**(code **)(*(longlong *)*puVar14 + 0x38))();
  local_1d8 = 0;
  uStack_1d0 = 0;
  (**(code **)(*(longlong *)*puVar14 + 0x68))((longlong *)*puVar14,1,&local_1d8);
  local_190 = 0;
  uStack_188 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  (**(code **)(*(longlong *)*puVar14 + 0x68))((longlong *)*puVar14,0,&local_1b0,0x3c);
  local_1e0 = 0;
  (**(code **)(*(longlong *)*puVar14 + 0x68))((longlong *)*puVar14,0x12,&local_1e0);
  local_1b8 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  (**(code **)(*(longlong *)*puVar14 + 0x68))((longlong *)*puVar14,0x15,&local_1c8);
  local_res8 = 0;
  iVar5 = (**(code **)(*(longlong *)*puVar14 + 0x68))((longlong *)*puVar14,0x2c,&local_res8);
  if (iVar5 < 0) {
    local_res8 = 0;
  }
  local_1f0 = 0;
  iVar6 = (**(code **)(*(longlong *)*puVar14 + 0x68))((longlong *)*puVar14,0x2d,&local_1f0);
  iVar5 = local_1f0._4_4_;
  if (iVar6 < 0) {
    iVar5 = 0;
  }
  local_1f0 = CONCAT44(iVar5,(undefined4)local_1f0);
  if ((int)uStack_1d0 == 0) {
LAB_180044dbe:
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
    if (uStack_1d0._4_4_ == 0) goto LAB_180044dbe;
  }
  *(undefined1 *)(lVar10 + 0x6e8 + (longlong)param_1) = uVar12;
  *(bool *)(lVar10 + 0x6e9 + (longlong)param_1) = local_1a0._4_4_ != 0;
  *(bool *)(lVar10 + 0x6ea + (longlong)param_1) = 0 < local_1e0._4_4_;
  *(undefined4 *)(lVar10 + 0x6e4 + (longlong)param_1) = (undefined4)uStack_1c0;
  *(bool *)(lVar10 + 0x6eb + (longlong)param_1) = 0xbfff < param_3 && (int)local_res8 != 0;
  *(bool *)(lVar10 + 0x6ec + (longlong)param_1) = iVar5 != 0;
  cVar4 = FUN_18005e210((undefined4 *)((longlong)param_1 + lVar13 + 0x1bc0),0x10,0x100);
  if (cVar4 != '\0') {
    uVar7 = FUN_180044284(param_1,param_2);
    if ((char)uVar7 != '\0') {
      if ((*(longlong *)((longlong)param_1 + 0x2d8) == 0) ||
         (uVar8 = FUN_180059cc8(FUN_180059d68), (char)uVar8 == '\0')) {
        *(undefined8 *)((longlong)param_1 + uVar15 * 0x28 + 0x30) = 0;
      }
      plVar3 = *(longlong **)((longlong)param_1 + uVar15 * 0x28 + 0x18);
      (**(code **)(*plVar3 + 0x40))(plVar3,local_168);
      uVar11 = 0;
      *(undefined4 *)(lVar13 + 0x904 + (longlong)param_1) = local_68;
      uVar7 = CONCAT71((uint7)(uint3)((uint)local_68 >> 8),1);
      *(int *)(lVar13 + 0x900 + (longlong)param_1) = param_3;
      if (*(int *)((longlong)param_1 + 0x6c8) == 0) {
LAB_180044f0c:
        return CONCAT71((int7)(uVar7 >> 8),1);
      }
      do {
        if ((char)uVar7 == '\0') goto LAB_180044ecf;
        plVar3 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x6c0) + uVar11 * 8);
        uVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        uVar9 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)((longlong)param_1 + 0x6c8));
      if ((char)uVar7 != '\0') goto LAB_180044f0c;
LAB_180044ecf:
      FUN_180044910((longlong)param_1,param_2);
      FUN_180044a2c((longlong)param_1,(ulonglong)param_2);
    }
    FUN_18005df50((longlong)param_1 + lVar13 + 0x1bc0);
  }
  uVar7 = (**(code **)(*(longlong *)*puVar14 + 0x10))();
  *puVar14 = 0;
LAB_180044f04:
  piVar1 = (int *)((longlong)param_1 + uVar15 * 0x28 + 0x28);
  *piVar1 = *piVar1 + -1;
  return uVar7 & 0xffffffffffffff00;
}

