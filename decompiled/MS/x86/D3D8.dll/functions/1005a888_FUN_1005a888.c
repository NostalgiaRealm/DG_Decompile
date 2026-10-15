/*
 * FUN_1005a888 at 1005a888
 * undefined __stdcall FUN_1005a888(int param_1, undefined4 param_2, int param_3)
 * Address ranges: 1005a888-1005a8c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a888(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (param_3 == -1) {
      uVar1 = uVar2 | 0x410200;
    }
    else {
      uVar1 = param_3 << 0xe | uVar2 | 0x420300;
    }
    *(uint *)(param_1 + 0x1ac + uVar2 * 4) = uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xf);
  FUN_10055e0e(param_1);
  return;
}

