/*
 * FUN_100477c0 at 100477c0
 * undefined FUN_100477c0(void)
 * Address ranges: 100477c0-10047863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100477c0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100518c8(param_1,param_2,*param_3,*(undefined4 *)(param_1 + 0xd9d4),
               *(undefined4 *)(param_1 + 0xd9d0),*(undefined4 *)(param_1 + 0x5c),param_4,param_5,
               param_6);
  uVar1 = param_3[1];
  uVar2 = *(uint *)(param_1 + 0xde50);
  *(uint *)(param_1 + 0xde50) = uVar1;
  *(byte *)(param_1 + 0xd97f) = (uVar1 & (uVar2 ^ 0xffffffff)) != 0 | *(byte *)(param_1 + 0xd97f);
  *(bool *)(param_1 + 0xde54) = param_6 != 0;
  return;
}

