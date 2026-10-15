/*
 * FUN_10047710 at 10047710
 * undefined FUN_10047710(void)
 * Address ranges: 10047710-100477af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047710(int param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  FUN_1004c938(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0xd9d4),
               *(undefined4 *)(param_1 + 0xd9d0),*(undefined4 *)(param_1 + 0x5c),param_5,param_6,
               param_7);
  *(byte *)(param_1 + 0xd97f) =
       (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0xde50) ^ 0xffffffff)) != 0 |
       *(byte *)(param_1 + 0xd97f);
  *(uint *)(param_1 + 0xde50) = *(uint *)(param_3 + 0x10);
  *(bool *)(param_1 + 0xde54) = param_7 != 0;
  return;
}

