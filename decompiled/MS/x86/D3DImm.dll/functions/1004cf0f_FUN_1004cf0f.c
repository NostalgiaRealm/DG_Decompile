/*
 * FUN_1004cf0f at 1004cf0f
 * undefined __stdcall FUN_1004cf0f(int * param_1, byte * param_2, int * param_3, int * param_4)
 * Address ranges: 1004cf0f-1004cf44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004cf0f(int *param_1,byte *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)**(undefined4 **)(param_1[1] + 0x90))(param_3);
  FUN_1004a237((byte *)&DAT_1005d1b0,param_2,param_1,piVar1,param_3,param_4,(uint *)0x0);
  return;
}

