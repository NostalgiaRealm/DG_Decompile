/*
 * FUN_1004d085 at 1004d085
 * undefined4 * __thiscall FUN_1004d085(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * Address ranges: 1004d085-1004d105
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1004d085(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *this_00;
  undefined4 *puVar4;
  void *this_01;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x172c0);
  this_00 = (undefined4 *)FUN_1005225f(0x48);
  if (this_00 != (undefined4 *)0x0) {
    FUN_1003cb4c(this_00,-(uint)(iVar1 != 0) & iVar1 + 0x520U,param_1,param_2);
    *this_00 = &PTR__scalar_deleting_destructor__10058268;
    this_00[0xe] = &PTR_LAB_10058250;
    this_00[0x10] = 0;
    this_00[0x11] = uVar2;
    bVar3 = FUN_10051854(this_01,param_3,param_4);
    if (bVar3) goto LAB_1004d0f5;
    FUN_1005180c(this_00);
    FUN_10052276(this_00);
  }
  this_00 = (undefined4 *)0x0;
LAB_1004d0f5:
  puVar4 = this_00 + 0xe;
  if (this_00 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}

