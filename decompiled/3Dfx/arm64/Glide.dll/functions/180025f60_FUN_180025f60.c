/*
 * FUN_180025f60 at 180025f60
 * undefined8 __cdecl FUN_180025f60(longlong param_1, undefined8 * param_2)
 * Address ranges: 180025f60-180025fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180025f60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 extraout_x0;
  longlong lVar2;
  tagRECT local_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3180) + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3180) + 8) + 0x2978);
  local_50.right = 0;
  local_50.bottom = 0;
  local_50.left = 0;
  local_50.top = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  local_30 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x620));
  FUN_180052b80(extraout_x0,lVar1,&local_50,(int *)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x620));
  param_2[5] = uStack_28;
  param_2[4] = local_30;
  param_2[1] = local_50._8_8_;
  *param_2 = local_50._0_8_;
  param_2[3] = uStack_38;
  param_2[2] = uStack_40;
  return 1;
}

