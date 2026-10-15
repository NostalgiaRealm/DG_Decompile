/*
 * FUN_1800554f8 at 1800554f8
 * undefined8 __fastcall FUN_1800554f8(longlong param_1, longlong param_2, int param_3, uint param_4)
 * Address ranges: 1800554f8-18005577f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800554f8(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  bool bVar9;
  bool bVar10;
  longlong local_res10 [2];
  uint local_res20;
  
  if ((param_4 & 2) == 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if ((iVar2 == 8) || ((iVar2 != 9 && ((iVar2 == 10 || (iVar2 != 0xb)))))) {
      bVar9 = true;
      do {
        LOCK();
        bVar10 = *(int *)(param_2 + 0x54) == 0;
        if (bVar10) {
          *(int *)(param_2 + 0x54) = 1;
        }
        UNLOCK();
      } while (!bVar10);
      *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
LAB_1800555e5:
      *(undefined4 *)(param_2 + 0x50) = 2;
      *(undefined4 *)(param_2 + 0x54) = 0;
    }
    else {
      bVar9 = *(int *)(param_2 + 0x50) == 1;
      if (bVar9) {
        do {
          LOCK();
          bVar10 = *(int *)(param_2 + 0x54) == 0;
          if (bVar10) {
            *(int *)(param_2 + 0x54) = 1;
          }
          UNLOCK();
        } while (!bVar10);
        goto LAB_1800555e5;
      }
    }
    if ((param_3 == 8) && (*(char *)(param_2 + 0x58) != '\0')) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
  }
  else {
    cVar7 = '\0';
    bVar9 = *(int *)(param_2 + 0x50) != 1;
    if (*(int *)(param_2 + 0x10) != 9) {
      bVar9 = *(int *)(param_2 + 0x10) == 0xb && bVar9;
    }
    if (!bVar9) {
      return 0x80004005;
    }
    do {
      LOCK();
      bVar10 = *(int *)(param_2 + 0x54) == 0;
      if (bVar10) {
        *(int *)(param_2 + 0x54) = 1;
      }
      UNLOCK();
    } while (!bVar10);
    *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
    *(undefined4 *)(param_2 + 0x50) = 1;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x54) = 0;
  }
  if (!bVar9) {
    return 0x80004005;
  }
  local_res20 = param_4;
  if (param_3 == 0xc) {
    plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x10);
    (**(code **)(*plVar5 + 0x80))(plVar5,local_res10);
    FUN_180055c0c(param_2,local_res10[0],*(longlong *)(param_2 + 0x30),'\x01');
    return 0;
  }
  if (cVar7 != '\0') {
    LOCK();
    if (*(int *)(param_2 + 0x50) == 2) {
      *(int *)(param_2 + 0x50) = 3;
    }
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + 0xf6e0);
  lVar4 = *(longlong *)(param_2 + 0x30);
  piVar1 = (int *)(lVar3 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x28);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
      UNLOCK();
      puVar6[1] = 0x28;
      puVar8 = (undefined8 *)((longlong)puVar6 + 0x3bU & 0xfffffffffffffff8);
      puVar6[2] = param_1;
      puVar6[3] = param_2;
      *(int *)(puVar6 + 4) = param_3;
      *(uint *)((longlong)puVar6 + 0x24) = local_res20;
      puVar6[5] = lVar4;
      *(char *)(puVar6 + 6) = cVar7;
      *puVar8 = 0;
      *puVar6 = FUN_180055780;
      *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar8;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        return 0;
      }
      goto LAB_18005572e;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar5 = *(longlong **)(lVar3 + 0x14a0);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  *(int *)(plVar5 + 2) = param_3;
  *(uint *)((longlong)plVar5 + 0x14) = local_res20;
  plVar5[3] = lVar4;
  *(char *)(plVar5 + 4) = cVar7;
  FUN_180055780(plVar5);
LAB_18005572e:
  FUN_1800facb0(piVar1);
  return 0;
}

