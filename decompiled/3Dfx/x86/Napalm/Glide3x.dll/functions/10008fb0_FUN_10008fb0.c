/*
 * FUN_10008fb0 at 10008fb0
 * uint __fastcall FUN_10008fb0(int param_1)
 * Address ranges: 10008fb0-1000901c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10008fb0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_10008d98((int *)(param_1 + 0x169),(int *)(param_1 + 0x191));
  uVar2 = uVar2 & 0xff;
  *(uint *)(param_1 + 0x3cc) = uVar2;
  if (uVar2 == 1) {
    uVar2 = FUN_10008f4a(param_1 + 0x1f2);
    uVar2 = (uVar2 & 0xff) + 1;
    *(uint *)(param_1 + 0x3cc) = uVar2;
    if (uVar2 == 2) {
      uVar2 = FUN_10008f4a(param_1 + 0x28f);
      uVar2 = uVar2 & 0xff | 2;
      *(uint *)(param_1 + 0x3cc) = uVar2;
    }
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x33);
  if (uVar1 < uVar2) {
    *(uint *)(param_1 + 0x3cc) = uVar1;
    uVar2 = uVar1;
  }
  return uVar2;
}

