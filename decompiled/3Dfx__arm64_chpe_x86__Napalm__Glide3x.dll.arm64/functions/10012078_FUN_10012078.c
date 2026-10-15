/*
 * FUN_10012078 at 10012078
 * undefined FUN_10012078(void)
 * Address ranges: 10012078-10012443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012078(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
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
  
  if (*(char *)(param_1 + 0x2da8) != '\0') {
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2c28);
    local_1d0 = *(undefined8 *)(param_1 + 0x2c20);
    local_1b8 = *(undefined8 *)(param_1 + 0x2c38);
    local_1c0 = *(undefined8 *)(param_1 + 0x2c30);
    local_1a0 = *(undefined4 *)(param_1 + 0x2c50);
    uStack_1a8 = (undefined4)*(undefined8 *)(param_1 + 0x2c48);
    uStack_1a4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2c48) >> 0x20);
    local_1b0 = (undefined4)*(undefined8 *)(param_1 + 0x2c40);
    uStack_1ac = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2c40) >> 0x20);
    uVar6 = FUN_100131c0(*(int *)(param_1 + 0x3688) + 0x15f0,&local_1d0);
    *(undefined1 *)(param_1 + 0x2da8) = 0;
    *(undefined1 *)(param_1 + 0x3736) = 1;
    *(undefined4 *)(param_1 + 0x36e4) = uVar6;
    FUN_1006ab60(*(undefined4 *)(*(int *)(param_1 + 0x3688) + 0x1304),
                 *(undefined4 *)(param_1 + 0x2c54));
  }
  if (*(char *)(param_1 + 0x2da9) != '\0') {
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
    uStack_188 = (ulonglong)*(uint *)(param_1 + 0x2c60);
    uStack_180 = *(undefined8 *)(param_1 + 0x2c64);
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
    uStack_178 = *(undefined8 *)(param_1 + 0x2c6c);
    local_170 = *(undefined8 *)(param_1 + 0x2c74);
    lStack_168 = (ulonglong)*(byte *)(param_1 + 0x2c7c) << 0x20;
    local_160 = (ulonglong)*(uint *)(param_1 + 0x2c80);
    local_158 = *(undefined8 *)(param_1 + 0x2c84);
    local_150 = *(undefined8 *)(param_1 + 0x2c8c);
    uStack_148 = *(undefined8 *)(param_1 + 0x2c94);
    if ((*(int *)(param_1 + 0x2c20) == 0) || (bVar4 = true, *(int *)(param_1 + 0x2c24) != 1)) {
      bVar4 = false;
    }
    if ((*(uint *)(param_1 + 0x2ddc) == 4) ||
       (bVar3 = true, (*(uint *)(param_1 + 0x2ddc) & 0xff0000) != 0)) {
      bVar3 = false;
    }
    bVar5 = 0;
    if (bVar4 || bVar3) {
      bVar5 = 0xf;
    }
    local_140 = (ulonglong)bVar5 << 0x20;
    uVar6 = FUN_10012b70(*(int *)(param_1 + 0x3688) + 0x1600,&local_190);
    *(undefined4 *)(param_1 + 0x36d8) = uVar6;
    *(undefined1 *)(param_1 + 0x2da9) = 0;
    *(undefined1 *)(param_1 + 0x3736) = 1;
  }
  if (*(char *)(param_1 + 0x2daa) != '\0') {
    uStack_1ac = 0;
    uStack_1a8 = 0;
    local_1d0 = *(undefined8 *)(param_1 + 0x2ca0);
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2ca8);
    local_1c0 = *(undefined8 *)(param_1 + 0x2cb0);
    iVar1 = *(int *)(param_1 + 0x2cbc);
    local_1b8 = CONCAT44(*(undefined4 *)(param_1 + 0x2cc0),*(undefined4 *)(param_1 + 0x2cb8));
    local_1b0 = *(undefined4 *)(param_1 + 0x2cc4);
    uVar6 = FUN_10012ec8(*(int *)(param_1 + 0x3688) + 0x1620,&local_1d0);
    *(undefined1 *)(param_1 + 0x2daa) = 0;
    *(undefined1 *)(param_1 + 0x3736) = 1;
    *(undefined4 *)(param_1 + 0x36e0) = uVar6;
    cVar2 = *(char *)(param_1 + 0x3735);
    bVar4 = iVar1 != 0;
    *(bool *)(param_1 + 0x3735) = bVar4;
    *(byte *)(param_1 + 0x3651) = (bool)cVar2 != bVar4 | *(byte *)(param_1 + 0x3651);
  }
  if (*(char *)(param_1 + 0x2dac) != '\0') {
    bVar5 = FUN_1000fb10(param_1);
    *(undefined1 *)(param_1 + 0x2dac) = 0;
    *(byte *)(param_1 + 0x2dab) = bVar5 | *(byte *)(param_1 + 0x2dab);
  }
  if ((*(char *)(param_1 + 0x2dab) != '\0') || (param_2 != '\0')) {
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2cd0);
    local_1d0 = *(undefined8 *)(param_1 + 0x2cc8);
    local_1c0 = *(undefined8 *)(param_1 + 0x2cd8);
    FUN_1006ae10(*(undefined4 *)(*(int *)(param_1 + 0x3688) + 0x1304),1,&local_1d0);
    *(char *)(param_1 + 0x2dab) = '\0';
  }
  if (*(char *)(param_1 + 0x2dad) != '\0') {
    FUN_10017d38(param_1);
    *(undefined1 *)(param_1 + 0x2dad) = 0;
  }
  return;
}

