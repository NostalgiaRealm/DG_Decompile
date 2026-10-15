/*
 * FUN_10038992 at 10038992
 * undefined4 * __thiscall FUN_10038992(void * this, undefined4 * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 10038992-10038b29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10038992(void *this,undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  LPVOID local_28;
  int local_24;
  LPVOID local_18;
  int local_14;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = *(int *)((int)this + 8) * 0x1510;
  iVar5 = *(int *)((int)this + 4);
  iVar4 = *(int *)(iVar3 + 0x524 + iVar5);
  if ((param_2 & 0x100) == 0) {
    FUN_10036e19(&local_28,0x100);
    uVar6 = 0x10040;
    if (0xafff < *(int *)(iVar3 + 0x520 + iVar5)) {
      uVar6 = 0x10050;
    }
    cVar2 = FUN_1006ff90((void *)((int)this + 0x10),(int)this + 0x18,param_2,param_3,uVar6,
                         (int *)&local_28,(uint)*(byte *)((int)this + 0x2cc),(undefined4 *)0x0);
    local_18 = local_28;
    if (cVar2 != '\0') {
      piVar1 = *(int **)(*(int *)((int)this + 8) * 0x1510 + 0x510 + *(int *)((int)this + 4));
      (**(code **)(*piVar1 + 0x30))(piVar1,local_28,local_24 - (int)local_28,0,param_1);
      local_18 = local_28;
    }
  }
  else {
    FUN_10036e19(&local_18,0x100);
    FUN_10036e19(&local_28,0x100);
    cVar2 = FUN_100672b7((int)this + 0x18,param_2,param_3,*(undefined1 *)((int)this + 0x2cc),
                         iVar4 == 0x1002,0x10050,(int *)&local_18,(undefined4 *)0x0,0x20050,
                         (int *)&local_28,(undefined4 *)0x0);
    if (cVar2 != '\0') {
      iVar3 = *(int *)((int)this + 8) * 0x1510;
      iVar5 = *(int *)((int)this + 4);
      piVar1 = *(int **)(iVar3 + 0x510 + iVar5);
      iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,local_18,local_14 - (int)local_18,0,param_1);
      if ((-1 < iVar4) &&
         (piVar1 = *(int **)(iVar3 + 0x510 + iVar5),
         iVar5 = (**(code **)(*piVar1 + 0x34))
                           (piVar1,local_28,local_24 - (int)local_28,0,param_1 + 1), iVar5 < 0)) {
        (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
        *param_1 = 0;
      }
    }
    thunk_FUN_100cfd6c(local_28);
  }
  thunk_FUN_100cfd6c(local_18);
  return param_1;
}

