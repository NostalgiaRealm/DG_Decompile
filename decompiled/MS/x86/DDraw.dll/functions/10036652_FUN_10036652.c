/*
 * FUN_10036652 at 10036652
 * int __stdcall FUN_10036652(uint * param_1)
 * Address ranges: 10036652-10036692
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10036652(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_1;
  uVar2 = FUN_1003684f(uVar1,(int)uVar1 >> 0x1f);
  if (((uVar2 != DAT_100707b8) && (iVar3 = uVar2 * 0x10, *(uint *)(iVar3 + DAT_100707b4) == uVar1))
     && (*(uint *)(iVar3 + 4 + DAT_100707b4) == (int)uVar1 >> 0x1f)) {
    return iVar3 + 0xc + DAT_100707b4;
  }
  return 0;
}

