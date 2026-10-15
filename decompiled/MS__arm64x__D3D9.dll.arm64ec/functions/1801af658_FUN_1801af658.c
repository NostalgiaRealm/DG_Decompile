/*
 * FUN_1801af658 at 1801af658
 * undefined FUN_1801af658(void)
 * Address ranges: 1801af658-1801af6d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801af658(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x24d) == '\0') || (*(char *)(param_1 + 0x24e) == '\0')) {
    FUN_1801ab078(param_1,0);
    lVar1 = param_1 + 0x60;
  }
  else {
    lVar1 = param_1 + 0x1a4;
    if ((*(longlong *)(param_1 + 0x1b8) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) {
      if ((param_2 & 1) != 0) {
        FUN_180221ec0(*(longlong *)(param_1 + 0x58) + 0x12c0);
      }
      FUN_1801ad4b8(param_1);
    }
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      lVar1 = 0;
    }
  }
  return lVar1;
}

