/*
 * FUN_1800e8ff0 at 1800e8ff0
 * undefined __fastcall FUN_1800e8ff0(longlong param_1, longlong param_2, int param_3)
 * Address ranges: 1800e8ff0-1800e9053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e8ff0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar1 = (param_3 + -1 + uVar1 & -uVar1) / uVar1;
  uVar2 = FUN_1800f4444(param_1,*(longlong *)(param_2 + 0x18),*(byte **)(param_2 + 0x20),
                        *(uint *)(param_2 + 0x2c),uVar1);
  if (uVar2 != 0xffffffff) {
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + uVar1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar1 * *(int *)(param_1 + 0x40);
  }
  return;
}

