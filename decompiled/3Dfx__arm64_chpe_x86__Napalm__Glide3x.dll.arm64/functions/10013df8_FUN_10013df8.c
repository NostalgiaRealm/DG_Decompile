/*
 * FUN_10013df8 at 10013df8
 * undefined FUN_10013df8(void)
 * Address ranges: 10013df8-1001412f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10013df8(int param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulonglong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
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
    uStack_188 = *(undefined8 *)(param_1 + 0x2c28);
    local_190 = *(undefined8 *)(param_1 + 0x2c20);
    local_178 = *(undefined8 *)(param_1 + 0x2c38);
    local_180 = *(undefined8 *)(param_1 + 0x2c30);
    uStack_168 = *(undefined8 *)(param_1 + 0x2c48);
    local_170 = *(undefined8 *)(param_1 + 0x2c40);
    local_160 = *(undefined4 *)(param_1 + 0x2c50);
    FUN_10070368(*(undefined4 *)(param_1 + 0x3680),*(undefined4 *)(param_1 + 0x3684),&local_190,
                 *(undefined4 *)(param_1 + 0x2c54));
    *(undefined1 *)(param_1 + 0x2da8) = 0;
  }
  if (*(char *)(param_1 + 0x2da9) != '\0') {
    uStack_108 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    local_150 = 0x100000000;
    uStack_148 = *(undefined8 *)(param_1 + 0x2c60);
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
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
    uStack_140 = *(undefined8 *)(param_1 + 0x2c68);
    local_50 = 0;
    uStack_138 = *(undefined8 *)(param_1 + 0x2c70);
    local_130 = (ulonglong)*(uint5 *)(param_1 + 0x2c78);
    uStack_128 = *(undefined8 *)(param_1 + 0x2c80);
    local_120 = *(undefined8 *)(param_1 + 0x2c88);
    local_118 = *(undefined8 *)(param_1 + 0x2c90);
    if ((*(int *)(param_1 + 0x2c20) == 0) || (bVar1 = true, *(int *)(param_1 + 0x2c24) != 1)) {
      bVar1 = false;
    }
    if ((*(uint *)(param_1 + 0x2ddc) == 4) ||
       (bVar2 = true, (*(uint *)(param_1 + 0x2ddc) & 0xff0000) != 0)) {
      bVar2 = false;
    }
    uVar4 = 0;
    if (bVar1 || bVar2) {
      uVar4 = 0xf;
    }
    local_110 = (ulonglong)CONCAT14(uVar4,*(undefined4 *)(param_1 + 0x2c98));
    FUN_10070000(*(undefined4 *)(param_1 + 0x3680),*(undefined4 *)(param_1 + 0x3684),&local_150);
    *(undefined1 *)(param_1 + 0x2da9) = 0;
  }
  if (*(char *)(param_1 + 0x2daa) != '\0') {
    local_190 = *(undefined8 *)(param_1 + 0x2ca0);
    uStack_188 = *(undefined8 *)(param_1 + 0x2ca8);
    local_180 = *(undefined8 *)(param_1 + 0x2cb0);
    local_178 = *(undefined8 *)(param_1 + 0x2cb8);
    local_170 = *(undefined8 *)(param_1 + 0x2cc0);
    FUN_10070640(*(undefined4 *)(param_1 + 0x3680),*(undefined4 *)(param_1 + 0x3684),&local_190);
    *(undefined1 *)(param_1 + 0x2daa) = 0;
  }
  if (*(char *)(param_1 + 0x2dac) != '\0') {
    bVar3 = FUN_1000fb10(param_1);
    *(undefined1 *)(param_1 + 0x2dac) = 0;
    *(byte *)(param_1 + 0x2dab) = bVar3 | *(byte *)(param_1 + 0x2dab);
    *(byte *)(param_1 + 0x3650) = bVar3 | *(byte *)(param_1 + 0x3650);
  }
  if (*(char *)(param_1 + 0x2dab) != '\0') {
    uStack_188 = *(undefined8 *)(param_1 + 0x2cd0);
    local_190 = *(undefined8 *)(param_1 + 0x2cc8);
    local_180 = *(undefined8 *)(param_1 + 0x2cd8);
    FUN_100709b0(*(undefined4 *)(param_1 + 0x3680),*(undefined4 *)(param_1 + 0x3684),&local_190);
    *(char *)(param_1 + 0x2dab) = '\0';
  }
  if (*(char *)(param_1 + 0x2dad) != '\0') {
    FUN_10017d38(param_1);
    *(undefined1 *)(param_1 + 0x2dad) = 0;
  }
  return 1;
}

