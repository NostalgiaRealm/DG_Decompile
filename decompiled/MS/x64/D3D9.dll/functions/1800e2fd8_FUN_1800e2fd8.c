/*
 * FUN_1800e2fd8 at 1800e2fd8
 * undefined __fastcall FUN_1800e2fd8(longlong param_1, undefined8 param_2)
 * Address ranges: 1800e2fd8-1800e306f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2fd8(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  undefined4 local_10;
  
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  uVar1 = *(uint *)(param_1 + 0xb50);
  local_18 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb40) + 0x10) + 0x58))();
  local_20 = (undefined4)param_2;
  local_10 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar2 = (ulonglong)uVar1 * 8;
  local_res8 = 2;
  local_resc = 2;
  local_28 = local_18 + uVar2;
  local_18 = local_18 + (uVar2 | 4);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x210))
            (*(longlong **)(param_1 + 0x688),2,&local_28,&local_res8);
  return;
}

