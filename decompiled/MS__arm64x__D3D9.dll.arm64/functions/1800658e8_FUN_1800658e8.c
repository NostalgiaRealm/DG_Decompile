/*
 * FUN_1800658e8 at 1800658e8
 * undefined FUN_1800658e8(void)
 * Address ranges: 1800658e8-180065973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800658e8(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  param_4 = param_4 & 0xffffffff;
  lVar1 = param_2 + param_4 * 4;
  if (*(int *)(lVar1 + 0x298) == 0) {
    uVar2 = FUN_1800f42d0(param_2,4,1);
    *(undefined4 *)(lVar1 + 0x298) = uVar2;
    FUN_1800f5ea8(0xe4,*(undefined1 *)(*(longlong *)(param_2 + 0x100) + (param_4 & 0xffffffff)));
    FUN_1800f5730(param_2,param_3,0x2036);
  }
  return *(undefined4 *)(lVar1 + 0x298);
}

