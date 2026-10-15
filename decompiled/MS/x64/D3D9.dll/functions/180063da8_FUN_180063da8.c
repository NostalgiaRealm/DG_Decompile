/*
 * FUN_180063da8 at 180063da8
 * undefined __fastcall FUN_180063da8(longlong param_1, int param_2)
 * Address ranges: 180063da8-180063e0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063da8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xe9c) == 2) {
      *(undefined1 *)(param_1 + 0xf688) = 1;
      goto LAB_180063dc9;
    }
  }
  else {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_180063dc9;
    *(undefined1 *)(param_1 + 0xf688) = 1;
  }
  *(undefined1 *)(param_1 + 0xf68c) = 1;
LAB_180063dc9:
  *(int *)(param_1 + 0xe9c) = param_2;
  *(ulonglong *)(param_1 + 0xfe0) = *(ulonglong *)(param_1 + 0xfe0) & 0xfffeffffffffffff;
  uVar1 = 0;
  if (param_2 == 2) {
    uVar1 = 0x1000000000000;
  }
  *(ulonglong *)(param_1 + 0xfe0) = *(ulonglong *)(param_1 + 0xfe0) | uVar1;
  return;
}

