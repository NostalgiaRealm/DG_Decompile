/*
 * FUN_18000d990 at 18000d990
 * undefined FUN_18000d990(void)
 * Address ranges: 18000d990-18000da17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000d990(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 local_40 [2];
  
  (*__imp_USER32_dll_GetCursorPos)(local_40);
  lVar1 = (*__imp_USER32_dll_WindowFromPoint)(local_40[0]);
  uVar3 = 0;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(longlong *)(param_1 + -0x48) + 0x28))(param_1 + -0x48), lVar1 == lVar2)
     ) {
    *(undefined8 *)(param_1 + -0x20) = param_2;
    uVar3 = 1;
  }
  *param_3 = uVar3;
  return 0;
}

