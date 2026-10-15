/*
 * FUN_1800a0830 at 1800a0830
 * undefined FUN_1800a0830(void)
 * Address ranges: 1800a0830-1800a09b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a0830(longlong param_1,uint param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = (ulonglong)param_2 * 0x2c;
  *(uint *)(param_1 + 0x1ce50) = (uint)(byte)(&DAT_18024a96c)[lVar1];
  *(uint *)(param_1 + 0x1ce54) = (uint)(byte)(&DAT_18024a96e)[lVar1];
  *(uint *)(param_1 + 0x1ce58) = (uint)(byte)(&DAT_18024a970)[lVar1];
  *(uint *)(param_1 + 0x1ce5c) = (uint)(byte)(&DAT_18024a972)[lVar1];
  *(uint *)(param_1 + 0x1ce60) = (uint)(byte)(&DAT_18024a96d)[lVar1];
  *(uint *)(param_1 + 0x1ce64) = (uint)(byte)(&DAT_18024a96f)[lVar1];
  *(uint *)(param_1 + 0x1ce68) = (uint)(byte)(&DAT_18024a971)[lVar1];
  *(uint *)(param_1 + 0x1ce6c) = (uint)(byte)(&DAT_18024a973)[lVar1];
  *(uint *)(param_1 + 0x1ce70) = 8 - (uint)(byte)(&DAT_18024a96c)[lVar1];
  *(uint *)(param_1 + 0x1ce74) = 8 - (uint)(byte)(&DAT_18024a96e)[lVar1];
  *(uint *)(param_1 + 0x1ce78) = 8 - (uint)(byte)(&DAT_18024a970)[lVar1];
  *(uint *)(param_1 + 0x1ce7c) = 8 - (uint)(byte)(&DAT_18024a972)[lVar1];
  *(undefined4 *)(param_1 + 0x1ce80) = *(undefined4 *)(&DAT_18024a974 + lVar1);
  *(uint *)(param_1 + 0x1cee0) = (uint)(byte)(&DAT_18024a978)[lVar1];
  *(uint *)(param_1 + 0x1cee4) = (uint)(byte)(&DAT_18024a979)[lVar1];
  *(uint *)(param_1 + 0x1cee8) = (uint)(byte)(&DAT_18024a97a)[lVar1];
  *(uint *)(param_1 + 0x1ceec) = (uint)(byte)(&DAT_18024a97b)[lVar1];
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x1cecc) = param_4;
    *(undefined4 *)(param_1 + 0x1ced0) = 0x3d000000;
    if (param_3 - 0x17U < 2) {
      *(undefined4 *)(param_1 + 0x1ced4) = 0x447fc000;
      *(undefined4 *)(param_1 + 0x1ced8) = 0x3ff;
      *(undefined4 *)(param_1 + 0x1cee0) = 0x3ff;
      *(undefined4 *)(param_1 + 0x1cee4) = 0x3ff;
      *(undefined4 *)(param_1 + 0x1cee8) = 0x3ff;
      uVar2 = 3;
    }
    else {
      if ((param_3 - 9U & 0xfffffffd) != 0) {
        *(undefined4 *)(param_1 + 0x1ced4) = 0x437f0000;
        *(undefined4 *)(param_1 + 0x1ced8) = 0xff;
        return;
      }
      *(undefined4 *)(param_1 + 0x1ced4) = 0x477fff00;
      uVar2 = 0xffff;
      *(undefined4 *)(param_1 + 0x1ced8) = 0xffff;
      *(undefined4 *)(param_1 + 0x1cee0) = 0xffff;
      *(undefined4 *)(param_1 + 0x1cee4) = 0xffff;
      *(undefined4 *)(param_1 + 0x1cee8) = 0xffff;
    }
    *(undefined4 *)(param_1 + 0x1ceec) = uVar2;
  }
  return;
}

