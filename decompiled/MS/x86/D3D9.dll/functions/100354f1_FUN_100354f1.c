/*
 * FUN_100354f1 at 100354f1
 * undefined __thiscall FUN_100354f1(void * this, int param_1, void * param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, uint param_8, char param_9, char param_10)
 * Address ranges: 100354f1-10035939
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100354f1(void *this,int param_1,void *param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7,uint param_8,char param_9,char param_10)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  undefined8 uVar17;
  char local_30;
  bool local_2f;
  int local_2c;
  
  iVar10 = *(int *)((int)this + 0x6c);
  *(byte *)((int)this + 0xf668) = *(byte *)((int)this + 0xf668) | *(byte *)((int)this + 0x764b);
  uVar13 = *(uint *)((int)this + 0x6920);
  *(undefined1 *)((int)this + 0x764b) = 0;
  uVar11 = (0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50);
  uVar5 = (0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68);
  puVar6 = &DAT_100dc190;
  if (*(char *)((int)this + 0x7641) == '\0') {
    puVar6 = &DAT_100dc1ac;
  }
  if (*(int *)((int)this + 0xf748) < 0xb000) {
LAB_100355c7:
    local_30 = '\0';
  }
  else {
    bVar4 = 2.0 <= *(float *)((int)this + 0xe88);
    if ((*(char *)((int)this + 0xe8c) != '\0') &&
       (1 < *(byte *)(*(int *)((int)param_2 + 0x1c) + 0x4a6c))) {
      bVar4 = false;
    }
    if ((((param_1 != 4) && (param_1 != 5)) && (param_1 != 6)) || (local_30 = '\x01', !bVar4))
    goto LAB_100355c7;
  }
  uVar12 = *(uint *)((int)this + 0x694c);
  if ((uVar12 & 1) == 0) {
    uVar7 = *(uint *)((int)this + 0x6948);
  }
  else {
    lVar16 = FUN_100d0ba0();
    uVar7 = (uint)lVar16;
    uVar12 = *(uint *)((int)this + 0x694c);
  }
  local_2f = false;
  uVar17 = FUN_1002ec88((byte)(*(uint *)((int)this + 0x7634) >> 2) & 1,local_30,
                        *(uint *)((int)this + 0x7630),(byte)(uVar12 >> 1) & 1,
                        (byte)(uVar12 >> 2) & 1,*(byte *)((int)this + 0x694c) & 1,uVar7);
  piVar8 = (int *)FUN_10038543(param_2,(uint)uVar17,(uint)((ulonglong)uVar17 >> 0x20));
  iVar3 = *piVar8;
  local_2c = piVar8[1];
  iVar9 = *(int *)((int)param_2 + 0x80);
  if (param_9 != '\0') {
    iVar9 = *(int *)((int)param_2 + 0x84);
  }
  if (param_1 == 1) {
    if (param_10 == '\0') {
      uVar13 = uVar13 & 0xfff3ffff;
      fVar14 = *(float *)((int)this + 0x6f18);
      if (*(float *)((int)this + 0x6f18) <= *(float *)((int)this + 0x6f10)) {
        fVar14 = *(float *)((int)this + 0x6f10);
      }
      fVar15 = *(float *)((int)this + 0x6f14);
      if (fVar14 <= *(float *)((int)this + 0x6f14)) {
        fVar15 = fVar14;
      }
      fVar15 = fVar15 - 1.0;
      if (fVar15 < 0.0) {
        fVar15 = -fVar15;
      }
      local_2f = 0.1 < fVar15;
      if (!local_2f) goto LAB_100356ec;
    }
    else {
      uVar13 = uVar13 & 0xfffbffff | 0x80000;
      local_2f = true;
    }
    local_2c = *(int *)(*(int *)((int)this + 0xf6b8) + 0x118);
  }
LAB_100356ec:
  if (((((*(char *)((int)this + 0x7642) != '\0') || (*(int *)((int)this + 0x100c) != param_5)) ||
       ((*(int *)((int)this + 0xfc8) != param_6 ||
        ((*(int *)((int)this + 0xfa18) != param_4 || (*(int *)((int)this + 0xf9d8) != param_3))))))
      || (*(int *)((int)this + 0xf9cc) != iVar3)) ||
     (((((*(int *)((int)this + 0xf9d4) != local_2c || (*(int *)((int)this + 0x761c) != 2)) ||
        (*(int *)((int)this + 0xfa2c) != *(int *)(puVar6 + param_1 * 4))) ||
       (((iVar10 != 0) != (param_8 != 0) || (uVar11 < param_7)))) ||
      ((uVar5 < param_8 ||
       ((*(int *)((int)this + 0xf9c8) != iVar9 || (*(uint *)((int)this + 0x6920) != uVar13)))))))) {
    iVar10 = 0;
    if (param_3 == *(int *)((int)this + 0xf6d4)) {
      iVar10 = param_6;
    }
    FUN_10032e50(this,uVar11 < param_7,uVar5 < param_8,iVar10);
    if (param_3 == *(int *)((int)this + 0xf6d4)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x7642) != '\0') {
      *(undefined1 *)((int)this + 0xf669) = 1;
      *(uint *)((int)this + 0xf664) = *(uint *)((int)this + 0xf664) | 1;
    }
    puVar1 = (undefined1 *)((int)this + 0xf66f);
    if (*(int *)((int)this + 0xfc8) != param_6) {
      *(int *)((int)this + 0xfc8) = param_6;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xf9d8) != param_3) {
      *(int *)((int)this + 0xf9d8) = param_3;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0x100c) != param_5) {
      *(int *)((int)this + 0x100c) = param_5;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xfa18) != param_4) {
      *(int *)((int)this + 0xfa18) = param_4;
      *(undefined1 *)((int)this + 0xf670) = 1;
    }
    puVar1 = (undefined1 *)((int)this + 0x10230);
    if (*(int *)((int)this + 0xf9d4) != local_2c) {
      *(int *)((int)this + 0xf9d4) = local_2c;
      *(bool *)((int)this + 0x7648) = local_2f;
      *(undefined1 *)((int)this + 0xf66d) = 1;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xf9c8) != iVar9) {
      *(int *)((int)this + 0xf9c8) = iVar9;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xf9cc) != iVar3) {
      *(int *)((int)this + 0xf9cc) = iVar3;
      *puVar1 = 1;
      *(uint *)((int)this + 0xfa30) = (uint)uVar17 & 0x3f;
      *(void **)((int)this + 0xf740) = param_2;
      *(undefined1 *)((int)this + 0xf6a2) = 1;
    }
    if ((*(int *)((int)this + 0x761c) != 2) || (*(char *)((int)this + 0x7642) != '\0')) {
      *(undefined4 *)((int)this + 0x761c) = 2;
      *(undefined1 *)((int)this + 0xf66e) = 1;
    }
    if (*(int *)((int)this + 0xfa2c) != *(int *)(puVar6 + param_1 * 4)) {
      *(int *)((int)this + 0xfa2c) = *(int *)(puVar6 + param_1 * 4);
      *(undefined1 *)((int)this + 0x10230) = 1;
    }
    if (*(uint *)((int)this + 0x6920) != uVar13) {
      *(uint *)((int)this + 0x6920) = uVar13;
      *(undefined1 *)((int)this + 0xf671) = 1;
    }
    bVar2 = *(byte *)((int)this + 0x7642);
    *(byte *)((int)this + 0xf66c) = *(byte *)((int)this + 0xf66c) | bVar2;
    *(byte *)((int)this + 0xf66b) = *(byte *)((int)this + 0xf66b) | bVar2;
    *(byte *)((int)this + 0xf66d) = *(byte *)((int)this + 0xf66d) | bVar2;
    *(byte *)((int)this + 0xf668) = *(byte *)((int)this + 0xf668) | bVar2;
    if (bVar2 != 0) {
      *(undefined1 *)((int)this + 0x7642) = 0;
      FUN_1004f060((int)this);
    }
  }
  return;
}

