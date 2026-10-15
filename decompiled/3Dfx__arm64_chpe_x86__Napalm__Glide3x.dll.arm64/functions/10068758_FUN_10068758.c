/*
 * FUN_10068758 at 10068758
 * undefined FUN_10068758(void)
 * Address ranges: 10068758-10068793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068758(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    FUN_100685e0(param_1,iVar1,*(undefined4 *)(param_1 + 0x8e8));
    *(int *)(param_1 + 0x8ec) = 0;
  }
  return;
}

