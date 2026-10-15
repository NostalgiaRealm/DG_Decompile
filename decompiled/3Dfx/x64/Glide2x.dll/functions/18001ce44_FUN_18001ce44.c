/*
 * FUN_18001ce44 at 18001ce44
 * undefined __fastcall FUN_18001ce44(longlong param_1)
 * Address ranges: 18001ce44-18001cf17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ce44(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = *(undefined8 *)(param_1 + 0x31c8);
  local_30 = *(undefined8 *)(param_1 + 0x31d0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
  (**(code **)(*plVar1 + 0x38))(plVar1,0,2,&local_38);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,2,&local_38);
  local_28 = *(undefined8 *)(param_1 + 0x31f0);
  local_20 = *(undefined8 *)(param_1 + 0x31f8);
  local_18 = *(undefined8 *)(param_1 + 0x3200);
  FUN_18004d140(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),8,3,
                (longlong)&local_28);
  FUN_18004d140(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),0xc,1,
                param_1 + 0x3210);
  return;
}

