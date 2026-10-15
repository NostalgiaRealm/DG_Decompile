/*
 * FUN_100693f5 at 100693f5
 * undefined __stdcall FUN_100693f5(int param_1)
 * Address ranges: 100693f5-1006945a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100693f5(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x48b3) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
  }
  *(uint *)(param_1 + 0x2b0) = uVar1;
  bVar3 = 0;
  do {
    if (bVar3 < *(byte *)(*(int *)(param_1 + 0x10) + 0x4886)) {
      uVar1 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
    }
    else {
      uVar1 = 0;
    }
    uVar2 = (uint)bVar3;
    bVar3 = bVar3 + 1;
    *(uint *)(param_1 + 0x2a0 + uVar2 * 4) = uVar1;
  } while (bVar3 < 4);
  return;
}

