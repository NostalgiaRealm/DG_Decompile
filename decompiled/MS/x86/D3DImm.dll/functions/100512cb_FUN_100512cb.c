/*
 * FUN_100512cb at 100512cb
 * undefined4 __thiscall FUN_100512cb(void * this, int param_1, uint param_2)
 * Address ranges: 100512cb-1005130d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100512cb(void *this,int param_1,uint param_2)

{
  uint in_EAX;
  uint extraout_EAX;
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    if (*(uint *)(param_1 + 0x20) < param_2) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
      (**(code **)(*(int *)this + 0x14))(param_1,param_2);
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
      param_2 = extraout_EAX;
    }
    uVar1 = CONCAT31((int3)(param_2 >> 8),1);
  }
  return uVar1;
}

