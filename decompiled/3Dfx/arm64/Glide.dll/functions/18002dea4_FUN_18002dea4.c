/*
 * FUN_18002dea4 at 18002dea4
 * undefined __cdecl FUN_18002dea4(longlong param_1)
 * Address ranges: 18002dea4-18002df87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002dea4(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_1800292e8(param_1 + 0x34e8);
  lVar4 = *(longlong *)(param_1 + 0x31c0);
  FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1800436a0(lVar4 + 0x12c0,8);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar4 + 0x14c0));
      puVar1[1] = 8;
      puVar1[2] = param_1;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x1fU & 0xfffffffffffffff8);
      *puVar3 = 0;
      *puVar1 = FUN_18002df88;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_18002df70;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1;
  FUN_18002df88(plVar2);
LAB_18002df70:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

