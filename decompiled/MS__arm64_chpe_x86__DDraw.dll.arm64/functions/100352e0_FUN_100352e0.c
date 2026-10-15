/*
 * FUN_100352e0 at 100352e0
 * undefined FUN_100352e0(void)
 * Address ranges: 100352e0-10035337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100352e0(int param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined4 *param_6)

{
  int iVar1;
  
  *param_6 = 0;
  if ((param_3 == 0x20) && (iVar1 = (*(code *)PTR_FUN_100ba1e4)(param_2,0xfffffff4), iVar1 != 0)) {
    *(int *)(param_1 + -0x10) = iVar1;
    *param_6 = 1;
  }
  return 1;
}

