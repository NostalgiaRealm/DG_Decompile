/*
 * FUN_1800b5fe4 at 1800b5fe4
 * undefined1 __fastcall FUN_1800b5fe4(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 1800b5fe4-1800b646a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800b5fe4(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 uVar13;
  
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0xc488) != 0) {
    lVar7 = FUN_1800bf32c(param_1 + 0x6910,*(ulonglong *)(param_1 + 0xc488));
    if ((lVar7 != 0) && (*(char *)(param_1 + 0x21) == '\0')) {
      iVar12 = 0;
      sVar2 = *(short *)(lVar7 + 0x18);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(lVar7 + 0x18 + (ulonglong)(uint)(iVar12 * 2) * 2);
        uVar4 = *(ushort *)(lVar7 + 0x18 + (ulonglong)(iVar12 * 2 + 1) * 2);
        puVar10 = (undefined4 *)(param_1 + 0x53e0 + (ulonglong)((uint)uVar3 * 4) * 4);
        puVar11 = (undefined4 *)(param_1 + 0xb520 + (ulonglong)((uint)uVar3 * 4) * 4);
        for (uVar8 = (ulonglong)(((uint)uVar4 - (uint)uVar3) * 4); uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x130))
                  (*(undefined8 *)(param_1 + 0x28),uVar3,uVar4,
                   param_1 + 0x53e0 + (ulonglong)((uint)uVar3 * 4) * 4);
        iVar12 = iVar12 + 1;
        sVar2 = *(short *)(lVar7 + 0x18 + (ulonglong)(uint)(iVar12 * 2) * 2);
      }
      iVar12 = 0;
      sVar2 = *(short *)(lVar7 + 0x1dc);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(lVar7 + 0x1dc + (ulonglong)(uint)(iVar12 * 2) * 2);
        uVar4 = *(ushort *)(lVar7 + 0x1dc + (ulonglong)(iVar12 * 2 + 1) * 2);
        puVar10 = (undefined4 *)(param_1 + 0x6a50 + (ulonglong)((uint)uVar3 * 4) * 4);
        puVar11 = (undefined4 *)(param_1 + 0xc320 + (ulonglong)((uint)uVar3 * 4) * 4);
        for (uVar8 = (ulonglong)(((uint)uVar4 - (uint)uVar3) * 4); uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 400))
                  (*(undefined8 *)(param_1 + 0x28),uVar3,uVar4,
                   param_1 + 0x6a50 + (ulonglong)((uint)uVar3 * 4) * 4);
        iVar12 = iVar12 + 1;
        sVar2 = *(short *)(lVar7 + 0x1dc + (ulonglong)(uint)(iVar12 * 2) * 2);
      }
      iVar12 = 0;
      sVar2 = *(short *)(lVar7 + 0x200);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(lVar7 + 0x200 + (ulonglong)(uint)(iVar12 * 2) * 2);
        uVar9 = (ulonglong)uVar3;
        uVar4 = *(ushort *)(lVar7 + 0x200 + (ulonglong)(iVar12 * 2 + 1) * 2);
        puVar10 = (undefined4 *)(param_1 + 0x6a10 + uVar9 * 4);
        puVar11 = (undefined4 *)(param_1 + 0xc420 + uVar9 * 4);
        for (uVar8 = (ulonglong)((uint)uVar4 - (uint)uVar3); uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x198))
                  (*(longlong **)(param_1 + 0x28),uVar9,uVar4,param_1 + 0x6a10 + uVar9 * 4);
        iVar12 = iVar12 + 1;
        sVar2 = *(short *)(lVar7 + 0x200 + (ulonglong)(uint)(iVar12 * 2) * 2);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0xc488);
    LOCK();
    piVar1 = (int *)((longlong)puVar5 + 0xc);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 + -1 + *(int *)(puVar5 + 1) == 0) {
      FUN_1800c04c0(puVar5);
    }
  }
  uVar13 = 1;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xc488) = 0;
    *(undefined8 *)(param_1 + 0x67e8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x120))(*(longlong **)(param_1 + 0x28),0);
    uVar6 = MXCSR;
  }
  else if (param_3 == 0) {
    uVar13 = 0;
    uVar6 = MXCSR;
  }
  else {
    *(longlong *)(param_1 + 0xc488) = param_2;
    *(undefined8 *)(param_1 + 0x67e8) = *(undefined8 *)(param_3 + 8);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x120))
              (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_3 + 8));
    uVar6 = MXCSR;
    MXCSR = 0x3fc0;
    if (*(char *)(param_1 + 0x21) == '\0') {
      iVar12 = 0;
      sVar2 = *(short *)(param_3 + 0x18);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(param_3 + 0x18 + (ulonglong)(uint)(iVar12 * 2) * 2);
        uVar4 = *(ushort *)(param_3 + 0x18 + (ulonglong)(iVar12 * 2 + 1) * 2);
        puVar10 = (undefined4 *)
                  (*(longlong *)(param_3 + 0x10) + 0x414 + (ulonglong)((uint)uVar3 * 4) * 4);
        puVar11 = (undefined4 *)(param_1 + 0xb520 + (ulonglong)((uint)uVar3 * 4) * 4);
        for (uVar8 = (ulonglong)(((uint)uVar4 - (uint)uVar3) * 4); uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x130))
                  (*(undefined8 *)(param_1 + 0x28),uVar3,uVar4,
                   *(longlong *)(param_3 + 0x10) + 0x414 + (ulonglong)((uint)uVar3 * 4) * 4);
        iVar12 = iVar12 + 1;
        sVar2 = *(short *)(param_3 + 0x18 + (ulonglong)(uint)(iVar12 * 2) * 2);
      }
      iVar12 = 0;
      sVar2 = *(short *)(param_3 + 0x1dc);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(param_3 + 0x1dc + (ulonglong)(uint)(iVar12 * 2) * 2);
        uVar4 = *(ushort *)(param_3 + 0x1dc + (ulonglong)(iVar12 * 2 + 1) * 2);
        puVar10 = (undefined4 *)
                  (*(longlong *)(param_3 + 0x10) + 0x1a0 + (ulonglong)((uint)uVar3 * 4) * 4);
        puVar11 = (undefined4 *)(param_1 + 0xc320 + (ulonglong)((uint)uVar3 * 4) * 4);
        for (uVar8 = (ulonglong)(((uint)uVar4 - (uint)uVar3) * 4); uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 400))
                  (*(undefined8 *)(param_1 + 0x28),uVar3,uVar4,
                   *(longlong *)(param_3 + 0x10) + 0x1a0 + (ulonglong)((uint)uVar3 * 4) * 4);
        iVar12 = iVar12 + 1;
        sVar2 = *(short *)(param_3 + 0x1dc + (ulonglong)(uint)(iVar12 * 2) * 2);
      }
      iVar12 = 0;
      sVar2 = *(short *)(param_3 + 0x200);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(param_3 + 0x200 + (ulonglong)(uint)(iVar12 * 2) * 2);
        uVar9 = (ulonglong)uVar3;
        uVar4 = *(ushort *)(param_3 + 0x200 + (ulonglong)(iVar12 * 2 + 1) * 2);
        puVar10 = (undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x2b0 + uVar9 * 4);
        puVar11 = (undefined4 *)(param_1 + 0xc420 + uVar9 * 4);
        for (uVar8 = (ulonglong)((uint)uVar4 - (uint)uVar3); uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x198))
                  (*(undefined8 *)(param_1 + 0x28),uVar9,uVar4,
                   *(longlong *)(param_3 + 0x10) + 0x2b0 + uVar9 * 4);
        iVar12 = iVar12 + 1;
        sVar2 = *(short *)(param_3 + 0x200 + (ulonglong)(uint)(iVar12 * 2) * 2);
      }
    }
  }
  MXCSR = uVar6;
  *(undefined1 *)(param_1 + 0xd10) = 1;
  return uVar13;
}

