/*
 * FUN_10015912 at 10015912
 * undefined __fastcall FUN_10015912(int * param_1)
 * Address ranges: 10015912-1001599c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10015912(int *param_1)

{
  if (*(int *)(param_1[0x4e] + 0x2b1c) == 0) {
    FUN_1001cb87(param_1[0x4e]);
    (**(code **)(*param_1 + 0x4c))(0);
  }
  if (((char)param_1[0x49] != '\0') || (**(char **)(param_1[0x4e] + 0x3670) != '\0')) {
    FUN_1001cb87(param_1[0x4e]);
    FUN_1001599d(param_1,1,0);
    if (*(char *)(*(int *)(param_1[0x4e] + 0x3670) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((int)param_1 + 0x125) != '\0') {
    FUN_1001cb87(param_1[0x4e]);
    FUN_1001599d(param_1,2,0);
  }
  return;
}

