/*
 * FUN_1004a59d at 1004a59d
 * undefined4 * __thiscall FUN_1004a59d(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * Address ranges: 1004a59d-1004a61d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1004a59d(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *this_00;
  undefined4 *puVar4;
  void *this_01;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x172c0);
  this_00 = (undefined4 *)FUN_1004f60f(0x48);
  if (this_00 != (undefined4 *)0x0) {
    FUN_1003a067(this_00,-(uint)(iVar1 != 0) & iVar1 + 0x520U,param_1,param_2);
    *this_00 = &PTR__scalar_deleting_destructor__10055010;
    this_00[0xe] = &PTR_LAB_10054ff8;
    this_00[0x10] = 0;
    this_00[0x11] = uVar2;
    bVar3 = FUN_1004ed6c(this_01,param_3,param_4);
    if (bVar3) goto LAB_1004a60d;
    FUN_1004ed24(this_00);
    FUN_1004f626(this_00);
  }
  this_00 = (undefined4 *)0x0;
LAB_1004a60d:
  puVar4 = this_00 + 0xe;
  if (this_00 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}

