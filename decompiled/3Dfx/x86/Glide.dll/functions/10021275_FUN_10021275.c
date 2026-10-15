/*
 * FUN_10021275 at 10021275
 * undefined __fastcall FUN_10021275(int * param_1)
 * Address ranges: 10021275-10021314
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10021275(int *param_1)

{
  if (*(int *)(param_1[0x4e] + 0x2964) == 0) {
    FUN_100273a6((void *)(param_1[0x4e] + 0x3950),0,0);
    (**(code **)(*param_1 + 0x4c))(0);
  }
  if (((char)param_1[0x49] != '\0') || (**(char **)(param_1[0x4e] + 0x3170) != '\0')) {
    FUN_100273a6((void *)(param_1[0x4e] + 0x3950),0,0);
    FUN_10021315(param_1,1,0);
    if (*(char *)(*(int *)(param_1[0x4e] + 0x3170) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((int)param_1 + 0x125) != '\0') {
    FUN_100273a6((void *)(param_1[0x4e] + 0x3950),0,0);
    FUN_10021315(param_1,2,0);
  }
  return;
}

