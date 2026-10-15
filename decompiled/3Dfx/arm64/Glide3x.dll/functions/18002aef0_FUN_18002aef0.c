/*
 * FUN_18002aef0 at 18002aef0
 * longlong * __cdecl FUN_18002aef0(longlong * param_1, undefined8 param_2, undefined8 param_3, undefined * * * * param_4)
 * Address ranges: 18002aef0-18002afc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_18002aef0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined ****param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong *extraout_x0;
  
  plVar2 = param_1;
  if (*(int *)(param_1[0x28] + 0x29fc) == 0) {
    FUN_18002d0f8(param_1[0x28] + 0x4260,0,0);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x98))(param_1,0);
  }
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (**(char **)(param_1[0x28] + 0x3328) != '\0'))
  {
    FUN_18002d0f8(param_1[0x28] + 0x4260,0,0);
    uVar1 = FUN_18002b068((longlong)param_1,1,0,param_4);
    plVar2 = (longlong *)(ulonglong)uVar1;
    if (*(char *)(*(longlong *)(param_1[0x28] + 0x3328) + 3) != '\0') {
      DebugBreak();
      plVar2 = extraout_x0;
    }
  }
  if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
    FUN_18002d0f8(param_1[0x28] + 0x4260,0,0);
    uVar1 = FUN_18002b068((longlong)param_1,2,0,param_4);
    plVar2 = (longlong *)(ulonglong)uVar1;
  }
  return plVar2;
}

