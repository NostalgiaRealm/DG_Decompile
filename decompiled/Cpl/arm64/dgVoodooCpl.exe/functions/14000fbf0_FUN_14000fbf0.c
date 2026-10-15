/*
 * FUN_14000fbf0 at 14000fbf0
 * undefined8 __cdecl FUN_14000fbf0(longlong * param_1, longlong param_2, undefined8 param_3, undefined8 param_4, uint param_5)
 * Address ranges: 14000fbf0-14000fc47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_14000fbf0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = param_5 >> 0x10;
  if (uVar1 == 1) {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
  }
  else if (uVar1 == 4) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
  }
  else {
    if ((uVar1 != 5) || (*(char *)(param_2 + 0x3c) == '\0')) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00014000fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,(short)param_5);
  return uVar2;
}

