/*
 * FUN_1004a8fb at 1004a8fb
 * int __stdcall FUN_1004a8fb(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1004a8fb-1004a932
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004a8fb(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_3;
  iVar2 = -0x7ff8ffa9;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    param_3 = (undefined4 *)0x0;
    iVar2 = FUN_1004ac6a((void *)(param_1 + 4),param_2,puVar1,(int *)&param_3);
  }
  return iVar2;
}

