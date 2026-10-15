/*
 * FUN_18001f090 at 18001f090
 * undefined4 * __cdecl FUN_18001f090(undefined4 * param_1)
 * Address ranges: 18001f090-18001f257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18001f090(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *param_1 = 0x40201;
  *(undefined2 *)(param_1 + 1) = 4;
  *(undefined4 *)((longlong)param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0x70200;
  *(undefined8 *)((longlong)param_1 + 0x3b) = 1;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47) = 0xff00000000000100;
  *(undefined8 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0x803;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0x2010803;
  lVar2 = 0;
  do {
    lVar1 = lVar2 * 0x41;
    lVar2 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x86) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x82) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xa0) = 0x800000008;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xa8) = 3;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x8c) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x71) = 0x1000100000000;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x79) = 0;
    *(undefined1 *)((longlong)param_1 + lVar1 + 0x81) = 0;
    *(undefined2 *)((longlong)param_1 + lVar1 + 0x8a) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x90) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x98) = 0;
    *(undefined2 *)((longlong)param_1 + lVar1 + 0xb0) = 3;
  } while (lVar2 != 3);
  *(undefined4 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *(undefined2 *)((longlong)param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0;
  SetRectEmpty((LPRECT)((longlong)param_1 + 0x2a));
  param_1[0x4e] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x51) = 0;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)(param_1 + 0x55) = 0;
  *(undefined8 *)(param_1 + 0x53) = 0;
  *(undefined8 *)(param_1 + 0x59) = 0;
  *(undefined8 *)(param_1 + 0x57) = 0;
  *(undefined8 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)(param_1 + 0x61) = 0;
  *(undefined8 *)(param_1 + 0x5f) = 0;
  *(undefined8 *)(param_1 + 0x65) = 0;
  *(undefined8 *)(param_1 + 99) = 0;
  *(undefined8 *)(param_1 + 0x69) = 0;
  *(undefined8 *)(param_1 + 0x67) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)(param_1 + 0x6b) = 0;
  FUN_180060360((undefined1 *)(param_1 + 0x420),0,0xc00);
  FUN_180060360((undefined1 *)(param_1 + 0x720),0,0xc00);
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2 * 0x13a + 0x72) = 0;
    puVar3 = (undefined8 *)(param_1 + lVar2 * 0x13a + 0x74);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3 = (undefined8 *)(param_1 + lVar2 * 0x13a + 0x90);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    FUN_180060360((undefined1 *)(param_1 + lVar2 * 0x13a + 0xac),0,0x400);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return param_1;
}

