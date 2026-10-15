/*
 * FUN_18000a9d4 at 18000a9d4
 * undefined4 * __fastcall FUN_18000a9d4(undefined4 * param_1)
 * Address ranges: 18000a9d4-18000abc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18000a9d4(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *param_1 = 0x40201;
  *(undefined8 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined2 *)((longlong)param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ae) = 0;
  *(undefined2 *)(param_1 + 1) = 4;
  *(undefined4 *)((longlong)param_1 + 6) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0x70200;
  *(undefined8 *)((longlong)param_1 + 0x3b) = 1;
  *(undefined2 *)((longlong)param_1 + 0x47) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x4d) = 0xff00;
  *(undefined8 *)((longlong)param_1 + 0x66) = 0x803;
  *(undefined8 *)((longlong)param_1 + 0x6e) = 0x2010803;
  lVar2 = lVar3;
  do {
    lVar1 = lVar2 * 0x55;
    lVar2 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xaf) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xc0) = 0;
    *(undefined1 *)((longlong)param_1 + lVar1 + 0xbf) = 0;
    *(undefined2 *)((longlong)param_1 + lVar1 + 200) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xca) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xf6) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xee) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xd2) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xda) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xb3) = 0x10001;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xb7) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xfe) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xe6) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xe2) = 0;
    *(undefined2 *)((longlong)param_1 + lVar1 + 0x102) = 3;
  } while (lVar2 != 3);
  *(undefined8 *)((longlong)param_1 + 0x76) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa6) = 0;
  *(undefined1 *)((longlong)param_1 + 0xae) = 0;
  *(undefined2 *)((longlong)param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 10) = 0;
  SetRectEmpty((LPRECT)((longlong)param_1 + 0x2a));
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  FUN_180060f94((undefined1 *)(param_1 + 0x6e),0,0x80);
  FUN_180060f94((undefined1 *)(param_1 + 0x43e),0,0xc00);
  FUN_180060f94((undefined1 *)(param_1 + 0x73e),0,0xc00);
  do {
    *(undefined8 *)(param_1 + lVar3 * 0x13a + 0x90) = 0;
    FUN_180060f94((undefined1 *)(param_1 + lVar3 * 0x13a + 0x92),0,0x70);
    FUN_180060f94((undefined1 *)(param_1 + lVar3 * 0x13a + 0xae),0,0x70);
    FUN_180060f94((undefined1 *)(param_1 + lVar3 * 0x13a + 0xca),0,0x400);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  return param_1;
}

