/*
 * FUN_10012d48 at 10012d48
 * undefined FUN_10012d48(void)
 * Address ranges: 10012d48-1001307f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10012d48(int param_1)

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
  
  if (*(char *)(param_1 + 0x2c60) != '\0') {
    uStack_188 = *(undefined8 *)(param_1 + 0x2ae8);
    local_190 = *(undefined8 *)(param_1 + 0x2ae0);
    local_178 = *(undefined8 *)(param_1 + 11000);
    local_180 = *(undefined8 *)(param_1 + 0x2af0);
    uStack_168 = *(undefined8 *)(param_1 + 0x2b08);
    local_170 = *(undefined8 *)(param_1 + 0x2b00);
    local_160 = *(undefined4 *)(param_1 + 0x2b10);
    FUN_1006acc8(*(undefined4 *)(param_1 + 0x3300),*(undefined4 *)(param_1 + 0x3304),&local_190,
                 *(undefined4 *)(param_1 + 0x2b14));
    *(undefined1 *)(param_1 + 0x2c60) = 0;
  }
  if (*(char *)(param_1 + 0x2c61) != '\0') {
    uStack_108 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    local_150 = 0x100000000;
    uStack_148 = *(undefined8 *)(param_1 + 0x2b20);
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
    uStack_140 = *(undefined8 *)(param_1 + 0x2b28);
    local_50 = 0;
    uStack_138 = *(undefined8 *)(param_1 + 0x2b30);
    local_130 = (ulonglong)*(uint5 *)(param_1 + 0x2b38);
    uStack_128 = *(undefined8 *)(param_1 + 0x2b40);
    local_120 = *(undefined8 *)(param_1 + 0x2b48);
    local_118 = *(undefined8 *)(param_1 + 0x2b50);
    if ((*(int *)(param_1 + 0x2ae0) == 0) || (bVar1 = true, *(int *)(param_1 + 0x2ae4) != 1)) {
      bVar1 = false;
    }
    if ((*(uint *)(param_1 + 0x2c8c) == 4) ||
       (bVar2 = true, (*(uint *)(param_1 + 0x2c8c) & 0xff0000) != 0)) {
      bVar2 = false;
    }
    uVar4 = 0;
    if (bVar1 || bVar2) {
      uVar4 = 0xf;
    }
    local_110 = (ulonglong)CONCAT14(uVar4,*(undefined4 *)(param_1 + 0x2b58));
    FUN_1006a960(*(undefined4 *)(param_1 + 0x3300),*(undefined4 *)(param_1 + 0x3304),&local_150);
    *(undefined1 *)(param_1 + 0x2c61) = 0;
  }
  if (*(char *)(param_1 + 0x2c62) != '\0') {
    local_190 = *(undefined8 *)(param_1 + 0x2b60);
    uStack_188 = *(undefined8 *)(param_1 + 0x2b68);
    local_180 = *(undefined8 *)(param_1 + 0x2b70);
    local_178 = *(undefined8 *)(param_1 + 0x2b78);
    local_170 = *(undefined8 *)(param_1 + 0x2b80);
    FUN_1006afa0(*(undefined4 *)(param_1 + 0x3300),*(undefined4 *)(param_1 + 0x3304),&local_190);
    *(undefined1 *)(param_1 + 0x2c62) = 0;
  }
  if (*(char *)(param_1 + 0x2c64) != '\0') {
    bVar3 = FUN_1000dc70(param_1);
    *(undefined1 *)(param_1 + 0x2c64) = 0;
    *(byte *)(param_1 + 0x2c63) = bVar3 | *(byte *)(param_1 + 0x2c63);
    *(byte *)(param_1 + 0x32d0) = bVar3 | *(byte *)(param_1 + 0x32d0);
  }
  if (*(char *)(param_1 + 0x2c63) != '\0') {
    uStack_188 = *(undefined8 *)(param_1 + 0x2b90);
    local_190 = *(undefined8 *)(param_1 + 0x2b88);
    local_180 = *(undefined8 *)(param_1 + 0x2b98);
    FUN_1006b310(*(undefined4 *)(param_1 + 0x3300),*(undefined4 *)(param_1 + 0x3304),&local_190);
    *(char *)(param_1 + 0x2c63) = '\0';
  }
  if (*(char *)(param_1 + 0x2c65) != '\0') {
    FUN_10017858(param_1);
    *(undefined1 *)(param_1 + 0x2c65) = 0;
  }
  return 1;
}

