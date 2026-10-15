/*
 * FUN_180020950 at 180020950
 * undefined __cdecl FUN_180020950(undefined4 param_1, undefined4 param_2, longlong param_3)
 * Address ranges: 180020950-18002095f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020950(undefined4 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_3 + 0x3340);
  FUN_180038440((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_180038310(lVar4 + 0x12c0,0x10);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar4 + 0x14c0));
      puVar1[1] = 0x10;
      puVar1[2] = param_3;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x27U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar1 + 3) = param_1;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = param_2;
      *puVar3 = 0;
      *puVar1 = FUN_180020a50;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_180020a30;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar4 + 0x12c0));
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *(undefined4 *)(plVar2 + 1) = param_1;
  *(undefined4 *)((longlong)plVar2 + 0xc) = param_2;
  *plVar2 = param_3;
  FUN_180020a50(plVar2);
LAB_180020a30:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

