/*
 * FUN_18001d828 at 18001d828
 * undefined __cdecl FUN_18001d828(longlong param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 18001d828-18001db4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d828(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
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
  
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x3380) + 0x70))
                    (*(longlong **)(param_1 + 0x3380),local_60,0);
  if ((((-1 < iVar4) && (local_60[0] == 4)) &&
      (*(int *)(*(longlong *)(param_1 + 0x3340) + 0x14c0) == 0)) &&
     (uVar5 = FUN_18004a2f8(*(longlong **)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                            *(ulonglong *)(param_1 + 0x3380)), (uVar5 & 1) != 0)) {
    bVar3 = *(longlong *)(param_1 + 0x44e8) != *(longlong *)(param_1 + 0x4508);
    if (*(longlong *)(param_1 + 0x44e8) == *(longlong *)(param_1 + 0x4508)) {
      uVar12 = 3;
      do {
        if (6 < uVar12) break;
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                          (*(longlong **)(param_1 + 0x3300),uVar12);
        uVar12 = uVar12 + 1;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (*(uint *)(lVar6 + 0x18) <= param_3) {
          uVar1 = param_3;
        }
        uVar2 = *(uint *)(lVar6 + 0x1c);
        if (param_3 + param_4 <= *(uint *)(lVar6 + 0x1c)) {
          uVar2 = param_3 + param_4;
        }
        bVar3 = uVar1 < uVar2;
      } while (uVar2 <= uVar1);
    }
    if (!bVar3) {
      plVar13 = *(longlong **)(param_1 + 0x3380);
      local_e8 = 0;
      uStack_e0 = 0;
      local_f0 = 0;
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
      iVar4 = (**(code **)(*plVar13 + 0x40))(plVar13,0,&local_e8,&local_f0);
      if (iVar4 < 0) {
        return;
      }
      plVar10 = *(longlong **)(uVar5 + 0xb18);
      cVar11 = '\x01';
      local_a0[0] = plVar13;
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar10 + 5));
      lVar6 = FUN_18004a458(plVar10,(ulonglong *)local_a0);
      if (lVar6 != 0) {
        uVar7 = FUN_1800493f0(lVar6,lVar6,0);
        cVar11 = (char)uVar7;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar10 + 5));
      if (cVar11 != '\0') {
        thunk_FUN_1800010d8((undefined8 *)((ulonglong)param_3 + local_f0),param_2,(ulonglong)param_4
                           );
      }
      local_e8 = (ulonglong)param_3;
      uStack_e0 = (ulonglong)(param_3 + param_4);
      (**(code **)(*plVar13 + 0x48))(plVar13,0,&local_e8);
      FUN_18004ec28(uVar5,(ulonglong)plVar13,0,1,0);
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
  if ((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb10) != 0) &&
     (bVar3 = FUN_18005bf08((longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),param_4,
                            (longlong *)&local_d0), bVar3)) {
    thunk_FUN_1800010d8(local_d0,param_2,(ulonglong)param_4);
    uStack_ac = 0;
    uStack_a8 = 0;
    local_b0 = param_4;
  }
  if (lStack_c8 == 0) {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar6 + 0x12c0));
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    puVar8 = (undefined8 *)FUN_180038310(lVar6 + 0x12c0,0x40);
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar6 + 0x14c0));
      puVar8[1] = 0x40;
      puVar8[2] = param_1;
      lStack_88 = lStack_c8;
      local_90 = local_d0;
      lStack_78 = lStack_b8;
      lStack_80 = lStack_c0;
      lStack_68 = CONCAT44(uStack_a4,uStack_a8);
      local_70 = CONCAT44(uStack_ac,local_b0);
      puVar8[4] = lStack_c8;
      puVar8[3] = local_d0;
      puVar8[6] = lStack_b8;
      puVar8[5] = lStack_c0;
      puVar8[8] = lStack_68;
      puVar8[7] = local_70;
      puVar9 = (undefined8 *)((longlong)puVar8 + 0x57U & 0xfffffffffffffff8);
      *(uint *)(puVar8 + 9) = param_3;
      *(uint *)((longlong)puVar8 + 0x4c) = param_4;
      *puVar9 = 0;
      *puVar8 = FUN_18001db50;
      *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28 + 0x1350) = puVar9;
      if (*(char *)(lVar6 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar6 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar6 + 0x1340));
        return;
      }
      goto LAB_18001db30;
    }
    *(undefined4 *)(lVar6 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar6 + 0x12c0));
  }
  plVar13 = *(longlong **)(lVar6 + 0x14a0);
  lStack_88 = lStack_c8;
  local_90 = local_d0;
  lStack_78 = lStack_b8;
  lStack_80 = lStack_c0;
  lStack_68 = CONCAT44(uStack_a4,uStack_a8);
  local_70 = CONCAT44(uStack_ac,local_b0);
  *plVar13 = param_1;
  plVar13[2] = lStack_c8;
  plVar13[1] = (longlong)local_d0;
  plVar13[4] = lStack_b8;
  plVar13[3] = lStack_c0;
  plVar13[6] = lStack_68;
  plVar13[5] = local_70;
  *(uint *)(plVar13 + 7) = param_3;
  *(uint *)((longlong)plVar13 + 0x3c) = param_4;
  FUN_18001db50(plVar13);
LAB_18001db30:
  *(undefined4 *)(lVar6 + 0x12c0) = 0;
  return;
}

