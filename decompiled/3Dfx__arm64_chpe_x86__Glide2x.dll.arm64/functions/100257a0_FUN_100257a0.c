/*
 * FUN_100257a0 at 100257a0
 * undefined FUN_100257a0(void)
 * Address ranges: 100257a0-1002586b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100257a0(int param_1)

{
  FUN_100254d8(param_1);
  FUN_100240b8(param_1,1);
  *(undefined4 *)(param_1 + 0x2b94) = *(undefined4 *)(param_1 + 0x2b64);
  *(undefined4 *)(param_1 + 0x2b98) = *(undefined4 *)(param_1 + 0x2b68);
  *(undefined8 *)(param_1 + 0x2ba0) = *(undefined8 *)(param_1 + 0x2b70);
  *(undefined4 *)(param_1 + 0x2ba8) = *(undefined4 *)(param_1 + 0x2b78);
  *(undefined4 *)(param_1 + 0x2bac) = *(undefined4 *)(param_1 + 0x2b7c);
  FUN_10023fd0(param_1);
  (*(code *)PTR_FUN_1009d090)(*(int *)(param_1 + 0x3180) + 0x4a0);
  return;
}

