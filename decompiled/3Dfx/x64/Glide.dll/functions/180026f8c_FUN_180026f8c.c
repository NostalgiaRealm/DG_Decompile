/*
 * FUN_180026f8c at 180026f8c
 * undefined __fastcall FUN_180026f8c(longlong * param_1)
 * Address ranges: 180026f8c-180027056
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026f8c(longlong *param_1)

{
  if (*(int *)(param_1[0x28] + 0x2984) == 0) {
    FUN_18002f5d0(param_1[0x28] + 0x3b60,0,0);
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (**(char **)(param_1[0x28] + 0x31a8) != '\0'))
  {
    FUN_18002f5d0(param_1[0x28] + 0x3b60,0,0);
    FUN_180027058((longlong)param_1,1,0);
    if (*(char *)(*(longlong *)(param_1[0x28] + 0x31a8) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
    FUN_18002f5d0(param_1[0x28] + 0x3b60,0,0);
    FUN_180027058((longlong)param_1,2,0);
  }
  return;
}

