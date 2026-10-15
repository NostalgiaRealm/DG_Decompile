/*
 * FUN_180118f38 at 180118f38
 * undefined FUN_180118f38(void)
 * Address ranges: 180118f38-180118f83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180118f38(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  longlong lVar1;
  
  *param_6 = 0;
  if ((param_3 == 0x20) && (lVar1 = thunk_FUN_180223f68(param_2,0xfffffff4), lVar1 != 0)) {
    *(longlong *)(param_1 + -0x20) = lVar1;
    *param_6 = 1;
  }
  return 1;
}

