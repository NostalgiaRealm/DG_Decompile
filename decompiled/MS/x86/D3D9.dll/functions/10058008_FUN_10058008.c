/*
 * FUN_10058008 at 10058008
 * uint __fastcall FUN_10058008(int param_1)
 * Address ranges: 10058008-100580e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10058008(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  do {
    uVar1 = *(uint *)(param_1 + uVar4 * 4);
    uVar3 = uVar1 & 0x1f;
    if (uVar3 < 2) {
      return uVar5;
    }
    uVar2 = uVar1 >> 5 & 0x1f;
    if ((((uVar3 == 0xd) ||
         (((&DAT_100d5c6c)[uVar3] &
          (((uVar1 & 0x1c00000) != 0x800000) - 1U & 4 | (uVar1 & 0x1c00) == 0x800 |
          ((uVar1 & 0xe000) != 0x4000) - 1U & 2)) != 0)) || (uVar2 == 0xd)) ||
       (((&DAT_100d5c6c)[uVar2] &
        (((uVar1 & 0x380000) != 0x100000) - 1U & 2 | ((uVar1 & 0xe000000) != 0x4000000) - 1U & 4 |
        (uVar1 & 0x70000) == 0x20000)) != 0)) {
      uVar5 = uVar5 | 1 << (uVar4 & 0x1f);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  return uVar5;
}

