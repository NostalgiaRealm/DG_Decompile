/*
 * FUN_100137d4 at 100137d4
 * bool __thiscall FUN_100137d4(void * this, int param_1, uint param_2, uint param_3, undefined4 param_4, int param_5, uint param_6, int param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 100137d4-1001388c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_100137d4(void *this,int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
            uint param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  int *piVar1;
  int *this_00;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  cVar2 = '\0';
  if (*(char *)((int)this + 0x3c) == '\0') goto LAB_10013881;
  piVar1 = (int *)((int)this + 0x38);
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  this_00 = *(int **)((int)this + 0xc);
  local_8 = 0;
  local_c = 0;
  FUN_10019d7b(this_00,param_1,&local_8,&local_c);
  if (((param_2 < local_8) && (param_3 < local_c)) && (uVar4 = param_5 + param_2, param_2 < uVar4))
  {
    if (local_8 < uVar4) {
      uVar4 = local_8;
    }
    if (param_7 < 0) {
      if (param_3 < param_6) {
        param_6 = param_3;
      }
    }
    else {
      uVar3 = param_6 + param_3;
      if (uVar3 <= param_3) goto LAB_1001387a;
      if (local_c < uVar3) {
        uVar3 = local_c;
      }
      param_6 = uVar3 - param_3;
    }
    cVar2 = (**(code **)(*this_00 + 0x7c))
                      (param_1,param_2,param_3,param_4,uVar4 - param_2,param_6,param_7,param_8,
                       param_9,param_10);
  }
LAB_1001387a:
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
LAB_10013881:
  return cVar2 != '\0';
}

