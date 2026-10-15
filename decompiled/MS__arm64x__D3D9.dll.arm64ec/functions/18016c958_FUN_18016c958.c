/*
 * FUN_18016c958 at 18016c958
 * undefined FUN_18016c958(void)
 * Address ranges: 18016c958-18016c9af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016c958(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xe9c) == 2) {
      *(undefined1 *)(param_1 + 0xf688) = 1;
      goto LAB_18016c978;
    }
  }
  else {
    if (1 < param_2 - 1U) goto LAB_18016c978;
    *(undefined1 *)(param_1 + 0xf688) = 1;
  }
  *(undefined1 *)(param_1 + 0xf68c) = 1;
LAB_18016c978:
  *(int *)(param_1 + 0xe9c) = param_2;
  *(ulonglong *)(param_1 + 0xfe0) =
       *(ulonglong *)(param_1 + 0xfe0) & 0xfffeffffffffffff | (ulonglong)(param_2 == 2) << 0x30;
  return;
}

