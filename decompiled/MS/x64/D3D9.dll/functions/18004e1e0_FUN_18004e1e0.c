/*
 * FUN_18004e1e0 at 18004e1e0
 * undefined __fastcall FUN_18004e1e0(longlong param_1, uint param_2, undefined8 * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, longlong param_8)
 * Address ranges: 18004e1e0-18004e519
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e1e0(longlong param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint local_res10;
  
  if (param_2 != 0) {
    local_res10 = 0;
    if (param_2 == 0) {
      return;
    }
    uVar4 = param_2;
    if (0x3f0 < param_2) {
      uVar4 = 0x3f0;
    }
    uVar5 = uVar4 * 0x10;
    do {
      lVar2 = *(longlong *)(param_1 + 0xf6e0);
      piVar1 = (int *)(lVar2 + 0x12c0);
      FUN_1800fab60(piVar1);
      if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18004e364:
        plVar3 = *(longlong **)(lVar2 + 0x14a0);
        *plVar3 = (longlong)param_3;
        plVar3[1] = param_1;
        *(uint *)(plVar3 + 2) = uVar4;
        *(undefined4 *)((longlong)plVar3 + 0x14) = param_4;
        *(undefined4 *)(plVar3 + 3) = param_5;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = param_6;
        *(undefined4 *)(plVar3 + 4) = param_7;
        *(longlong *)((longlong)plVar3 + 0x24) = param_8;
        FUN_18004e558(plVar3);
LAB_18004e3b1:
        FUN_1800facb0(piVar1);
      }
      else {
        puVar6 = (undefined8 *)FUN_1800fab80((longlong)piVar1,uVar5 + 0x30);
        if (puVar6 == (undefined8 *)0x0) {
          FUN_1800facb0(piVar1);
          Sleep(100);
          FUN_1800fab60(piVar1);
          goto LAB_18004e364;
        }
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar6[1] = (ulonglong)(uVar5 + 0x30);
        puVar6[3] = param_1;
        *(uint *)(puVar6 + 4) = uVar4;
        *(undefined4 *)((longlong)puVar6 + 0x24) = param_4;
        puVar7 = (undefined8 *)((longlong)puVar6 + 0x43U & 0xfffffffffffffff8);
        *(undefined4 *)(puVar6 + 5) = param_5;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = param_6;
        *(undefined4 *)(puVar6 + 6) = param_7;
        *(longlong *)((longlong)puVar6 + 0x34) = param_8;
        puVar6[2] = puVar7;
        FUN_1800fbec0(puVar7,param_3,(ulonglong)uVar5);
        *(undefined8 *)((ulonglong)uVar5 + (longlong)puVar7) = 0;
        *puVar6 = FUN_18004e558;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) =
             (undefined8 *)((ulonglong)uVar5 + (longlong)puVar7);
        if (*(char *)(lVar2 + 0x14c5) == '\0') goto LAB_18004e3b1;
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      }
      param_3 = param_3 + (ulonglong)uVar4 * 2;
      local_res10 = local_res10 + uVar4;
      if (param_2 <= local_res10) {
        return;
      }
    } while( true );
  }
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x20);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar7 = (undefined8 *)((longlong)puVar6 + 0x37U & 0xfffffffffffffff8);
      puVar6[1] = 0x20;
      puVar6[2] = param_1;
      *(undefined4 *)(puVar6 + 3) = param_4;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = param_5;
      *(undefined4 *)(puVar6 + 4) = param_6;
      *(undefined4 *)((longlong)puVar6 + 0x24) = param_7;
      puVar6[5] = param_8;
      *puVar7 = 0;
      *puVar6 = FUN_18004e51c;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar7;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18004e4fc;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_4;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_5;
  *(undefined4 *)(plVar3 + 2) = param_6;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_7;
  plVar3[3] = param_8;
  FUN_18004e51c(plVar3);
LAB_18004e4fc:
  FUN_1800facb0(piVar1);
  return;
}

