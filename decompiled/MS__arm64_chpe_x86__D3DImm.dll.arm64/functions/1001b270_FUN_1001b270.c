/*
 * FUN_1001b270 at 1001b270
 * undefined FUN_1001b270(void)
 * Address ranges: 1001b270-1001b2af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b270(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_1006e1e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10),iVar1);
    *(int *)(param_1 + 0xc) = 0;
  }
  return;
}

