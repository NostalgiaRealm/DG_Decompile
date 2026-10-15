/*
 * FUN_18001bddc at 18001bddc
 * undefined8 __fastcall FUN_18001bddc(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 18001bddc-18001c07a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001bddc(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 in_RAX;
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
  
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    local_158 = *(undefined8 *)(param_1 + 0x2a60);
    uStack_150 = *(undefined8 *)(param_1 + 0x2a68);
    local_128 = *(undefined4 *)(param_1 + 0x2a90);
    local_148 = *(undefined8 *)(param_1 + 0x2a70);
    uStack_140 = *(undefined8 *)(param_1 + 0x2a78);
    param_4 = (ulonglong)*(uint *)(param_1 + 0x2a94);
    local_138 = *(undefined8 *)(param_1 + 0x2a80);
    uStack_130 = *(undefined8 *)(param_1 + 0x2a88);
    in_RAX = FUN_18004ccb0(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                           (int *)&local_158,*(uint *)(param_1 + 0x2a94));
    *(undefined1 *)(param_1 + 0x2be0) = 0;
  }
  if (*(char *)(param_1 + 0x2be1) != '\0') {
    FUN_18005f374((undefined1 *)local_118,0,0x108);
    local_118[2] = *(undefined4 *)(param_1 + 0x2aa0);
    local_10c = *(undefined4 *)(param_1 + 0x2aa4);
    local_108 = *(undefined4 *)(param_1 + 0x2aa8);
    local_104 = *(undefined4 *)(param_1 + 0x2aac);
    local_100 = *(undefined4 *)(param_1 + 0x2ab0);
    local_fc = *(undefined4 *)(param_1 + 0x2ab4);
    local_f8 = *(undefined4 *)(param_1 + 0x2ab8);
    local_f4 = *(undefined1 *)(param_1 + 0x2abc);
    local_f0 = *(undefined4 *)(param_1 + 0x2ac0);
    local_ec = *(undefined4 *)(param_1 + 0x2ac4);
    local_e8 = *(undefined4 *)(param_1 + 0x2ac8);
    local_e4 = *(undefined4 *)(param_1 + 0x2acc);
    local_e0 = *(undefined4 *)(param_1 + 0x2ad0);
    local_dc = *(undefined4 *)(param_1 + 0x2ad4);
    local_d8 = *(undefined4 *)(param_1 + 0x2ad8);
    local_118[1] = 1;
    if ((*(int *)(param_1 + 0x2a60) == 0) || (bVar2 = true, *(int *)(param_1 + 0x2a64) != 1)) {
      bVar2 = false;
    }
    if ((*(uint *)(param_1 + 0x2c0c) == 4) ||
       (bVar1 = true, (*(uint *)(param_1 + 0x2c0c) & 0xff0000) != 0)) {
      bVar1 = false;
    }
    local_d4 = -(bVar1 || bVar2) & 0xf;
    in_RAX = FUN_18004cc3c(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                           local_118,param_4,*(int *)(param_1 + 0x2a9c));
    *(undefined1 *)(param_1 + 0x2be1) = 0;
  }
  if (*(char *)(param_1 + 0x2be2) != '\0') {
    local_148 = *(undefined8 *)(param_1 + 0x2af0);
    local_158 = *(undefined8 *)(param_1 + 0x2ae0);
    uStack_150 = *(undefined8 *)(param_1 + 0x2ae8);
    uStack_140 = *(undefined8 *)(param_1 + 11000);
    local_138 = *(undefined8 *)(param_1 + 0x2b00);
    in_RAX = FUN_18004ce28(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                           (uint *)&local_158);
    *(undefined1 *)(param_1 + 0x2be2) = 0;
  }
  if (*(char *)(param_1 + 0x2be4) != '\0') {
    *(undefined1 *)(param_1 + 0x2be4) = 0;
  }
  if (*(char *)(param_1 + 0x2be3) != '\0') {
    local_158 = *(undefined8 *)(param_1 + 0x2b08);
    uStack_150 = *(undefined8 *)(param_1 + 0x2b10);
    local_148 = *(undefined8 *)(param_1 + 0x2b18);
    in_RAX = FUN_18004d024(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                           (float *)&local_158);
    *(undefined1 *)(param_1 + 0x2be3) = 0;
  }
  if (*(char *)(param_1 + 0x2be5) != '\0') {
    in_RAX = FUN_1800230c4(param_1);
    *(undefined1 *)(param_1 + 0x2be5) = 0;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

