/*
 * FUN_1800ea420 at 1800ea420
 * undefined FUN_1800ea420(void)
 * Address ranges: 1800ea420-1800ea477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x88))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  FUN_1800e8088(param_1);
  return;
}

