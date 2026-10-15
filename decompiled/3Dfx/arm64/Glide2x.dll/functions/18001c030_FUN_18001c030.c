/*
 * FUN_18001c030 at 18001c030
 * undefined8 __cdecl FUN_18001c030(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 18001c030-18001c267
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001c030(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
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
  
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    param_4 = (ulonglong)*(uint *)(param_1 + 0x2a94);
    uStack_178 = *(undefined8 *)(param_1 + 0x2a68);
    local_180 = *(undefined8 *)(param_1 + 0x2a60);
    local_168 = *(undefined8 *)(param_1 + 0x2a78);
    local_170 = *(undefined8 *)(param_1 + 0x2a70);
    uStack_158 = *(undefined8 *)(param_1 + 0x2a88);
    local_160 = *(undefined8 *)(param_1 + 0x2a80);
    local_150 = *(undefined4 *)(param_1 + 0x2a90);
    FUN_18004fe20(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                  (int *)&local_180,*(uint *)(param_1 + 0x2a94));
    *(undefined1 *)(param_1 + 0x2be0) = 0;
  }
  if (*(char *)(param_1 + 0x2be1) != '\0') {
    uStack_138 = *(undefined8 *)(param_1 + 0x2aa0);
    local_140[0] = 0;
    local_140[1] = 1;
    uStack_130 = *(undefined8 *)(param_1 + 0x2aa8);
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_128 = *(undefined8 *)(param_1 + 0x2ab0);
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
    local_120 = (ulonglong)*(uint5 *)(param_1 + 0x2ab8);
    uStack_118 = *(undefined8 *)(param_1 + 0x2ac0);
    local_110 = *(undefined8 *)(param_1 + 0x2ac8);
    local_108 = *(undefined8 *)(param_1 + 0x2ad0);
    if ((*(int *)(param_1 + 0x2a60) == 0) || (bVar2 = true, *(int *)(param_1 + 0x2a64) != 1)) {
      bVar2 = false;
    }
    if ((*(uint *)(param_1 + 0x2c0c) == 4) ||
       (bVar1 = true, (*(uint *)(param_1 + 0x2c0c) & 0xff0000) != 0)) {
      bVar1 = false;
    }
    uVar3 = 0;
    if (bVar1 || bVar2) {
      uVar3 = 0xf;
    }
    local_100 = (ulonglong)CONCAT14(uVar3,*(undefined4 *)(param_1 + 0x2ad8));
    FUN_18004fb70(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),local_140,
                  param_4,*(int *)(param_1 + 0x2a9c));
    *(undefined1 *)(param_1 + 0x2be1) = 0;
  }
  if (*(char *)(param_1 + 0x2be2) != '\0') {
    local_180 = *(undefined8 *)(param_1 + 0x2ae0);
    local_170 = *(undefined8 *)(param_1 + 0x2af0);
    uStack_178 = *(undefined8 *)(param_1 + 0x2ae8);
    local_168 = *(undefined8 *)(param_1 + 11000);
    local_160 = *(undefined8 *)(param_1 + 0x2b00);
    FUN_1800500f8(*(ulonglong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                  (uint *)&local_180);
    *(undefined1 *)(param_1 + 0x2be2) = 0;
  }
  if (*(char *)(param_1 + 0x2be4) != '\0') {
    *(undefined1 *)(param_1 + 0x2be4) = 0;
  }
  if (*(char *)(param_1 + 0x2be3) != '\0') {
    uStack_178 = *(undefined8 *)(param_1 + 0x2b10);
    local_180 = *(undefined8 *)(param_1 + 0x2b08);
    local_170 = *(undefined8 *)(param_1 + 0x2b18);
    FUN_1800505d0(*(ulonglong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                  (float *)&local_180);
    *(undefined1 *)(param_1 + 0x2be3) = 0;
  }
  if (*(char *)(param_1 + 0x2be5) != '\0') {
    FUN_1800248a8(param_1);
    *(undefined1 *)(param_1 + 0x2be5) = 0;
  }
  return 1;
}

