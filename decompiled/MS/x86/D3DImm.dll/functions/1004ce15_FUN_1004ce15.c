/*
 * FUN_1004ce15 at 1004ce15
 * int __stdcall FUN_1004ce15(int * param_1, byte * param_2, int * param_3, int * param_4, int param_5)
 * Address ranges: 1004ce15-1004ce56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004ce15(int *param_1,byte *param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = -0x7ff8ffa9;
  if (param_5 == 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1[1] + 0x90) + 4))(param_3);
    iVar1 = FUN_1004a237((byte *)&DAT_1005d1a0,param_2,param_1,piVar2,param_3,param_4,(uint *)0x0);
  }
  return iVar1;
}

