/*
 * FUN_100151a0 at 100151a0
 * undefined FUN_100151a0(void)
 * Address ranges: 100151a0-10015253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100151a0(int param_1)

{
  FUN_10014e08(param_1);
  FUN_100148c8(param_1,1);
  *(undefined4 *)(param_1 + 0x2d74) = *(undefined4 *)(param_1 + 0x2d44);
  *(undefined4 *)(param_1 + 0x2d70) = *(undefined4 *)(param_1 + 0x2d40);
  *(undefined4 *)(param_1 + 0x2d78) = *(undefined4 *)(param_1 + 0x2d48);
  *(undefined4 *)(param_1 + 0x2d98) = *(undefined4 *)(param_1 + 0x2d68);
  FUN_100147e0(param_1);
  (*(code *)PTR_FUN_100a8090)(*(int *)(param_1 + 0x3680) + 0x4a0);
  return;
}

