/*
 * FUN_18000b900 at 18000b900
 * undefined __cdecl FUN_18000b900(undefined8 * param_1, longlong param_2)
 * Address ranges: 18000b900-18000b99b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b900(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2a] = 0xffffffff00000000;
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
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  lVar4 = 0;
  do {
    bVar2 = (&DAT_180066988)[lVar4];
    cVar3 = (&DAT_180066978)[lVar4];
    lVar1 = lVar4 + 1;
    *(uint *)((longlong)param_1 + lVar4 * 0x18 + 4) = (uint)bVar2;
    *(int *)(param_1 + lVar4 * 3 + 1) = (int)cVar3;
    param_1[lVar4 * 3 + 2] = param_2 + (ulonglong)bVar2 * 4;
    lVar4 = lVar1;
  } while (lVar1 != 0xe);
  FUN_18000b9a0((longlong)param_1,param_2,0,0,1);
  return;
}

