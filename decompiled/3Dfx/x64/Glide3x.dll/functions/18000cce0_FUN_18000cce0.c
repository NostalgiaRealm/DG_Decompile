/*
 * FUN_18000cce0 at 18000cce0
 * undefined __fastcall FUN_18000cce0(longlong param_1, char param_2)
 * Address ranges: 18000cce0-18000d002
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cce0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
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
  
  if (*(char *)(param_1 + 0x2c78) != '\0') {
    local_1c8 = *(undefined8 *)(param_1 + 11000);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x2b00);
    local_198 = *(undefined4 *)(param_1 + 0x2b28);
    local_1b8 = *(undefined8 *)(param_1 + 0x2b08);
    uStack_1b0 = *(undefined8 *)(param_1 + 0x2b10);
    local_1a8 = (undefined4)*(undefined8 *)(param_1 + 0x2b18);
    uStack_1a4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2b18) >> 0x20);
    uStack_1a0 = (undefined4)*(undefined8 *)(param_1 + 0x2b20);
    uStack_19c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2b20) >> 0x20);
    uVar4 = FUN_18000dbc8((longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1960),(int *)&local_1c8);
    *(undefined8 *)(param_1 + 0x33f8) = uVar4;
    *(undefined1 *)(param_1 + 0x2c78) = 0;
    *(undefined1 *)(param_1 + 0x345a) = 1;
    FUN_18004ad14(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),*(int *)(param_1 + 0x2b2c)
                 );
  }
  if (*(char *)(param_1 + 0x2c79) != '\0') {
    FUN_180060f94((undefined1 *)local_188,0,0x148);
    local_188[2] = *(undefined4 *)(param_1 + 0x2b38);
    local_178 = *(undefined4 *)(param_1 + 0x2b3c);
    local_174 = *(undefined4 *)(param_1 + 0x2b40);
    local_170 = *(undefined4 *)(param_1 + 0x2b44);
    local_16c = *(undefined4 *)(param_1 + 0x2b48);
    local_168 = *(undefined4 *)(param_1 + 0x2b4c);
    local_164 = *(undefined4 *)(param_1 + 0x2b50);
    local_15c = *(undefined1 *)(param_1 + 0x2b54);
    local_158 = *(undefined4 *)(param_1 + 0x2b58);
    local_150 = *(undefined4 *)(param_1 + 0x2b5c);
    local_14c = *(undefined4 *)(param_1 + 0x2b60);
    local_148 = *(undefined4 *)(param_1 + 0x2b64);
    local_144 = *(undefined4 *)(param_1 + 0x2b68);
    local_140 = *(undefined4 *)(param_1 + 0x2b6c);
    local_13c = *(undefined4 *)(param_1 + 0x2b70);
    local_188[1] = 1;
    local_17c = 0;
    local_160 = 0;
    local_154 = 0;
    local_138 = 0;
    if ((*(int *)(param_1 + 11000) == 0) || (bVar6 = true, *(int *)(param_1 + 0x2afc) != 1)) {
      bVar6 = false;
    }
    if ((*(uint *)(param_1 + 0x2cac) == 4) ||
       (bVar3 = true, (*(uint *)(param_1 + 0x2cac) & 0xff0000) != 0)) {
      bVar3 = false;
    }
    local_134 = -(bVar3 || bVar6) & 0xf;
    uVar4 = FUN_18000d928((longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1978),local_188);
    *(undefined8 *)(param_1 + 0x33e0) = uVar4;
    *(undefined1 *)(param_1 + 0x345a) = 1;
    *(undefined1 *)(param_1 + 0x2c79) = 0;
  }
  if (*(char *)(param_1 + 0x2c7a) != '\0') {
    local_1b8 = *(undefined8 *)(param_1 + 0x2b88);
    iVar2 = *(int *)(param_1 + 0x2b94);
    local_1c8 = *(undefined8 *)(param_1 + 0x2b78);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x2b80);
    uStack_1b0 = CONCAT44(*(undefined4 *)(param_1 + 0x2b98),*(undefined4 *)(param_1 + 0x2b90));
    local_1a8 = *(undefined4 *)(param_1 + 0x2b9c);
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uVar4 = FUN_18000dad8((longlong *)(*(longlong *)(param_1 + 0x3340) + 0x19a8),(uint *)&local_1c8)
    ;
    bVar6 = iVar2 != 0;
    *(undefined8 *)(param_1 + 0x33f0) = uVar4;
    *(undefined1 *)(param_1 + 0x2c7a) = 0;
    *(undefined1 *)(param_1 + 0x345a) = 1;
    cVar1 = *(char *)(param_1 + 0x3459);
    *(bool *)(param_1 + 0x3459) = bVar6;
    *(byte *)(param_1 + 0x32f1) = *(byte *)(param_1 + 0x32f1) | (bool)cVar1 != bVar6;
  }
  if (*(char *)(param_1 + 0x2c7c) != '\0') {
    uVar5 = FUN_180009efc(param_1);
    *(byte *)(param_1 + 0x2c7b) = *(byte *)(param_1 + 0x2c7b) | (byte)uVar5;
    *(undefined1 *)(param_1 + 0x2c7c) = 0;
  }
  if ((*(char *)(param_1 + 0x2c7b) != '\0') || (param_2 != '\0')) {
    local_1c8 = *(undefined8 *)(param_1 + 0x2ba0);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x2ba8);
    local_1b8 = *(undefined8 *)(param_1 + 0x2bb0);
    FUN_18004ae78(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),1,(longlong)&local_1c8);
    *(undefined1 *)(param_1 + 0x2c7b) = 0;
  }
  if (*(char *)(param_1 + 0x2c7d) != '\0') {
    FUN_180011bf4(param_1);
    *(undefined1 *)(param_1 + 0x2c7d) = 0;
  }
  return;
}

