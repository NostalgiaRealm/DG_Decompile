/*
 * FUN_18002a5c8 at 18002a5c8
 * undefined __fastcall FUN_18002a5c8(longlong param_1, uint param_2, uint * param_3, undefined8 * param_4)
 * Address ranges: 18002a5c8-18002a9dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002a5c8(longlong param_1,uint param_2,uint *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  HANDLE hEvent;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint local_res8 [2];
  uint local_res20 [2];
  undefined8 *local_60;
  undefined8 *local_58;
  longlong lStack_50;
  undefined4 local_48;
  
  FUN_180026a88(param_1 + 0x34e8);
  lVar1 = *(longlong *)(param_1 + 0x31c0);
  local_res8[0] = 0;
  piVar8 = (int *)(lVar1 + 0x12c0);
  FUN_18005e070(piVar8);
  if (*(char *)(lVar1 + 0x14c4) == '\0') {
    iVar11 = 0;
    local_60 = (undefined8 *)0x0;
    bVar4 = false;
    uVar5 = 0;
  }
  else {
    local_res20[0] = 0;
    FUN_18001a338(piVar8,param_3,param_2,local_res8,local_res20);
    local_res20[0] = local_res20[0] - local_res8[0];
    iVar13 = local_res20[0] * 0x3c;
    iVar11 = local_res20[0] + 1;
    local_60 = (undefined8 *)((ulonglong)local_res8[0] * 0x3c + (longlong)param_4);
    bVar4 = true;
    iVar14 = iVar13 + (param_2 + 8) * 4;
    uVar5 = iVar14 + 0x3c;
    if (uVar5 < 0x3f00) {
      lVar1 = *(longlong *)(param_1 + 0x31c0);
      piVar8 = (int *)(lVar1 + 0x12c0);
      if (*(char *)(lVar1 + 0x14c4) != '\0') {
        uVar10 = (-(uint)(uVar5 != 0) & 8) + 0x10;
        if (uVar5 != 0) {
          uVar10 = uVar10 + (iVar14 + 0x43U & 0xfffffff8);
        }
        puVar6 = (undefined8 *)FUN_18005e090((longlong)piVar8,uVar10);
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
          UNLOCK();
          puVar6[1] = (ulonglong)uVar10;
          uVar7 = (ulonglong)(uVar5 != 0);
          *(int *)(puVar6 + uVar7 + 2) = iVar13 + 0x3c;
          *(longlong *)((longlong)puVar6 + uVar7 * 8 + 0x14) = param_1;
          *(uint *)((longlong)puVar6 + uVar7 * 8 + 0x1c) = param_2;
          puVar12 = (undefined8 *)(uVar7 * 8 + 0x27 + (longlong)puVar6 & 0xfffffffffffffff8);
          if (uVar5 != 0) {
            puVar6[2] = puVar12;
            uVar5 = local_res20[0] * 0x3c + 0x3c;
            puVar9 = puVar12;
            FUN_18005ed10(puVar12,local_60,(ulonglong)uVar5);
            FUN_18001a3c4(puVar9,(int *)param_3,
                          (int *)((ulonglong)uVar5 + 0xf + (longlong)puVar12 & 0xfffffffffffffff0),
                          param_2,-local_res8[0]);
            puVar12 = (undefined8 *)((longlong)puVar12 + ((ulonglong)(iVar14 + 0x43) & 0xfffffff8));
          }
          *puVar12 = 0;
          *puVar6 = FUN_18002a9e0;
          *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar12;
          if (*(char *)(lVar1 + 0x14c5) != '\0') {
            FUN_18005e1c0(piVar8);
            hEvent = *(HANDLE *)(lVar1 + 0x1340);
            goto LAB_18002a96d;
          }
          goto LAB_18002a9c0;
        }
        FUN_18005e1c0(piVar8);
        Sleep(100);
        FUN_18005e070(piVar8);
      }
      plVar2 = *(longlong **)(lVar1 + 0x14a0);
      uVar7 = (ulonglong)(uVar5 != 0) * 8;
      *(int *)(plVar2 + (uVar5 != 0)) = iVar13 + 0x3c;
      *(longlong *)(uVar7 + 4 + (longlong)plVar2) = param_1;
      *(uint *)(uVar7 + 0xc + (longlong)plVar2) = param_2;
      if (uVar5 != 0) {
        puVar6 = (undefined8 *)((uVar7 | 0x10) + (longlong)plVar2);
        *plVar2 = (longlong)puVar6;
        uVar5 = local_res20[0] * 0x3c + 0x3c;
        puVar12 = puVar6;
        FUN_18005ed10(puVar6,local_60,(ulonglong)uVar5);
        FUN_18001a3c4(puVar12,(int *)param_3,
                      (int *)((longlong)puVar6 + (ulonglong)uVar5 + 0xf & 0xfffffffffffffff0),
                      param_2,-local_res8[0]);
      }
      FUN_18002a9e0(plVar2);
      goto LAB_18002a9c0;
    }
  }
  local_48 = 0;
  local_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  puVar15 = param_3;
  if ((bVar4) &&
     (bVar4 = FUN_180053458((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31c0) + 0x17f0),uVar5,
                            (longlong *)&local_58), puVar6 = local_58, bVar4)) {
    puVar12 = local_58;
    FUN_18005ed10(local_58,local_60,(ulonglong)(uint)(iVar11 * 0x3c));
    puVar15 = (uint *)((longlong)puVar6 + (ulonglong)(uint)(iVar11 * 0x3c) + 0xf &
                      0xfffffffffffffff0);
    FUN_18001a3c4(puVar12,(int *)param_3,(int *)puVar15,param_2,-local_res8[0]);
    param_4 = puVar6;
  }
  lVar3 = lStack_50;
  lVar1 = *(longlong *)(param_1 + 0x31c0);
  piVar8 = (int *)(lVar1 + 0x12c0);
  if (*(char *)(lVar1 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_18005e090((longlong)piVar8,0x30);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
      UNLOCK();
      puVar6[1] = 0x30;
      puVar12 = (undefined8 *)((longlong)puVar6 + 0x47U & 0xfffffffffffffff8);
      puVar6[2] = param_1;
      *(uint *)(puVar6 + 3) = param_2;
      *(uint **)((longlong)puVar6 + 0x1c) = puVar15;
      *(undefined8 **)((longlong)puVar6 + 0x24) = param_4;
      *(undefined8 **)((longlong)puVar6 + 0x2c) = local_58;
      *(undefined4 *)((longlong)puVar6 + 0x34) = local_48;
      puVar6[7] = lVar3;
      *puVar12 = 0;
      *puVar6 = FUN_18002aa08;
      *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar12;
      if (*(char *)(lVar1 + 0x14c5) != '\0') {
        FUN_18005e1c0(piVar8);
        hEvent = *(HANDLE *)(lVar1 + 0x1340);
LAB_18002a96d:
        SetEvent(hEvent);
        return;
      }
      goto LAB_18002a9c0;
    }
    FUN_18005e1c0(piVar8);
    Sleep(100);
    FUN_18005e070(piVar8);
  }
  plVar2 = *(longlong **)(lVar1 + 0x14a0);
  *plVar2 = param_1;
  *(uint *)(plVar2 + 1) = param_2;
  *(uint **)((longlong)plVar2 + 0xc) = puVar15;
  *(undefined8 **)((longlong)plVar2 + 0x14) = param_4;
  *(undefined8 **)((longlong)plVar2 + 0x1c) = local_58;
  *(undefined4 *)((longlong)plVar2 + 0x24) = local_48;
  plVar2[5] = lVar3;
  FUN_18002aa08(plVar2);
LAB_18002a9c0:
  FUN_18005e1c0(piVar8);
  return;
}

