/*
 * FUN_1800113c8 at 1800113c8
 * undefined __fastcall FUN_1800113c8(longlong param_1, undefined8 param_2, longlong param_3, undefined8 param_4)
 * Address ranges: 1800113c8-18001161a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800113c8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  float fVar5;
  
  FUN_180060f94((undefined1 *)(param_1 + 0x2c98),0,0x658);
  *(undefined8 *)(param_1 + 0x29f0) = param_2;
  *(undefined8 *)(param_1 + 0x3328) = param_4;
  *(undefined8 *)(param_1 + 0x2be0) = 1;
  *(undefined4 *)(param_1 + 0x2c78) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2c7c) = 0x1010101;
  *(undefined2 *)(param_1 + 0x2c80) = 1;
  *(undefined8 *)(param_1 + 0x2ae8) = 0;
  *(undefined8 *)(param_1 + 0x2af0) = 0;
  *(float *)(param_1 + 0x2c90) = (float)*(uint *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x2b34) = 0xffffffff;
  *(float *)(param_1 + 0x2c94) = (float)*(uint *)(param_1 + 0xac);
  uVar3 = 0;
  do {
    *(undefined1 *)(param_1 + 0x32f3 + uVar3) = 0;
    iVar1 = *(int *)(param_3 + 0x33);
    *(undefined1 *)(param_1 + 0x32f9 + uVar3) = 0;
    uVar2 = (int)uVar3 + 1;
    *(bool *)(param_1 + 0x32f6 + uVar3) = (int)uVar3 < iVar1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 3);
  *(undefined4 *)(param_1 + 11000) = 0;
  *(undefined4 *)(param_1 + 0x2afc) = 1;
  *(undefined8 *)(param_1 + 0x2b00) = 1;
  *(undefined2 *)(param_1 + 0x2b08) = 0xffff;
  *(undefined4 *)(param_1 + 0x2b10) = 1;
  *(undefined4 *)(param_1 + 0x2b0c) = 1;
  *(undefined4 *)(param_1 + 0x2b14) = 1;
  *(undefined4 *)(param_1 + 0x2b18) = 1;
  *(undefined4 *)(param_1 + 0x2b20) = 1;
  *(undefined4 *)(param_1 + 0x2b1c) = 1;
  *(undefined4 *)(param_1 + 0x2b24) = 1;
  *(undefined4 *)(param_1 + 0x2b28) = 1;
  *(undefined8 *)(param_1 + 0x2b2c) = 1;
  FUN_180060f94((undefined1 *)(param_1 + 0x2b38),0,0x40);
  *(undefined1 *)(param_1 + 0x2b74) = 0xf;
  *(undefined4 *)(param_1 + 0x2b7c) = 1;
  *(undefined8 *)(param_1 + 0x2b80) = 1;
  *(undefined4 *)(param_1 + 0x2b78) = 3;
  *(undefined8 *)(param_1 + 0x2b88) = 0;
  *(undefined8 *)(param_1 + 0x2b90) = 0;
  *(undefined8 *)(param_1 + 0x2b98) = 0;
  *(undefined8 *)(param_1 + 0x2ba0) = 0;
  *(float *)(param_1 + 0x2ba8) = (float)*(uint *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x2bb0) = 0;
  *(float *)(param_1 + 0x2bac) = (float)*(uint *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x2bb4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2bd0) = 0;
  *(int *)(param_1 + 0x2bd8) = *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x2bdc) = *(int *)(param_1 + 0xac);
  FUN_18000a4c8(param_1,0,0,*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0x2bc8) = 0;
  *(undefined4 *)(param_1 + 0x2bcc) = 0x3f800000;
  SetRect((LPRECT)(param_1 + 0x2a1c),0,0,*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac));
  if (*(char *)(param_3 + 0x50) == '\0') {
    fVar5 = 1.0;
  }
  else {
    fVar5 = 1.3;
  }
  puVar4 = (undefined8 *)(param_1 + 0x1de8);
  FUN_18000ada8((undefined4 *)puVar4,fVar5,fVar5,fVar5);
  FUN_180061330((undefined8 *)(param_1 + 0x11e8),puVar4,0xc00);
  return;
}

