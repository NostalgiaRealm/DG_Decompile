/*
 * FUN_10004d60 at 10004d60
 * undefined FUN_10004d60(void)
 * Address ranges: 10004d60-10004dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10004d60(int param_1,uint param_2,uint param_3,undefined4 *param_4,undefined4 param_5)

{
  if (((param_2 < 8 && param_3 != 0) && param_3 < 0x19) && param_4 != (undefined4 *)0x0) {
    if (*(char *)(*(int *)(param_1 + 8) + param_3 * 0xc) == '\0') {
      *param_4 = 0;
    }
    else {
      param_5 = 0;
      *param_4 = *(undefined4 *)(param_2 * 100 + param_3 * 4 + param_1 + 0x4f4);
    }
  }
  return param_5;
}

