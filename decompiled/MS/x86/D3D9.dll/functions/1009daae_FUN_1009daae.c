/*
 * FUN_1009daae at 1009daae
 * undefined4 __stdcall FUN_1009daae(int param_1, int param_2)
 * Address ranges: 1009daae-1009db09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009daae(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2;
  uVar2 = 0x8876086c;
  if (param_2 != 0) {
    FUN_10003e40((void *)((int)&param_2 + 3),
                 (byte)(*(uint *)(*(int *)(param_1 + 0x120) + 0xdd0) >> 2) & 1);
    uVar2 = FUN_1000734a(*(void **)(param_1 + 0x120),-(uint)(param_1 != 0) & param_1 + 8U,
                         (undefined4 *)(iVar1 + -0x5c));
    FUN_10003e89((char *)((int)&param_2 + 3));
  }
  return uVar2;
}

