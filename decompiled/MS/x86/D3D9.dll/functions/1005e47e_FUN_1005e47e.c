/*
 * FUN_1005e47e at 1005e47e
 * undefined __stdcall FUN_1005e47e(uint * param_1, int param_2, uint param_3, undefined1 param_4)
 * Address ranges: 1005e47e-1005e4d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e47e(uint *param_1,int param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (((param_3 & 0xf000000) == 0) || ((param_3 & 0xf000000) == 0x1000000)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100c2e34(param_2,4,'\x01');
    if (uVar1 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(param_2 + 0x3b0 + uVar2 * 4) == 0) {
          *(uint *)(param_2 + 0x3b0 + uVar2 * 4) = uVar1;
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 4);
    }
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_4;
  return;
}

