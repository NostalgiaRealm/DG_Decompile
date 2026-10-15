/*
 * FUN_18001beb8 at 18001beb8
 * longlong * __cdecl FUN_18001beb8(longlong * param_1)
 * Address ranges: 18001beb8-18001bf8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18001beb8(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *extraout_x0;
  
  plVar2 = param_1;
  if (*(int *)(param_1[0x28] + 0x29fc) == 0) {
    FUN_180025b18(param_1[0x28] + 0x42a0,0,0);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x98))(param_1,0);
  }
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (**(char **)(param_1[0x28] + 0x3328) != '\0'))
  {
    FUN_180025b18(param_1[0x28] + 0x42a0,0,0);
    uVar1 = FUN_18001c1d0((longlong)param_1,1,0);
    plVar2 = (longlong *)(ulonglong)uVar1;
    if (*(char *)(*(longlong *)(param_1[0x28] + 0x3328) + 3) != '\0') {
      DebugBreak();
      plVar2 = extraout_x0;
    }
  }
  if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
    FUN_180025b18(param_1[0x28] + 0x42a0,0,0);
    uVar1 = FUN_18001c1d0((longlong)param_1,2,0);
    plVar2 = (longlong *)(ulonglong)uVar1;
  }
  return plVar2;
}

