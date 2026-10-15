/*
 * FUN_18000c728 at 18000c728
 * undefined __cdecl FUN_18000c728(longlong param_1)
 * Address ranges: 18000c728-18000c843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000c728(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_160;
  undefined8 uStack_158;
  longlong local_150 [41];
  undefined4 local_8;
  
  lVar5 = *(longlong *)(param_1 + 0x228);
  *(undefined8 *)(lVar5 + 0x3270) = 0;
  *(undefined4 *)(lVar5 + 0x3278) = 0;
  *(undefined4 *)(lVar5 + 0x327c) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x3280) = 0;
  *(undefined8 *)(lVar5 + 0x3288) = 0;
  *(undefined4 *)(lVar5 + 0x3290) = 0;
  *(undefined4 *)(lVar5 + 0x3294) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x3298) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x329c) = 0;
  *(undefined4 *)(lVar5 + 0x32a4) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x32a8) = 0;
  *(undefined4 *)(lVar5 + 0x32b0) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x32b4) = 0;
  *(undefined4 *)(lVar5 + 0x32bc) = 0x3f800000;
  local_150[0x28] = 0xffffffff00000000;
  local_8 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_150[1] = 0;
  local_150[0] = 0;
  local_150[3] = 0;
  local_150[2] = 0;
  local_150[5] = 0;
  local_150[4] = 0;
  local_150[7] = 0;
  local_150[6] = 0;
  local_150[9] = 0;
  local_150[8] = 0;
  local_150[0xb] = 0;
  local_150[10] = 0;
  local_150[0xd] = 0;
  local_150[0xc] = 0;
  local_150[0xf] = 0;
  local_150[0xe] = 0;
  local_150[0x11] = 0;
  local_150[0x10] = 0;
  local_150[0x13] = 0;
  local_150[0x12] = 0;
  local_150[0x15] = 0;
  local_150[0x14] = 0;
  local_150[0x17] = 0;
  local_150[0x16] = 0;
  local_150[0x19] = 0;
  local_150[0x18] = 0;
  local_150[0x1b] = 0;
  local_150[0x1a] = 0;
  local_150[0x1d] = 0;
  local_150[0x1c] = 0;
  local_150[0x1f] = 0;
  local_150[0x1e] = 0;
  local_150[0x21] = 0;
  local_150[0x20] = 0;
  local_150[0x23] = 0;
  local_150[0x22] = 0;
  local_150[0x25] = 0;
  local_150[0x24] = 0;
  local_150[0x27] = 0;
  local_150[0x26] = 0;
  lVar4 = 0;
  do {
    bVar2 = (&DAT_180066988)[lVar4];
    cVar3 = (&DAT_180066978)[lVar4];
    lVar1 = lVar4 + 1;
    *(uint *)((longlong)&local_160 + lVar4 * 0x18 + 4) = (uint)bVar2;
    *(int *)(local_150 + lVar4 * 3 + -1) = (int)cVar3;
    local_150[lVar4 * 3] = lVar5 + 0x3270 + (ulonglong)bVar2 * 4;
    lVar4 = lVar1;
  } while (lVar1 != 0xe);
  FUN_18000b9a0((longlong)&local_160,lVar5 + 0x3270,0,0,1);
  thunk_FUN_1800010d8((undefined8 *)(param_1 + 8),&local_160,0x160);
  return;
}

