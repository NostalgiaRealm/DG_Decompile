/*
 * FUN_18002e7e4 at 18002e7e4
 * undefined __cdecl FUN_18002e7e4(longlong param_1, undefined1 param_2)
 * Address ranges: 18002e7e4-18002e8d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e7e4(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_180028498(param_1 + 0x34e8);
  lVar4 = *(longlong *)(param_1 + 0x31c0);
  FUN_180042980((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_180042850(lVar4 + 0x12c0,0x10);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1800608b0((uint *)(lVar4 + 0x14c0));
      puVar1[1] = 0x10;
      puVar1[2] = param_1;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x23U & 0xfffffffffffffff8);
      *(undefined1 *)(puVar1 + 3) = param_2;
      *puVar3 = 0;
      *puVar1 = FUN_18002e8d8;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_18002e8bc;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_180042980((uint *)(lVar4 + 0x12c0));
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = param_2;
  FUN_18002e8d8(plVar2);
LAB_18002e8bc:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

