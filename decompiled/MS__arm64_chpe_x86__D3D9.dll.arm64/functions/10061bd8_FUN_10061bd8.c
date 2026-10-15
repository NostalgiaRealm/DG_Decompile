/*
 * FUN_10061bd8 at 10061bd8
 * undefined FUN_10061bd8(void)
 * Address ranges: 10061bd8-10061c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061bd8(int *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined8 *)(*param_1 + param_2 * 0x158) = param_3;
  FUN_101325a0(*param_1 + param_2 * 0x158 + 8,param_4,0x148);
  iVar1 = FUN_101321c0(0x148);
  if (iVar1 != 0) {
    FUN_101325a0(iVar1,param_4,0x148);
  }
  *(int *)(*param_1 + param_2 * 0x158 + 0x150) = iVar1;
  return;
}

