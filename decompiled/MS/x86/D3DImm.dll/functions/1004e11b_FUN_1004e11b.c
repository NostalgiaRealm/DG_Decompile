/*
 * FUN_1004e11b at 1004e11b
 * undefined4 __stdcall FUN_1004e11b(int param_1, int * param_2)
 * Address ranges: 1004e11b-1004e146
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004e11b(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x30)) {
    uVar1 = 0;
    piVar3 = (int *)(*(int *)(param_1 + 4) + 0x5c);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *param_2;
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 1;
    }
  }
  return uVar1;
}

