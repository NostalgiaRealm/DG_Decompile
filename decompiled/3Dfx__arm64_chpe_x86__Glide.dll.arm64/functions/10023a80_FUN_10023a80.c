/*
 * FUN_10023a80 at 10023a80
 * undefined FUN_10023a80(void)
 * Address ranges: 10023a80-10023d83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10023a80(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
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
  
  if (*(char *)(param_1 + 0x2bc0) != '\0') {
    uStack_188 = *(undefined8 *)(param_1 + 0x2a48);
    local_190 = *(undefined8 *)(param_1 + 0x2a40);
    local_178 = *(undefined8 *)(param_1 + 0x2a58);
    local_180 = *(undefined8 *)(param_1 + 0x2a50);
    uStack_168 = *(undefined8 *)(param_1 + 0x2a68);
    local_170 = *(undefined8 *)(param_1 + 0x2a60);
    local_160 = *(undefined4 *)(param_1 + 0x2a70);
    FUN_100674a8(*(undefined4 *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184),&local_190,
                 *(undefined4 *)(param_1 + 0x2a74));
    *(undefined1 *)(param_1 + 0x2bc0) = 0;
  }
  if (*(char *)(param_1 + 0x2bc1) != '\0') {
    uStack_108 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    local_150 = 0x100000000;
    uStack_148 = *(undefined8 *)(param_1 + 0x2a80);
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
    uStack_140 = *(undefined8 *)(param_1 + 0x2a88);
    local_50 = 0;
    uStack_138 = *(undefined8 *)(param_1 + 0x2a90);
    local_130 = (ulonglong)*(uint5 *)(param_1 + 0x2a98);
    uStack_128 = *(undefined8 *)(param_1 + 0x2aa0);
    local_120 = *(undefined8 *)(param_1 + 0x2aa8);
    local_118 = *(undefined8 *)(param_1 + 0x2ab0);
    if ((*(int *)(param_1 + 0x2a40) == 0) || (bVar1 = true, *(int *)(param_1 + 0x2a44) != 1)) {
      bVar1 = false;
    }
    if ((*(uint *)(param_1 + 0x2bec) == 4) ||
       (bVar2 = true, (*(uint *)(param_1 + 0x2bec) & 0xff0000) != 0)) {
      bVar2 = false;
    }
    uVar3 = 0;
    if (bVar1 || bVar2) {
      uVar3 = 0xf;
    }
    local_110 = (ulonglong)CONCAT14(uVar3,*(undefined4 *)(param_1 + 0x2ab8));
    FUN_10067140(*(undefined4 *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184),&local_150);
    *(undefined1 *)(param_1 + 0x2bc1) = 0;
  }
  if (*(char *)(param_1 + 0x2bc2) != '\0') {
    local_190 = *(undefined8 *)(param_1 + 0x2ac0);
    uStack_188 = *(undefined8 *)(param_1 + 0x2ac8);
    local_180 = *(undefined8 *)(param_1 + 0x2ad0);
    local_178 = *(undefined8 *)(param_1 + 0x2ad8);
    local_170 = *(undefined8 *)(param_1 + 0x2ae0);
    FUN_10067780(*(undefined4 *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184),&local_190);
    *(undefined1 *)(param_1 + 0x2bc2) = 0;
  }
  if (*(char *)(param_1 + 0x2bc4) != '\0') {
    *(undefined1 *)(param_1 + 0x2bc4) = 0;
  }
  if (*(char *)(param_1 + 0x2bc3) != '\0') {
    uStack_188 = *(undefined8 *)(param_1 + 0x2af0);
    local_190 = *(undefined8 *)(param_1 + 0x2ae8);
    local_180 = *(undefined8 *)(param_1 + 11000);
    FUN_10067af0(*(undefined4 *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184),&local_190);
    *(undefined1 *)(param_1 + 0x2bc3) = 0;
  }
  if (*(char *)(param_1 + 0x2bc5) != '\0') {
    FUN_1002ec90(param_1);
    *(undefined1 *)(param_1 + 0x2bc5) = 0;
  }
  return 1;
}

