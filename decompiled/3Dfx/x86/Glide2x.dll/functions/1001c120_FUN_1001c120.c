/*
 * FUN_1001c120 at 1001c120
 * undefined __thiscall FUN_1001c120(void * this, int * param_1, char param_2)
 * Address ranges: 1001c120-1001c16e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001c120(void *this,int *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(char *)(*(int *)(iVar1 + 4) + 0x50) == '\0') {
    param_1 = (int *)(iVar1 + 0x1d58);
  }
  FUN_1004450c(*(void **)(iVar1 + 0x295c),*(int *)((int)this + 8),param_1,
               (undefined4 *)(iVar1 + 0x2958));
  cVar2 = FUN_1001bd06((int)this);
  if (cVar2 == '\0' && param_2 == '\0') {
    (**(code **)(*(int *)this + 0x4c))(0);
  }
  return;
}

