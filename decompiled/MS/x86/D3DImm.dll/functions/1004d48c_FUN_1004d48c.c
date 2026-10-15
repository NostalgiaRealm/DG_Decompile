/*
 * FUN_1004d48c at 1004d48c
 * undefined __stdcall FUN_1004d48c(int param_1, int * param_2)
 * Address ranges: 1004d48c-1004d4ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d48c(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2[1];
  }
  FUN_1003fca2(*(void **)(param_1 + 4),param_2,iVar1);
  return;
}

