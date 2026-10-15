/*
 * FUN_180014c1c at 180014c1c
 * undefined __fastcall FUN_180014c1c(longlong param_1, longlong param_2, longlong param_3, char param_4, char param_5)
 * Address ranges: 180014c1c-180014ca2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014c1c(longlong param_1,longlong param_2,longlong param_3,char param_4,char param_5)

{
  if ((param_2 != 0) &&
     (*(int *)(param_1 + 0x2c34) =
           *(int *)(param_1 + 0x2c34) +
           (int)(((ulonglong)
                  (uint)((*(int *)(param_1 + 0x2a24) - *(int *)(param_1 + 0x2a1c)) *
                        (*(int *)(param_1 + 0x2a28) - *(int *)(param_1 + 0x2a20))) *
                 (ulonglong)(uint)(*(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x28))) /
                (ulonglong)(uint)(*(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x20))),
     param_4 != '\0')) {
    FUN_18001a42c(param_2);
  }
  if (((param_3 != 0) && (param_5 != '\0')) && (*(char *)(param_3 + 0x48) != '\0')) {
    FUN_18001a42c(param_3);
  }
  return;
}

