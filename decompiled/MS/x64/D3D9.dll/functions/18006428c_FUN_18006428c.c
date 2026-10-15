/*
 * FUN_18006428c at 18006428c
 * uint __fastcall FUN_18006428c(longlong param_1)
 * Address ranges: 18006428c-180064376
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18006428c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + uVar2 * 4);
    uVar3 = uVar1 & 0x1f;
    if (uVar3 < 2) {
      return uVar4;
    }
    if ((((uVar3 == 0xd) ||
         (((&DAT_180102768)[uVar3] &
          (((uVar1 & 0xe000) != 0x4000) - 1U & 2 | ((uVar1 & 0x1c00000) != 0x800000) - 1U & 4 |
          (uVar1 & 0x1c00) == 0x800)) != 0)) || ((uVar1 & 0x3e0) == 0x1a0)) ||
       (((&DAT_180102768)[uVar1 >> 5 & 0x1f] &
        (((uVar1 & 0x380000) != 0x100000) - 1U & 2 | (uVar1 & 0x70000) == 0x20000 |
        ((uVar1 & 0xe000000) != 0x4000000) - 1U & 4)) != 0)) {
      uVar4 = uVar4 | 1 << ((byte)uVar2 & 0x1f);
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 8);
  return uVar4;
}

