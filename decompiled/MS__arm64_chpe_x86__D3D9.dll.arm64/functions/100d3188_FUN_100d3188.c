/*
 * FUN_100d3188 at 100d3188
 * undefined FUN_100d3188(void)
 * Address ranges: 100d3188-100d31eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d3188(int param_1)

{
  bool bVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1000b6c0(param_1);
  if ((uVar2 & 1) == 0) {
    if ((*(uint *)(param_1 + 0xdd0) >> 7 & 1) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(param_1 + 0xc2d4) != 0;
    }
  }
  else {
    bVar1 = true;
  }
  *(bool *)(param_1 + 0x669f) = bVar1;
  return;
}

