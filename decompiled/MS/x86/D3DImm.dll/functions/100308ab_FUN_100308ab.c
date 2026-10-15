/*
 * FUN_100308ab at 100308ab
 * uint __fastcall FUN_100308ab(int param_1)
 * Address ranges: 100308ab-10030953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100308ab(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar3 = 0;
  do {
    uVar1 = *(uint *)(param_1 + uVar3 * 4);
    uVar4 = uVar1 & 0x1f;
    if (uVar4 < 2) {
      return uVar5;
    }
    uVar2 = uVar1 >> 5 & 0x1f;
    if ((((uVar4 == 0xd) ||
         (((&DAT_1005ef44)[uVar4] &
          ((uVar1 & 0x1c00) == 0x800 | ((uVar1 & 0xe000) != 0x4000) - 1U & 2)) != 0)) ||
        (uVar2 == 0xd)) ||
       (((&DAT_1005ef44)[uVar2] &
        ((uVar1 & 0x70000) == 0x20000 | ((uVar1 & 0x380000) != 0x100000) - 1U & 2)) != 0)) {
      uVar5 = uVar5 | 1 << (uVar3 & 0x1f);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return uVar5;
}

