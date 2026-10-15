/*
 * FUN_18004da88 at 18004da88
 * undefined8 * __fastcall FUN_18004da88(undefined8 * param_1)
 * Address ranges: 18004da88-18004db63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18004da88(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 4) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  *(undefined2 *)((longlong)param_1 + 0xd6d) = 0;
  param_1[0x1ae] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x18a) = 1;
  *(undefined4 *)(param_1 + 0x1ad) = 0x100;
  SetRectEmpty((LPRECT)(param_1 + 0x1a6));
  uVar2 = 0;
  do {
    uVar1 = (int)uVar2 + 1;
    fVar3 = (float)uVar2 / 255.0;
    *(float *)((longlong)param_1 + uVar2 * 0xc + 0x48) = fVar3;
    *(float *)((longlong)param_1 + uVar2 * 0xc + 0x44) = fVar3;
    *(float *)((longlong)param_1 + uVar2 * 0xc + 0x40) = fVar3;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x100);
  return param_1;
}

