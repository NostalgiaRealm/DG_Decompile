/*
 * FUN_180023c2c at 180023c2c
 * undefined8 __fastcall FUN_180023c2c(longlong param_1, undefined8 * param_2)
 * Address ranges: 180023c2c-180023cbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180023c2c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 extraout_RAX;
  LPCRITICAL_SECTION lpCriticalSection;
  tagRECT local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3180) + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3180) + 8) + 0x2978);
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  local_28 = 0;
  uStack_20 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x620);
  local_18 = 0;
  uStack_10 = 0;
  EnterCriticalSection(lpCriticalSection);
  FUN_18004f448(lpCriticalSection,lVar1,&local_38,(int *)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x620));
  param_2[4] = local_18;
  param_2[5] = uStack_10;
  param_2[2] = local_28;
  param_2[3] = uStack_20;
  *param_2 = local_38._0_8_;
  param_2[1] = local_38._8_8_;
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}

