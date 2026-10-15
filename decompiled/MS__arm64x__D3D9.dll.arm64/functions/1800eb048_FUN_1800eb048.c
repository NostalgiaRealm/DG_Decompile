/*
 * FUN_1800eb048 at 1800eb048
 * undefined FUN_1800eb048(void)
 * Address ranges: 1800eb048-1800eb0ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eb048(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x200))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7,param_8
             ,param_9,param_10);
  FUN_1800e8088(param_1);
  return;
}

