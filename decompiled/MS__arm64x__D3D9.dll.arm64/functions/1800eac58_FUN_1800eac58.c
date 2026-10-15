/*
 * FUN_1800eac58 at 1800eac58
 * undefined FUN_1800eac58(void)
 * Address ranges: 1800eac58-1800eacaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eac58(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x198))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  FUN_1800e8088(param_1);
  return;
}

