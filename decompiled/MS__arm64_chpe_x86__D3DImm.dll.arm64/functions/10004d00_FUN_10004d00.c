/*
 * FUN_10004d00 at 10004d00
 * undefined FUN_10004d00(void)
 * Address ranges: 10004d00-10004d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004d00(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  if ((param_2 < 0x99 && param_2 != 0) && param_3 != (undefined4 *)0x0) {
    if (*(char *)(*(int *)(param_1 + 4) + param_2 * 8) == '\0') {
      *param_3 = 0;
    }
    else {
      param_4 = 0;
      *param_3 = *(undefined4 *)(param_1 + param_2 * 4 + 0x290);
    }
  }
  return param_4;
}

