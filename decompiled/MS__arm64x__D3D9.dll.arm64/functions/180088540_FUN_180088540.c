/*
 * FUN_180088540 at 180088540
 * undefined FUN_180088540(void)
 * Address ranges: 180088540-1800885a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180088540(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    FUN_180083fc0(param_1,0);
    lVar1 = param_1 + 0x60;
  }
  else {
    lVar1 = param_1 + 0x180;
    if ((*(longlong *)(param_1 + 0x198) == 0) || (*(longlong *)(param_1 + 0x1d8) == 0)) {
      FUN_180086290(param_1);
    }
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar1 = 0;
    }
  }
  return lVar1;
}

