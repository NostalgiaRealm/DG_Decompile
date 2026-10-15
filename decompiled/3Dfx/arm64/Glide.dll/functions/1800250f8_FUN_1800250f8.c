/*
 * FUN_1800250f8 at 1800250f8
 * undefined __cdecl FUN_1800250f8(longlong param_1, undefined8 param_2, longlong param_3, undefined8 param_4)
 * Address ranges: 1800250f8-1800252df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800250f8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  
  FUN_1800611b0((undefined1 *)(param_1 + 0x2bf8),0,0x578);
  *(undefined8 *)(param_1 + 0x2978) = param_2;
  *(undefined8 *)(param_1 + 0x31a8) = param_4;
  *(undefined8 *)(param_1 + 0x2a50) = 0;
  *(undefined8 *)(param_1 + 0x2a58) = 0;
  *(undefined8 *)(param_1 + 0x2be0) = 0x101010101010101;
  *(undefined4 *)(param_1 + 0x2a9c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2b48) = 1;
  uVar4 = 0;
  *(undefined2 *)(param_1 + 0x2be8) = 1;
  *(float *)(param_1 + 0x2bf0) = (float)*(uint *)(param_1 + 0xa8);
  *(float *)(param_1 + 0x2bf4) = (float)*(uint *)(param_1 + 0xac);
  do {
    *(undefined1 *)(param_1 + 0x3173 + uVar4) = 0;
    iVar2 = *(int *)(param_3 + 0x33);
    *(undefined1 *)(param_1 + 0x3179 + uVar4) = 0;
    *(bool *)(param_1 + 0x3176 + uVar4) = (int)uVar4 < iVar2;
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar1;
  } while ((int)uVar1 < 3);
  *(undefined8 *)(param_1 + 0x2a60) = 0x100000000;
  *(undefined8 *)(param_1 + 0x2a68) = 1;
  *(undefined2 *)(param_1 + 0x2a70) = 0xffff;
  *(undefined8 *)(param_1 + 0x2a74) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2a7c) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2a84) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2a8c) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2a94) = 1;
  *(undefined8 *)(param_1 + 0x2aa8) = 0;
  *(undefined8 *)(param_1 + 0x2aa0) = 0;
  *(undefined8 *)(param_1 + 0x2ab8) = 0;
  *(undefined8 *)(param_1 + 0x2ab0) = 0;
  *(undefined8 *)(param_1 + 0x2ac8) = 0;
  *(undefined8 *)(param_1 + 0x2ac0) = 0;
  *(undefined8 *)(param_1 + 0x2ad8) = 0;
  *(undefined8 *)(param_1 + 0x2ad0) = 0;
  *(undefined1 *)(param_1 + 0x2adc) = 0xf;
  *(undefined8 *)(param_1 + 0x2ae0) = 0x100000003;
  *(undefined8 *)(param_1 + 0x2ae8) = 1;
  *(undefined4 *)(param_1 + 0x2b1c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2b08) = 0;
  *(undefined4 *)(param_1 + 0x2b18) = 0;
  *(undefined8 *)(param_1 + 0x2af0) = 0;
  *(undefined8 *)(param_1 + 11000) = 0;
  *(undefined8 *)(param_1 + 0x2b00) = 0;
  *(undefined8 *)(param_1 + 0x2b38) = 0;
  *(int *)(param_1 + 0x2b40) = *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x2b44) = *(int *)(param_1 + 0xac);
  *(float *)(param_1 + 0x2b10) = (float)*(uint *)(param_1 + 0xb0);
  *(float *)(param_1 + 0x2b14) = (float)*(uint *)(param_1 + 0xb4);
  *(undefined8 *)(param_1 + 0x2b28) = *(undefined8 *)(param_1 + 0x2b10);
  *(undefined8 *)(param_1 + 0x2b20) = *(undefined8 *)(param_1 + 0x2b08);
  *(undefined8 *)(param_1 + 0x2b30) = *(undefined8 *)(param_1 + 0x2b18);
  SetRect((LPRECT)(param_1 + 0x29a4),0,0,*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac));
  fVar5 = 1.3;
  lVar3 = 0x1d70;
  if (*(char *)(param_3 + 0x50) == '\0') {
    fVar5 = 1.0;
  }
  FUN_180020178(fVar5,ZEXT416((uint)fVar5),fVar5,(undefined8 *)(param_1 + 0x1d70));
  thunk_FUN_180001218((undefined8 *)(param_1 + 0x1170),(undefined8 *)(param_1 + lVar3),0xc00);
  return;
}

