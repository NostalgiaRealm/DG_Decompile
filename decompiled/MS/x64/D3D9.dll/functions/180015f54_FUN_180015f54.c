/*
 * FUN_180015f54 at 180015f54
 * uint __fastcall FUN_180015f54(longlong param_1)
 * Address ranges: 180015f54-180015fb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180015f54(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(DAT_180111f20 + 0x8aa);
  if (*(uint *)(DAT_180111f20 + 0x8aa) == 0) {
    uVar3 = (*(uint *)(param_1 + 0xa8) / *(uint *)(param_1 + 0x90)) * *(int *)(param_1 + 0xb8);
    uVar2 = (*(uint *)(param_1 + 0xac) / *(uint *)(param_1 + 0x94)) * *(int *)(param_1 + 0xbc);
    if (uVar3 < uVar2) {
      uVar2 = uVar3;
    }
  }
  uVar3 = 0x10;
  if (uVar2 < 0x11) {
    uVar3 = uVar2;
  }
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}

