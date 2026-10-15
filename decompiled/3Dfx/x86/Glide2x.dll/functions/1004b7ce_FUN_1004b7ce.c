/*
 * FUN_1004b7ce at 1004b7ce
 * undefined8 __thiscall FUN_1004b7ce(void * this, int param_1)
 * Address ranges: 1004b7ce-1004b84f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __thiscall FUN_1004b7ce(void *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  
  iVar3 = param_1 * 8;
  local_c = iVar3 + 8;
  param_1 = 0;
  local_10 = iVar3;
  iVar2 = (**(code **)(**(int **)((int)this + 8) + 0x20))
                    (*(int **)((int)this + 8),0,&local_10,&param_1);
  if (iVar2 < 0) {
    uStack_14 = 0;
    local_18 = 0;
  }
  else {
    local_18 = 0;
    uStack_14 = 0;
    LOCK();
    lVar1 = *(longlong *)(iVar3 + param_1);
    if (lVar1 == 0) {
      *(longlong *)(iVar3 + param_1) = 0;
    }
    else {
      uStack_14 = (undefined4)((ulonglong)lVar1 >> 0x20);
      local_18 = (undefined4)lVar1;
    }
    UNLOCK();
    local_c = 0;
    local_10 = 0;
    (**(code **)(**(int **)((int)this + 8) + 0x24))(*(int **)((int)this + 8),0,&local_10);
  }
  return CONCAT44(uStack_14,local_18);
}

