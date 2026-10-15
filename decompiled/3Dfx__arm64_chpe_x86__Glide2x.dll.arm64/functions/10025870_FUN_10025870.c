/*
 * FUN_10025870 at 10025870
 * undefined FUN_10025870(void)
 * Address ranges: 10025870-10025923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025870(int param_1)

{
  FUN_100254d8(param_1);
  FUN_100240b8(param_1,1);
  *(undefined4 *)(param_1 + 0x2b8c) = *(undefined4 *)(param_1 + 0x2b5c);
  *(undefined4 *)(param_1 + 0x2b88) = *(undefined4 *)(param_1 + 0x2b58);
  *(undefined4 *)(param_1 + 0x2b90) = *(undefined4 *)(param_1 + 0x2b60);
  *(undefined4 *)(param_1 + 0x2bb0) = *(undefined4 *)(param_1 + 0x2b80);
  FUN_10023fd0(param_1);
  (*(code *)PTR_FUN_1009d090)(*(int *)(param_1 + 0x3180) + 0x4a0);
  return;
}

