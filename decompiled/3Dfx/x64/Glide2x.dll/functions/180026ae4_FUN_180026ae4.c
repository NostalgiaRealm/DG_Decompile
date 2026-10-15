/*
 * FUN_180026ae4 at 180026ae4
 * undefined __fastcall FUN_180026ae4(longlong * param_1)
 * Address ranges: 180026ae4-180026bae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026ae4(longlong *param_1)

{
  if (*(int *)(param_1[0x28] + 0x2984) == 0) {
    FUN_18002f128(param_1[0x28] + 0x3b60,0,0);
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (**(char **)(param_1[0x28] + 0x31a8) != '\0'))
  {
    FUN_18002f128(param_1[0x28] + 0x3b60,0,0);
    FUN_180026bb0((longlong)param_1,1,0);
    if (*(char *)(*(longlong *)(param_1[0x28] + 0x31a8) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
    FUN_18002f128(param_1[0x28] + 0x3b60,0,0);
    FUN_180026bb0((longlong)param_1,2,0);
  }
  return;
}

