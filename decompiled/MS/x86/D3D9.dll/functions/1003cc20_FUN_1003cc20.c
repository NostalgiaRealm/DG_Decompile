/*
 * FUN_1003cc20 at 1003cc20
 * longlong __thiscall FUN_1003cc20(void * this, void * param_1, undefined4 * param_2, uint param_3, byte param_4)
 * Address ranges: 1003cc20-1003ccb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong __thiscall
FUN_1003cc20(void *this,void *param_1,undefined4 *param_2,uint param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_1003cb90(this,param_1,param_2,param_3,param_4);
  if (lVar3 != 0) {
    return lVar3;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
  uVar2 = *(uint *)(iVar1 + 0x944);
  if ((uVar2 <= *(uint *)(iVar1 + 0x93c)) &&
     ((uVar2 < *(uint *)(iVar1 + 0x93c) || (*(uint *)(iVar1 + 0x940) < *(uint *)(iVar1 + 0x938)))))
  {
    FUN_100bf5f8(*(void **)(*(int *)((int)this + 0xf6b8) + 0x1300),*(uint *)(iVar1 + 0x940),uVar2);
    lVar3 = FUN_1003cb90(this,param_1,param_2,param_3,param_4);
    return lVar3;
  }
  return 0;
}

