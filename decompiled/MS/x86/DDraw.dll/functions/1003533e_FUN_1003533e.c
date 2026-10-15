/*
 * FUN_1003533e at 1003533e
 * undefined __stdcall FUN_1003533e(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1003533e-10035366
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003533e(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
  }
  FUN_100289d9(*(void **)(param_1 + 4),&DAT_10062400,piVar1,param_3);
  return;
}

