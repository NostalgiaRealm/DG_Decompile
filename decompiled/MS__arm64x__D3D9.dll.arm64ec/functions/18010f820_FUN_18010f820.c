/*
 * FUN_18010f820 at 18010f820
 * undefined FUN_18010f820(void)
 * Address ranges: 18010f820-18010f8f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18010f820(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong extraout_x12;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar1 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  local_38 = uVar1;
  FUN_18010f138(param_1,uVar1 & 0xffffffff);
  uVar2 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  local_40 = uVar2;
  FUN_18010f138(param_1,uVar2 & 0xffffffff);
  FUN_18010f688(param_1,param_2,&local_38,&local_40,param_4);
  uVar3 = FUN_18010f108(param_1,uVar2 & 0xffffffff);
  FUN_18010f108(uVar3,uVar1 & 0xffffffff);
  return extraout_x12 & 0xffffffff;
}

