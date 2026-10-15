/*
 * FUN_18000da18 at 18000da18
 * undefined FUN_18000da18(void)
 * Address ranges: 18000da18-18000da6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18000da18(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  longlong lVar1;
  
  *param_6 = 0;
  if ((param_3 == 0x20) &&
     (lVar1 = (*__imp_USER32_dll_GetClassLongPtrA)(param_2,0xfffffff4), lVar1 != 0)) {
    *(longlong *)(param_1 + -0x20) = lVar1;
    *param_6 = 1;
  }
  return 1;
}

