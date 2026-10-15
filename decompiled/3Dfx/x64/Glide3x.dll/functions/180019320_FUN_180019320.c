/*
 * FUN_180019320 at 180019320
 * undefined __fastcall FUN_180019320(longlong * param_1)
 * Address ranges: 180019320-1800193ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019320(longlong *param_1)

{
  if (*(int *)(param_1[0x28] + 0x29fc) == 0) {
    FUN_180021ac4(param_1[0x28] + 0x42a0,0,0);
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (**(char **)(param_1[0x28] + 0x3328) != '\0'))
  {
    FUN_180021ac4(param_1[0x28] + 0x42a0,0,0);
    FUN_1800193ec((longlong)param_1,1,0);
    if (*(char *)(*(longlong *)(param_1[0x28] + 0x3328) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
    FUN_180021ac4(param_1[0x28] + 0x42a0,0,0);
    FUN_1800193ec((longlong)param_1,2,0);
  }
  return;
}

