/*
 * FUN_18009a168 at 18009a168
 * undefined FUN_18009a168(void)
 * Address ranges: 18009a168-18009a25f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009a168(longlong param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1cf10) +
          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 0x28) * 0x1ac0;
  FUN_180101630(lVar4 + 0x1bc0);
  if (*(char *)(lVar4 + 0x1dc4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar4 + 0x1bc0,8);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar4 + 0x1dc0);
      puVar2[1] = 8;
      puVar2[2] = param_1 + -0x20;
      puVar3 = (undefined8 *)((longlong)puVar2 + 0x1fU & 0xfffffffffffffff8);
      *puVar3 = 0;
      *puVar2 = FUN_18009a260;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x1dbc) * 0x28 + 0x1c50) = puVar3;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar4 + 0x1dc5) != '\0') {
        *(undefined4 *)(lVar4 + 0x1bc0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar4 + 0x1c40));
        return;
      }
      goto LAB_18009a248;
    }
    *(undefined4 *)(lVar4 + 0x1bc0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar4 + 0x1bc0);
  }
  **(longlong **)(lVar4 + 0x1da0) = param_1 + -0x20;
  FUN_18009a260();
LAB_18009a248:
  *(undefined4 *)(lVar4 + 0x1bc0) = 0;
  return;
}

