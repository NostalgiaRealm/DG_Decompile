/*
 * FUN_180034004 at 180034004
 * undefined __fastcall FUN_180034004(longlong * param_1, undefined8 param_2, undefined8 param_3, uint * * param_4)
 * Address ranges: 180034004-1800340ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034004(longlong *param_1,undefined8 param_2,undefined8 param_3,uint **param_4)

{
  if (*(int *)(param_1[0x28] + 0x2984) == 0) {
    FUN_180034f64(param_1[0x28] + 0x3ae0,0,0,param_4);
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (**(char **)(param_1[0x28] + 0x31a8) != '\0'))
  {
    FUN_180034f64(param_1[0x28] + 0x3ae0,0,0,param_4);
    FUN_1800340d0((longlong)param_1,1,0,param_4);
    if (*(char *)(*(longlong *)(param_1[0x28] + 0x31a8) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
    FUN_180034f64(param_1[0x28] + 0x3ae0,0,0,param_4);
    FUN_1800340d0((longlong)param_1,2,0,param_4);
  }
  return;
}

