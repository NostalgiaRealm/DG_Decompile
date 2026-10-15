/*
 * FUN_1001645e at 1001645e
 * longlong __thiscall FUN_1001645e(void * this, int param_1, undefined4 * param_2, uint param_3, byte param_4)
 * Address ranges: 1001645e-100164e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong __thiscall
FUN_1001645e(void *this,int param_1,undefined4 *param_2,uint param_3,byte param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_100163e9(this,param_1,param_2,param_3,param_4);
  if (lVar2 == 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x3188) + 0x1304);
    lVar2 = 0;
    if ((*(uint *)(iVar1 + 0x944) <= *(uint *)(iVar1 + 0x93c)) &&
       ((*(uint *)(iVar1 + 0x944) < *(uint *)(iVar1 + 0x93c) ||
        (lVar2 = 0, *(uint *)(iVar1 + 0x940) < *(uint *)(iVar1 + 0x938))))) {
      FUN_10037590(*(void **)(*(int *)((int)this + 0x3188) + 0x1300),*(uint *)(iVar1 + 0x940),
                   *(uint *)(iVar1 + 0x944));
      lVar2 = FUN_100163e9(this,param_1,param_2,param_3,param_4);
    }
  }
  return lVar2;
}

