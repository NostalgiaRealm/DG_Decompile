/*
 * FUN_18001e5f0 at 18001e5f0
 * undefined __cdecl FUN_18001e5f0(longlong param_1)
 * Address ranges: 18001e5f0-18001e69f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e5f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x31d0);
  local_40 = *(undefined8 *)(param_1 + 0x31c8);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
  (**(code **)(*plVar1 + 0x38))(plVar1,0,2,&local_40);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,2,&local_40);
  uStack_28 = *(undefined8 *)(param_1 + 0x31f8);
  local_30 = *(undefined8 *)(param_1 + 0x31f0);
  local_20 = *(undefined8 *)(param_1 + 0x3200);
  FUN_180051518(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),8,3,
                (longlong)&local_30);
  FUN_180051518(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),0xc,1,
                param_1 + 0x3210);
  return;
}

