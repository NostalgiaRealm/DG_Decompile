/*
 * FUN_180084eb0 at 180084eb0
 * undefined FUN_180084eb0(void)
 * Address ranges: 180084eb0-180084f63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180084eb0(longlong param_1,ulonglong param_2,int param_3)

{
  longlong *plVar1;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_1800e5470(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
  (**(code **)(*plVar1 + 0x78))
            (plVar1,*(undefined8 *)(param_1 + -0x28),
             (int)param_2 + *(int *)(param_1 + -0xa4) * param_3);
  local_30 = 0;
  local_28 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),param_2 & 0xffffffff);
  local_24 = FUN_1800a2b98(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8));
  (**(code **)(*(longlong *)(param_1 + -0xe0) + 0x10))
            (param_1 + -0xe0,(int)param_2 + *(int *)(param_1 + -0xa4) * param_3,&local_30);
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + -0x90) + 0x620);
  return 0;
}

