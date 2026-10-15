/*
 * FUN_1004f0bb at 1004f0bb
 * undefined __stdcall FUN_1004f0bb(uint * param_1, int param_2, uint param_3, undefined1 param_4)
 * Address ranges: 1004f0bb-1004f114
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f0bb(uint *param_1,int param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (((param_3 & 0xf000000) == 0) || ((param_3 & 0xf000000) == 0x1000000)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100a05ed(param_2,4,'\x01');
    if (uVar1 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(param_2 + 0x2c0 + uVar2 * 4) == 0) {
          *(uint *)(param_2 + 0x2c0 + uVar2 * 4) = uVar1;
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

