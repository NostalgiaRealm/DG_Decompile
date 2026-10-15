/*
 * FUN_1800aa43c at 1800aa43c
 * undefined __fastcall FUN_1800aa43c(longlong param_1, ulonglong param_2, int param_3, undefined4 param_4)
 * Address ranges: 1800aa43c-1800aa583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aa43c(longlong param_1,ulonglong param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x2c;
  lVar1 = 0;
  do {
    *(uint *)(param_1 + 0x1ce50 + lVar1 * 4) = (uint)(byte)(&DAT_18010ff2c)[lVar1 * 2 + lVar2];
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  lVar1 = 0;
  do {
    *(uint *)(param_1 + 0x1ce60 + lVar1 * 4) = (uint)(byte)(&DAT_18010ff2d)[lVar1 * 2 + lVar2];
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  lVar1 = 0;
  do {
    *(uint *)(param_1 + 0x1ce70 + lVar1 * 4) = 8 - (uint)(byte)(&DAT_18010ff2c)[lVar1 * 2 + lVar2];
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  *(undefined4 *)(param_1 + 0x1ce80) = *(undefined4 *)(&DAT_18010ff34 + lVar2);
  lVar1 = 0;
  do {
    *(uint *)(param_1 + 0x1cee0 + lVar1 * 4) = (uint)(byte)(&DAT_18010ff38)[lVar1 + lVar2];
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x1cecc) = param_4;
    *(undefined4 *)(param_1 + 0x1ced0) = 0x3d000000;
    if (param_3 - 0x17U < 2) {
      *(undefined4 *)(param_1 + 0x1ced4) = 0x447fc000;
      *(undefined4 *)(param_1 + 0x1ced8) = 0x3ff;
      *(undefined4 *)(param_1 + 0x1cee0) = 0x3ff;
      *(undefined4 *)(param_1 + 0x1cee4) = 0x3ff;
      *(undefined4 *)(param_1 + 0x1cee8) = 0x3ff;
      *(undefined4 *)(param_1 + 0x1ceec) = 3;
    }
    else if ((param_3 - 9U & 0xfffffffd) == 0) {
      *(undefined4 *)(param_1 + 0x1ced4) = 0x477fff00;
      *(undefined4 *)(param_1 + 0x1ced8) = 0xffff;
      *(undefined8 *)(param_1 + 0x1cee0) = 0xffff0000ffff;
      *(undefined8 *)(param_1 + 0x1cee8) = 0xffff0000ffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x1ced4) = 0x437f0000;
      *(undefined4 *)(param_1 + 0x1ced8) = 0xff;
    }
  }
  return;
}

