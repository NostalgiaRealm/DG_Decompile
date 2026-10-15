/*
 * FUN_180089520 at 180089520
 * undefined FUN_180089520(void)
 * Address ranges: 180089520-1800895ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180089520(longlong param_1)

{
  longlong lVar1;
  int local_60;
  int local_5c;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((*(int *)(lVar1 + 0x20) == 1) && (*(int *)(lVar1 + 0x24) == 1)) {
    if (*(int *)(lVar1 + 0x30) == 0) {
      return 1;
    }
    if (*(int *)(lVar1 + 0x30) == 1) {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x60))(*(longlong **)(lVar1 + 8),&local_60);
      if ((*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) == local_60) &&
         (*(int *)(*(longlong *)(param_1 + 0x38) + 0x1c) == local_5c)) {
        return 1;
      }
    }
  }
  return 0;
}

