/*
 * FUN_1004b64f at 1004b64f
 * undefined __stdcall FUN_1004b64f(int param_1)
 * Address ranges: 1004b64f-1004b676
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b64f(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    uVar1 = FUN_100a05ed(param_1,4,'\x01');
    *(uint *)(param_1 + 0x1fc) = uVar1;
  }
  return;
}

