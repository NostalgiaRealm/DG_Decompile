/*
 * FUN_1006fc20 at 1006fc20
 * undefined FUN_1006fc20(void)
 * Address ranges: 1006fc20-1006fc8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006fc20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  param_1 = param_1 + param_2 * 0x16c0;
  piVar1 = (int *)(param_1 + 0x6c8);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_1005bc90(iVar2);
    FUN_1007dd10(iVar2,0x78);
  }
  *piVar1 = 0;
  piVar1 = (int *)(param_1 + 0x6cc);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_1005bc90(iVar2);
    FUN_1007dd10(iVar2,0x78);
  }
  *piVar1 = 0;
  return;
}

