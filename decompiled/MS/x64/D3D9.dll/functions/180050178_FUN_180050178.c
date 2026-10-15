/*
 * FUN_180050178 at 180050178
 * undefined __fastcall FUN_180050178(longlong param_1, undefined1 param_2)
 * Address ranges: 180050178-18005025e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050178(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x10);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = 0x10;
      puVar4[2] = param_1;
      puVar5 = (undefined8 *)((longlong)puVar4 + 0x23U & 0xfffffffffffffff8);
      *(undefined1 *)(puVar4 + 3) = param_2;
      *puVar5 = 0;
      *puVar4 = FUN_180050260;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18005024e;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(undefined1 *)(plVar3 + 1) = param_2;
  FUN_180050260(plVar3);
LAB_18005024e:
  FUN_1800facb0(piVar1);
  return;
}

