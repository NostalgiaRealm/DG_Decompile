/*
 * FUN_180055830 at 180055830
 * uint __fastcall FUN_180055830(longlong param_1, longlong param_2, int param_3)
 * Address ranges: 180055830-180055885
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180055830(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar1 = (param_3 + -1 + uVar2 & -uVar2) / uVar2;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18005d1c4((ulonglong)-uVar2,*(longlong *)(param_2 + 0x10),*(byte **)(param_2 + 0x18)
                          ,*(uint *)(param_2 + 0x24),uVar1);
    if (uVar2 != 0xffffffff) {
      *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + uVar1;
    }
  }
  return uVar2;
}

