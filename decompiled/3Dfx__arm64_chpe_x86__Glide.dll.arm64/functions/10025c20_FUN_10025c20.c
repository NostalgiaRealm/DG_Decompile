/*
 * FUN_10025c20 at 10025c20
 * undefined FUN_10025c20(void)
 * Address ranges: 10025c20-10025ceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025c20(int param_1)

{
  FUN_10025958(param_1);
  FUN_10024538(param_1,1);
  *(undefined4 *)(param_1 + 0x2b94) = *(undefined4 *)(param_1 + 0x2b64);
  *(undefined4 *)(param_1 + 0x2b98) = *(undefined4 *)(param_1 + 0x2b68);
  *(undefined8 *)(param_1 + 0x2ba0) = *(undefined8 *)(param_1 + 0x2b70);
  *(undefined4 *)(param_1 + 0x2ba8) = *(undefined4 *)(param_1 + 0x2b78);
  *(undefined4 *)(param_1 + 0x2bac) = *(undefined4 *)(param_1 + 0x2b7c);
  FUN_10024450(param_1);
  (*(code *)PTR_FUN_1009d090)(*(int *)(param_1 + 0x3180) + 0x4a0);
  return;
}

