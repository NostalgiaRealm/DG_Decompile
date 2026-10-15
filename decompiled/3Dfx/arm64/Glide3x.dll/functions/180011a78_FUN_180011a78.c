/*
 * FUN_180011a78 at 180011a78
 * undefined __cdecl FUN_180011a78(longlong param_1)
 * Address ranges: 180011a78-180011b27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011a78(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x3350);
  local_40 = *(undefined8 *)(param_1 + 0x3348);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
  (**(code **)(*plVar1 + 0x38))(plVar1,0,2,&local_40);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,2,&local_40);
  uStack_28 = *(undefined8 *)(param_1 + 0x3378);
  local_30 = *(undefined8 *)(param_1 + 0x3370);
  local_20 = *(undefined8 *)(param_1 + 0x3380);
  FUN_180054258(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),8,3,
                (longlong)&local_30);
  FUN_180054258(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),0xc,1,
                param_1 + 0x3390);
  return;
}

