/*
 * FUN_1003e620 at 1003e620
 * undefined FUN_1003e620(void)
 * Address ranges: 1003e620-1003e653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e620(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xdacc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xdadc);
  }
  FUN_1005fd78(param_1,param_1 + 0x90,param_1 + 0xd970,param_2,iVar1);
  return;
}

