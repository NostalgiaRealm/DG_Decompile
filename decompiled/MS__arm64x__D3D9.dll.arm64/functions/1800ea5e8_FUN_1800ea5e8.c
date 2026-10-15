/*
 * FUN_1800ea5e8 at 1800ea5e8
 * undefined FUN_1800ea5e8(void)
 * Address ranges: 1800ea5e8-1800ea66f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea5e8(undefined4 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_2);
  (**(code **)(**(longlong **)(param_2 + 0x688) + 0x178))
            (param_1,*(longlong **)(param_2 + 0x688),param_3,param_4,param_5,param_6,param_7);
  FUN_1800e8088(param_2);
  return;
}

