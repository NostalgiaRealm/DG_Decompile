/*
 * FUN_1002c390 at 1002c390
 * undefined __thiscall FUN_1002c390(void * this, int param_1, void * param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, uint param_8, char param_9, char param_10)
 * Address ranges: 1002c390-1002c7c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002c390(void *this,int param_1,void *param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7,uint param_8,char param_9,char param_10)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  bool local_2f;
  int local_2c;
  
  *(byte *)((int)this + 0xd978) = *(byte *)((int)this + 0xd978) | *(byte *)((int)this + 0x595e);
  uVar13 = *(uint *)((int)this + 0x4cb0);
  *(undefined1 *)((int)this + 0x595e) = 0;
  *(undefined4 *)((int)this + 0x6a4) = *(undefined4 *)((int)this + 0x6a4);
  iVar10 = *(int *)((int)this + 0x6c);
  *(uint *)((int)this + 0x6a0) =
       (uint)(*(char *)((int)this + 0x82) != '\0') << 0x1a |
       *(uint *)((int)this + 0x6a0) & 0xfbffffff;
  uVar11 = (0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50);
  uVar6 = (0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68);
  puVar7 = &DAT_100b7e68;
  if (*(char *)((int)this + 0x5954) == '\0') {
    puVar7 = &DAT_100b7e84;
  }
  if (*(int *)((int)this + 0xda44) < 0xb000) {
LAB_1002c493:
    cVar12 = '\0';
  }
  else {
    bVar5 = 2.0 <= *(float *)((int)this + 0x570);
    if ((*(char *)((int)this + 0x574) != '\0') &&
       (1 < *(byte *)(*(int *)((int)param_2 + 0x1c) + 0x4854))) {
      bVar5 = false;
    }
    if ((((param_1 != 4) && (param_1 != 5)) && (param_1 != 6)) || (!bVar5)) goto LAB_1002c493;
    cVar12 = '\x01';
  }
  uVar3 = *(uint *)((int)this + 0x4cdc);
  local_2f = false;
  uVar16 = FUN_10027309((byte)(*(uint *)((int)this + 0x5948) >> 2) & 1,cVar12,
                        *(uint *)((int)this + 0x5944),(byte)(uVar3 >> 1) & 1,(byte)(uVar3 >> 2) & 1,
                        (byte)uVar3 & 1,*(uint *)((int)this + 0x4cd8));
  piVar8 = (int *)FUN_1002e873(param_2,(uint)uVar16,(uint)((ulonglong)uVar16 >> 0x20));
  iVar4 = *piVar8;
  local_2c = piVar8[1];
  iVar9 = *(int *)((int)param_2 + 0x2c);
  if (param_9 != '\0') {
    iVar9 = *(int *)((int)param_2 + 0x30);
  }
  if (param_1 == 1) {
    if (param_10 == '\0') {
      uVar13 = uVar13 & 0xfff3ffff;
      fVar14 = *(float *)((int)this + 0x52a8);
      if (*(float *)((int)this + 0x52a8) <= *(float *)((int)this + 0x52a0)) {
        fVar14 = *(float *)((int)this + 0x52a0);
      }
      fVar15 = *(float *)((int)this + 0x52a4);
      if (fVar14 <= *(float *)((int)this + 0x52a4)) {
        fVar15 = fVar14;
      }
      fVar15 = fVar15 - 1.0;
      if (fVar15 < 0.0) {
        fVar15 = -fVar15;
      }
      local_2f = 0.1 < fVar15;
      if (!local_2f) goto LAB_1002c58c;
    }
    else {
      uVar13 = uVar13 & 0xfffbffff | 0x80000;
      local_2f = true;
    }
    local_2c = *(int *)(*(int *)((int)this + 0xd9b8) + 0x118);
  }
LAB_1002c58c:
  if (((((*(char *)((int)this + 0x5955) != '\0') || (*(int *)((int)this + 0x6ec) != param_5)) ||
       ((*(int *)((int)this + 0x6a8) != param_6 ||
        ((*(int *)((int)this + 0xdbcc) != param_4 || (*(int *)((int)this + 0xdb8c) != param_3))))))
      || (*(int *)((int)this + 0xdb80) != iVar4)) ||
     (((((*(int *)((int)this + 0xdb88) != local_2c || (*(int *)((int)this + 0x5930) != 2)) ||
        (*(int *)((int)this + 0xdbe0) != *(int *)(puVar7 + param_1 * 4))) ||
       (((iVar10 != 0) != (param_8 != 0) || (uVar11 < param_7)))) ||
      ((uVar6 < param_8 ||
       ((*(int *)((int)this + 0xdb7c) != iVar9 || (*(uint *)((int)this + 0x4cb0) != uVar13)))))))) {
    iVar10 = 0;
    if (param_3 == *(int *)((int)this + 0xd9d4)) {
      iVar10 = param_6;
    }
    FUN_1002a5f0(this,uVar11 < param_7,uVar6 < param_8,iVar10);
    if (param_3 == *(int *)((int)this + 0xd9d4)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x5955) != '\0') {
      *(undefined1 *)((int)this + 0xd979) = 1;
      *(uint *)((int)this + 0xd974) = *(uint *)((int)this + 0xd974) | 1;
    }
    puVar1 = (undefined1 *)((int)this + 0xd97f);
    if (*(int *)((int)this + 0x6a8) != param_6) {
      *(int *)((int)this + 0x6a8) = param_6;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xdb8c) != param_3) {
      *(int *)((int)this + 0xdb8c) = param_3;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0x6ec) != param_5) {
      *(int *)((int)this + 0x6ec) = param_5;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xdbcc) != param_4) {
      *(int *)((int)this + 0xdbcc) = param_4;
      *(undefined1 *)((int)this + 0xd980) = 1;
    }
    puVar1 = (undefined1 *)((int)this + 0xdf04);
    if (*(int *)((int)this + 0xdb88) != local_2c) {
      *(int *)((int)this + 0xdb88) = local_2c;
      *(bool *)((int)this + 0x595b) = local_2f;
      *(undefined1 *)((int)this + 0xd97d) = 1;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xdb7c) != iVar9) {
      *(int *)((int)this + 0xdb7c) = iVar9;
      *puVar1 = 1;
    }
    if (*(int *)((int)this + 0xdb80) != iVar4) {
      *(int *)((int)this + 0xdb80) = iVar4;
      *puVar1 = 1;
      *(uint *)((int)this + 0xdbe4) = (uint)uVar16 & 0x3f;
    }
    if ((*(int *)((int)this + 0x5930) != 2) || (*(char *)((int)this + 0x5955) != '\0')) {
      *(undefined4 *)((int)this + 0x5930) = 2;
      *(undefined1 *)((int)this + 0xd97e) = 1;
    }
    if (*(int *)((int)this + 0xdbe0) != *(int *)(puVar7 + param_1 * 4)) {
      *(int *)((int)this + 0xdbe0) = *(int *)(puVar7 + param_1 * 4);
      *(undefined1 *)((int)this + 0xdf04) = 1;
    }
    if (*(uint *)((int)this + 0x4cb0) != uVar13) {
      *(uint *)((int)this + 0x4cb0) = uVar13;
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

