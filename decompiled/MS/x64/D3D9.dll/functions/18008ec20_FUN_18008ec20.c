/*
 * FUN_18008ec20 at 18008ec20
 * undefined __fastcall FUN_18008ec20(longlong param_1, int param_2, int param_3)
 * Address ranges: 18008ec20-18008ec6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008ec20(longlong param_1,int param_2,int param_3)

{
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    FUN_18008e9f0(param_1,*(longlong **)(param_1 + 0xb8),*(longlong **)(param_1 + 0x78),param_2,
                  param_3,(RECT *)(*(longlong *)(param_1 + 0x90) +
                                  ((ulonglong)(uint)(param_3 * *(int *)(param_1 + 0x3c) + param_2) *
                                   5 + 3) * 8));
  }
  return;
}

