/*
 * FUN_18000ec54 at 18000ec54
 * undefined8 __fastcall FUN_18000ec54(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 18000ec54-18000ef06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000ec54(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  int local_118 [3];
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  byte local_d4;
  
  if (*(char *)(param_1 + 0x2c78) != '\0') {
    local_158 = *(undefined8 *)(param_1 + 11000);
    uStack_150 = *(undefined8 *)(param_1 + 0x2b00);
    local_128 = *(undefined4 *)(param_1 + 0x2b28);
    local_148 = *(undefined8 *)(param_1 + 0x2b08);
    uStack_140 = *(undefined8 *)(param_1 + 0x2b10);
    param_4 = (ulonglong)*(uint *)(param_1 + 0x2b2c);
    local_138 = *(undefined8 *)(param_1 + 0x2b18);
    uStack_130 = *(undefined8 *)(param_1 + 0x2b20);
    in_RAX = FUN_18004f2bc(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),
                           (int *)&local_158,*(uint *)(param_1 + 0x2b2c));
    *(undefined1 *)(param_1 + 0x2c78) = 0;
  }
  if (*(char *)(param_1 + 0x2c79) != '\0') {
    FUN_180060f94((undefined1 *)local_118,0,0x108);
    local_118[2] = *(undefined4 *)(param_1 + 0x2b38);
    local_10c = *(undefined4 *)(param_1 + 0x2b3c);
    local_108 = *(undefined4 *)(param_1 + 0x2b40);
    local_104 = *(undefined4 *)(param_1 + 0x2b44);
    local_100 = *(undefined4 *)(param_1 + 0x2b48);
    local_fc = *(undefined4 *)(param_1 + 0x2b4c);
    local_f8 = *(undefined4 *)(param_1 + 0x2b50);
    local_f4 = *(undefined1 *)(param_1 + 0x2b54);
    local_f0 = *(undefined4 *)(param_1 + 0x2b58);
    local_ec = *(undefined4 *)(param_1 + 0x2b5c);
    local_e8 = *(undefined4 *)(param_1 + 0x2b60);
    local_e4 = *(undefined4 *)(param_1 + 0x2b64);
    local_e0 = *(undefined4 *)(param_1 + 0x2b68);
    local_dc = *(undefined4 *)(param_1 + 0x2b6c);
    local_d8 = *(undefined4 *)(param_1 + 0x2b70);
    local_118[1] = 1;
    if ((*(int *)(param_1 + 11000) == 0) || (bVar2 = true, *(int *)(param_1 + 0x2afc) != 1)) {
      bVar2 = false;
    }
    if ((*(uint *)(param_1 + 0x2cac) == 4) ||
       (bVar1 = true, (*(uint *)(param_1 + 0x2cac) & 0xff0000) != 0)) {
      bVar1 = false;
    }
    local_d4 = -(bVar1 || bVar2) & 0xf;
    in_RAX = FUN_18004f248(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),
                           local_118,param_4,*(int *)(param_1 + 0x2b34));
    *(undefined1 *)(param_1 + 0x2c79) = 0;
  }
  if (*(char *)(param_1 + 0x2c7a) != '\0') {
    local_148 = *(undefined8 *)(param_1 + 0x2b88);
    local_158 = *(undefined8 *)(param_1 + 0x2b78);
    uStack_150 = *(undefined8 *)(param_1 + 0x2b80);
    uStack_140 = *(undefined8 *)(param_1 + 0x2b90);
    local_138 = *(undefined8 *)(param_1 + 0x2b98);
    in_RAX = FUN_18004f434(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),
                           (uint *)&local_158);
    *(undefined1 *)(param_1 + 0x2c7a) = 0;
  }
  if (*(char *)(param_1 + 0x2c7c) != '\0') {
    in_RAX = FUN_180009efc(param_1);
    *(byte *)(param_1 + 0x2c7b) = *(byte *)(param_1 + 0x2c7b) | (byte)in_RAX;
    *(byte *)(param_1 + 0x32f0) = *(byte *)(param_1 + 0x32f0) | (byte)in_RAX;
    *(undefined1 *)(param_1 + 0x2c7c) = 0;
  }
  if (*(char *)(param_1 + 0x2c7b) != '\0') {
    local_158 = *(undefined8 *)(param_1 + 0x2ba0);
    uStack_150 = *(undefined8 *)(param_1 + 0x2ba8);
    local_148 = *(undefined8 *)(param_1 + 0x2bb0);
    in_RAX = FUN_18004f630(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),
                           (float *)&local_158);
    *(undefined1 *)(param_1 + 0x2c7b) = 0;
  }
  if (*(char *)(param_1 + 0x2c7d) != '\0') {
    in_RAX = FUN_180011bf4(param_1);
    *(undefined1 *)(param_1 + 0x2c7d) = 0;
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

