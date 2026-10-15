/*
 * FUN_1009229f at 1009229f
 * int __stdcall FUN_1009229f(int param_1)
 * Address ranges: 1009229f-100922db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009229f(int param_1)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = 0;
  uVar1 = FUN_100910a8((void *)(param_1 + 4),&local_8);
  if ((char)uVar1 != '\0') {
    FUN_100920cc((int *)(param_1 + -0x66b4));
    FUN_1009202d((undefined4 *)(param_1 + -0x66b4));
  }
  return local_8;
}

