/*
 * FUN_10044eb6 at 10044eb6
 * undefined __thiscall FUN_10044eb6(void * this, int param_1, void * param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, uint param_8, char param_9, char param_10)
 * Address ranges: 10044eb6-100453e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10044eb6(void *this,int param_1,void *param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7,uint param_8,char param_9,char param_10)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  undefined8 uVar18;
  bool local_90;
  char local_8f;
  uint local_8c;
  int local_68;
  uint local_64 [4];
  uint local_54;
  uint local_44;
  int local_3c;
  uint local_38 [4];
  uint local_28;
  uint local_18;
  int local_10;
  int local_c;
  
  iVar11 = *(int *)((int)this + 0x6c);
  *(byte *)((int)this + 0xf668) = *(byte *)((int)this + 0xf668) | *(byte *)((int)this + 0x764b);
  local_8c = *(uint *)((int)this + 0x6920);
  *(undefined1 *)((int)this + 0x764b) = 0;
  uVar7 = (0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50);
  puVar8 = &DAT_100dc25c;
  uVar3 = (0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68);
  bVar14 = *(char *)((int)this + 0x7641) == '\0';
  if (bVar14) {
    puVar8 = &DAT_100dc278;
  }
  puVar9 = &DAT_100dc224;
  if (bVar14) {
    puVar9 = &DAT_100dc240;
  }
  bVar14 = 2.0 <= *(float *)((int)this + 0xe88);
  if ((*(char *)((int)this + 0xe8c) != '\0') &&
     (1 < *(byte *)(*(int *)((int)param_2 + 0x1c) + 0x4a6c))) {
    bVar14 = false;
  }
  if ((((param_1 != 4) && (param_1 != 5)) && (param_1 != 6)) || (local_8f = '\x01', !bVar14)) {
    local_8f = '\0';
  }
  uVar6 = *(uint *)((int)this + 0x694c);
  if ((uVar6 & 1) == 0) {
    uVar4 = *(uint *)((int)this + 0x6948);
  }
  else {
    lVar17 = FUN_100d0ba0();
    uVar4 = (uint)lVar17;
    uVar6 = *(uint *)((int)this + 0x694c);
  }
  local_90 = false;
  uVar18 = FUN_1002ec88((byte)(*(uint *)((int)this + 0x7634) >> 2) & 1,local_8f,
                        *(uint *)((int)this + 0x7630),(byte)(uVar6 >> 1) & 1,(byte)(uVar6 >> 2) & 1,
                        *(byte *)((int)this + 0x694c) & 1,uVar4);
  FUN_1004da3a(param_2,&local_68,(uint)uVar18,(uint)((ulonglong)uVar18 >> 0x20));
  iVar5 = local_10;
  if (param_9 != '\0') {
    iVar5 = local_c;
  }
  if (param_1 == 1) {
    if (param_10 == '\0') {
      local_8c = local_8c & 0xfff3ffff;
      fVar15 = *(float *)((int)this + 0x6f18);
      if (*(float *)((int)this + 0x6f18) <= *(float *)((int)this + 0x6f10)) {
        fVar15 = *(float *)((int)this + 0x6f10);
      }
      fVar16 = *(float *)((int)this + 0x6f14);
      if (fVar15 <= *(float *)((int)this + 0x6f14)) {
        fVar16 = fVar15;
      }
      fVar16 = fVar16 - 1.0;
      if (fVar16 < 0.0) {
        fVar16 = -fVar16;
      }
      local_90 = 0.1 < fVar16;
      if (!local_90) goto LAB_100450d8;
    }
    else {
      local_8c = local_8c & 0xfffbffff | 0x80000;
      local_90 = true;
    }
    local_3c = *(int *)(*(int *)((int)this + 0xf6c4) + 0x90);
    puVar13 = &DAT_100d1c30;
    puVar12 = local_38;
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
  }
LAB_100450d8:
  if (((((*(char *)((int)this + 0x7642) != '\0') || (*(int *)((int)this + 0x100c) != param_5)) ||
       ((*(uint *)((int)this + 0xfc8) != param_6 ||
        ((*(int *)((int)this + 0xfc10) != param_4 || (*(int *)((int)this + 0xfbd0) != param_3))))))
      || (*(int *)((int)this + 0xf80c) != local_68)) ||
     (((((*(int *)((int)this + 0xf81c) != local_3c || (*(int *)((int)this + 0x761c) != 2)) ||
        (*(int *)((int)this + 0xfc18) != *(int *)(puVar8 + param_1 * 4))) ||
       (((iVar11 != 0) != (param_8 != 0) || (uVar7 < param_7)))) ||
      ((uVar3 < param_8 ||
       ((*(int *)((int)this + 0xf834) != iVar5 || (*(uint *)((int)this + 0x6920) != local_8c))))))))
  {
    uVar6 = 0;
    if (param_3 == *(int *)((int)this + 0xf6d4)) {
      uVar6 = param_6;
    }
    FUN_10042220(this,uVar7 < param_7,uVar3 < param_8,uVar6);
    if (param_3 == *(int *)((int)this + 0xf6d4)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x7642) != '\0') {
      *(undefined1 *)((int)this + 0xf669) = 1;
      *(uint *)((int)this + 0xf664) = *(uint *)((int)this + 0xf664) | 1;
    }
    puVar1 = (undefined1 *)((int)this + 0xf66f);
    if (*(uint *)((int)this + 0xfc8) != param_6) {
      *(uint *)((int)this + 0xfc8) = param_6;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xfbd0) != param_3) {
      *(int *)((int)this + 0xfbd0) = param_3;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0x100c) != param_5) {
      *(int *)((int)this + 0x100c) = param_5;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xfc10) != param_4) {
      *(int *)((int)this + 0xfc10) = param_4;
      *(undefined1 *)((int)this + 0xf670) = 1;
    }
    if (*(int *)((int)this + 0xf81c) != local_3c) {
      *(int *)((int)this + 0xf81c) = local_3c;
      puVar13 = (uint *)((int)this + 0xfd40);
      iVar11 = 10;
      if (local_3c == 0) {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
      else {
        *(byte *)((int)this + 0xfd9c) =
             *(byte *)((int)this + 0xfd9c) | *(uint *)((int)this + 0xfd60) < local_18;
        *(byte *)((int)this + 0xfda0) =
             *(byte *)((int)this + 0xfda0) | *(uint *)((int)this + 0xfd50) < local_28;
        puVar12 = local_38;
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
      }
      *(bool *)((int)this + 0x7648) = local_90;
      *(undefined1 *)((int)this + 0xf66d) = 1;
      *(undefined1 *)((int)this + 0xfd99) = 1;
    }
    if (*(int *)((int)this + 0xf834) != iVar5) {
      *(int *)((int)this + 0xf834) = iVar5;
      *(undefined1 *)((int)this + 0xfd99) = 1;
    }
    if (*(int *)((int)this + 0xf80c) != local_68) {
      *(int *)((int)this + 0xf80c) = local_68;
      *(void **)((int)this + 0xf7f4) = param_2;
      *(undefined1 *)((int)this + 0xfd99) = 1;
      *(undefined1 *)((int)this + 0xf6a2) = 1;
      *(byte *)((int)this + 0xfd9c) =
           *(byte *)((int)this + 0xfd9c) | *(uint *)((int)this + 0xfd38) < local_44;
      *(byte *)((int)this + 0xfda0) =
           *(byte *)((int)this + 0xfda0) | *(uint *)((int)this + 0xfd28) < local_54;
      puVar13 = local_64;
      puVar12 = (uint *)((int)this + 0xfd18);
      for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar12 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    if (*(char *)(*(int *)((int)this + 0xf6c4) + 0xec) != '\0') {
      if ((*(char *)((int)this + 0xfdaa) == '\0') && (((local_64[0] | local_38[0]) >> 4 & 1) != 0))
      {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      *(byte *)((int)this + 0xfd9e) = *(byte *)((int)this + 0xfd9e) | bVar2;
    }
    if ((*(int *)((int)this + 0x761c) != 2) || (*(char *)((int)this + 0x7642) != '\0')) {
      *(undefined4 *)((int)this + 0x761c) = 2;
      *(undefined1 *)((int)this + 0xf66e) = 1;
    }
    if (*(int *)((int)this + 0xfc18) != *(int *)(puVar8 + param_1 * 4)) {
      *(int *)((int)this + 0xfc18) = *(int *)(puVar8 + param_1 * 4);
      *(undefined1 *)((int)this + 0xfd98) = 1;
    }
    if (*(int *)((int)this + 0xf83c) != *(int *)(puVar9 + param_1 * 4)) {
      *(int *)((int)this + 0xf83c) = *(int *)(puVar9 + param_1 * 4);
      *(undefined1 *)((int)this + 0xfd99) = 1;
    }
    if (*(uint *)((int)this + 0x6920) != local_8c) {
      *(uint *)((int)this + 0x6920) = local_8c;
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

