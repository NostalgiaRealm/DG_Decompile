/*
 * FUN_10020920 at 10020920
 * undefined FUN_10020920(void)
 * Address ranges: 10020920-10020ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020920(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined8 local_190;
  ulonglong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  longlong lStack_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(char *)(param_1 + 0x2bc0) != '\0') {
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2a48);
    local_1d0 = *(undefined8 *)(param_1 + 0x2a40);
    local_1b8 = *(undefined8 *)(param_1 + 0x2a58);
    local_1c0 = *(undefined8 *)(param_1 + 0x2a50);
    local_1a0 = *(undefined4 *)(param_1 + 0x2a70);
    uStack_1a8 = (undefined4)*(undefined8 *)(param_1 + 0x2a68);
    uStack_1a4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2a68) >> 0x20);
    local_1b0 = (undefined4)*(undefined8 *)(param_1 + 0x2a60);
    uStack_1ac = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2a60) >> 0x20);
    uVar5 = FUN_100229d0(*(int *)(param_1 + 0x3188) + 0x15f0,&local_1d0);
    *(undefined1 *)(param_1 + 0x2bc0) = 0;
    *(undefined1 *)(param_1 + 0x3236) = 1;
    *(undefined4 *)(param_1 + 0x31e4) = uVar5;
    FUN_10061830(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),
                 *(undefined4 *)(param_1 + 0x2a74));
  }
  if (*(char *)(param_1 + 0x2bc1) != '\0') {
    uStack_138 = 0;
    local_190 = 0x100000000;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_188 = (ulonglong)*(uint *)(param_1 + 0x2a80);
    uStack_180 = *(undefined8 *)(param_1 + 0x2a84);
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_50 = 0;
    uStack_178 = *(undefined8 *)(param_1 + 0x2a8c);
    local_170 = *(undefined8 *)(param_1 + 0x2a94);
    lStack_168 = (ulonglong)*(byte *)(param_1 + 0x2a9c) << 0x20;
    local_160 = (ulonglong)*(uint *)(param_1 + 0x2aa0);
    local_158 = *(undefined8 *)(param_1 + 0x2aa4);
    local_150 = *(undefined8 *)(param_1 + 0x2aac);
    uStack_148 = *(undefined8 *)(param_1 + 0x2ab4);
    if ((*(int *)(param_1 + 0x2a40) == 0) || (bVar4 = true, *(int *)(param_1 + 0x2a44) != 1)) {
      bVar4 = false;
    }
    if ((*(uint *)(param_1 + 0x2bec) == 4) ||
       (bVar3 = true, (*(uint *)(param_1 + 0x2bec) & 0xff0000) != 0)) {
      bVar3 = false;
    }
    bVar6 = 0;
    if (bVar4 || bVar3) {
      bVar6 = 0xf;
    }
    local_140 = (ulonglong)bVar6 << 0x20;
    uVar5 = FUN_10022380(*(int *)(param_1 + 0x3188) + 0x1600,&local_190);
    *(undefined4 *)(param_1 + 0x31d8) = uVar5;
    *(undefined1 *)(param_1 + 0x2bc1) = 0;
    *(undefined1 *)(param_1 + 0x3236) = 1;
  }
  if (*(char *)(param_1 + 0x2bc2) != '\0') {
    uStack_1ac = 0;
    uStack_1a8 = 0;
    local_1d0 = *(undefined8 *)(param_1 + 0x2ac0);
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2ac8);
    local_1c0 = *(undefined8 *)(param_1 + 0x2ad0);
    iVar1 = *(int *)(param_1 + 0x2adc);
    local_1b8 = CONCAT44(*(undefined4 *)(param_1 + 0x2ae0),*(undefined4 *)(param_1 + 0x2ad8));
    local_1b0 = *(undefined4 *)(param_1 + 0x2ae4);
    uVar5 = FUN_100226d8(*(int *)(param_1 + 0x3188) + 0x1620,&local_1d0);
    *(undefined1 *)(param_1 + 0x2bc2) = 0;
    *(undefined1 *)(param_1 + 0x3236) = 1;
    *(undefined4 *)(param_1 + 0x31e0) = uVar5;
    cVar2 = *(char *)(param_1 + 0x3235);
    bVar4 = iVar1 != 0;
    *(bool *)(param_1 + 0x3235) = bVar4;
    *(byte *)(param_1 + 0x3151) = (bool)cVar2 != bVar4 | *(byte *)(param_1 + 0x3151);
  }
  if (*(char *)(param_1 + 0x2bc4) != '\0') {
    *(undefined1 *)(param_1 + 0x2bc4) = 0;
  }
  if ((*(char *)(param_1 + 0x2bc3) != '\0') || (param_2 != '\0')) {
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2af0);
    local_1d0 = *(undefined8 *)(param_1 + 0x2ae8);
    local_1c0 = *(undefined8 *)(param_1 + 11000);
    FUN_10061ae0(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),1,&local_1d0);
    *(char *)(param_1 + 0x2bc3) = '\0';
  }
  if (*(char *)(param_1 + 0x2bc5) != '\0') {
    FUN_1002e810(param_1);
    *(undefined1 *)(param_1 + 0x2bc5) = 0;
  }
  return;
}

