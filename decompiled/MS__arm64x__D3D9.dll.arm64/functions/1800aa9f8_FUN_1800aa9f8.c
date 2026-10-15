/*
 * FUN_1800aa9f8 at 1800aa9f8
 * undefined FUN_1800aa9f8(void)
 * Address ranges: 1800aa9f8-1800aaa77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800aa9f8(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0xc50c) == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0xc507);
  }
  else {
    uVar1 = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (*(int *)(param_1 + 0x730) != 0) {
        (*__imp_USER32_dll_IsRectEmpty)(param_1 + 0x6f68);
      }
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1b0))
                (*(longlong **)(param_1 + 0x28),param_1 + 0x6f68);
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0xc507) = uVar1;
    *(undefined1 *)(param_1 + 0xc50c) = 0;
  }
  return uVar1;
}

