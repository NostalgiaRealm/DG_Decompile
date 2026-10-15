/*
 * FUN_1800eab48 at 1800eab48
 * undefined FUN_1800eab48(void)
 * Address ranges: 1800eab48-1800eabcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eab48(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x188))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1800e8088(param_1);
  return;
}

