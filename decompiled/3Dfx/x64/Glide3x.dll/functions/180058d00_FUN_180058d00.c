/*
 * FUN_180058d00 at 180058d00
 * undefined __fastcall FUN_180058d00(longlong param_1, longlong param_2, int param_3)
 * Address ranges: 180058d00-180058d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058d00(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar1 = (param_3 + -1 + uVar1 & -uVar1) / uVar1;
  uVar2 = FUN_18005d1c4(param_1,*(longlong *)(param_2 + 0x18),*(byte **)(param_2 + 0x20),
                        *(uint *)(param_2 + 0x2c),uVar1);
  if (uVar2 != 0xffffffff) {
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + uVar1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar1 * *(int *)(param_1 + 0x40);
  }
  return;
}

