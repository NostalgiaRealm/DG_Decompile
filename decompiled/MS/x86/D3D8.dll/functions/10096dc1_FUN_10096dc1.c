/*
 * FUN_10096dc1 at 10096dc1
 * undefined8 * __thiscall FUN_10096dc1(void * this, undefined8 * param_1, int param_2, int param_3, undefined4 param_4)
 * Address ranges: 10096dc1-10096f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * __thiscall
FUN_10096dc1(void *this,undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  HANDLE pvVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int nPriority;
  undefined1 local_88 [8];
  uint local_80;
  uint local_7c;
  undefined1 local_4c [8];
  uint local_44;
  uint local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  LPCRITICAL_SECTION local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  local_14 = (LPCRITICAL_SECTION)((int)this + 0x4a0);
  EnterCriticalSection(local_14);
  local_8 = (int *)0x0;
  local_10 = 0x3c;
  local_c = 1;
  if (param_2 == 0) {
    piVar1 = *(int **)(param_3 * 0x28 + 0x18 + (int)this);
    iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_4,&local_8);
    if (-1 < iVar3) {
      local_20 = 0x1c;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_18 = 0;
      local_1c = 1;
      iVar3 = (**(code **)(*local_8 + 0x24))(local_8,&local_30,local_4c,0);
      if (-1 < iVar3) {
        local_10 = local_44;
        local_c = local_40;
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_2 + 4) + 0x30))(*(int **)(param_2 + 4),local_88);
    local_10 = local_80;
    local_c = local_7c;
    (**(code **)(**(int **)(param_2 + 4) + 0x3c))(*(int **)(param_2 + 4),&local_8);
  }
  if (local_8 == (int *)0x0) {
    QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 1));
  }
  else {
    pvVar2 = GetCurrentThread();
    iVar3 = GetThreadPriority(pvVar2);
    nPriority = 0xf;
    pvVar2 = GetCurrentThread();
    SetThreadPriority(pvVar2,nPriority);
    (**(code **)(*local_8 + 0x28))(local_8);
    (**(code **)(*local_8 + 0x28))(local_8);
    (**(code **)(*local_8 + 0x28))();
    QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 1));
    pvVar2 = GetCurrentThread();
    SetThreadPriority(pvVar2,iVar3);
    (**(code **)(*local_8 + 8))(local_8);
  }
  QueryPerformanceFrequency((LARGE_INTEGER *)(param_1 + 2));
  lVar4 = __allmul((((LARGE_INTEGER *)(param_1 + 2))->s).LowPart,*(int *)((int)param_1 + 0x14),
                   local_c,0);
  uVar5 = __alldiv((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),local_10,0);
  *param_1 = uVar5;
  LeaveCriticalSection(local_14);
  return param_1;
}

