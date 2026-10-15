/*
 * FUN_10051838 at 10051838
 * undefined FUN_10051838(void)
 * Address ranges: 10051838-100518c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051838(int *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined8 *)(*param_1 + param_2 * 0x158) = param_3;
  FUN_100ff660(*param_1 + param_2 * 0x158 + 8,param_4,0x148);
  iVar1 = FUN_100febf0(0x148);
  if (iVar1 != 0) {
    FUN_100ff660(iVar1,param_4,0x148);
  }
  *(int *)(*param_1 + param_2 * 0x158 + 0x150) = iVar1;
  return;
}

