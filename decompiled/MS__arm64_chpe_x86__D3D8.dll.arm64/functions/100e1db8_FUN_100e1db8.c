/*
 * FUN_100e1db8 at 100e1db8
 * undefined FUN_100e1db8(void)
 * Address ranges: 100e1db8-100e1e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_100e1db8(int param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x910) == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x908) + 1;
    *(longlong *)(param_1 + 0x908) = lVar1;
    FUN_100e1c00(param_1,lVar1);
  }
  return lVar1;
}

