/*
 * FUN_1800eb1c0 at 1800eb1c0
 * undefined FUN_1800eb1c0(void)
 * Address ranges: 1800eb1c0-1800eb227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eb1c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x220))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  return;
}

