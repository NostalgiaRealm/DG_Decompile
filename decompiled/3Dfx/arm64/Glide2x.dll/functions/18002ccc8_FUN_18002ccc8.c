/*
 * FUN_18002ccc8 at 18002ccc8
 * undefined __cdecl FUN_18002ccc8(longlong * param_1, undefined8 * param_2)
 * Address ranges: 18002ccc8-18002d037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ccc8(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint local_350;
  uint local_34c;
  uint local_348;
  undefined4 uStack_344;
  int local_340;
  int iStack_33c;
  longlong *local_338;
  longlong *local_330;
  uint local_328;
  uint uStack_324;
  uint local_320;
  undefined4 uStack_31c;
  undefined1 auStack_318 [88];
  longlong local_2c0;
  undefined1 auStack_2b8 [88];
  longlong local_260;
  undefined8 auStack_250 [66];
  
  FUN_180028498((longlong)(param_1 + 0x69d));
  local_348 = *(uint *)(param_1 + 0x17);
  uStack_344 = *(undefined4 *)((longlong)param_1 + 0xbc);
  uVar6 = *(uint *)((longlong)param_2 + 0x37);
  local_34c = *(uint *)((longlong)param_2 + 0x3b);
  if ((uVar6 < 0xfffffff8) || ((uVar6 != local_34c || uVar6 == 0xfffffff9) && 0xff < local_34c)) {
    local_328 = uVar6;
    if (uVar6 == 0) {
      local_328 = *(uint *)(param_1 + 0x15);
    }
    if (local_34c == 0) {
      local_34c = *(uint *)((longlong)param_1 + 0xac);
    }
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      uVar6 = 0;
      lVar8 = *(longlong *)(param_1[0x630] + 0x10);
      lVar9 = *(longlong *)(*(longlong *)(param_1[0x630] + 8) + 0x2978);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x620));
      plVar4 = *(longlong **)(lVar8 + 8);
      local_330 = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x78))(plVar4,&local_330);
      if (local_330 != (longlong *)0x0) {
        iVar3 = (**(code **)(*local_330 + 0x38))(local_330,auStack_318);
        uVar6 = 0;
        if (-1 < iVar3) {
          uVar1 = *(uint *)(lVar8 + 0x10);
          bVar2 = false;
          local_338 = (longlong *)0x0;
          uVar10 = 0;
          uVar6 = 0;
          do {
            plVar4 = *(longlong **)(lVar9 + (ulonglong)uVar1 * 0x28 + 0x18);
            iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,uVar10,&local_338);
            if (iVar3 < 0) break;
            if (local_338 != (longlong *)0x0) {
              iVar3 = (**(code **)(*local_338 + 0x38))(local_338,auStack_2b8);
              if ((-1 < iVar3) && (local_260 == local_2c0)) {
                bVar2 = true;
                uVar6 = uVar10;
              }
              (**(code **)(*local_338 + 0x10))();
            }
            uVar10 = uVar10 + 1;
          } while (!bVar2);
        }
        (**(code **)(*local_330 + 0x10))();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x620));
    }
    else {
      uVar6 = *(int *)(param_2 + 1) - 1;
    }
    FUN_18001f3e8((longlong)param_1,&local_328,uVar6,(longlong)param_2);
    FUN_18001f660((longlong)param_1,&local_320,uVar6,&local_328,(longlong)param_2);
    local_348 = local_320;
    uStack_344 = uStack_31c;
    local_34c = uStack_324;
  }
  if (((*(char *)((longlong)param_2 + 0x22) == '\0') ||
      (local_340 = *(int *)((longlong)param_2 + 0x43), local_340 == 0)) ||
     (iStack_33c = *(int *)((longlong)param_2 + 0x47), iStack_33c == 0)) {
    local_340 = (int)param_1[0x18];
    iStack_33c = 1;
  }
  local_350 = local_328;
  if (((((*(uint *)(param_1 + 0x16) != local_328) ||
        (*(uint *)((longlong)param_1 + 0xb4) != local_34c)) ||
       ((*(int *)((longlong)param_1 + 0xc4) != local_340 ||
        (((int)param_1[0x19] != iStack_33c ||
         (lVar8 = param_1[1], *(int *)(lVar8 + 0x1c) != *(int *)((longlong)param_2 + 0x1c))))))) ||
      (*(int *)(lVar8 + 0x18) != *(int *)(param_2 + 3))) ||
     ((*(uint *)(lVar8 + 0xc2) & 4) != (*(uint *)((longlong)param_2 + 0xc2) & 4))) {
    FUN_180043140(param_1[0x638] + 0x12c0);
    FUN_180024cb8(param_1,(longlong)param_2,(undefined8 *)&local_350);
    return;
  }
  thunk_FUN_180001218(auStack_250,param_2,0x20c);
  lVar8 = param_1[0x638];
  FUN_180042980((uint *)(lVar8 + 0x12c0));
  if (*(char *)(lVar8 + 0x14c4) != '\0') {
    puVar5 = (undefined8 *)FUN_180042850(lVar8 + 0x12c0,0x218);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1800608b0((uint *)(lVar8 + 0x14c0));
      puVar5[1] = 0x218;
      puVar5[2] = param_1;
      thunk_FUN_180001218(puVar5 + 3,auStack_250,0x20c);
      puVar7 = (undefined8 *)((longlong)puVar5 + 0x22bU & 0xfffffffffffffff8);
      *puVar7 = 0;
      *puVar5 = FUN_18002d038;
      *(undefined8 **)(lVar8 + (ulonglong)*(uint *)(lVar8 + 0x14bc) * 0x28 + 0x1350) = puVar7;
      if (*(char *)(lVar8 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar8 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar8 + 0x1340));
        return;
      }
      goto LAB_18002cff4;
    }
    *(undefined4 *)(lVar8 + 0x12c0) = 0;
    Sleep(100);
    FUN_180042980((uint *)(lVar8 + 0x12c0));
  }
  puVar5 = *(undefined8 **)(lVar8 + 0x14a0);
  *puVar5 = param_1;
  thunk_FUN_180001218(puVar5 + 1,auStack_250,0x20c);
  FUN_18002d038(puVar5);
LAB_18002cff4:
  *(undefined4 *)(lVar8 + 0x12c0) = 0;
  return;
}

