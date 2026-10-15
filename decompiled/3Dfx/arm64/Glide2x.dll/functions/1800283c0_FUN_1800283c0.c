/*
 * FUN_1800283c0 at 1800283c0
 * longlong * __cdecl FUN_1800283c0(longlong * param_1)
 * Address ranges: 1800283c0-180028493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800283c0(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *extraout_x0;
  
  plVar2 = param_1;
  if (*(int *)(param_1[0x28] + 0x2984) == 0) {
    FUN_180031360(param_1[0x28] + 0x3b60,0,0);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x98))(param_1,0);
  }
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (**(char **)(param_1[0x28] + 0x31a8) != '\0'))
  {
    FUN_180031360(param_1[0x28] + 0x3b60,0,0);
    uVar1 = FUN_1800286d8((longlong)param_1,1,0);
    plVar2 = (longlong *)(ulonglong)uVar1;
    if (*(char *)(*(longlong *)(param_1[0x28] + 0x31a8) + 3) != '\0') {
      DebugBreak();
      plVar2 = extraout_x0;
    }
  }
  if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
    FUN_180031360(param_1[0x28] + 0x3b60,0,0);
    uVar1 = FUN_1800286d8((longlong)param_1,2,0);
    plVar2 = (longlong *)(ulonglong)uVar1;
  }
  return plVar2;
}

