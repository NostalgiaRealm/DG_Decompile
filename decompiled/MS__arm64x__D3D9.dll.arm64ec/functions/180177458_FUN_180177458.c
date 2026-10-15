/*
 * FUN_180177458 at 180177458
 * undefined FUN_180177458(void)
 * Address ranges: 180177458-1801774ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180177458(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  param_4 = param_4 & 0xffffffff;
  lVar1 = param_2 + param_4 * 4;
  if (*(int *)(lVar1 + 0x298) == 0) {
    uVar2 = FUN_180213760(param_2,4,1);
    *(undefined4 *)(lVar1 + 0x298) = uVar2;
    FUN_180213268(0xe4,*(undefined1 *)(*(longlong *)(param_2 + 0x100) + (param_4 & 0xffffffff)));
    FUN_180214c88(param_2,param_3,0x2036);
  }
  return *(undefined4 *)(lVar1 + 0x298);
}

