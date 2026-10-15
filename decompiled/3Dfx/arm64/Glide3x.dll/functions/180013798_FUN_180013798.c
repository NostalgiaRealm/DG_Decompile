/*
 * FUN_180013798 at 180013798
 * undefined __cdecl FUN_180013798(longlong param_1, undefined8 param_2, longlong param_3, undefined8 param_4)
 * Address ranges: 180013798-180013977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180013798(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  
  FUN_180063e98((undefined1 *)(param_1 + 0x2c98),0,0x658);
  *(undefined8 *)(param_1 + 0x29f0) = param_2;
  *(undefined8 *)(param_1 + 0x3328) = param_4;
  *(undefined8 *)(param_1 + 0x2ae8) = 0;
  *(undefined8 *)(param_1 + 0x2af0) = 0;
  *(undefined8 *)(param_1 + 0x2c78) = 0x101010101010101;
  *(undefined4 *)(param_1 + 0x2b34) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2be0) = 1;
  uVar4 = 0;
  *(undefined2 *)(param_1 + 0x2c80) = 1;
  *(float *)(param_1 + 0x2c90) = (float)*(uint *)(param_1 + 0xa8);
  *(float *)(param_1 + 0x2c94) = (float)*(uint *)(param_1 + 0xac);
  do {
    *(undefined1 *)(param_1 + 0x32f3 + uVar4) = 0;
    iVar2 = *(int *)(param_3 + 0x33);
    *(undefined1 *)(param_1 + 0x32f9 + uVar4) = 0;
    *(bool *)(param_1 + 0x32f6 + uVar4) = (int)uVar4 < iVar2;
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar1;
  } while ((int)uVar1 < 3);
  *(undefined8 *)(param_1 + 11000) = 0x100000000;
  *(undefined8 *)(param_1 + 0x2b00) = 1;
  *(undefined2 *)(param_1 + 0x2b08) = 0xffff;
  *(undefined8 *)(param_1 + 0x2b0c) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2b14) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2b1c) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2b24) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2b2c) = 1;
  *(undefined8 *)(param_1 + 0x2b40) = 0;
  *(undefined8 *)(param_1 + 0x2b38) = 0;
  *(undefined8 *)(param_1 + 0x2b50) = 0;
  *(undefined8 *)(param_1 + 0x2b48) = 0;
  *(undefined8 *)(param_1 + 0x2b60) = 0;
  *(undefined8 *)(param_1 + 0x2b58) = 0;
  *(undefined8 *)(param_1 + 0x2b70) = 0;
  *(undefined8 *)(param_1 + 0x2b68) = 0;
  *(undefined1 *)(param_1 + 0x2b74) = 0xf;
  *(undefined8 *)(param_1 + 0x2b78) = 0x100000003;
  *(undefined8 *)(param_1 + 0x2b80) = 1;
  *(undefined4 *)(param_1 + 0x2bb4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2b88) = 0;
  *(undefined8 *)(param_1 + 0x2b90) = 0;
  *(undefined8 *)(param_1 + 0x2b98) = 0;
  *(undefined8 *)(param_1 + 0x2ba0) = 0;
  *(undefined4 *)(param_1 + 0x2bb0) = 0;
  *(undefined8 *)(param_1 + 0x2bd0) = 0;
  *(int *)(param_1 + 0x2bd8) = *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x2bdc) = *(int *)(param_1 + 0xac);
  *(float *)(param_1 + 0x2ba8) = (float)*(uint *)(param_1 + 0xb0);
  *(float *)(param_1 + 0x2bac) = (float)*(uint *)(param_1 + 0xb4);
  FUN_18000c960(param_1,0,0,*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0x2bcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2bc8) = 0;
  SetRect((LPRECT)(param_1 + 0x2a1c),0,0,*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac));
  fVar5 = 1.3;
  lVar3 = 0x1de8;
  if (*(char *)(param_3 + 0x50) == '\0') {
    fVar5 = 1.0;
  }
  FUN_18000d500(fVar5,ZEXT416((uint)fVar5),fVar5,(undefined8 *)(param_1 + 0x1de8));
  thunk_FUN_1800010d8((undefined8 *)(param_1 + 0x11e8),(undefined8 *)(param_1 + lVar3),0xc00);
  return;
}

