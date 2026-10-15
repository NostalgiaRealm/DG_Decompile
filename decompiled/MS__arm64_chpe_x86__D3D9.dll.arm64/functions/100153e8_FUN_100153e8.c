/*
 * FUN_100153e8 at 100153e8
 * undefined FUN_100153e8(void)
 * Address ranges: 100153e8-100154e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_100153e8(undefined4 param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong extraout_x12;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar1 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                       *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  local_38 = uVar1;
  FUN_10014c78(param_1,uVar1 & 0xffffffff);
  uVar2 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                       *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  local_40 = uVar2;
  FUN_10014c78(param_1,uVar2 & 0xffffffff);
  FUN_10015238(param_1,param_2,&local_38,&local_40,param_4);
  FUN_10014c48(param_1,uVar2 & 0xffffffff);
  FUN_10014c48(param_1,uVar1 & 0xffffffff);
  return extraout_x12 & 0xffffffff;
}

