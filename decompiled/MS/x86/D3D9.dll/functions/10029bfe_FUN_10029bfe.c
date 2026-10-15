/*
 * FUN_10029bfe at 10029bfe
 * undefined __stdcall FUN_10029bfe(int param_1)
 * Address ranges: 10029bfe-10029c74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029bfe(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
  uVar2 = *(uint *)(param_1 + 0x17c);
  uVar1 = *(uint *)(param_1 + 0x180);
  if (0x500 < uVar2) {
    uVar2 = 0x500;
  }
  if (0x400 < uVar1) {
    uVar1 = 0x400;
  }
  uVar2 = (*(uint *)(param_1 + 400) >> 3) * uVar1 * uVar2;
  uVar1 = *(uint *)(param_1 + 0x1f0);
  if ((*(int *)(param_1 + 500) == 0) && (uVar1 <= uVar2)) {
    uStack_8 = 0;
    local_c = 0;
  }
  else {
    local_c = uVar1 - uVar2;
    uStack_8 = *(int *)(param_1 + 500) - (uint)(uVar1 < uVar2);
  }
  *(int *)(param_1 + 0x1f8) = local_c;
  *(int *)(param_1 + 0x1fc) = uStack_8;
  return;
}

