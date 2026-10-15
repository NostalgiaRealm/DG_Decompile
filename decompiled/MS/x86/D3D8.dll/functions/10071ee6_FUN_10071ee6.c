/*
 * FUN_10071ee6 at 10071ee6
 * undefined __fastcall FUN_10071ee6(int param_1)
 * Address ranges: 10071ee6-10071f15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10071ee6(int param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_10096631(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0xe0),0);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  FUN_1006bcc0((void *)(param_1 + 0x48),1,1);
  return;
}

