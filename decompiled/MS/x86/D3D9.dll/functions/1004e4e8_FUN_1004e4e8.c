/*
 * FUN_1004e4e8 at 1004e4e8
 * int * __thiscall FUN_1004e4e8(void * this, int * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 1004e4e8-1004e62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1004e4e8(void *this,int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *local_28;
  int local_24;
  undefined4 *local_18;
  int local_14;
  
  FUN_100cfed0(param_1,0,0x58);
  iVar1 = *(int *)(*(int *)((int)this + 8) * 0x16c0 + 0x6c4 + *(int *)((int)this + 4));
  if ((param_2 & 0x100) == 0) {
    FUN_10036e19(&local_28,0x100);
    cVar2 = FUN_1006ff90((void *)((int)this + 0x10),(int)this + 0x18,param_2,param_3,0x10051,
                         (int *)&local_28,(uint)*(byte *)((int)this + 0x2cc),param_1 + 1);
    local_18 = local_28;
    if (cVar2 != '\0') {
      piVar3 = FUN_100c630f(local_24 - (int)local_28,local_28);
      *param_1 = (int)piVar3;
      local_18 = local_28;
    }
  }
  else {
    FUN_10036e19(&local_18,0x100);
    FUN_10036e19(&local_28,0x100);
    cVar2 = FUN_100672b7((int)this + 0x18,param_2,param_3,*(undefined1 *)((int)this + 0x2cc),
                         iVar1 == 0x1002,0x10051,(int *)&local_18,param_1 + 1,0x20051,
                         (int *)&local_28,param_1 + 0xc);
    if (cVar2 != '\0') {
      piVar3 = FUN_100c630f(local_14 - (int)local_18,local_18);
      *param_1 = (int)piVar3;
      if (piVar3 != (int *)0x0) {
        piVar3 = FUN_100c630f(local_24 - (int)local_28,local_28);
        param_1[0xb] = (int)piVar3;
        if (piVar3 == (int *)0x0) {
          (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
          *param_1 = 0;
        }
      }
    }
    thunk_FUN_100cfd6c(local_28);
  }
  thunk_FUN_100cfd6c(local_18);
  return param_1;
}

