/*
 * FUN_180038bb0 at 180038bb0
 * undefined FUN_180038bb0(void)
 * Address ranges: 180038bb0-180038c4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038bb0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,undefined1 param_7)

{
  uint uVar1;
  uint uVar2;
  
  FUN_180042a10(param_1,param_2,*param_3,*(undefined8 *)(param_1 + 0xf718),
                *(undefined8 *)(param_1 + 0xf710),*(undefined4 *)(param_1 + 0x7c),param_4,param_5,
                param_6,1,param_7);
  uVar1 = *(uint *)(param_3 + 1);
  uVar2 = *(uint *)(param_1 + 0x10180);
  *(uint *)(param_1 + 0x10180) = uVar1;
  *(byte *)(param_1 + 0xf68f) = (uVar1 & (uVar2 ^ 0xffffffff)) != 0 | *(byte *)(param_1 + 0xf68f);
  *(bool *)(param_1 + 0x10184) = param_6 != 0;
  return;
}

