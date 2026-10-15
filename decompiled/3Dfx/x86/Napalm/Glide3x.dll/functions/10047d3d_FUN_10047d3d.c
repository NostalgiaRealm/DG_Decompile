/*
 * FUN_10047d3d at 10047d3d
 * undefined4 * __fastcall FUN_10047d3d(undefined4 * param_1)
 * Address ranges: 10047d3d-10047e34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10047d3d(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  param_1[0x352] = 0;
  param_1[0x354] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 1;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x30e] = 0;
  param_1[0x30f] = 0;
  param_1[0x310] = 0;
  param_1[0x311] = 0;
  param_1[0x312] = 1;
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  param_1[0x350] = 0;
  param_1[0x351] = 0;
  param_1[0x353] = 0;
  param_1[0x355] = 0;
  *(undefined1 *)(param_1 + 0x356) = 0;
  *(undefined1 *)((int)param_1 + 0xd59) = 1;
  *(undefined2 *)((int)param_1 + 0xd5a) = 0;
  *(undefined2 *)((int)param_1 + 0xd5d) = 0;
  param_1[0x358] = 0;
  SetRectEmpty((LPRECT)(param_1 + 0x34a));
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    fVar3 = (float)((double)(int)uVar1 + (double)(&DAT_1005b850)[-((int)uVar1 >> 0x1f)]) / 255.0;
    param_1[uVar1 * 3 + 0x10] = fVar3;
    param_1[uVar1 * 3 + 0xf] = fVar3;
    param_1[uVar1 * 3 + 0xe] = fVar3;
    uVar1 = uVar2;
  } while (uVar2 < 0x100);
  return param_1;
}

