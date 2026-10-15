/*
 * FUN_100131ca at 100131ca
 * uint __fastcall FUN_100131ca(int param_1)
 * Address ranges: 100131ca-10013211
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100131ca(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (*(uint *)(param_1 + 100) / *(uint *)(param_1 + 0x4c)) * *(int *)(param_1 + 0x74);
  uVar1 = (*(uint *)(param_1 + 0x68) / *(uint *)(param_1 + 0x50)) * *(int *)(param_1 + 0x78);
  uVar2 = *(uint *)(DAT_100dea74 + 0x80e);
  if ((*(uint *)(DAT_100dea74 + 0x80e) == 0) && (uVar2 = uVar1, uVar3 < uVar1)) {
    uVar2 = uVar3;
  }
  uVar1 = 0x10;
  if (uVar2 < 0x11) {
    uVar1 = uVar2;
  }
  uVar3 = 1;
  if (uVar2 != 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}

