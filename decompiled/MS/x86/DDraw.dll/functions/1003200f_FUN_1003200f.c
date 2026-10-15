/*
 * FUN_1003200f at 1003200f
 * undefined __fastcall FUN_1003200f(int param_1, byte param_2)
 * Address ranges: 1003200f-10032055
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003200f(int param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  uVar5 = *(uint *)(param_1 + 8) >> (param_2 & 0x1f);
  uVar6 = *(uint *)(param_1 + 0xc) >> (param_2 & 0x1f);
  uVar1 = FUN_10031403(param_1);
  uVar2 = FUN_100313c3(extraout_ECX);
  iVar3 = FUN_1003137a(extraout_ECX_00);
  uVar4 = 1;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
  uVar5 = 1;
  if (uVar6 != 0) {
    uVar5 = uVar6;
  }
  FUN_10004fac(uVar5,uVar4,extraout_ECX_01,*(int *)(param_1 + 0x54),iVar3,uVar2,uVar1,uVar7);
  return;
}

