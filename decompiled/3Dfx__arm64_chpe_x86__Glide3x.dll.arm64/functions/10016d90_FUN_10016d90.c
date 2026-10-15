/*
 * FUN_10016d90 at 10016d90
 * undefined FUN_10016d90(void)
 * Address ranges: 10016d90-100170ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016d90(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  ulonglong extraout_x1;
  int iVar4;
  undefined4 uVar5;
  
  FUN_1007e4d0(param_1 + 0x2c78,0,0x658);
  puVar1 = (uint *)(param_1 + 0x98);
  puVar2 = (uint *)(param_1 + 0x9c);
  *(undefined2 *)(param_1 + 0x2c68) = 1;
  *(float *)(param_1 + 0x2c70) = (float)*puVar1;
  *(float *)(param_1 + 0x2c74) = (float)*puVar2;
  *(undefined4 *)(param_1 + 0x29d8) = param_2;
  *(undefined4 *)(param_1 + 0x32f0) = param_4;
  *(undefined8 *)(param_1 + 0x2bc8) = 1;
  *(undefined8 *)(param_1 + 0x2c60) = 0x101010101010101;
  *(undefined8 *)(param_1 + 0x2ad0) = 0;
  *(undefined8 *)(param_1 + 0x2ad8) = 0;
  *(undefined4 *)(param_1 + 0x2b1c) = 0xffffffff;
  iVar4 = 0;
  do {
    *(undefined1 *)(param_1 + 0x32d3 + iVar4) = 0;
    *(bool *)(param_1 + 0x32d6 + iVar4) = iVar4 < *(int *)(param_3 + 0x33);
    puVar3 = (undefined1 *)(param_1 + 0x32d9 + iVar4);
    iVar4 = iVar4 + 1;
    *puVar3 = 0;
  } while (iVar4 < 3);
  *(undefined8 *)(param_1 + 0x2ae0) = 0x100000000;
  *(undefined8 *)(param_1 + 0x2ae8) = 1;
  *(undefined2 *)(param_1 + 0x2af0) = 0xffff;
  *(undefined8 *)(param_1 + 0x2af4) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2afc) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2b04) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2b0c) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2b14) = 1;
  *(undefined8 *)(param_1 + 0x2b28) = 0;
  *(undefined8 *)(param_1 + 0x2b20) = 0;
  *(undefined8 *)(param_1 + 0x2b38) = 0;
  *(undefined8 *)(param_1 + 0x2b30) = 0;
  *(undefined8 *)(param_1 + 0x2b48) = 0;
  *(undefined8 *)(param_1 + 0x2b40) = 0;
  *(undefined8 *)(param_1 + 0x2b58) = 0;
  *(undefined8 *)(param_1 + 0x2b50) = 0;
  *(undefined1 *)(param_1 + 0x2b5c) = 0xf;
  *(undefined8 *)(param_1 + 0x2b60) = 0x100000003;
  *(undefined8 *)(param_1 + 0x2b68) = 1;
  *(undefined8 *)(param_1 + 0x2b70) = 0;
  *(undefined8 *)(param_1 + 0x2b78) = 0;
  *(undefined8 *)(param_1 + 0x2b80) = 0;
  *(undefined8 *)(param_1 + 0x2b88) = 0;
  *(float *)(param_1 + 0x2b90) = (float)*(uint *)(param_1 + 0xa0);
  *(float *)(param_1 + 0x2b94) = (float)*(uint *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x2b98) = 0;
  *(undefined4 *)(param_1 + 0x2b9c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2bb8) = 0;
  *(uint *)(param_1 + 0x2bc0) = *puVar1;
  *(uint *)(param_1 + 0x2bc4) = *puVar2;
  FUN_1000e470(param_1,0,0,*puVar1,*puVar2);
  *(undefined4 *)(param_1 + 0x2bb0) = 0;
  *(undefined4 *)(param_1 + 0x2bb4) = 0x3f800000;
  (*(code *)PTR_FUN_100a01e8)(param_1 + 0x2a00,0,0,*puVar1,*puVar2);
  uVar5 = 0x3fa66666;
  if (*(char *)(param_3 + 0x50) == '\0') {
    uVar5 = 0x3f800000;
  }
  FUN_1000ef50(uVar5,uVar5,uVar5,param_1 + 0x1dd4);
  FUN_1007e4a0(param_1 + 0x11d4,extraout_x1 & 0xffffffff,0xc00);
  return;
}

