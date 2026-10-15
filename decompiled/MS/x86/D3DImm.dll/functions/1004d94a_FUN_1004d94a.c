/*
 * FUN_1004d94a at 1004d94a
 * undefined __stdcall FUN_1004d94a(int param_1, uint param_2, int * param_3)
 * Address ranges: 1004d94a-1004d971
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d94a(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  
  if (param_3 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_3[1] + 0x60);
  }
  FUN_100419b7(*(void **)(param_1 + 4),param_2,piVar1,param_3);
  return;
}

