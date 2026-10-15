/*
 * FUN_180029478 at 180029478
 * undefined __cdecl FUN_180029478(longlong param_1, longlong param_2, uint param_3, uint param_4, longlong param_5, int param_6, byte param_7)
 * Address ranges: 180029478-1800296e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029478(longlong param_1,longlong param_2,uint param_3,uint param_4,longlong param_5,
                  int param_6,byte param_7)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  int local_88;
  longlong local_78;
  uint local_70;
  undefined8 local_68;
  undefined4 local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  
  uVar10 = *(uint *)(param_2 + 0x20);
  uVar7 = *(uint *)(param_2 + 0x24);
  auVar14 = FUN_18001d650(param_3,param_4,uVar10,uVar7,param_6,(uint)param_7);
  local_68 = 0;
  local_60 = 0;
  uVar11 = auVar14._0_8_ >> 0x20;
  uVar9 = auVar14._4_4_;
  uVar13 = auVar14._12_4_;
  *(uint *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + (uVar13 - uVar9 >> 4);
  cVar2 = *(char *)(param_2 + 0x49);
  uStack_54 = 1;
  uStack_5c = uVar10;
  if (param_3 < param_4) {
    local_58 = uVar13;
    if (auVar14._8_4_ != 0) {
      local_58 = uVar13 + 1;
    }
    local_68 = (ulonglong)uVar9 << 0x20;
    if (param_5 != 0) {
      uVar5 = *(undefined8 *)(param_2 + (ulonglong)param_7 * 8 + 0x170);
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
      iVar3 = (**(code **)(*plVar4 + 0x70))(plVar4,uVar5,0,3,0,&local_78);
      if (-1 < iVar3) {
        local_88 = auVar14._0_4_;
        iVar3 = (uint)param_7 * 2 + 2;
        puVar12 = (undefined8 *)(local_78 + (ulonglong)(local_70 * uVar9));
        if (local_88 != 0) {
          thunk_FUN_1800010d8((undefined8 *)
                              ((longlong)puVar12 + (ulonglong)(uint)(iVar3 * local_88)),
                              (undefined8 *)(param_5 + (ulonglong)param_3),
                              (ulonglong)(uint)((*(int *)(param_2 + 0x20) - local_88) * iVar3));
          uVar11 = (ulonglong)(uVar9 + 1);
          puVar12 = (undefined8 *)((longlong)puVar12 + (ulonglong)local_70);
        }
        uVar10 = (uint)uVar11;
        puVar1 = (undefined8 *)(param_5 + (ulonglong)(uVar10 * iVar3 * param_6));
        while (uVar10 <= uVar13) {
          iVar8 = auVar14._8_4_;
          if ((uint)uVar11 != uVar13) {
            iVar8 = *(int *)(param_2 + 0x20);
          }
          thunk_FUN_1800010d8(puVar12,puVar1,(ulonglong)(uint)(iVar3 * iVar8));
          uVar10 = (uint)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          puVar1 = (undefined8 *)((longlong)puVar1 + (ulonglong)(uint)(iVar3 * param_6));
          puVar12 = (undefined8 *)((longlong)puVar12 + (ulonglong)local_70);
        }
        plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
        (**(code **)(*plVar4 + 0x78))(plVar4,uVar5,0);
      }
      uVar9 = local_68._4_4_;
    }
    if (uVar9 != 0) goto LAB_180029624;
  }
  else {
    uVar9 = 0;
    local_58 = uVar7;
  }
  if (local_58 == *(uint *)(*(longlong *)(param_1 + 0x140) + 0xac) && cVar2 == '\0') {
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
    if ((param_7 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x170);
      uVar5 = *(undefined8 *)(param_2 + 0x100);
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x178);
      uVar5 = *(undefined8 *)(param_2 + 0x130);
    }
    (**(code **)(*plVar4 + 0x178))(plVar4,uVar5,uVar6);
    return;
  }
LAB_180029624:
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
  if ((param_7 & 1) == 0) {
    (**(code **)(*plVar4 + 0x170))
              (plVar4,*(undefined8 *)(param_2 + 0x100),0,0,uVar9,0,*(undefined8 *)(param_2 + 0x170),
               0,&local_68);
  }
  else {
    (**(code **)(*plVar4 + 0x170))(plVar4,*(undefined8 *)(param_2 + 0x130));
  }
  return;
}

