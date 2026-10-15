/*
 * FUN_100102a2 at 100102a2
 * undefined __thiscall FUN_100102a2(void * this, int * param_1, char param_2)
 * Address ranges: 100102a2-100102f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100102a2(void *this,int *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(char *)(*(int *)(iVar1 + 4) + 0x50) == '\0') {
    param_1 = (int *)(iVar1 + 0x1dd4);
  }
  FUN_10046ff4(*(void **)(iVar1 + 0x29d8),*(int *)((int)this + 8),param_1,
               (undefined4 *)(iVar1 + 0x29d4));
  cVar2 = FUN_1000fe88((int)this);
  if (cVar2 == '\0' && param_2 == '\0') {
    (**(code **)(*(int *)this + 0x4c))(0);
  }
  return;
}

