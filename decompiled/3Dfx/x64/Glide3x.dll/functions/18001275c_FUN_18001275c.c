/*
 * FUN_18001275c at 18001275c
 * undefined __fastcall FUN_18001275c(longlong param_1, longlong param_2, longlong param_3, char param_4, char param_5)
 * Address ranges: 18001275c-1800127dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001275c(longlong param_1,longlong param_2,longlong param_3,char param_4,char param_5)

{
  *(longlong *)(param_1 + 0x260) = param_2;
  *(longlong *)(param_1 + 0x250) = param_2;
  *(longlong *)(param_1 + 0x268) = param_3;
  if (param_4 == '\0') {
    *(ulonglong *)(param_1 + 0x260) =
         (ulonglong)(0x4000 - *(int *)(param_1 + 0x234)) * 0x50 + param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x234) = 0x4000;
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  *(longlong *)(param_1 + 0x240) = param_3;
  if (param_5 == '\0') {
    param_3 = param_3 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x238)) * 4;
    *(longlong *)(param_1 + 0x268) = param_3;
  }
  else {
    *(undefined4 *)(param_1 + 0x238) = 0x4000;
  }
  *(longlong *)(param_1 + 0x248) = param_3;
  return;
}

