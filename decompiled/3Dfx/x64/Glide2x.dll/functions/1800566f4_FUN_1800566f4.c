/*
 * FUN_1800566f4 at 1800566f4
 * undefined __fastcall FUN_1800566f4(longlong param_1, longlong param_2, int param_3)
 * Address ranges: 1800566f4-180056757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800566f4(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar1 = (param_3 + -1 + uVar1 & -uVar1) / uVar1;
  uVar2 = FUN_18005abb8(param_1,*(longlong *)(param_2 + 0x18),*(byte **)(param_2 + 0x20),
                        *(uint *)(param_2 + 0x2c),uVar1);
  if (uVar2 != 0xffffffff) {
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + uVar1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar1 * *(int *)(param_1 + 0x40);
  }
  return;
}

