/*
 * FUN_1004cd28 at 1004cd28
 * undefined __stdcall FUN_1004cd28(int param_1, byte * param_2, int * param_3, int * param_4)
 * Address ranges: 1004cd28-1004cd5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004cd28(int param_1,byte *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x90) + 0x10))(param_3);
  FUN_1004a237((byte *)&DAT_1005d190,param_2,(int *)0x0,piVar1,param_3,param_4,(uint *)0x0);
  return;
}

