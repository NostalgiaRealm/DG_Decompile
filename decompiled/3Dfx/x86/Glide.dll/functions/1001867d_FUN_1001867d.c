/*
 * FUN_1001867d at 1001867d
 * undefined __thiscall FUN_1001867d(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1001867d-1001870c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001867d(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  FUN_10041cdb(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184),param_1,param_2,param_3,
               param_4);
  if (*(char *)((int)this + 0x37b8) == '\0') {
    iVar1 = *(int *)((int)this + 0x37bc);
    param_3 = 0x3c;
    param_4 = 0;
    FUN_10041bf9(*(void **)(iVar1 + 0x3180),*(int *)(iVar1 + 0x3184),0,iVar1,
                 (int *)((int)this + 0x37d4),&param_3,&param_4);
    FUN_10041c7f(*(void **)(*(int *)((int)this + 0x37bc) + 0x3180),
                 *(int *)(*(int *)((int)this + 0x37bc) + 0x3184),*(int *)((int)this + 0x37d8),0x2a);
    *(undefined1 *)((int)this + 0x37b8) = 1;
  }
  return;
}

