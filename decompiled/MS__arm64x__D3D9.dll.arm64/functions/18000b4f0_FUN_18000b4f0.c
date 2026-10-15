/*
 * FUN_18000b4f0 at 18000b4f0
 * undefined FUN_18000b4f0(void)
 * Address ranges: 18000b4f0-18000b537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b4f0(longlong param_1)

{
  if (((*(uint *)(param_1 + 0x24) < *(uint *)(param_1 + 0x28)) && (*(longlong *)(param_1 + 8) != 0))
     && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

