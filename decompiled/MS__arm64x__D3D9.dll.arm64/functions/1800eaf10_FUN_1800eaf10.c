/*
 * FUN_1800eaf10 at 1800eaf10
 * undefined FUN_1800eaf10(void)
 * Address ranges: 1800eaf10-1800eaf9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eaf10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1e8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7,param_8
            );
  FUN_1800e8088(param_1);
  return;
}

