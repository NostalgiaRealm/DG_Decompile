/*
 * FUN_100160d0 at 100160d0
 * longlong __thiscall FUN_100160d0(void * this, int param_1, undefined4 * param_2, uint param_3, byte param_4)
 * Address ranges: 100160d0-10016159
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong __thiscall
FUN_100160d0(void *this,int param_1,undefined4 *param_2,uint param_3,byte param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1001605b(this,param_1,param_2,param_3,param_4);
  if (lVar2 == 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x3188) + 0x1304);
    lVar2 = 0;
    if ((*(uint *)(iVar1 + 0x944) <= *(uint *)(iVar1 + 0x93c)) &&
       ((*(uint *)(iVar1 + 0x944) < *(uint *)(iVar1 + 0x93c) ||
        (lVar2 = 0, *(uint *)(iVar1 + 0x940) < *(uint *)(iVar1 + 0x938))))) {
      FUN_10037200(*(void **)(*(int *)((int)this + 0x3188) + 0x1300),*(uint *)(iVar1 + 0x940),
                   *(uint *)(iVar1 + 0x944));
      lVar2 = FUN_1001605b(this,param_1,param_2,param_3,param_4);
    }
  }
  return lVar2;
}

