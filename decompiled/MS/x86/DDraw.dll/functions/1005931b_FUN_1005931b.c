/*
 * FUN_1005931b at 1005931b
 * undefined4 * __thiscall FUN_1005931b(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * Address ranges: 1005931b-1005939b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1005931b(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *this_00;
  undefined4 *puVar4;
  void *this_01;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x172c0);
  this_00 = (undefined4 *)FUN_10060bca(0x48);
  if (this_00 != (undefined4 *)0x0) {
    FUN_1005bbbd(this_00,-(uint)(iVar1 != 0) & iVar1 + 0x520U,param_1,param_2);
    *this_00 = &PTR__scalar_deleting_destructor__10066d50;
    this_00[0xe] = &PTR_LAB_10066d38;
    this_00[0x10] = 0;
    this_00[0x11] = uVar2;
    bVar3 = FUN_1005ccab(this_01,param_3,param_4);
    if (bVar3) goto LAB_1005938b;
    FUN_1005cc63(this_00);
    FUN_10060be1(this_00);
  }
  this_00 = (undefined4 *)0x0;
LAB_1005938b:
  puVar4 = this_00 + 0xe;
  if (this_00 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}

