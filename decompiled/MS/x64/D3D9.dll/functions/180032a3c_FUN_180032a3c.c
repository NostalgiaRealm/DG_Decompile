/*
 * FUN_180032a3c at 180032a3c
 * bool __fastcall FUN_180032a3c(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180032a3c-180032a76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180032a3c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))
                    (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
                     *(undefined4 *)(param_1 + 0x98),0,1,param_2,param_3);
  return iVar1 == 0;
}

