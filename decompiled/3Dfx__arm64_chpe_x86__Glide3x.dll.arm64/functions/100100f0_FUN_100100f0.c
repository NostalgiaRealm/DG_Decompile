/*
 * FUN_100100f0 at 100100f0
 * undefined FUN_100100f0(void)
 * Address ranges: 100100f0-100104bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100100f0(int param_1,char param_2)

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
  
  if (*(char *)(param_1 + 0x2c60) != '\0') {
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2ae8);
    local_1d0 = *(undefined8 *)(param_1 + 0x2ae0);
    local_1b8 = *(undefined8 *)(param_1 + 11000);
    local_1c0 = *(undefined8 *)(param_1 + 0x2af0);
    local_1a0 = *(undefined4 *)(param_1 + 0x2b10);
    uStack_1a8 = (undefined4)*(undefined8 *)(param_1 + 0x2b08);
    uStack_1a4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2b08) >> 0x20);
    local_1b0 = (undefined4)*(undefined8 *)(param_1 + 0x2b00);
    uStack_1ac = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2b00) >> 0x20);
    uVar6 = FUN_10012110(*(int *)(param_1 + 0x3308) + 0x15f0,&local_1d0);
    *(undefined1 *)(param_1 + 0x2c60) = 0;
    *(undefined1 *)(param_1 + 0x33b6) = 1;
    *(undefined4 *)(param_1 + 0x3364) = uVar6;
    FUN_100654c0(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1304),
                 *(undefined4 *)(param_1 + 0x2b14));
  }
  if (*(char *)(param_1 + 0x2c61) != '\0') {
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
    uStack_188 = (ulonglong)*(uint *)(param_1 + 0x2b20);
    uStack_180 = *(undefined8 *)(param_1 + 0x2b24);
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
    uStack_178 = *(undefined8 *)(param_1 + 0x2b2c);
    local_170 = *(undefined8 *)(param_1 + 0x2b34);
    lStack_168 = (ulonglong)*(byte *)(param_1 + 0x2b3c) << 0x20;
    local_160 = (ulonglong)*(uint *)(param_1 + 0x2b40);
    local_158 = *(undefined8 *)(param_1 + 0x2b44);
    local_150 = *(undefined8 *)(param_1 + 0x2b4c);
    uStack_148 = *(undefined8 *)(param_1 + 0x2b54);
    if ((*(int *)(param_1 + 0x2ae0) == 0) || (bVar4 = true, *(int *)(param_1 + 0x2ae4) != 1)) {
      bVar4 = false;
    }
    if ((*(uint *)(param_1 + 0x2c8c) == 4) ||
       (bVar3 = true, (*(uint *)(param_1 + 0x2c8c) & 0xff0000) != 0)) {
      bVar3 = false;
    }
    bVar5 = 0;
    if (bVar4 || bVar3) {
      bVar5 = 0xf;
    }
    local_140 = (ulonglong)bVar5 << 0x20;
    uVar6 = FUN_10011ac0(*(int *)(param_1 + 0x3308) + 0x1600,&local_190);
    *(undefined4 *)(param_1 + 0x3358) = uVar6;
    *(undefined1 *)(param_1 + 0x2c61) = 0;
    *(undefined1 *)(param_1 + 0x33b6) = 1;
  }
  if (*(char *)(param_1 + 0x2c62) != '\0') {
    uStack_1ac = 0;
    uStack_1a8 = 0;
    local_1d0 = *(undefined8 *)(param_1 + 0x2b60);
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2b68);
    local_1c0 = *(undefined8 *)(param_1 + 0x2b70);
    iVar1 = *(int *)(param_1 + 0x2b7c);
    local_1b8 = CONCAT44(*(undefined4 *)(param_1 + 0x2b80),*(undefined4 *)(param_1 + 0x2b78));
    local_1b0 = *(undefined4 *)(param_1 + 0x2b84);
    uVar6 = FUN_10011e18(*(int *)(param_1 + 0x3308) + 0x1620,&local_1d0);
    *(undefined1 *)(param_1 + 0x2c62) = 0;
    *(undefined1 *)(param_1 + 0x33b6) = 1;
    *(undefined4 *)(param_1 + 0x3360) = uVar6;
    cVar2 = *(char *)(param_1 + 0x33b5);
    bVar4 = iVar1 != 0;
    *(bool *)(param_1 + 0x33b5) = bVar4;
    *(byte *)(param_1 + 0x32d1) = (bool)cVar2 != bVar4 | *(byte *)(param_1 + 0x32d1);
  }
  if (*(char *)(param_1 + 0x2c64) != '\0') {
    bVar5 = FUN_1000dc70(param_1);
    *(undefined1 *)(param_1 + 0x2c64) = 0;
    *(byte *)(param_1 + 0x2c63) = bVar5 | *(byte *)(param_1 + 0x2c63);
  }
  if ((*(char *)(param_1 + 0x2c63) != '\0') || (param_2 != '\0')) {
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2b90);
    local_1d0 = *(undefined8 *)(param_1 + 0x2b88);
    local_1c0 = *(undefined8 *)(param_1 + 0x2b98);
    FUN_10065770(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1304),1,&local_1d0);
    *(char *)(param_1 + 0x2c63) = '\0';
  }
  if (*(char *)(param_1 + 0x2c65) != '\0') {
    FUN_10017858(param_1);
    *(undefined1 *)(param_1 + 0x2c65) = 0;
  }
  return;
}

