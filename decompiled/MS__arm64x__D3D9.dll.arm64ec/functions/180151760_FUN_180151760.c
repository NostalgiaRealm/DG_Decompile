/*
 * FUN_180151760 at 180151760
 * undefined FUN_180151760(void)
 * Address ranges: 180151760-18015179b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180151760(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (param_2 & 0xffffffff) * 0x158;
  *(undefined8 *)(*param_1 + lVar1) = param_3;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(lVar1 + *param_1 + 8,param_4,0x148);
}

