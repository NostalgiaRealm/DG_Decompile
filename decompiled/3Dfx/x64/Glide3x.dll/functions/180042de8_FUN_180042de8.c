/*
 * FUN_180042de8 at 180042de8
 * undefined8 __fastcall FUN_180042de8(longlong * param_1)
 * Address ranges: 180042de8-180042edc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180042de8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  HANDLE pvVar4;
  ulonglong uVar5;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  
  local_18 = (undefined4)param_1[6];
  local_14 = 0;
  plVar1 = param_1 + 2;
  local_c = 0;
  plVar2 = *(longlong **)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + *param_1);
  iVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_18,&DAT_180066068,plVar1);
  uVar5 = 0;
  if (-1 < iVar3) {
    (**(code **)(*(longlong *)*plVar1 + 8))();
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    (**(code **)(*(longlong *)*plVar1 + 0x30))((longlong *)*plVar1,param_1[7]);
    plVar2 = *(longlong **)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + *param_1);
    iVar3 = (**(code **)(*plVar2 + 0x120))(plVar2,0,0,&DAT_180066058,param_1 + 3);
    if (-1 < iVar3) {
      pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      param_1[4] = (longlong)pvVar4;
      if (pvVar4 != (HANDLE)0x0) {
        return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
      }
      (**(code **)(*(longlong *)param_1[3] + 0x10))();
    }
    uVar5 = (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
  }
  return uVar5 & 0xffffffffffffff00;
}

