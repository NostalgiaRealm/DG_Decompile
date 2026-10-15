/*
 * FUN_1005e3fa at 1005e3fa
 * undefined __stdcall FUN_1005e3fa(int param_1, uint param_2, int param_3)
 * Address ranges: 1005e3fa-1005e47d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e3fa(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int extraout_EDX;
  
  if (param_3 == 0) {
    uVar1 = FUN_1005da5e(param_2);
    if (uVar1 == 3) {
      param_3 = FUN_1005e3ca(param_1,extraout_EDX);
    }
    else {
      param_3 = FUN_1005e39a(param_1,extraout_EDX);
    }
  }
  *(int *)(param_1 + 0x330) = param_3;
  *(byte *)(param_1 + 0x334) = (byte)(param_2 >> 0x10) & 0xf;
  *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
  *(uint *)(param_1 + 0x324) = param_2 >> 0x18 & 0xf;
  *(uint *)(param_1 + 800) = param_2 >> 7 & 0x2000;
  return;
}

