/*
 * FUN_1004b3f0 at 1004b3f0
 * undefined FUN_1004b3f0(void)
 * Address ranges: 1004b3f0-1004b43f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b3f0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  do {
    iVar1 = uVar2 * 8;
    uVar2 = uVar2 + 1;
    *(undefined1 *)((int)param_1 + iVar1 + 0x14) = 0xff;
  } while (uVar2 < 0x11);
  *(undefined4 *)((int)param_1 + 4) = 3;
  return;
}

