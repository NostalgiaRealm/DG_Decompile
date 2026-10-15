/*
 * FUN_1800eec88 at 1800eec88
 * undefined FUN_1800eec88(void)
 * Address ranges: 1800eec88-1800eedaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800eec88(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  local_1c = 0;
  local_20 = (undefined4)param_1[6];
  local_14 = 0;
  plVar2 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
  iVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_20,&DAT_18023bef0,param_1 + 2);
  if (-1 < iVar1) {
    (**(code **)(*(longlong *)param_1[2] + 8))();
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    (**(code **)(*(longlong *)param_1[2] + 0x30))((longlong *)param_1[2],param_1[7]);
    plVar2 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
    iVar1 = (**(code **)(*plVar2 + 0x120))(plVar2,0,0,&DAT_18023bee0,param_1 + 3);
    if (-1 < iVar1) {
      lVar3 = (*__imp_KERNEL32_dll_CreateEventW)(0,0,0,0);
      param_1[4] = lVar3;
      if (lVar3 != 0) {
        return 1;
      }
      (**(code **)(*(longlong *)param_1[3] + 0x10))();
    }
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  return 0;
}

