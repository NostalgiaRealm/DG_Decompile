/*
 * FUN_18002d704 at 18002d704
 * undefined __cdecl FUN_18002d704(longlong param_1)
 * Address ranges: 18002d704-18002d7e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002d704(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x31c0);
  FUN_180042980((uint *)(lVar3 + 0x12c0));
  if (*(char *)(lVar3 + 0x14c4) == '\0') {
LAB_18002d7b8:
    **(longlong **)(lVar3 + 0x14a0) = param_1;
  }
  else {
    puVar1 = (undefined8 *)FUN_180042850(lVar3 + 0x12c0,8);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar3 + 0x12c0) = 0;
      Sleep(100);
      FUN_180042980((uint *)(lVar3 + 0x12c0));
      goto LAB_18002d7b8;
    }
    FUN_1800608b0((uint *)(lVar3 + 0x14c0));
    puVar1[1] = 8;
    puVar1[2] = param_1;
    puVar2 = (undefined8 *)((longlong)puVar1 + 0x1fU & 0xfffffffffffffff8);
    *puVar2 = 0;
    *puVar1 = ConvertAndDownLoadRLE;
    *(undefined8 **)(lVar3 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28 + 0x1350) = puVar2;
    if (*(char *)(lVar3 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar3 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar3 + 0x1340));
      goto LAB_18002d7c4;
    }
  }
  *(undefined4 *)(lVar3 + 0x12c0) = 0;
LAB_18002d7c4:
  FUN_180043140(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  return;
}

