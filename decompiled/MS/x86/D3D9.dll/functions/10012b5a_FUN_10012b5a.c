/*
 * FUN_10012b5a at 10012b5a
 * undefined __fastcall FUN_10012b5a(int param_1)
 * Address ranges: 10012b5a-10012bd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10012b5a(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint3 uVar7;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x28);
  iVar1 = FUN_10002447(iVar6);
  uVar2 = FUN_100025c9(iVar6);
  uVar3 = FUN_10002621(extraout_ECX);
  uVar4 = FUN_10002297(extraout_ECX_00);
  uVar7 = (uint3)((uint)extraout_ECX_01 >> 8);
  if ((*(int *)(param_1 + 0x34) == 3) || (*(int *)(param_1 + 0x34) == 2)) {
    iVar6 = CONCAT31(uVar7,1);
  }
  else {
    iVar6 = (uint)uVar7 << 8;
  }
  this = *(void **)(param_1 + 4);
  iVar5 = 1;
  if ((char)iVar6 != '\0') {
    iVar5 = 4;
  }
  FUN_1002cb36(this,*(int *)(param_1 + 0x40),*(uint *)(param_1 + 0x44),1,uVar4,iVar1,uVar2,uVar3,
               iVar6,iVar5);
  *(undefined1 *)((int)this + 0x1f) = 0;
  return;
}

