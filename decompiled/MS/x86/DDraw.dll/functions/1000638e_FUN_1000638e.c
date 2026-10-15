/*
 * FUN_1000638e at 1000638e
 * undefined __thiscall FUN_1000638e(void * this, int param_1, int param_2)
 * Address ranges: 1000638e-10006422
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000638e(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(char *)((int)this + 0x48) == '\0') {
    local_1c = 0;
    local_18 = 0;
    local_14 = FUN_10005029((int)this);
    local_10 = *(ushort *)((int)this + 0xe) - 1;
    (**(code **)(**(int **)((int)this + 0x50) + 0x3c))
              (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),param_1,param_2,
               &local_1c);
  }
  else {
    local_c = 0;
    local_8 = 0;
    iVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x2c))
                      (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0,1,
                       &local_c,&local_8);
    if (iVar1 == 0) {
      FUN_100056d2(param_1,local_c,(byte *)((int)this + 0x38),(byte *)((int)this + 0x40),
                   *(int *)((int)this + 100),*(int *)((int)this + 0x68),param_2,local_8);
      (**(code **)(**(int **)((int)this + 0x50) + 0x30))
                (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70));
    }
  }
  return;
}

