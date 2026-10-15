/*
 * FUN_1001f1f0 at 1001f1f0
 * undefined FUN_1001f1f0(void)
 * Address ranges: 1001f1f0-1001f2ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f1f0(int param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  FUN_10024a08(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0x1d70),
               *(undefined4 *)(param_1 + 0x1d6c),*(undefined4 *)(param_1 + 0x5c),param_5,param_6,
               param_7);
  *(byte *)(param_1 + 0x1d3f) =
       (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0x21c8) ^ 0xffffffff)) != 0 |
       *(byte *)(param_1 + 0x1d3f);
  *(uint *)(param_1 + 0x21c8) = *(uint *)(param_3 + 0x10);
  *(bool *)(param_1 + 0x21cc) = param_7 != 0;
  return;
}

