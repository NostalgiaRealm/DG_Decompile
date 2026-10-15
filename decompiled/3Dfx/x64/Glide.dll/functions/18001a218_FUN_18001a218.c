/*
 * FUN_18001a218 at 18001a218
 * undefined __fastcall FUN_18001a218(longlong param_1, char param_2)
 * Address ranges: 18001a218-18001a52c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a218(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  int local_188 [3];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  byte local_134;
  
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    local_1c8 = *(undefined8 *)(param_1 + 0x2a60);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x2a68);
    local_198 = *(undefined4 *)(param_1 + 0x2a90);
    local_1b8 = *(undefined8 *)(param_1 + 0x2a70);
    uStack_1b0 = *(undefined8 *)(param_1 + 0x2a78);
    local_1a8 = (undefined4)*(undefined8 *)(param_1 + 0x2a80);
    uStack_1a4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2a80) >> 0x20);
    uStack_1a0 = (undefined4)*(undefined8 *)(param_1 + 0x2a88);
    uStack_19c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2a88) >> 0x20);
    uVar4 = FUN_18001b1e8((longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1960),(int *)&local_1c8);
    *(undefined8 *)(param_1 + 0x3278) = uVar4;
    *(undefined1 *)(param_1 + 0x2be0) = 0;
    *(undefined1 *)(param_1 + 0x32da) = 1;
    FUN_180048bb0(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),*(int *)(param_1 + 0x2a94)
                 );
  }
  if (*(char *)(param_1 + 0x2be1) != '\0') {
    FUN_18005f814((undefined1 *)local_188,0,0x148);
    local_188[2] = *(undefined4 *)(param_1 + 0x2aa0);
    local_178 = *(undefined4 *)(param_1 + 0x2aa4);
    local_174 = *(undefined4 *)(param_1 + 0x2aa8);
    local_170 = *(undefined4 *)(param_1 + 0x2aac);
    local_16c = *(undefined4 *)(param_1 + 0x2ab0);
    local_168 = *(undefined4 *)(param_1 + 0x2ab4);
    local_164 = *(undefined4 *)(param_1 + 0x2ab8);
    local_15c = *(undefined1 *)(param_1 + 0x2abc);
    local_158 = *(undefined4 *)(param_1 + 0x2ac0);
    local_150 = *(undefined4 *)(param_1 + 0x2ac4);
    local_14c = *(undefined4 *)(param_1 + 0x2ac8);
    local_148 = *(undefined4 *)(param_1 + 0x2acc);
    local_144 = *(undefined4 *)(param_1 + 0x2ad0);
    local_140 = *(undefined4 *)(param_1 + 0x2ad4);
    local_13c = *(undefined4 *)(param_1 + 0x2ad8);
    local_188[1] = 1;
    local_17c = 0;
    local_160 = 0;
    local_154 = 0;
    local_138 = 0;
    if ((*(int *)(param_1 + 0x2a60) == 0) || (bVar5 = true, *(int *)(param_1 + 0x2a64) != 1)) {
      bVar5 = false;
    }
    if ((*(uint *)(param_1 + 0x2c0c) == 4) ||
       (bVar3 = true, (*(uint *)(param_1 + 0x2c0c) & 0xff0000) != 0)) {
      bVar3 = false;
    }
    local_134 = -(bVar3 || bVar5) & 0xf;
    uVar4 = FUN_18001af48((longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1978),local_188);
    *(undefined8 *)(param_1 + 0x3260) = uVar4;
    *(undefined1 *)(param_1 + 0x32da) = 1;
    *(undefined1 *)(param_1 + 0x2be1) = 0;
  }
  if (*(char *)(param_1 + 0x2be2) != '\0') {
    local_1b8 = *(undefined8 *)(param_1 + 0x2af0);
    iVar2 = *(int *)(param_1 + 0x2afc);
    local_1c8 = *(undefined8 *)(param_1 + 0x2ae0);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x2ae8);
    uStack_1b0 = CONCAT44(*(undefined4 *)(param_1 + 0x2b00),*(undefined4 *)(param_1 + 11000));
    local_1a8 = *(undefined4 *)(param_1 + 0x2b04);
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uVar4 = FUN_18001b0f8((longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x19a8),(uint *)&local_1c8)
    ;
    bVar5 = iVar2 != 0;
    *(undefined8 *)(param_1 + 0x3270) = uVar4;
    *(undefined1 *)(param_1 + 0x2be2) = 0;
    *(undefined1 *)(param_1 + 0x32da) = 1;
    cVar1 = *(char *)(param_1 + 0x32d9);
    *(bool *)(param_1 + 0x32d9) = bVar5;
    *(byte *)(param_1 + 0x3171) = *(byte *)(param_1 + 0x3171) | (bool)cVar1 != bVar5;
  }
  if (*(char *)(param_1 + 0x2be4) != '\0') {
    *(undefined1 *)(param_1 + 0x2be4) = 0;
  }
  if ((*(char *)(param_1 + 0x2be3) != '\0') || (param_2 != '\0')) {
    local_1c8 = *(undefined8 *)(param_1 + 0x2b08);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x2b10);
    local_1b8 = *(undefined8 *)(param_1 + 0x2b18);
    FUN_180048d14(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),1,(longlong)&local_1c8);
    *(undefined1 *)(param_1 + 0x2be3) = 0;
  }
  if (*(char *)(param_1 + 0x2be5) != '\0') {
    FUN_18002356c(param_1);
    *(undefined1 *)(param_1 + 0x2be5) = 0;
  }
  return;
}

