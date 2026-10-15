/*
 * FUN_1004e21c at 1004e21c
 * undefined4 __stdcall FUN_1004e21c(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1004e21c-1004e255
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004e21c(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  uVar1 = 0x80070057;
  if ((param_3 != (undefined4 *)0x0) && (uVar1 = 0x88760082, iVar2 != 0)) {
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xd0);
    uVar1 = 0;
  }
  return uVar1;
}

