/*
 * FUN_18001e3c0 at 18001e3c0
 * undefined4 * __fastcall FUN_18001e3c0(undefined4 * param_1)
 * Address ranges: 18001e3c0-18001e580
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18001e3c0(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *param_1 = 0x40201;
  *(undefined2 *)(param_1 + 1) = 4;
  *(undefined4 *)((longlong)param_1 + 6) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0x70200;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b) = 1;
  *(undefined4 *)((longlong)param_1 + 0x43) = 0;
  *(undefined2 *)((longlong)param_1 + 0x47) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d) = 0xff00;
  *(undefined2 *)((longlong)param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0x803;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0x2010803;
  lVar2 = lVar3;
  do {
    lVar1 = lVar2 * 0x41;
    lVar2 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x71) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x82) = 0;
    *(undefined1 *)((longlong)param_1 + lVar1 + 0x81) = 0;
    *(undefined2 *)((longlong)param_1 + lVar1 + 0x8a) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x8c) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xa8) = 3;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xa0) = 8;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xa4) = 8;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x75) = 0x10001;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x79) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xac) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x98) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x94) = 0;
    *(undefined2 *)((longlong)param_1 + lVar1 + 0xb0) = 3;
  } while (lVar2 != 3);
  *(undefined4 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 10) = 0;
  SetRectEmpty((LPRECT)((longlong)param_1 + 0x2a));
  param_1[0x4e] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_18005f814((undefined1 *)(param_1 + 0x4f),0,0x80);
  FUN_18005f814((undefined1 *)(param_1 + 0x420),0,0xc00);
  FUN_18005f814((undefined1 *)(param_1 + 0x720),0,0xc00);
  do {
    *(undefined8 *)(param_1 + lVar3 * 0x13a + 0x72) = 0;
    FUN_18005f814((undefined1 *)(param_1 + lVar3 * 0x13a + 0x74),0,0x70);
    FUN_18005f814((undefined1 *)(param_1 + lVar3 * 0x13a + 0x90),0,0x70);
    FUN_18005f814((undefined1 *)(param_1 + lVar3 * 0x13a + 0xac),0,0x400);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  return param_1;
}

