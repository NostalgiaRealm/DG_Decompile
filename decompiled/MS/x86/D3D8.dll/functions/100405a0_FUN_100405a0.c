/*
 * FUN_100405a0 at 100405a0
 * int * __thiscall FUN_100405a0(void * this, int * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 100405a0-100406e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_100405a0(void *this,int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *local_28;
  int local_24;
  undefined4 *local_18;
  int local_14;
  
  FUN_100ada8e(param_1,0,0x58);
  iVar1 = *(int *)(*(int *)((int)this + 8) * 0x16c0 + 0x6c4 + *(int *)((int)this + 4));
  if ((param_2 & 0x100) == 0) {
    FUN_1002d6f1(&local_28,0x100);
    cVar2 = FUN_1005a627((void *)((int)this + 0x10),(int)this + 0x18,param_2,param_3,0x10051,
                         (int *)&local_28,(uint)*(byte *)((int)this + 0x120),param_1 + 1);
    local_18 = local_28;
    if (cVar2 != '\0') {
      piVar3 = FUN_100a3a3a(local_24 - (int)local_28,local_28);
      *param_1 = (int)piVar3;
      local_18 = local_28;
    }
  }
  else {
    FUN_1002d6f1(&local_18,0x100);
    FUN_1002d6f1(&local_28,0x100);
    cVar2 = FUN_1005477f((int)this + 0x18,param_2,param_3,*(undefined1 *)((int)this + 0x120),
                         iVar1 == 0x1002,0x10051,(int *)&local_18,param_1 + 1,0x20051,
                         (int *)&local_28,param_1 + 0xc);
    if (cVar2 != '\0') {
      piVar3 = FUN_100a3a3a(local_14 - (int)local_18,local_18);
      *param_1 = (int)piVar3;
      if (piVar3 != (int *)0x0) {
        piVar3 = FUN_100a3a3a(local_24 - (int)local_28,local_28);
        param_1[0xb] = (int)piVar3;
        if (piVar3 == (int *)0x0) {
          (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
          *param_1 = 0;
        }
      }
    }
    thunk_FUN_100ad48c(local_28);
  }
  thunk_FUN_100ad48c(local_18);
  return param_1;
}

