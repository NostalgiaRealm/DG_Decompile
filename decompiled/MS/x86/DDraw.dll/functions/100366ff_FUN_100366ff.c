/*
 * FUN_100366ff at 100366ff
 * int __stdcall FUN_100366ff(uint * param_1, undefined4 * param_2)
 * Address ranges: 100366ff-1003675d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100366ff(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar3 = (int)uVar1 >> 0x1f;
  uVar2 = FUN_1003684f(uVar1,uVar3);
  iVar4 = uVar2 * 0x10;
  if (((uVar2 == DAT_100707b8) || (*(uint *)(iVar4 + DAT_100707b4) != uVar1)) ||
     (*(uint *)(iVar4 + 4 + DAT_100707b4) != uVar3)) {
    FUN_1003675e(uVar2,uVar1,uVar3,param_1,param_2);
  }
  else {
    *(undefined4 *)(iVar4 + 0xc + DAT_100707b4) = *param_2;
  }
  return DAT_100707b4 + 8 + iVar4;
}

