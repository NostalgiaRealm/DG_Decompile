/*
 * FUN_18000e2a0 at 18000e2a0
 * undefined __cdecl FUN_18000e2a0(longlong param_1, byte param_2)
 * Address ranges: 18000e2a0-18000e563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000e2a0(longlong param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
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
  int local_190 [2];
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
  
  if (*(char *)(param_1 + 0x2c78) != '\0') {
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2b00);
    local_1d0 = *(undefined8 *)(param_1 + 11000);
    local_1b8 = *(undefined8 *)(param_1 + 0x2b10);
    local_1c0 = *(undefined8 *)(param_1 + 0x2b08);
    local_1a0 = *(undefined4 *)(param_1 + 0x2b28);
    uStack_1a8 = (undefined4)*(undefined8 *)(param_1 + 0x2b20);
    uStack_1a4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2b20) >> 0x20);
    local_1b0 = (undefined4)*(undefined8 *)(param_1 + 0x2b18);
    uStack_1ac = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2b18) >> 0x20);
    uVar5 = FUN_18000fd80((longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1960),(int *)&local_1d0);
    *(undefined1 *)(param_1 + 0x2c78) = 0;
    *(undefined8 *)(param_1 + 0x33f8) = uVar5;
    *(undefined1 *)(param_1 + 0x345a) = 1;
    FUN_18004fa48(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),*(int *)(param_1 + 0x2b2c)
                 );
  }
  if (*(char *)(param_1 + 0x2c79) != '\0') {
    local_190[0] = 0;
    local_190[1] = 1;
    uStack_180 = *(undefined8 *)(param_1 + 0x2b3c);
    uStack_188 = (ulonglong)*(uint *)(param_1 + 0x2b38);
    uStack_138 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_178 = *(undefined8 *)(param_1 + 0x2b44);
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
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    local_170 = *(undefined8 *)(param_1 + 0x2b4c);
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_50 = 0;
    lStack_168 = (ulonglong)*(byte *)(param_1 + 0x2b54) << 0x20;
    local_160 = (ulonglong)*(uint *)(param_1 + 0x2b58);
    local_158 = *(undefined8 *)(param_1 + 0x2b5c);
    local_150 = *(undefined8 *)(param_1 + 0x2b64);
    uStack_148 = *(undefined8 *)(param_1 + 0x2b6c);
    if ((*(int *)(param_1 + 11000) == 0) || (bVar4 = true, *(int *)(param_1 + 0x2afc) != 1)) {
      bVar4 = false;
    }
    if ((*(uint *)(param_1 + 0x2cac) == 4) ||
       (bVar3 = true, (*(uint *)(param_1 + 0x2cac) & 0xff0000) != 0)) {
      bVar3 = false;
    }
    bVar6 = 0;
    if (bVar3 || bVar4) {
      bVar6 = 0xf;
    }
    local_140 = (ulonglong)bVar6 << 0x20;
    uVar5 = FUN_18000faf8((longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1978),local_190);
    *(undefined1 *)(param_1 + 0x2c79) = 0;
    *(undefined8 *)(param_1 + 0x33e0) = uVar5;
    *(undefined1 *)(param_1 + 0x345a) = 1;
  }
  if (*(char *)(param_1 + 0x2c7a) != '\0') {
    local_1d0 = *(undefined8 *)(param_1 + 0x2b78);
    uStack_1ac = 0;
    uStack_1a8 = 0;
    local_1c0 = *(undefined8 *)(param_1 + 0x2b88);
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2b80);
    iVar1 = *(int *)(param_1 + 0x2b94);
    local_1b0 = *(undefined4 *)(param_1 + 0x2b9c);
    local_1b8 = CONCAT44(*(undefined4 *)(param_1 + 0x2b98),*(undefined4 *)(param_1 + 0x2b90));
    uVar5 = FUN_18000f8c0((longlong *)(*(longlong *)(param_1 + 0x3340) + 0x19a8),(uint *)&local_1d0)
    ;
    cVar2 = *(char *)(param_1 + 0x3459);
    bVar4 = iVar1 != 0;
    *(undefined8 *)(param_1 + 0x33f0) = uVar5;
    *(bool *)(param_1 + 0x3459) = bVar4;
    *(undefined1 *)(param_1 + 0x2c7a) = 0;
    *(undefined1 *)(param_1 + 0x345a) = 1;
    *(byte *)(param_1 + 0x32f1) = (bool)cVar2 != bVar4 | *(byte *)(param_1 + 0x32f1);
  }
  if (*(char *)(param_1 + 0x2c7c) != '\0') {
    uVar5 = FUN_18000c848(param_1);
    *(undefined1 *)(param_1 + 0x2c7c) = 0;
    *(byte *)(param_1 + 0x2c7b) = *(byte *)(param_1 + 0x2c7b) | (byte)uVar5;
  }
  if ((*(char *)(param_1 + 0x2c7b) != '\0') || ((param_2 & 1) != 0)) {
    uStack_1c8 = *(undefined8 *)(param_1 + 0x2ba8);
    local_1d0 = *(undefined8 *)(param_1 + 0x2ba0);
    local_1c0 = *(undefined8 *)(param_1 + 0x2bb0);
    FUN_18004fc00(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),1,(longlong)&local_1d0);
    *(undefined1 *)(param_1 + 0x2c7b) = 0;
  }
  if (*(char *)(param_1 + 0x2c7d) != '\0') {
    FUN_180013d90(param_1);
    *(undefined1 *)(param_1 + 0x2c7d) = 0;
  }
  return;
}

