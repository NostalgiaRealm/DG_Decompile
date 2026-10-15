/*
 * FUN_100297c0 at 100297c0
 * undefined FUN_100297c0(void)
 * Address ranges: 100297c0-1002984b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100297c0(int *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined8 *)(*param_1 + param_2 * 0x158) = param_3;
  FUN_10081ee0(*param_1 + param_2 * 0x158 + 8,param_4,0x148);
  iVar1 = FUN_10081cb0(0x148);
  if (iVar1 != 0) {
    FUN_10081ee0(iVar1,param_4,0x148);
  }
  *(int *)(*param_1 + param_2 * 0x158 + 0x150) = iVar1;
  return;
}

