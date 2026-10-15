/*
 * FUN_180005650 at 180005650
 * undefined FUN_180005650(void)
 * Address ranges: 180005650-1800059bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180005650(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 *param_9)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar5;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_180233870;
  param_1[1] = 0;
  uVar2 = DAT_18024de60;
  param_1[5] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[2] = 0;
  param_1[3] = uVar2;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x1000000;
  uVar2 = thunk_FUN_180102f80(0x2600);
  param_1[0x69] = uVar2;
  param_1[0x6a] = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 7;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x19c] = 0;
  *(undefined1 *)(param_1 + 0x19d) = 0;
  param_1[0x19f] = 0;
  param_1[0x19e] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a0] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd14) = 0xffff000000ff;
  *(undefined2 *)(param_1 + 0x1a2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd12) = 1;
  param_1[0x1a5] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a8] = 0;
  uVar2 = thunk_FUN_180102f80(0x13000);
  *(undefined1 *)(param_1 + 0x1ab) = 1;
  param_1[0x1a9] = uVar2;
  param_1[0x1aa] = 0x80;
  param_1[0x1b2] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 0;
  *(undefined4 *)(param_1 + 0x1b1) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd9c) = 0x3f800000;
  param_1[0x1bf] = param_1 + 0xa1;
  param_1[0x1c0] = (longlong)param_1 + 0x50c;
  param_1[0x1c1] = param_1 + 0xa2;
  param_1[0x1c2] = 0;
  *(undefined2 *)((longlong)param_1 + 0xe21) = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe23) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  FUN_1800797d0(param_1 + 0xe);
  param_1[0x199] = 0;
  param_1[0x198] = 0;
  param_1[0x19b] = 0;
  param_1[0x19a] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  bVar1 = param_2 != 0;
  puVar3 = (undefined8 *)0x0;
  if (bVar1) {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x1ac] = *puVar3;
  puVar3 = (undefined8 *)&DAT_00000008;
  if (bVar1) {
    puVar3 = (undefined8 *)(param_2 + 0x20);
  }
  param_1[0x1ad] = *puVar3;
  puVar3 = (undefined8 *)&DAT_00000010;
  if (bVar1) {
    puVar3 = (undefined8 *)(param_2 + 0x28);
  }
  param_1[0x1ae] = *puVar3;
  puVar3 = (undefined8 *)&DAT_00000018;
  if (bVar1) {
    puVar3 = (undefined8 *)(param_2 + 0x30);
  }
  param_1[0x1af] = *puVar3;
  puVar3 = (undefined8 *)&DAT_00000020;
  if (bVar1) {
    puVar3 = (undefined8 *)(param_2 + 0x38);
  }
  uVar2 = *puVar3;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  param_1[0x1b0] = uVar2;
  *param_1 = &PTR_FUN_180230220;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe64) = param_3;
  *(undefined4 *)(param_1 + 0x1cd) = param_4;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)((longlong)param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x1c5] = param_2;
  param_1[0x1c6] = 0;
  param_1[0x1ce] = param_5;
  uVar5 = param_9[1];
  uVar2 = *param_9;
  param_1[0xcf9] = 0xffffffff00000000;
  param_1[0xcfa] = 0;
  *(undefined4 *)(param_1 + 0x1d1) = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d0] = uVar5;
  param_1[0x1cf] = uVar2;
  param_1[0xcff] = 0x1f0000ffff;
  param_1[0xd00] = 0x1f00000000;
  param_1[0x1d4] = 0;
  *(undefined4 *)(param_1 + 0x1d5) = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0xcd8] = 0;
  param_1[0xcfb] = 0;
  param_1[0xcfc] = 0;
  param_1[0xcfd] = 0;
  param_1[0xcfe] = 0xffff;
  param_1[0xd01] = 0xffff;
  param_1[0xd02] = 0;
  *(undefined4 *)(param_1 + 0xd03) = 0x10001;
  *(undefined1 *)((longlong)param_1 + 0x681c) = 0;
  param_1[0x1c9] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1ca] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  param_1[0xcda] = 0;
  param_1[0xcd9] = 0;
  param_1[0xcdc] = 0;
  param_1[0xcdb] = 0;
  param_1[0xcde] = 0;
  param_1[0xcdd] = 0;
  param_1[0xce0] = 0;
  param_1[0xcdf] = 0;
  param_1[0xce2] = 0;
  param_1[0xce1] = 0;
  param_1[0xce4] = 0;
  param_1[0xce3] = 0;
  param_1[0xce6] = 0;
  param_1[0xce5] = 0;
  param_1[0xce8] = 0;
  param_1[0xce7] = 0;
  param_1[0xcea] = 0;
  param_1[0xce9] = 0;
  param_1[0xcec] = 0;
  param_1[0xceb] = 0;
  param_1[0xcee] = 0;
  param_1[0xced] = 0;
  param_1[0xcf0] = 0;
  param_1[0xcef] = 0;
  param_1[0xcf2] = 0;
  param_1[0xcf1] = 0;
  param_1[0xcf4] = 0;
  param_1[0xcf3] = 0;
  param_1[0xcf6] = 0;
  param_1[0xcf5] = 0;
  param_1[0xcf8] = 0;
  param_1[0xcf7] = 0;
  func_0x000180222c50(param_1 + 0x27c,0,0x4000);
  func_0x000180222c50(param_1 + 0xa7c,0,0xe00);
  param_1[0x268] = 0;
  param_1[0x267] = 0;
  param_1[0x26a] = 0;
  param_1[0x269] = 0;
  param_1[0x26c] = 0;
  param_1[0x26b] = 0;
  param_1[0x26e] = 0;
  param_1[0x26d] = 0;
  param_1[0x270] = 0;
  param_1[0x26f] = 0;
  param_1[0x272] = 0;
  param_1[0x271] = 0;
  param_1[0x274] = 0;
  param_1[0x273] = 0;
  param_1[0x276] = 0;
  param_1[0x275] = 0;
  puVar3 = param_1 + 0x1e7;
  do {
    puVar4 = puVar3 + 4;
    puVar3[1] = 0xffffffffffffffff;
    *puVar3 = 0xffffffffffffffff;
    puVar3[3] = 0xffffffffffffffff;
    puVar3[2] = 0xffffffffffffffff;
    puVar3 = puVar4;
  } while (puVar4 != param_1 + 0x267);
  return param_1;
}

