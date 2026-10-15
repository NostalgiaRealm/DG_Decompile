/*
 * FUN_1800105a8 at 1800105a8
 * undefined8 __cdecl FUN_1800105a8(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 1800105a8-180010807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800105a8(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  int local_140 [2];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulonglong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(char *)(param_1 + 0x2c78) != '\0') {
    param_4 = (ulonglong)*(uint *)(param_1 + 0x2b2c);
    uStack_178 = *(undefined8 *)(param_1 + 0x2b00);
    local_180 = *(undefined8 *)(param_1 + 11000);
    local_168 = *(undefined8 *)(param_1 + 0x2b10);
    local_170 = *(undefined8 *)(param_1 + 0x2b08);
    uStack_158 = *(undefined8 *)(param_1 + 0x2b20);
    local_160 = *(undefined8 *)(param_1 + 0x2b18);
    local_150 = *(undefined4 *)(param_1 + 0x2b28);
    FUN_1800539b0(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),
                  (int *)&local_180,*(uint *)(param_1 + 0x2b2c));
    *(undefined1 *)(param_1 + 0x2c78) = 0;
  }
  if (*(char *)(param_1 + 0x2c79) != '\0') {
    uStack_138 = *(undefined8 *)(param_1 + 0x2b38);
    local_140[0] = 0;
    local_140[1] = 1;
    uStack_130 = *(undefined8 *)(param_1 + 0x2b40);
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_128 = *(undefined8 *)(param_1 + 0x2b48);
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    local_40 = 0;
    local_120 = (ulonglong)*(uint5 *)(param_1 + 0x2b50);
    uStack_118 = *(undefined8 *)(param_1 + 0x2b58);
    local_110 = *(undefined8 *)(param_1 + 0x2b60);
    local_108 = *(undefined8 *)(param_1 + 0x2b68);
    if ((*(int *)(param_1 + 11000) == 0) || (bVar2 = true, *(int *)(param_1 + 0x2afc) != 1)) {
      bVar2 = false;
    }
    if ((*(uint *)(param_1 + 0x2cac) == 4) ||
       (bVar1 = true, (*(uint *)(param_1 + 0x2cac) & 0xff0000) != 0)) {
      bVar1 = false;
    }
    uVar4 = 0;
    if (bVar1 || bVar2) {
      uVar4 = 0xf;
    }
    local_100 = (ulonglong)CONCAT14(uVar4,*(undefined4 *)(param_1 + 0x2b70));
    FUN_180053700(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),local_140,
                  param_4,*(int *)(param_1 + 0x2b34));
    *(undefined1 *)(param_1 + 0x2c79) = 0;
  }
  if (*(char *)(param_1 + 0x2c7a) != '\0') {
    local_180 = *(undefined8 *)(param_1 + 0x2b78);
    local_170 = *(undefined8 *)(param_1 + 0x2b88);
    uStack_178 = *(undefined8 *)(param_1 + 0x2b80);
    local_168 = *(undefined8 *)(param_1 + 0x2b90);
    local_160 = *(undefined8 *)(param_1 + 0x2b98);
    FUN_180053c88(*(ulonglong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),
                  (uint *)&local_180);
    *(undefined1 *)(param_1 + 0x2c7a) = 0;
  }
  if (*(char *)(param_1 + 0x2c7c) != '\0') {
    uVar3 = FUN_18000c848(param_1);
    *(undefined1 *)(param_1 + 0x2c7c) = 0;
    *(byte *)(param_1 + 0x2c7b) = *(byte *)(param_1 + 0x2c7b) | (byte)uVar3;
    *(byte *)(param_1 + 0x32f0) = *(byte *)(param_1 + 0x32f0) | (byte)uVar3;
  }
  if (*(char *)(param_1 + 0x2c7b) != '\0') {
    uStack_178 = *(undefined8 *)(param_1 + 0x2ba8);
    local_180 = *(undefined8 *)(param_1 + 0x2ba0);
    local_170 = *(undefined8 *)(param_1 + 0x2bb0);
    FUN_180054160(*(ulonglong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),
                  (float *)&local_180);
    *(undefined1 *)(param_1 + 0x2c7b) = 0;
  }
  if (*(char *)(param_1 + 0x2c7d) != '\0') {
    FUN_180013d90(param_1);
    *(undefined1 *)(param_1 + 0x2c7d) = 0;
  }
  return 1;
}

