/*
 * FUN_180095bf0 at 180095bf0
 * undefined FUN_180095bf0(void)
 * Address ranges: 180095bf0-180095cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180095bf0(longlong param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + -0xa8);
  FUN_180101630(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar4 + 0x12c0,8);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar4 + 0x14c0);
      puVar2[1] = 8;
      puVar2[2] = param_1 + -0x100;
      puVar3 = (undefined8 *)((longlong)puVar2 + 0x1fU & 0xfffffffffffffff8);
      *puVar3 = 0;
      *puVar2 = FUN_180095cd8;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_180095cbc;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar4 + 0x12c0);
  }
  **(longlong **)(lVar4 + 0x14a0) = param_1 + -0x100;
  FUN_180095cd8();
LAB_180095cbc:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

