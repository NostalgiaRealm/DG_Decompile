/*
 * FUN_180098370 at 180098370
 * undefined FUN_180098370(void)
 * Address ranges: 180098370-1800983ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180098370(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x24d) == '\0') || (*(char *)(param_1 + 0x24e) == '\0')) {
    FUN_180094100(param_1,0);
    lVar1 = param_1 + 0x60;
  }
  else {
    lVar1 = param_1 + 0x1a4;
    if ((*(longlong *)(param_1 + 0x1b8) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) {
      if ((param_2 & 1) != 0) {
        FUN_180101df0(*(longlong *)(param_1 + 0x58) + 0x12c0);
      }
      FUN_1800961f0(param_1);
    }
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      lVar1 = 0;
    }
  }
  return lVar1;
}

