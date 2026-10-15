/*
 * FUN_1000a3b8 at 1000a3b8
 * undefined __thiscall FUN_1000a3b8(void * this, char param_1)
 * Address ranges: 1000a3b8-1000a6bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000a3b8(void *this,char param_1)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  int local_190 [3];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  byte local_13c;
  int local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  byte *local_c;
  
  local_10 = (int *)((int)this + 0x3308);
  local_c = (byte *)((int)this + 0x33b6);
  if (*(char *)((int)this + 0x2c60) != '\0') {
    piVar6 = (int *)((int)this + 0x2ae0);
    piVar8 = local_44;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    uVar4 = FUN_1000aef7((void *)(*(int *)((int)this + 0x3308) + 0x15f0),local_44);
    *(undefined4 *)((int)this + 0x3364) = uVar4;
    *(undefined1 *)((int)this + 0x2c60) = 0;
    *(undefined1 *)((int)this + 0x33b6) = 1;
    FUN_100408a5(*(int *)(*(int *)((int)this + 0x3308) + 0x1304),*(int *)((int)this + 0x2b14));
  }
  if (*(char *)((int)this + 0x2c61) != '\0') {
    FUN_10052de1(local_190,0,0x148);
    local_190[2] = *(undefined4 *)((int)this + 0x2b20);
    local_180 = *(undefined4 *)((int)this + 0x2b24);
    local_17c = *(undefined4 *)((int)this + 0x2b28);
    local_178 = *(undefined4 *)((int)this + 0x2b2c);
    local_174 = *(undefined4 *)((int)this + 0x2b30);
    local_170 = *(undefined4 *)((int)this + 0x2b34);
    local_16c = *(undefined4 *)((int)this + 0x2b38);
    local_164 = *(undefined1 *)((int)this + 0x2b3c);
    local_160 = *(undefined4 *)((int)this + 0x2b40);
    local_158 = *(undefined4 *)((int)this + 0x2b44);
    local_154 = *(undefined4 *)((int)this + 0x2b48);
    local_150 = *(undefined4 *)((int)this + 0x2b4c);
    local_14c = *(undefined4 *)((int)this + 0x2b50);
    local_148 = *(undefined4 *)((int)this + 0x2b54);
    local_144 = *(undefined4 *)((int)this + 0x2b58);
    local_190[1] = 1;
    local_184 = 0;
    local_168 = 0;
    local_15c = 0;
    local_140 = 0;
    if ((*(int *)((int)this + 0x2ae0) == 0) || (bVar10 = true, *(int *)((int)this + 0x2ae4) != 1)) {
      bVar10 = false;
    }
    if ((*(uint *)((int)this + 0x2c8c) == 4) ||
       (bVar3 = true, (*(uint *)((int)this + 0x2c8c) & 0xff0000) != 0)) {
      bVar3 = false;
    }
    local_13c = -(bVar10 || bVar3) & 0xf;
    uVar4 = FUN_1000ae48((void *)(*(int *)((int)this + 0x3308) + 0x1600),local_190);
    *(undefined4 *)((int)this + 0x3358) = uVar4;
    *(undefined1 *)((int)this + 0x2c61) = 0;
    *(undefined1 *)((int)this + 0x33b6) = 1;
  }
  if (*(char *)((int)this + 0x2c62) != '\0') {
    local_44[2] = *(undefined4 *)((int)this + 0x2b60);
    local_2c = *(undefined4 *)((int)this + 0x2b70);
    iVar5 = *(int *)((int)this + 0x2b7c);
    local_44[3] = *(undefined4 *)((int)this + 0x2b64);
    local_34 = *(undefined4 *)((int)this + 0x2b68);
    local_30 = *(undefined4 *)((int)this + 0x2b6c);
    local_28[1] = *(undefined4 *)((int)this + 0x2b78);
    local_28[2] = *(undefined4 *)((int)this + 0x2b80);
    local_28[3] = *(undefined4 *)((int)this + 0x2b84);
    local_28[0] = *(undefined4 *)((int)this + 0x2b74);
    local_18 = 0;
    local_14 = 0;
    uVar4 = FUN_1000ad36((void *)(*(int *)((int)this + 0x3308) + 0x1620),(uint *)(local_44 + 2));
    bVar10 = iVar5 != 0;
    *(undefined4 *)((int)this + 0x3360) = uVar4;
    *(undefined1 *)((int)this + 0x2c62) = 0;
    cVar2 = *(char *)((int)this + 0x33b5);
    *(bool *)((int)this + 0x33b5) = bVar10;
    *(byte *)((int)this + 0x32d1) = *(byte *)((int)this + 0x32d1) | (bool)cVar2 != bVar10;
    *local_c = 1;
  }
  pbVar1 = (byte *)((int)this + 0x2c63);
  local_c = pbVar1;
  if (*(char *)((int)this + 0x2c64) != '\0') {
    uVar4 = FUN_10007e8d((int)this);
    *pbVar1 = *pbVar1 | (byte)uVar4;
    *(undefined1 *)((int)this + 0x2c64) = 0;
  }
  piVar6 = local_10;
  if ((*pbVar1 != 0) || (param_1 != '\0')) {
    puVar7 = (undefined4 *)((int)this + 0x2b88);
    puVar9 = local_28;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_100409d6(*(int *)(*piVar6 + 0x1304),1,(int)local_28);
    *local_c = 0;
  }
  if (*(char *)((int)this + 0x2c65) != '\0') {
    FUN_1000e07e((int)this);
    *(undefined1 *)((int)this + 0x2c65) = 0;
  }
  return;
}

