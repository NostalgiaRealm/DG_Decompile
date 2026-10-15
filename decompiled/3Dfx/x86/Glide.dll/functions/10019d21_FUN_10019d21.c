/*
 * FUN_10019d21 at 10019d21
 * undefined4 * __fastcall FUN_10019d21(undefined4 * param_1)
 * Address ranges: 10019d21-10019e51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10019d21(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_1 = 0x40201;
  *(undefined2 *)(param_1 + 1) = 4;
  *(undefined4 *)((int)param_1 + 6) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0x70200;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3b) = 1;
  *(undefined4 *)((int)param_1 + 0x3f) = 0;
  *(undefined4 *)((int)param_1 + 0x43) = 0;
  *(undefined2 *)((int)param_1 + 0x47) = 0x100;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  *(undefined4 *)((int)param_1 + 0x4d) = 0xff00;
  *(undefined2 *)((int)param_1 + 0x51) = 0;
  *(undefined4 *)((int)param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((int)param_1 + 0x61) = 0x803;
  *(undefined4 *)((int)param_1 + 0x65) = 0;
  *(undefined4 *)((int)param_1 + 0x69) = 0x2010803;
  *(undefined4 *)((int)param_1 + 0x6d) = 0;
  do {
    iVar1 = uVar2 * 0x41;
    uVar2 = uVar2 + 1;
    *(undefined4 *)((int)param_1 + iVar1 + 0x71) = 0;
    *(undefined1 *)((int)param_1 + iVar1 + 0x81) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x82) = 0;
    *(undefined2 *)((int)param_1 + iVar1 + 0x8a) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xa8) = 3;
    *(undefined4 *)((int)param_1 + iVar1 + 0xa0) = 8;
    *(undefined4 *)((int)param_1 + iVar1 + 0xa4) = 8;
    *(undefined4 *)((int)param_1 + iVar1 + 0x75) = 0x10001;
    *(undefined4 *)((int)param_1 + iVar1 + 0x7d) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x79) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xac) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x86) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8c) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar1 + 0x9c) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x98) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x94) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x90) = 0;
    *(undefined2 *)((int)param_1 + iVar1 + 0xb0) = 3;
  } while (uVar2 < 3);
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined2 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x57) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  SetRectEmpty((LPRECT)((int)param_1 + 0x2a));
  return param_1;
}

