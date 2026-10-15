/*
 * FUN_1800eb5f0 at 1800eb5f0
 * undefined FUN_1800eb5f0(void)
 * Address ranges: 1800eb5f0-1800eb697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800eb5f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5)

{
  FUN_1800f0b40(param_3,*(undefined4 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
                *(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                *(undefined8 *)(param_1 + 0xb78));
  FUN_1800e8bb8(param_1,param_2,0,1,0x400);
  FUN_1800e8038(param_1);
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x78))
            (*(longlong **)(param_1 + 0x688),param_2,param_5,*(undefined8 *)(param_4 + 8),
             *(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 0x18),
             *(undefined4 *)(param_4 + 0x20));
  FUN_1800e8088(param_1);
  return 1;
}

