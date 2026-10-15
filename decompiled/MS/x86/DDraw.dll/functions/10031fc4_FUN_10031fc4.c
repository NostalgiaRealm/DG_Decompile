/*
 * FUN_10031fc4 at 10031fc4
 * undefined __fastcall FUN_10031fc4(int param_1)
 * Address ranges: 10031fc4-1003200e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10031fc4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar5;
  
  uVar1 = FUN_100313c3(param_1);
  iVar5 = 1;
  iVar2 = FUN_1003137a(extraout_ECX);
  uVar3 = FUN_10004ff4(*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x54),uVar1,iVar2,iVar5);
  if (uVar1 != 0) {
    uVar4 = FUN_10031403(param_1);
    iVar2 = FUN_1003137a(extraout_ECX_00);
    FUN_10004fac(*(int *)(param_1 + 0xc),*(uint *)(param_1 + 8),extraout_ECX_01,0,iVar2,uVar1,uVar4,
                 uVar3);
  }
  return;
}

