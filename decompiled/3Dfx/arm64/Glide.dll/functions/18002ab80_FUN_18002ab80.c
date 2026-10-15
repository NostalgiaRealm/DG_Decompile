/*
 * FUN_18002ab80 at 18002ab80
 * undefined __cdecl FUN_18002ab80(longlong param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 18002ab80-18002ae6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ab80(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  undefined8 *local_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong *local_a0 [2];
  undefined8 *local_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  int local_60 [8];
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x3200) + 0x70))
                    (*(longlong **)(param_1 + 0x3200),local_60,0);
  if ((((-1 < iVar2) && (local_60[0] == 4)) &&
      (*(int *)(*(longlong *)(param_1 + 0x31c0) + 0x14c0) == 0)) &&
     (uVar3 = FUN_1800475b8(*(longlong **)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                            *(ulonglong *)(param_1 + 0x3200)), (uVar3 & 1) != 0)) {
    uVar7 = 3;
    bVar1 = *(longlong *)(param_1 + 0x3b88) != *(longlong *)(param_1 + 0x3ba8);
    if (*(longlong *)(param_1 + 0x3b88) == *(longlong *)(param_1 + 0x3ba8)) {
      for (; uVar7 < 3; uVar7 = uVar7 + 1) {
        bVar1 = false;
      }
    }
    if (!bVar1) {
      plVar11 = *(longlong **)(param_1 + 0x3200);
      local_e8 = 0;
      uStack_e0 = 0;
      local_f0 = 0;
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
      iVar2 = (**(code **)(*plVar11 + 0x40))(plVar11,0,&local_e8,&local_f0);
      if (iVar2 < 0) {
        return;
      }
      plVar10 = *(longlong **)(uVar3 + 0xb18);
      cVar9 = '\x01';
      local_a0[0] = plVar11;
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar10 + 5));
      lVar4 = FUN_180047718(plVar10,(ulonglong *)local_a0);
      if (lVar4 != 0) {
        uVar5 = FUN_1800466b0(lVar4,lVar4,0);
        cVar9 = (char)uVar5;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar10 + 5));
      if (cVar9 != '\0') {
        thunk_FUN_180001218((undefined8 *)((ulonglong)param_3 + local_f0),param_2,(ulonglong)param_4
                           );
      }
      local_e8 = (ulonglong)param_3;
      uStack_e0 = (ulonglong)(param_3 + param_4);
      (**(code **)(*plVar11 + 0x48))(plVar11,0,&local_e8);
      FUN_18004bee8(uVar3,(ulonglong)plVar11,0,1,0);
      return;
    }
  }
  lStack_c8 = 0;
  local_d0 = (undefined8 *)0x0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  if ((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0xb10) != 0) &&
     (bVar1 = FUN_180059488((longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),param_4,
                            (longlong *)&local_d0), bVar1)) {
    thunk_FUN_180001218(local_d0,param_2,(ulonglong)param_4);
    uStack_ac = 0;
    uStack_a8 = 0;
    local_b0 = param_4;
  }
  if (lStack_c8 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x31c0);
  FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_1800436a0(lVar4 + 0x12c0,0x40);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar4 + 0x14c0));
      puVar6[1] = 0x40;
      puVar6[2] = param_1;
      lStack_88 = lStack_c8;
      local_90 = local_d0;
      lStack_78 = lStack_b8;
      lStack_80 = lStack_c0;
      lStack_68 = CONCAT44(uStack_a4,uStack_a8);
      local_70 = CONCAT44(uStack_ac,local_b0);
      puVar6[4] = lStack_c8;
      puVar6[3] = local_d0;
      puVar6[6] = lStack_b8;
      puVar6[5] = lStack_c0;
      puVar6[8] = lStack_68;
      puVar6[7] = local_70;
      puVar8 = (undefined8 *)((longlong)puVar6 + 0x57U & 0xfffffffffffffff8);
      *(uint *)(puVar6 + 9) = param_3;
      *(uint *)((longlong)puVar6 + 0x4c) = param_4;
      *puVar8 = 0;
      *puVar6 = FUN_18002ae70;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar8;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_18002ae54;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  }
  plVar11 = *(longlong **)(lVar4 + 0x14a0);
  lStack_88 = lStack_c8;
  local_90 = local_d0;
  lStack_78 = lStack_b8;
  lStack_80 = lStack_c0;
  lStack_68 = CONCAT44(uStack_a4,uStack_a8);
  local_70 = CONCAT44(uStack_ac,local_b0);
  *plVar11 = param_1;
  plVar11[2] = lStack_c8;
  plVar11[1] = (longlong)local_d0;
  plVar11[4] = lStack_b8;
  plVar11[3] = lStack_c0;
  plVar11[6] = lStack_68;
  plVar11[5] = local_70;
  *(uint *)(plVar11 + 7) = param_3;
  *(uint *)((longlong)plVar11 + 0x3c) = param_4;
  FUN_18002ae70(plVar11);
LAB_18002ae54:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

