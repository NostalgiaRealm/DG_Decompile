/*
 * FUN_1800b0e84 at 1800b0e84
 * undefined1 __fastcall FUN_1800b0e84(longlong param_1)
 * Address ranges: 1800b0e84-1800b0ee5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800b0e84(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0xc50c) == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0xc507);
  }
  else {
    uVar1 = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (*(int *)(param_1 + 0x730) != 0) {
        IsRectEmpty((RECT *)(param_1 + 0x6f68));
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

