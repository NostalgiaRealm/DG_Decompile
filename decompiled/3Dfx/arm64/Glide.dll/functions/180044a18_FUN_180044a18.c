/*
 * FUN_180044a18 at 180044a18
 * undefined8 __cdecl FUN_180044a18(longlong * param_1)
 * Address ranges: 180044a18-180044b3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180044a18(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  HANDLE pvVar3;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  local_1c = 0;
  local_20 = (undefined4)param_1[6];
  local_14 = 0;
  plVar2 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
  iVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_20,&DAT_180065df0,param_1 + 2);
  if (-1 < iVar1) {
    (**(code **)(*(longlong *)param_1[2] + 8))();
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    (**(code **)(*(longlong *)param_1[2] + 0x30))((longlong *)param_1[2],param_1[7]);
    plVar2 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
    iVar1 = (**(code **)(*plVar2 + 0x120))(plVar2,0,0,&DAT_180065de0,param_1 + 3);
    if (-1 < iVar1) {
      pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      param_1[4] = (longlong)pvVar3;
      if (pvVar3 != (HANDLE)0x0) {
        return 1;
      }
      (**(code **)(*(longlong *)param_1[3] + 0x10))();
    }
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  return 0;
}

