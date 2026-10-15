/*
 * FUN_180021a64 at 180021a64
 * undefined __fastcall FUN_180021a64(longlong param_1, longlong param_2, longlong param_3, char param_4, char param_5)
 * Address ranges: 180021a64-180021aea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021a64(longlong param_1,longlong param_2,longlong param_3,char param_4,char param_5)

{
  if ((param_2 != 0) &&
     (*(int *)(param_1 + 0x2b9c) =
           *(int *)(param_1 + 0x2b9c) +
           (int)(((ulonglong)
                  (uint)((*(int *)(param_1 + 0x29ac) - *(int *)(param_1 + 0x29a4)) *
                        (*(int *)(param_1 + 0x29b0) - *(int *)(param_1 + 0x29a8))) *
                 (ulonglong)(uint)(*(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x28))) /
                (ulonglong)(uint)(*(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x20))),
     param_4 != '\0')) {
    FUN_1800280c0(param_2);
  }
  if (((param_3 != 0) && (param_5 != '\0')) && (*(char *)(param_3 + 0x48) != '\0')) {
    FUN_1800280c0(param_3);
  }
  return;
}

