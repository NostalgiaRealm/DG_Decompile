/*
 * FUN_180026744 at 180026744
 * undefined __fastcall FUN_180026744(longlong * param_1, undefined8 param_2, undefined8 param_3, uint * * param_4)
 * Address ranges: 180026744-18002680e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026744(longlong *param_1,undefined8 param_2,undefined8 param_3,uint **param_4)

{
  if (*(int *)(param_1[0x28] + 0x29fc) == 0) {
    FUN_1800276a4(param_1[0x28] + 0x4260,0,0,param_4);
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (**(char **)(param_1[0x28] + 0x3328) != '\0'))
  {
    FUN_1800276a4(param_1[0x28] + 0x4260,0,0,param_4);
    FUN_180026810((longlong)param_1,1,0,param_4);
    if (*(char *)(*(longlong *)(param_1[0x28] + 0x3328) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
    FUN_1800276a4(param_1[0x28] + 0x4260,0,0,param_4);
    FUN_180026810((longlong)param_1,2,0,param_4);
  }
  return;
}

