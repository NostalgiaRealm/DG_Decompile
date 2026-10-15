/*
 * FUN_18019e620 at 18019e620
 * undefined FUN_18019e620(void)
 * Address ranges: 18019e620-18019e687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18019e620(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    FUN_180199c00(param_1,0);
    lVar1 = param_1 + 0x60;
  }
  else {
    lVar1 = param_1 + 0x180;
    if ((*(longlong *)(param_1 + 0x198) == 0) || (*(longlong *)(param_1 + 0x1d8) == 0)) {
      FUN_18019c270(param_1);
    }
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar1 = 0;
    }
  }
  return lVar1;
}

