/*
 * FUN_100182ef at 100182ef
 * undefined __thiscall FUN_100182ef(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100182ef-1001837e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100182ef(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  FUN_1004194b(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184),param_1,param_2,param_3,
               param_4);
  if (*(char *)((int)this + 0x37b8) == '\0') {
    iVar1 = *(int *)((int)this + 0x37bc);
    param_3 = 0x3c;
    param_4 = 0;
    FUN_10041869(*(void **)(iVar1 + 0x3180),*(int *)(iVar1 + 0x3184),0,iVar1,
                 (int *)((int)this + 0x37d4),&param_3,&param_4);
    FUN_100418ef(*(void **)(*(int *)((int)this + 0x37bc) + 0x3180),
                 *(int *)(*(int *)((int)this + 0x37bc) + 0x3184),*(int *)((int)this + 0x37d8),0x2a);
    *(undefined1 *)((int)this + 0x37b8) = 1;
  }
  return;
}

