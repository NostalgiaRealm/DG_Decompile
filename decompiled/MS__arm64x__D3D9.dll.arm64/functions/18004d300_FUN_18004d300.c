/*
 * FUN_18004d300 at 18004d300
 * undefined FUN_18004d300(void)
 * Address ranges: 18004d300-18004d3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d300(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x10);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x14c0);
      puVar2[1] = 0x10;
      puVar2[2] = param_1;
      puVar4 = (undefined8 *)((longlong)puVar2 + 0x23U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar2 + 3) = param_2;
      *puVar4 = 0;
      *puVar2 = FUN_18004d3f8;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_18004d3dc;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  FUN_18004d3f8();
LAB_18004d3dc:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return;
}

