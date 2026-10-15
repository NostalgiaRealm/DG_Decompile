/*
 * FUN_1007c768 at 1007c768
 * undefined FUN_1007c768(void)
 * Address ranges: 1007c768-1007c7a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007c768(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    FUN_1007c5f0(param_1,iVar1,*(undefined4 *)(param_1 + 0x8e8));
    *(int *)(param_1 + 0x8ec) = 0;
  }
  return;
}

