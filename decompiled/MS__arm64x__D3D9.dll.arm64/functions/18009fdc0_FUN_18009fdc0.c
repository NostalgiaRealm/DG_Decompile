/*
 * FUN_18009fdc0 at 18009fdc0
 * undefined FUN_18009fdc0(void)
 * Address ranges: 18009fdc0-18009fecb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18009fdc0(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  float fVar4;
  
  *param_1 = &PTR_FUN_180235aa8;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_180234b30;
  *(undefined4 *)(param_1 + 5) = param_2;
  param_1[8] = 0x1c0000001c;
  param_1[9] = 0x1e0000001b;
  param_1[10] = 0x1c0000001c;
  param_1[6] = 0;
  param_1[7] = 0x1e0000001b;
  param_1[0x2016] = 0;
  param_1[0x2017] = 0;
  param_1[0x39e0] = 0;
  *(undefined1 *)(param_1 + 0x39e1) = 0;
  param_1[0x39c9] = 0;
  param_1[0x39c8] = 0;
  param_1[0x39cb] = 0;
  param_1[0x39ca] = 0;
  param_1[0x39cd] = 0;
  param_1[0x39cc] = 0;
  param_1[0x39cf] = 0;
  param_1[0x39ce] = 0;
  param_1[0x39d1] = 0;
  param_1[0x39d0] = 0;
  param_1[0x39d3] = 0;
  param_1[0x39d2] = 0;
  param_1[0x39d5] = 0;
  param_1[0x39d4] = 0;
  param_1[0x39d7] = 0;
  param_1[0x39d6] = 0;
  param_1[0x39d9] = 0;
  param_1[0x39d8] = 0;
  param_1[0x39db] = 0;
  param_1[0x39da] = 0;
  param_1[0x39dd] = 0;
  param_1[0x39dc] = 0;
  param_1[0x39df] = 0;
  param_1[0x39de] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  pcVar2 = __imp_KERNEL32_dll_QueryPerformanceFrequency;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  (*pcVar2)(param_1 + 0x12);
  uVar3 = 0;
  do {
    uVar1 = (int)uVar3 + 1;
    fVar4 = (float)uVar3 / 255.0;
    *(float *)((longlong)param_1 + uVar3 * 0xc + 0x1c240) = fVar4;
    *(float *)((longlong)param_1 + uVar3 * 0xc + 0x1c244) = fVar4;
    *(float *)((longlong)param_1 + uVar3 * 0xc + 0x1c248) = fVar4;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 0x100);
  return param_1;
}

