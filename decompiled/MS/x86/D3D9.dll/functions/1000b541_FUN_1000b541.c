/*
 * FUN_1000b541 at 1000b541
 * undefined __fastcall FUN_1000b541(int param_1, uint param_2)
 * Address ranges: 1000b541-1000b55b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000b541(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(uint *)(param_1 + 0x18 + uVar1 * 4) == (param_2 & 0xffff)) {
      *(undefined4 *)(param_1 + 0x18 + uVar1 * 4) = 0xffffffff;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

