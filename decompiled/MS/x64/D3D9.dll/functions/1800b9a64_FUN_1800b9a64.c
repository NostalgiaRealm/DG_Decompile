/*
 * FUN_1800b9a64 at 1800b9a64
 * undefined __fastcall FUN_1800b9a64(longlong param_1)
 * Address ranges: 1800b9a64-1800b9d8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b9a64(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  
  uVar12 = 0;
  iVar8 = 0;
  uVar7 = uVar12;
  if (*(int *)(param_1 + 0x400) != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar7 * 8) != 0) {
        FUN_1800074ac(param_1,(uint)uVar7);
      }
      uVar10 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0x400));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x3f8));
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  lVar2 = param_1;
  FUN_1800b0098(param_1);
  if (*(int *)(param_1 + 0x68e8) != 0) {
    uVar7 = uVar12;
    if (*(int *)(param_1 + 0x68e8) == 0) {
      lVar6 = 8;
      goto LAB_1800b9afe;
    }
    do {
      iVar8 = (int)uVar7;
      lVar2 = uVar7 * 0x898;
      lVar6 = *(longlong *)(param_1 + 0x68e0) + 0x10 + lVar2;
LAB_1800b9afe:
      FUN_1800be658(lVar2,lVar6);
      uVar7 = (ulonglong)(iVar8 + 1U);
    } while (iVar8 + 1U < *(uint *)(param_1 + 0x68e8));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x68d8));
  *(undefined8 *)(param_1 + 0x68d8) = 0;
  iVar8 = 0;
  *(undefined8 *)(param_1 + 0x68e0) = 0;
  *(undefined8 *)(param_1 + 0x68e8) = 0;
  if (*(int *)(param_1 + 0x6900) != 0) {
    uVar7 = uVar12;
    if (*(int *)(param_1 + 0x6900) == 0) {
      puVar9 = (undefined8 *)&DAT_00000008;
      iVar11 = iVar8;
      goto LAB_1800b9b5c;
    }
    do {
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68f8) + (uVar7 * 3 + 2) * 8);
      iVar11 = (int)uVar7;
LAB_1800b9b5c:
      puVar9 = (undefined8 *)*puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_1800fbcf0((LPVOID)*puVar9);
        FUN_1800fbcf0(puVar9);
      }
      uVar7 = (ulonglong)(iVar11 + 1U);
    } while (iVar11 + 1U < *(uint *)(param_1 + 0x6900));
  }
  plVar3 = *(longlong **)(param_1 + 0x68f0);
  FUN_1800fbcf0(plVar3);
  *(undefined8 *)(param_1 + 0x68f0) = 0;
  *(undefined8 *)(param_1 + 0x68f8) = 0;
  *(undefined8 *)(param_1 + 0x6900) = 0;
  if (*(int *)(param_1 + 0x68c8) != 0) {
    uVar7 = uVar12;
    if (*(int *)(param_1 + 0x68c8) == 0) {
      plVar13 = (longlong *)&DAT_00000008;
      iVar11 = iVar8;
      goto LAB_1800b9bd2;
    }
    do {
      plVar13 = (longlong *)(*(longlong *)(param_1 + 0x68c0) + (uVar7 * 3 + 2) * 8);
      iVar11 = (int)uVar7;
LAB_1800b9bd2:
      plVar4 = (longlong *)*plVar13;
      uVar7 = uVar12;
      if ((int)plVar4[1] != 0) {
        do {
          FUN_1800be658(plVar3,uVar7 * 0x888 + *plVar4);
          plVar4 = (longlong *)*plVar13;
          uVar10 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(plVar4 + 1));
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_1800fbcf0((LPVOID)*plVar4);
        FUN_1800fbcf0(plVar4);
        plVar3 = plVar4;
      }
      uVar7 = (ulonglong)(iVar11 + 1U);
    } while (iVar11 + 1U < *(uint *)(param_1 + 0x68c8));
  }
  pvVar5 = *(LPVOID *)(param_1 + 0x68b8);
  FUN_1800fbcf0(pvVar5);
  *(undefined8 *)(param_1 + 0x68b8) = 0;
  *(undefined8 *)(param_1 + 0x68c0) = 0;
  *(undefined8 *)(param_1 + 0x68c8) = 0;
  if (*(int *)(param_1 + 0x6940) != 0) {
    uVar7 = uVar12;
    if (*(int *)(param_1 + 0x6940) == 0) {
      lVar2 = 8;
      iVar11 = iVar8;
      goto LAB_1800b9c6e;
    }
    do {
      pvVar5 = (LPVOID)(uVar7 * 0x248);
      lVar2 = *(longlong *)(param_1 + 0x6938) + 0x10 + (longlong)pvVar5;
      iVar11 = (int)uVar7;
LAB_1800b9c6e:
      FUN_1800bef78(pvVar5,lVar2);
      uVar7 = (ulonglong)(iVar11 + 1U);
    } while (iVar11 + 1U < *(uint *)(param_1 + 0x6940));
  }
  plVar3 = *(longlong **)(param_1 + 0x6930);
  FUN_1800fbcf0(plVar3);
  *(undefined8 *)(param_1 + 0x6930) = 0;
  *(undefined8 *)(param_1 + 0x6938) = 0;
  *(undefined8 *)(param_1 + 0x6940) = 0;
  if (*(int *)(param_1 + 0x6920) != 0) {
    uVar7 = uVar12;
    if (*(int *)(param_1 + 0x6920) == 0) {
      plVar13 = (longlong *)&DAT_00000008;
      goto LAB_1800b9ccc;
    }
    do {
      iVar8 = (int)uVar7;
      plVar13 = (longlong *)(*(longlong *)(param_1 + 0x6918) + (uVar7 * 3 + 2) * 8);
LAB_1800b9ccc:
      plVar4 = (longlong *)*plVar13;
      uVar7 = uVar12;
      if ((int)plVar4[1] != 0) {
        do {
          FUN_1800bef78(plVar3,uVar7 * 0x238 + *plVar4);
          plVar4 = (longlong *)*plVar13;
          uVar10 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(plVar4 + 1));
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_1800fbcf0((LPVOID)*plVar4);
        FUN_1800fbcf0(plVar4);
        plVar3 = plVar4;
      }
      uVar7 = (ulonglong)(iVar8 + 1U);
    } while (iVar8 + 1U < *(uint *)(param_1 + 0x6920));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x6910));
  *(undefined8 *)(param_1 + 0x6910) = 0;
  *(undefined8 *)(param_1 + 0x6918) = 0;
  *(undefined8 *)(param_1 + 0x6920) = 0;
  if (*(int *)(param_1 + 0x6954) != 0) {
    do {
      puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 0x6948) + 0x10 + uVar12 * 0x18);
      LOCK();
      piVar1 = (int *)((longlong)puVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 + -1 + *(int *)(puVar9 + 1) == 0) {
        FUN_1800c2d6c(puVar9);
      }
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0x6954));
  }
  *(undefined4 *)(param_1 + 0x6954) = 0;
  return;
}

