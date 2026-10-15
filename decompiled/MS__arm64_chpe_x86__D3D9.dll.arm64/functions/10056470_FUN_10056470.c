/*
 * FUN_10056470 at 10056470
 * undefined FUN_10056470(void)
 * Address ranges: 10056470-10056513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056470(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  
  FUN_10061d38(param_1,param_2,*param_3,*(undefined4 *)(param_1 + 0xf6d4),
               *(undefined4 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x5c),param_4,param_5,
               param_6);
  uVar1 = param_3[1];
  uVar2 = *(uint *)(param_1 + 0xfd90);
  *(uint *)(param_1 + 0xfd90) = uVar1;
  *(byte *)(param_1 + 0xf66f) = (uVar1 & (uVar2 ^ 0xffffffff)) != 0 | *(byte *)(param_1 + 0xf66f);
  *(bool *)(param_1 + 0xfd94) = param_6 != 0;
  return;
}

