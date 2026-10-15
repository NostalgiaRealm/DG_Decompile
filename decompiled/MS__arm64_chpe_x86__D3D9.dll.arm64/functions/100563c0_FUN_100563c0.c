/*
 * FUN_100563c0 at 100563c0
 * undefined FUN_100563c0(void)
 * Address ranges: 100563c0-1005645f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100563c0(int param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  FUN_1005c208(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0xf6d4),
               *(undefined4 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x5c),param_5,param_6,
               param_7);
  *(byte *)(param_1 + 0xf66f) =
       (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0xfd90) ^ 0xffffffff)) != 0 |
       *(byte *)(param_1 + 0xf66f);
  *(uint *)(param_1 + 0xfd90) = *(uint *)(param_3 + 0x10);
  *(bool *)(param_1 + 0xfd94) = param_7 != 0;
  return;
}

