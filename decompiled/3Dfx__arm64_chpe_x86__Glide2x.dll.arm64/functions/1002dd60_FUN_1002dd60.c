/*
 * FUN_1002dd60 at 1002dd60
 * undefined FUN_1002dd60(void)
 * Address ranges: 1002dd60-1002e05b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002dd60(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong extraout_x1;
  int iVar4;
  undefined4 uVar5;
  
  FUN_1007a7b0(param_1 + 0x2bd8,0,0x578);
  *(undefined2 *)(param_1 + 0x2bc8) = 1;
  *(float *)(param_1 + 0x2bd0) = (float)*(uint *)(param_1 + 0x98);
  *(float *)(param_1 + 0x2bd4) = (float)*(uint *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x295c) = param_2;
  *(undefined4 *)(param_1 + 0x3170) = param_4;
  *(undefined8 *)(param_1 + 0x2b28) = 1;
  *(undefined8 *)(param_1 + 0x2bc0) = 0x101010101010101;
  *(undefined8 *)(param_1 + 0x2a30) = 0;
  *(undefined8 *)(param_1 + 0x2a38) = 0;
  *(undefined4 *)(param_1 + 0x2a7c) = 0xffffffff;
  iVar4 = 0;
  do {
    *(undefined1 *)(param_1 + 0x3153 + iVar4) = 0;
    *(bool *)(param_1 + 0x3156 + iVar4) = iVar4 < *(int *)(param_3 + 0x33);
    puVar1 = (undefined1 *)(param_1 + 0x3159 + iVar4);
    iVar4 = iVar4 + 1;
    *puVar1 = 0;
  } while (iVar4 < 3);
  *(undefined8 *)(param_1 + 0x2a40) = 0x100000000;
  *(undefined8 *)(param_1 + 0x2a48) = 1;
  *(undefined2 *)(param_1 + 0x2a50) = 0xffff;
  *(undefined8 *)(param_1 + 0x2a54) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2a5c) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2a64) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2a6c) = 0x100000001;
  *(undefined8 *)(param_1 + 0x2a74) = 1;
  *(undefined8 *)(param_1 + 0x2a88) = 0;
  *(undefined8 *)(param_1 + 0x2a80) = 0;
  *(undefined8 *)(param_1 + 0x2a98) = 0;
  *(undefined8 *)(param_1 + 0x2a90) = 0;
  *(undefined8 *)(param_1 + 0x2aa8) = 0;
  *(undefined8 *)(param_1 + 0x2aa0) = 0;
  *(undefined8 *)(param_1 + 0x2ab8) = 0;
  *(undefined8 *)(param_1 + 0x2ab0) = 0;
  *(undefined1 *)(param_1 + 0x2abc) = 0xf;
  uVar2 = *(uint *)(param_1 + 0x98);
  uVar3 = *(uint *)(param_1 + 0x9c);
  *(undefined8 *)(param_1 + 0x2ac0) = 0x100000003;
  *(undefined8 *)(param_1 + 0x2ac8) = 1;
  *(undefined8 *)(param_1 + 0x2ad0) = 0;
  *(undefined8 *)(param_1 + 0x2ad8) = 0;
  *(undefined8 *)(param_1 + 0x2ae0) = 0;
  *(undefined8 *)(param_1 + 0x2ae8) = 0;
  *(float *)(param_1 + 0x2af0) = (float)*(uint *)(param_1 + 0xa0);
  *(float *)(param_1 + 0x2af4) = (float)*(uint *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 11000) = 0;
  *(undefined4 *)(param_1 + 0x2afc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2b18) = 0;
  *(uint *)(param_1 + 0x2b20) = uVar2;
  *(uint *)(param_1 + 0x2b24) = uVar3;
  *(undefined8 *)(param_1 + 0x2b08) = *(undefined8 *)(param_1 + 0x2af0);
  *(undefined8 *)(param_1 + 0x2b00) = *(undefined8 *)(param_1 + 0x2ae8);
  *(undefined8 *)(param_1 + 0x2b10) = *(undefined8 *)(param_1 + 11000);
  (*(code *)PTR_FUN_1009d1e4)(param_1 + 0x2984,0,0,uVar2,uVar3);
  uVar5 = 0x3fa66666;
  if (*(char *)(param_3 + 0x50) == '\0') {
    uVar5 = 0x3f800000;
  }
  FUN_10027138(uVar5,uVar5,uVar5,param_1 + 0x1d58);
  FUN_1007a780(param_1 + 0x1158,extraout_x1 & 0xffffffff,0xc00);
  return;
}

