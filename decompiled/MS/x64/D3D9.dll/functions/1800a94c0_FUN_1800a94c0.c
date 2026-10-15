/*
 * FUN_1800a94c0 at 1800a94c0
 * undefined8 * __fastcall FUN_1800a94c0(undefined8 * param_1, undefined4 param_2)
 * Address ranges: 1800a94c0-1800a95ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800a94c0(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 5) = param_2;
  *param_1 = &PTR_FUN_180103ad8;
  param_1[1] = 0;
  param_1[3] = &PTR_FUN_180102b50;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = 0x1b;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x1e;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0x1c;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x1c;
  *(undefined4 *)(param_1 + 10) = 0x1c;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x1c;
  *(undefined4 *)(param_1 + 9) = 0x1b;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x1e;
  param_1[0x2016] = 0;
  param_1[0x2017] = 0;
  param_1[0x39e0] = 0;
  *(undefined1 *)(param_1 + 0x39e1) = 0;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x39c8),0,0xc0);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  QueryPerformanceFrequency((LARGE_INTEGER *)(param_1 + 0x12));
  uVar2 = 0;
  do {
    uVar1 = (int)uVar2 + 1;
    fVar3 = (float)uVar2 / 255.0;
    *(float *)((longlong)param_1 + uVar2 * 0xc + 0x1c240) = fVar3;
    *(float *)((longlong)param_1 + uVar2 * 0xc + 0x1c244) = fVar3;
    *(float *)((longlong)param_1 + uVar2 * 0xc + 0x1c248) = fVar3;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x100);
  return param_1;
}

