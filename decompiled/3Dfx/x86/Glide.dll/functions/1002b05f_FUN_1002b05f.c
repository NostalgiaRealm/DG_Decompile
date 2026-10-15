/*
 * FUN_1002b05f at 1002b05f
 * undefined __fastcall FUN_1002b05f(int * param_1)
 * Address ranges: 1002b05f-1002b0e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002b05f(int *param_1)

{
  if (*(int *)(param_1[0x4e] + 0x2964) == 0) {
    FUN_1002bbb2(param_1[0x4e]);
    (**(code **)(*param_1 + 0x4c))(0);
  }
  if (((char)param_1[0x49] != '\0') || (**(char **)(param_1[0x4e] + 0x3170) != '\0')) {
    FUN_1002bbb2(param_1[0x4e]);
    FUN_1002b0ea(param_1,1,0);
    if (*(char *)(*(int *)(param_1[0x4e] + 0x3170) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((int)param_1 + 0x125) != '\0') {
    FUN_1002bbb2(param_1[0x4e]);
    FUN_1002b0ea(param_1,2,0);
  }
  return;
}

