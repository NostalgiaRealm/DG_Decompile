/*
 * FUN_10094a00 at 10094a00
 * undefined FUN_10094a00(void)
 * Address ranges: 10094a00-10094a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10094a00(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (0xb < uVar3) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + uVar3 * 4 + 0x4850);
    if (((((uVar1 & 0xff000000) == 0x40000000) || ((uVar1 & 0xff0000) == 0x400000)) ||
        ((uVar1 & 0xff00) == 0x4000)) || (iVar2 = 0, (uVar1 & 0xff) == 0x40)) {
      iVar2 = 1;
    }
    uVar3 = uVar3 + 1;
  } while (iVar2 == 0);
  return iVar2;
}

