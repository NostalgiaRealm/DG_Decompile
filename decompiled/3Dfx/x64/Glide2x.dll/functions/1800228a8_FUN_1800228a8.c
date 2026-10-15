/*
 * FUN_1800228a8 at 1800228a8
 * undefined __fastcall FUN_1800228a8(longlong param_1, undefined8 param_2, longlong param_3, undefined8 param_4)
 * Address ranges: 1800228a8-180022aea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800228a8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  float fVar5;
  
  FUN_18005f374((undefined1 *)(param_1 + 0x2bf8),0,0x578);
  *(undefined8 *)(param_1 + 0x2978) = param_2;
  *(undefined8 *)(param_1 + 0x31a8) = param_4;
  *(undefined4 *)(param_1 + 0x2be0) = 0x1010101;
  *(undefined8 *)(param_1 + 0x2b48) = 1;
  *(undefined4 *)(param_1 + 0x2be4) = 0x1010101;
  *(undefined2 *)(param_1 + 0x2be8) = 1;
  *(undefined8 *)(param_1 + 0x2a50) = 0;
  *(undefined8 *)(param_1 + 0x2a58) = 0;
  *(float *)(param_1 + 0x2bf0) = (float)*(uint *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x2a9c) = 0xffffffff;
  *(float *)(param_1 + 0x2bf4) = (float)*(uint *)(param_1 + 0xac);
  uVar3 = 0;
  do {
    *(undefined1 *)(param_1 + 0x3173 + uVar3) = 0;
    iVar1 = *(int *)(param_3 + 0x33);
    *(undefined1 *)(param_1 + 0x3179 + uVar3) = 0;
    uVar2 = (int)uVar3 + 1;
    *(bool *)(param_1 + 0x3176 + uVar3) = (int)uVar3 < iVar1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 3);
  *(undefined4 *)(param_1 + 0x2a60) = 0;
  *(undefined4 *)(param_1 + 0x2a64) = 1;
  *(undefined8 *)(param_1 + 0x2a68) = 1;
  *(undefined2 *)(param_1 + 0x2a70) = 0xffff;
  *(undefined4 *)(param_1 + 0x2a78) = 1;
  *(undefined4 *)(param_1 + 0x2a74) = 1;
  *(undefined4 *)(param_1 + 0x2a7c) = 1;
  *(undefined4 *)(param_1 + 0x2a80) = 1;
  *(undefined4 *)(param_1 + 0x2a88) = 1;
  *(undefined4 *)(param_1 + 0x2a84) = 1;
  *(undefined4 *)(param_1 + 0x2a8c) = 1;
  *(undefined4 *)(param_1 + 0x2a90) = 1;
  *(undefined8 *)(param_1 + 0x2a94) = 1;
  FUN_18005f374((undefined1 *)(param_1 + 0x2aa0),0,0x40);
  *(undefined1 *)(param_1 + 0x2adc) = 0xf;
  *(undefined8 *)(param_1 + 0x2b08) = 0;
  *(undefined4 *)(param_1 + 0x2b18) = 0;
  *(undefined4 *)(param_1 + 0x2b1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2ae0) = 3;
  *(undefined4 *)(param_1 + 0x2ae4) = 1;
  *(undefined8 *)(param_1 + 0x2ae8) = 1;
  *(undefined8 *)(param_1 + 0x2af0) = 0;
  *(float *)(param_1 + 0x2b10) = (float)*(uint *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 11000) = 0;
  *(float *)(param_1 + 0x2b14) = (float)*(uint *)(param_1 + 0xb4);
  *(undefined8 *)(param_1 + 0x2b00) = 0;
  *(undefined4 *)(param_1 + 0x2b20) = *(undefined4 *)(param_1 + 0x2b08);
  *(undefined4 *)(param_1 + 0x2b24) = *(undefined4 *)(param_1 + 0x2b0c);
  *(undefined4 *)(param_1 + 0x2b28) = *(undefined4 *)(param_1 + 0x2b10);
  *(undefined4 *)(param_1 + 0x2b2c) = *(undefined4 *)(param_1 + 0x2b14);
  *(undefined8 *)(param_1 + 0x2b38) = 0;
  *(undefined8 *)(param_1 + 0x2b30) = *(undefined8 *)(param_1 + 0x2b18);
  *(int *)(param_1 + 0x2b40) = *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x2b44) = *(int *)(param_1 + 0xac);
  SetRect((LPRECT)(param_1 + 0x29a4),0,0,*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac));
  if (*(char *)(param_3 + 0x50) == '\0') {
    fVar5 = 1.0;
  }
  else {
    fVar5 = 1.3;
  }
  puVar4 = (undefined8 *)(param_1 + 0x1d70);
  FUN_18001e25c((undefined4 *)puVar4,fVar5,fVar5,fVar5);
  FUN_18005ed10((undefined8 *)(param_1 + 0x1170),puVar4,0xc00);
  return;
}

