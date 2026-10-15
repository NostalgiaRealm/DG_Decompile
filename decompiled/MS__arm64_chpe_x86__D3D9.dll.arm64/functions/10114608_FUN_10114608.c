/*
 * FUN_10114608 at 10114608
 * undefined FUN_10114608(void)
 * Address ranges: 10114608-10114657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_10114608(int param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x910) == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x908) + 1;
    *(longlong *)(param_1 + 0x908) = lVar1;
    FUN_10114450(param_1,lVar1);
  }
  return lVar1;
}

