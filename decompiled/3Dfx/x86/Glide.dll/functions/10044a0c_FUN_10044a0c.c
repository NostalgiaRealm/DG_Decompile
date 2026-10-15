/*
 * FUN_10044a0c at 10044a0c
 * undefined8 * __thiscall FUN_10044a0c(void * this, undefined8 * param_1, int param_2, int param_3, undefined4 param_4, uint param_5, uint param_6)
 * Address ranges: 10044a0c-10044b59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * __thiscall
FUN_10044a0c(void *this,undefined8 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
            uint param_6)

{
  int *piVar1;
  HANDLE pvVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int nPriority;
  undefined1 local_80 [8];
  uint local_78;
  uint local_74;
  undefined1 local_44 [8];
  uint local_3c;
  uint local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  LPCRITICAL_SECTION local_c;
  int *local_8;
  
  local_c = (LPCRITICAL_SECTION)((int)this + 0x4a0);
  EnterCriticalSection(local_c);
  local_8 = (int *)0x0;
  if (param_2 == 0) {
    piVar1 = *(int **)(param_3 * 0x28 + 0x18 + (int)this);
    iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,0,&local_8);
    if (-1 < iVar3) {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x1c;
      local_14 = 1;
      local_10 = 0;
      iVar3 = (**(code **)(*local_8 + 0x24))(local_8,&local_28,local_44,0);
      if (-1 < iVar3) {
        param_5 = local_3c;
        param_6 = local_38;
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_2 + 4) + 0x30))(*(int **)(param_2 + 4),local_80);
    param_5 = local_78;
    param_6 = local_74;
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
                   param_6,0);
  uVar5 = __alldiv((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),param_5,0);
  *param_1 = uVar5;
  LeaveCriticalSection(local_c);
  return param_1;
}

