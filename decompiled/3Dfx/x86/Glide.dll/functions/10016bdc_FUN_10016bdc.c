/*
 * FUN_10016bdc at 10016bdc
 * undefined __thiscall FUN_10016bdc(void * this, char param_1)
 * Address ranges: 10016bdc-10016ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016bdc(void *this,char param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
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
  undefined1 *local_c;
  
  local_10 = (int *)((int)this + 0x3188);
  local_c = (undefined1 *)((int)this + 0x3236);
  if (*(char *)((int)this + 0x2bc0) != '\0') {
    piVar5 = (int *)((int)this + 0x2a40);
    piVar7 = local_44;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    uVar3 = FUN_1001780a((void *)(*(int *)((int)this + 0x3188) + 0x15f0),local_44);
    *(undefined4 *)((int)this + 0x31e4) = uVar3;
    *(undefined1 *)((int)this + 0x2bc0) = 0;
    *(undefined1 *)((int)this + 0x3236) = 1;
    FUN_1003e150(*(int *)(*(int *)((int)this + 0x3188) + 0x1304),*(int *)((int)this + 0x2a74));
  }
  if (*(char *)((int)this + 0x2bc1) != '\0') {
    FUN_10050561(local_190,0,0x148);
    local_190[2] = *(undefined4 *)((int)this + 0x2a80);
    local_180 = *(undefined4 *)((int)this + 0x2a84);
    local_17c = *(undefined4 *)((int)this + 0x2a88);
    local_178 = *(undefined4 *)((int)this + 0x2a8c);
    local_174 = *(undefined4 *)((int)this + 0x2a90);
    local_170 = *(undefined4 *)((int)this + 0x2a94);
    local_16c = *(undefined4 *)((int)this + 0x2a98);
    local_164 = *(undefined1 *)((int)this + 0x2a9c);
    local_160 = *(undefined4 *)((int)this + 0x2aa0);
    local_158 = *(undefined4 *)((int)this + 0x2aa4);
    local_154 = *(undefined4 *)((int)this + 0x2aa8);
    local_150 = *(undefined4 *)((int)this + 0x2aac);
    local_14c = *(undefined4 *)((int)this + 0x2ab0);
    local_148 = *(undefined4 *)((int)this + 0x2ab4);
    local_144 = *(undefined4 *)((int)this + 0x2ab8);
    local_190[1] = 1;
    local_184 = 0;
    local_168 = 0;
    local_15c = 0;
    local_140 = 0;
    if ((*(int *)((int)this + 0x2a40) == 0) || (bVar9 = true, *(int *)((int)this + 0x2a44) != 1)) {
      bVar9 = false;
    }
    if ((*(uint *)((int)this + 0x2bec) == 4) ||
       (bVar2 = true, (*(uint *)((int)this + 0x2bec) & 0xff0000) != 0)) {
      bVar2 = false;
    }
    local_13c = -(bVar9 || bVar2) & 0xf;
    uVar3 = FUN_1001775b((void *)(*(int *)((int)this + 0x3188) + 0x1600),local_190);
    *(undefined4 *)((int)this + 0x31d8) = uVar3;
    *(undefined1 *)((int)this + 0x2bc1) = 0;
    *(undefined1 *)((int)this + 0x3236) = 1;
  }
  if (*(char *)((int)this + 0x2bc2) != '\0') {
    local_44[2] = *(undefined4 *)((int)this + 0x2ac0);
    local_2c = *(undefined4 *)((int)this + 0x2ad0);
    iVar4 = *(int *)((int)this + 0x2adc);
    local_44[3] = *(undefined4 *)((int)this + 0x2ac4);
    local_34 = *(undefined4 *)((int)this + 0x2ac8);
    local_30 = *(undefined4 *)((int)this + 0x2acc);
    local_28[1] = *(undefined4 *)((int)this + 0x2ad8);
    local_28[2] = *(undefined4 *)((int)this + 0x2ae0);
    local_28[3] = *(undefined4 *)((int)this + 0x2ae4);
    local_28[0] = *(undefined4 *)((int)this + 0x2ad4);
    local_18 = 0;
    local_14 = 0;
    uVar3 = FUN_10017649((void *)(*(int *)((int)this + 0x3188) + 0x1620),(uint *)(local_44 + 2));
    bVar9 = iVar4 != 0;
    *(undefined4 *)((int)this + 0x31e0) = uVar3;
    *(undefined1 *)((int)this + 0x2bc2) = 0;
    cVar1 = *(char *)((int)this + 0x3235);
    *(bool *)((int)this + 0x3235) = bVar9;
    *(byte *)((int)this + 0x3151) = *(byte *)((int)this + 0x3151) | (bool)cVar1 != bVar9;
    *local_c = 1;
  }
  piVar5 = local_10;
  if (*(char *)((int)this + 0x2bc4) != '\0') {
    *(undefined1 *)((int)this + 0x2bc4) = 0;
  }
  if ((*(char *)((int)this + 0x2bc3) != '\0') || (param_1 != '\0')) {
    puVar6 = (undefined4 *)((int)this + 0x2ae8);
    puVar8 = local_28;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_1003e281(*(int *)(*piVar5 + 0x1304),1,(int)local_28);
    *(undefined1 *)((int)this + 0x2bc3) = 0;
  }
  if (*(char *)((int)this + 0x2bc5) != '\0') {
    FUN_1001dfba((int)this);
    *(undefined1 *)((int)this + 0x2bc5) = 0;
  }
  return;
}

