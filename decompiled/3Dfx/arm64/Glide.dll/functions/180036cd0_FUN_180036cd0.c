/*
 * FUN_180036cd0 at 180036cd0
 * longlong * __cdecl FUN_180036cd0(longlong * param_1, undefined8 param_2, undefined8 param_3, undefined * * * * param_4)
 * Address ranges: 180036cd0-180036da3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_180036cd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined ****param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong *extraout_x0;
  
  plVar2 = param_1;
  if (*(int *)(param_1[0x28] + 0x2984) == 0) {
    FUN_180038ea8(param_1[0x28] + 0x3ae0,0,0);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x98))(param_1,0);
  }
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (**(char **)(param_1[0x28] + 0x31a8) != '\0'))
  {
    FUN_180038ea8(param_1[0x28] + 0x3ae0,0,0);
    uVar1 = FUN_180036e48((longlong)param_1,1,0,param_4);
    plVar2 = (longlong *)(ulonglong)uVar1;
    if (*(char *)(*(longlong *)(param_1[0x28] + 0x31a8) + 3) != '\0') {
      DebugBreak();
      plVar2 = extraout_x0;
    }
  }
  if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
    FUN_180038ea8(param_1[0x28] + 0x3ae0,0,0);
    uVar1 = FUN_180036e48((longlong)param_1,2,0,param_4);
    plVar2 = (longlong *)(ulonglong)uVar1;
  }
  return plVar2;
}

