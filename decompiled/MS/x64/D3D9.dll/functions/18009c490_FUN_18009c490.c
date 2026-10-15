/*
 * FUN_18009c490 at 18009c490
 * undefined __fastcall FUN_18009c490(longlong * param_1, longlong param_2, longlong param_3, undefined4 param_4, undefined8 param_5, undefined8 * param_6, undefined8 * param_7)
 * Address ranges: 18009c490-18009c62a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009c490(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  uVar5 = *param_7;
  uVar6 = param_7[1];
  uVar2 = param_7[2];
  uVar7 = *param_6;
  uVar8 = param_6[1];
  uVar9 = param_6[2];
  uVar10 = param_6[3];
  uVar11 = param_6[4];
  uVar12 = param_6[5];
  lVar3 = *(longlong *)(*param_1 + 0x58);
  piVar1 = (int *)(lVar3 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar13 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x68);
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
      UNLOCK();
      puVar13[1] = 0x68;
      puVar14 = (undefined8 *)((longlong)puVar13 + 0x7bU & 0xfffffffffffffff8);
      puVar13[2] = param_2;
      puVar13[3] = param_3;
      *(undefined4 *)(puVar13 + 4) = param_4;
      *(undefined8 *)((longlong)puVar13 + 0x24) = param_5;
      *(undefined8 *)((longlong)puVar13 + 0x2c) = uVar7;
      *(undefined8 *)((longlong)puVar13 + 0x34) = uVar8;
      *(undefined8 *)((longlong)puVar13 + 0x3c) = uVar9;
      *(undefined8 *)((longlong)puVar13 + 0x44) = uVar10;
      *(undefined8 *)((longlong)puVar13 + 0x4c) = uVar11;
      *(undefined8 *)((longlong)puVar13 + 0x54) = uVar12;
      *(undefined8 *)((longlong)puVar13 + 0x5c) = uVar5;
      *(undefined8 *)((longlong)puVar13 + 100) = uVar6;
      *(undefined8 *)((longlong)puVar13 + 0x6c) = uVar2;
      *puVar14 = 0;
      *puVar13 = FUN_18009c62c;
      *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar14;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_18009c5fc;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar4 = *(longlong **)(lVar3 + 0x14a0);
  *plVar4 = param_2;
  plVar4[1] = param_3;
  *(undefined4 *)(plVar4 + 2) = param_4;
  *(undefined8 *)((longlong)plVar4 + 0x14) = param_5;
  *(undefined8 *)((longlong)plVar4 + 0x1c) = uVar7;
  *(undefined8 *)((longlong)plVar4 + 0x24) = uVar8;
  *(undefined8 *)((longlong)plVar4 + 0x2c) = uVar9;
  *(undefined8 *)((longlong)plVar4 + 0x34) = uVar10;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = uVar11;
  *(undefined8 *)((longlong)plVar4 + 0x44) = uVar12;
  *(undefined8 *)((longlong)plVar4 + 0x4c) = uVar5;
  *(undefined8 *)((longlong)plVar4 + 0x54) = uVar6;
  *(undefined8 *)((longlong)plVar4 + 0x5c) = uVar2;
  FUN_18009c62c(plVar4);
LAB_18009c5fc:
  FUN_1800facb0(piVar1);
  return;
}

