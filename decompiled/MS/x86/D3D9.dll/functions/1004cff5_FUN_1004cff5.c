/*
 * FUN_1004cff5 at 1004cff5
 * undefined __thiscall FUN_1004cff5(void * this, uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1004cff5-1004d0af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004cff5(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(int *)(param_1 + 8) == 9) {
    local_1c = param_3;
    local_20 = param_2;
    iVar1 = *(int *)(*(int *)((int)this + 4) + 0x1304);
    cVar2 = FUN_100c2913(*(void **)((int)this + 0xc),
                         *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x1300) + 0xc),
                         *(undefined4 *)(iVar1 + 0x938),*(undefined4 *)(iVar1 + 0x93c),
                         (undefined4 *)&local_18);
    if (cVar2 == '\0') {
      return;
    }
    FUN_100bc25f(*(int *)(*(int *)((int)this + 4) + 0x1304),(undefined4)local_18,0,
                 (undefined4)local_10);
  }
  else {
    if (*(int *)(param_1 + 8) != 0xb) {
      return;
    }
    local_18 = 0;
    local_10 = 0;
    local_20 = param_2;
    local_1c = param_3;
  }
  FUN_1004d4ef((void *)((int)this + 0x14),&param_1,&local_20);
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x60));
  FUN_1004cdaa((int)this);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x60));
  return;
}

