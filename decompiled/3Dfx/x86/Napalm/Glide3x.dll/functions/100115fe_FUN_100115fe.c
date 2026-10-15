/*
 * FUN_100115fe at 100115fe
 * undefined __thiscall FUN_100115fe(void * this, int * param_1, char param_2)
 * Address ranges: 100115fe-1001164c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100115fe(void *this,int *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(char *)(*(int *)(iVar1 + 4) + 0x50) == '\0') {
    param_1 = (int *)(iVar1 + 0x1f10);
  }
  FUN_1004a3fd(*(void **)(iVar1 + 0x2b14),*(int *)((int)this + 8),param_1,
               (undefined4 *)(iVar1 + 0x2b10));
  cVar2 = FUN_100111e4((int)this);
  if (cVar2 == '\0' && param_2 == '\0') {
    (**(code **)(*(int *)this + 0x4c))(0);
  }
  return;
}

