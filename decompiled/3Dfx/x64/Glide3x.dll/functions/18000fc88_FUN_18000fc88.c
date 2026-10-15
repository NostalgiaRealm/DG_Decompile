/*
 * FUN_18000fc88 at 18000fc88
 * undefined __fastcall FUN_18000fc88(longlong param_1)
 * Address ranges: 18000fc88-18000fd5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000fc88(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = *(undefined8 *)(param_1 + 0x3348);
  local_30 = *(undefined8 *)(param_1 + 0x3350);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
  (**(code **)(*plVar1 + 0x38))(plVar1,0,2,&local_38);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,2,&local_38);
  local_28 = *(undefined8 *)(param_1 + 0x3370);
  local_20 = *(undefined8 *)(param_1 + 0x3378);
  local_18 = *(undefined8 *)(param_1 + 0x3380);
  FUN_18004f74c(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),8,3,
                (longlong)&local_28);
  FUN_18004f74c(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),0xc,1,
                param_1 + 0x3390);
  return;
}

