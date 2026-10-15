/*
 * FUN_180051474 at 180051474
 * undefined __fastcall FUN_180051474(longlong param_1, uint param_2, undefined4 param_3, longlong param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7, undefined1 param_8)
 * Address ranges: 180051474-1800515d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051474(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (0xf < param_2) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x28);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = 0x28;
      puVar5 = (undefined8 *)((longlong)puVar4 + 0x3fU & 0xfffffffffffffff8);
      puVar4[2] = param_1;
      *(uint *)(puVar4 + 3) = param_2;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = param_3;
      puVar4[4] = param_4;
      *(undefined4 *)(puVar4 + 5) = param_5;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = param_6;
      *(undefined1 *)(puVar4 + 6) = param_7;
      *(undefined1 *)((longlong)puVar4 + 0x34) = param_8;
      *puVar5 = 0;
      *puVar4 = FUN_1800515d8;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_1800515c0;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(uint *)(plVar3 + 1) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
  plVar3[2] = param_4;
  *(undefined4 *)(plVar3 + 3) = param_5;
  *(undefined4 *)((longlong)plVar3 + 0x1c) = param_6;
  *(undefined1 *)(plVar3 + 4) = param_7;
  *(undefined1 *)((longlong)plVar3 + 0x24) = param_8;
  FUN_1800515d8(plVar3);
LAB_1800515c0:
  FUN_1800facb0(piVar1);
  return;
}

