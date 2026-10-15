/*
 * FUN_1002307c at 1002307c
 * undefined __fastcall FUN_1002307c(int * param_1)
 * Address ranges: 1002307c-10023106
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002307c(int *param_1)

{
  if (*(int *)(param_1[0x4e] + 0x2b1c) == 0) {
    FUN_1001f054(param_1[0x4e]);
    (**(code **)(*param_1 + 0x4c))(0);
  }
  if (((char)param_1[0x49] != '\0') || (**(char **)(param_1[0x4e] + 0x3670) != '\0')) {
    FUN_1001f054(param_1[0x4e]);
    FUN_10023107(param_1,1,0);
    if (*(char *)(*(int *)(param_1[0x4e] + 0x3670) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((int)param_1 + 0x125) != '\0') {
    FUN_1001f054(param_1[0x4e]);
    FUN_10023107(param_1,2,0);
  }
  return;
}

