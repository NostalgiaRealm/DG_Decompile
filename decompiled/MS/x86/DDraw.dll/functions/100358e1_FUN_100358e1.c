/*
 * FUN_100358e1 at 100358e1
 * undefined __stdcall FUN_100358e1(int param_1, int * param_2)
 * Address ranges: 100358e1-10035904
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100358e1(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)param_2[1];
  }
  FUN_1002bbd9(*(void **)(param_1 + 4),param_2,piVar1,'\x01');
  return;
}

