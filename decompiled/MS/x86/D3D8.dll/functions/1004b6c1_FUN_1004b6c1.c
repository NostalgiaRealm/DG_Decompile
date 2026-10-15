/*
 * FUN_1004b6c1 at 1004b6c1
 * uint * __stdcall FUN_1004b6c1(uint * param_1, int * param_2, int * param_3, ushort param_4)
 * Address ranges: 1004b6c1-1004b750
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1004b6c1(uint *param_1,int *param_2,int *param_3,ushort param_4)

{
  uint uVar1;
  ushort uVar2;
  
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *param_1 = 0;
  uVar2 = param_4 & 0xf0;
  *(undefined1 *)(param_1 + 1) = 0xe4;
  if (uVar2 == 0x10) {
    FUN_1004b5e4(param_2,param_3);
    *param_1 = param_2[0x7e];
  }
  else {
    if (uVar2 == 0x20) {
      FUN_1004b64f((int)param_2);
      uVar1 = param_2[0x7f];
    }
    else {
      if (uVar2 != 0xb0) {
        return param_1;
      }
      uVar1 = param_4 >> 10 | 0x410000;
    }
    *param_1 = uVar1;
  }
  return param_1;
}

