/*
 * FUN_1000a4ab at 1000a4ab
 * longlong __thiscall FUN_1000a4ab(void * this, int param_1, undefined4 * param_2, uint param_3, byte param_4)
 * Address ranges: 1000a4ab-1000a534
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong __thiscall
FUN_1000a4ab(void *this,int param_1,undefined4 *param_2,uint param_3,byte param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1000a436(this,param_1,param_2,param_3,param_4);
  if (lVar2 == 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x3688) + 0x1304);
    lVar2 = 0;
    if ((*(uint *)(iVar1 + 0x944) <= *(uint *)(iVar1 + 0x93c)) &&
       ((*(uint *)(iVar1 + 0x944) < *(uint *)(iVar1 + 0x93c) ||
        (lVar2 = 0, *(uint *)(iVar1 + 0x940) < *(uint *)(iVar1 + 0x938))))) {
      FUN_1003d0f3(*(void **)(*(int *)((int)this + 0x3688) + 0x1300),*(uint *)(iVar1 + 0x940),
                   *(uint *)(iVar1 + 0x944));
      lVar2 = FUN_1000a436(this,param_1,param_2,param_3,param_4);
    }
  }
  return lVar2;
}

