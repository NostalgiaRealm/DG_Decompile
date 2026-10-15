/*
 * FUN_10017218 at 10017218
 * undefined FUN_10017218(void)
 * Address ranges: 10017218-10017557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017218(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  ulonglong extraout_x1;
  int iVar4;
  undefined4 uVar5;
  
  FUN_10083b70(param_1 + 0x2dc8,0,0x888);
  puVar1 = (uint *)(param_1 + 0x98);
  puVar2 = (uint *)(param_1 + 0x9c);
  *(undefined2 *)(param_1 + 0x2db0) = 1;
  *(float *)(param_1 + 0x2dc0) = (float)*puVar1;
  *(float *)(param_1 + 0x2dc4) = (float)*puVar2;
  *(undefined4 *)(param_1 + 0x2b14) = param_2;
  *(undefined4 *)(param_1 + 0x3670) = param_4;
  *(undefined8 *)(param_1 + 0x2d08) = 1;
  *(undefined8 *)(param_1 + 0x2da8) = 0x101010101010101;
  *(undefined8 *)(param_1 + 0x2c10) = 0;
  *(undefined8 *)(param_1 + 0x2c18) = 0;
  *(undefined4 *)(param_1 + 0x2c5c) = 0xffffffff;
  iVar4 = 0;
  do {
    *(undefined1 *)(param_1 + 0x3653 + iVar4) = 0;
    *(bool *)(param_1 + 0x3656 + iVar4) = iVar4 < *(int *)(param_3 + 0x33);
    puVar3 = (undefined1 *)(param_1 + 0x3659 + iVar4);
    iVar4 = iVar4 + 1;
    *puVar3 = 0;
  } while (iVar4 < 3);
  *(undefined8 *)(param_1 + 0x2c20) = 0x100000000;
  *(undefined8 *)(param_1 + 0x2c28) = 1;
  *(undefined2 *)(param_1 + 0x2c30) = 0xffff;
  *(undefined8 *)(param_1 + 0x2c34) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2c3c) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2c44) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2c4c) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2c54) = 0;
  *(uint *)(param_1 + 0x2e6c) = (uint)*(byte *)(*(int *)(param_1 + 0xd4) + 0x100a0190);
  *(undefined8 *)(param_1 + 0x2c68) = 0;
  *(undefined8 *)(param_1 + 0x2c60) = 0;
  *(undefined8 *)(param_1 + 0x2c78) = 0;
  *(undefined8 *)(param_1 + 0x2c70) = 0;
  *(undefined8 *)(param_1 + 0x2c88) = 0;
  *(undefined8 *)(param_1 + 0x2c80) = 0;
  *(undefined8 *)(param_1 + 0x2c98) = 0;
  *(undefined8 *)(param_1 + 0x2c90) = 0;
  *(undefined1 *)(param_1 + 0x2c9c) = 0xf;
  *(undefined8 *)(param_1 + 0x2ca0) = 0x100000003;
  *(undefined8 *)(param_1 + 0x2ca8) = 1;
  *(undefined8 *)(param_1 + 0x2cb0) = 0;
  *(undefined8 *)(param_1 + 0x2cb8) = 0;
  *(undefined8 *)(param_1 + 0x2cc0) = 0;
  *(undefined8 *)(param_1 + 0x2cc8) = 0;
  *(float *)(param_1 + 0x2cd0) = (float)*(uint *)(param_1 + 0xa0);
  *(float *)(param_1 + 0x2cd4) = (float)*(uint *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x2cd8) = 0;
  *(undefined4 *)(param_1 + 0x2cdc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2cf8) = 0;
  *(uint *)(param_1 + 0x2d00) = *puVar1;
  *(uint *)(param_1 + 0x2d04) = *puVar2;
  FUN_10010310(param_1,0,0,*puVar1,*puVar2);
  *(undefined4 *)(param_1 + 0x2cf0) = 0;
  *(undefined4 *)(param_1 + 0x2cf4) = 0x3f800000;
  (*(code *)PTR_FUN_100a81e8)(param_1 + 0x2b3c,0,0,*puVar1,*puVar2);
  uVar5 = 0x3fa66666;
  if (*(char *)(param_3 + 0x50) == '\0') {
    uVar5 = 0x3f800000;
  }
  FUN_10010ed8(uVar5,uVar5,uVar5,param_1 + 0x1f10);
  FUN_10083b40(param_1 + 0x1310,extraout_x1 & 0xffffffff,0xc00);
  return;
}

