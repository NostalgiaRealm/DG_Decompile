/*
 * FUN_10039794 at 10039794
 * undefined __thiscall FUN_10039794(void * this, int param_1, void * param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, uint param_8, char param_9, char param_10)
 * Address ranges: 10039794-10039c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10039794(void *this,int param_1,void *param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7,uint param_8,char param_9,char param_10)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  bool local_8f;
  uint local_8c;
  int local_68;
  uint local_64 [10];
  int local_3c;
  uint local_38 [10];
  int local_10;
  int local_c;
  
  *(byte *)((int)this + 0xd978) = *(byte *)((int)this + 0xd978) | *(byte *)((int)this + 0x595e);
  local_8c = *(uint *)((int)this + 0x4cb0);
  *(undefined1 *)((int)this + 0x595e) = 0;
  *(undefined4 *)((int)this + 0x6a4) = *(undefined4 *)((int)this + 0x6a4);
  iVar10 = *(int *)((int)this + 0x6c);
  *(uint *)((int)this + 0x6a0) =
       (uint)(*(char *)((int)this + 0x82) != '\0') << 0x1a |
       *(uint *)((int)this + 0x6a0) & 0xfbffffff;
  uVar6 = (0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50);
  puVar7 = &DAT_100b7f34;
  uVar3 = (0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68);
  bVar14 = *(char *)((int)this + 0x5954) == '\0';
  if (bVar14) {
    puVar7 = &DAT_100b7f50;
  }
  puVar8 = &DAT_100b7efc;
  if (bVar14) {
    puVar8 = &DAT_100b7f18;
  }
  bVar14 = 2.0 <= *(float *)((int)this + 0x570);
  if ((*(char *)((int)this + 0x574) != '\0') &&
     (1 < *(byte *)(*(int *)((int)param_2 + 0x1c) + 0x4854))) {
    bVar14 = false;
  }
  if ((((param_1 == 4) || (param_1 == 5)) || (param_1 == 6)) && (bVar14)) {
    cVar11 = '\x01';
  }
  else {
    cVar11 = '\0';
  }
  uVar5 = *(uint *)((int)this + 0x4cdc);
  local_8f = false;
  uVar17 = FUN_10027309((byte)(*(uint *)((int)this + 0x5948) >> 2) & 1,cVar11,
                        *(uint *)((int)this + 0x5944),(byte)(uVar5 >> 1) & 1,(byte)(uVar5 >> 2) & 1,
                        (byte)uVar5 & 1,*(uint *)((int)this + 0x4cd8));
  FUN_1003ff86(param_2,&local_68,(uint)uVar17,(uint)((ulonglong)uVar17 >> 0x20));
  iVar4 = local_10;
  if (param_9 != '\0') {
    iVar4 = local_c;
  }
  if (param_1 == 1) {
    if (param_10 == '\0') {
      local_8c = local_8c & 0xfff3ffff;
      fVar15 = *(float *)((int)this + 0x52a8);
      if (*(float *)((int)this + 0x52a8) <= *(float *)((int)this + 0x52a0)) {
        fVar15 = *(float *)((int)this + 0x52a0);
      }
      fVar16 = *(float *)((int)this + 0x52a4);
      if (fVar15 <= *(float *)((int)this + 0x52a4)) {
        fVar16 = fVar15;
      }
      fVar16 = fVar16 - 1.0;
      if (fVar16 < 0.0) {
        fVar16 = -fVar16;
      }
      local_8f = 0.1 < fVar16;
      if (!local_8f) goto LAB_100399bc;
    }
    else {
      local_8c = local_8c & 0xfffbffff | 0x80000;
      local_8f = true;
    }
    local_3c = *(int *)(*(int *)((int)this + 0xd9c4) + 0x90);
    puVar13 = &DAT_100afae8;
    puVar12 = local_38;
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
  }
LAB_100399bc:
  if (((((*(char *)((int)this + 0x5955) != '\0') || (*(int *)((int)this + 0x6ec) != param_5)) ||
       ((*(uint *)((int)this + 0x6a8) != param_6 ||
        ((*(int *)((int)this + 0xdcd8) != param_4 || (*(int *)((int)this + 0xdc98) != param_3))))))
      || (*(int *)((int)this + 0xda74) != local_68)) ||
     (((((*(int *)((int)this + 0xda84) != local_3c || (*(int *)((int)this + 0x5930) != 2)) ||
        (*(int *)((int)this + 0xdce0) != *(int *)(puVar7 + param_1 * 4))) ||
       (((iVar10 != 0) != (param_8 != 0) || (uVar6 < param_7)))) ||
      ((uVar3 < param_8 ||
       ((*(int *)((int)this + 0xda9c) != iVar4 || (*(uint *)((int)this + 0x4cb0) != local_8c))))))))
  {
    uVar5 = 0;
    if (param_3 == *(int *)((int)this + 0xd9d4)) {
      uVar5 = param_6;
    }
    FUN_10036ae0(this,uVar6 < param_7,uVar3 < param_8,uVar5);
    if (param_3 == *(int *)((int)this + 0xd9d4)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x5955) != '\0') {
      *(undefined1 *)((int)this + 0xd979) = 1;
      *(uint *)((int)this + 0xd974) = *(uint *)((int)this + 0xd974) | 1;
    }
    puVar1 = (undefined1 *)((int)this + 0xd97f);
    if (*(uint *)((int)this + 0x6a8) != param_6) {
      *(uint *)((int)this + 0x6a8) = param_6;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xdc98) != param_3) {
      *(int *)((int)this + 0xdc98) = param_3;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0x6ec) != param_5) {
      *(int *)((int)this + 0x6ec) = param_5;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xdcd8) != param_4) {
      *(int *)((int)this + 0xdcd8) = param_4;
      *(undefined1 *)((int)this + 0xd980) = 1;
    }
    if (*(int *)((int)this + 0xda84) != local_3c) {
      *(int *)((int)this + 0xda84) = local_3c;
      puVar13 = (uint *)((int)this + 0xde00);
      iVar10 = 10;
      if (local_3c == 0) {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
      else {
        puVar12 = local_38;
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
      }
      *(bool *)((int)this + 0x595b) = local_8f;
      *(undefined1 *)((int)this + 0xd97d) = 1;
      *(undefined1 *)((int)this + 0xde59) = 1;
    }
    if (*(int *)((int)this + 0xda9c) != iVar4) {
      *(int *)((int)this + 0xda9c) = iVar4;
      *(undefined1 *)((int)this + 0xde59) = 1;
    }
    if (*(int *)((int)this + 0xda74) != local_68) {
      *(int *)((int)this + 0xda74) = local_68;
      *(undefined1 *)((int)this + 0xde59) = 1;
      puVar13 = local_64;
      puVar12 = (uint *)((int)this + 0xddd8);
      for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar12 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    if (*(char *)(*(int *)((int)this + 0xd9c4) + 0xec) != '\0') {
      if ((*(char *)((int)this + 0xde69) == '\0') && (((local_64[0] | local_38[0]) >> 4 & 1) != 0))
      {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      *(byte *)((int)this + 0xde5e) = *(byte *)((int)this + 0xde5e) | bVar2;
    }
    if ((*(int *)((int)this + 0x5930) != 2) || (*(char *)((int)this + 0x5955) != '\0')) {
      *(undefined4 *)((int)this + 0x5930) = 2;
      *(undefined1 *)((int)this + 0xd97e) = 1;
    }
    if (*(int *)((int)this + 0xdce0) != *(int *)(puVar7 + param_1 * 4)) {
      *(int *)((int)this + 0xdce0) = *(int *)(puVar7 + param_1 * 4);
      *(undefined1 *)((int)this + 0xde58) = 1;
    }
    if (*(int *)((int)this + 0xdaa4) != *(int *)(puVar8 + param_1 * 4)) {
      *(int *)((int)this + 0xdaa4) = *(int *)(puVar8 + param_1 * 4);
      *(undefined1 *)((int)this + 0xde59) = 1;
    }
    if (*(uint *)((int)this + 0x4cb0) != local_8c) {
      *(uint *)((int)this + 0x4cb0) = local_8c;
      *(undefined1 *)((int)this + 0xd981) = 1;
    }
    bVar2 = *(byte *)((int)this + 0x5955);
    *(byte *)((int)this + 0xd97c) = *(byte *)((int)this + 0xd97c) | bVar2;
    *(byte *)((int)this + 0xd97b) = *(byte *)((int)this + 0xd97b) | bVar2;
    *(byte *)((int)this + 0xd97d) = *(byte *)((int)this + 0xd97d) | bVar2;
    *(byte *)((int)this + 0xd978) = *(byte *)((int)this + 0xd978) | bVar2;
    if (bVar2 != 0) {
      *(undefined1 *)((int)this + 0x5955) = 0;
      FUN_100416c0((int)this);
    }
  }
  return;
}

