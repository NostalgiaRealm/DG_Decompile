/*
 * FUN_180032030 at 180032030
 * undefined __fastcall FUN_180032030(longlong param_1, longlong param_2, undefined8 param_3, ulonglong param_4, uint param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 180032030-180032560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180032030(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,uint param_6,uint param_7,uint param_8,byte param_9)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58 [3];
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar4 = (uint)param_3;
  uVar11 = 0;
  uVar14 = param_4;
  FUN_18001c590(*(longlong *)(param_1 + 0x140),'\0');
  bVar5 = false;
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2c98) = *(undefined4 *)(param_2 + 0x6c);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf0) = (float)*(uint *)(param_2 + 0x20);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf4) = (float)*(uint *)(param_2 + 0x24);
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x3170) = 1;
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
  if (*(char *)(param_2 + 0x95) == '\0') {
    DAT_18006c604 = (-(*(char *)(param_2 + 0x48) != '\0') & 0xf9U) + 0xf;
    DAT_18006c624 = -(*(char *)(param_2 + 0x48) != '\0') & 0xf;
    if ((*(char *)(param_2 + 0x48) != '\0') &&
       ((*(int *)(param_2 + 0x10) == 5 ||
        ((*(byte *)(*(longlong *)(param_1 + 0x140) + 0x2984) & 0x80) != 0)))) {
      DAT_18006c604 = '\0';
    }
    FUN_18004cc3c(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),
                  (int *)&DAT_18006c5e0,uVar14,-1);
    _DAT_18006c570 = 1;
    _DAT_18006c574 = 1;
    piVar13 = (int *)&DAT_18006c5a8;
    lVar9 = *(longlong *)(param_1 + 0x140);
    if (*(char *)(param_2 + 0x48) != '\0') {
      piVar13 = (int *)&DAT_18006c570;
    }
    FUN_18004ccb0(*(longlong *)(lVar9 + 0x31b0),(ulonglong)*(uint *)(lVar9 + 0x31b8),piVar13,
                  *(int *)(lVar9 + 0x2a98));
    FUN_18004ce28(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),
                  (uint *)&DAT_18006c548);
    _DAT_18006c5b4 = 0;
  }
  else {
    FUN_18001bddc(*(longlong *)(param_1 + 0x140),uVar11,param_3,uVar14);
  }
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_48 = 0;
  local_58[2] = (float)*(uint *)(param_2 + 0x28);
  local_44 = 0x3f800000;
  local_4c = (float)*(uint *)(param_2 + 0x2c);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0);
  FUN_18004d024(lVar9,(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),local_58);
  uVar2 = *(uint *)(param_2 + 0x28);
  if (((uVar2 != *(uint *)(param_2 + 0x20)) ||
      (*(int *)(param_2 + 0x2c) != *(int *)(param_2 + 0x24))) &&
     (bVar6 = FUN_1800202e8(lVar9,*(int *)(*(longlong *)(param_1 + 0x140) + 0x2c98),
                            *(int *)(*(longlong *)(param_1 + 0x140) + 0x2c94)), bVar6)) {
    bVar5 = true;
  }
  puVar7 = &DAT_180063368;
  if (!bVar5) {
    puVar7 = &DAT_180063340;
  }
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x140) + 0x2984) & 0x7f;
  if (uVar8 == 0) {
    iVar10 = 0;
  }
  else if (uVar8 == 1) {
    iVar10 = 1;
  }
  else {
    iVar10 = -1;
    if (uVar8 == 2) {
      iVar10 = 2;
    }
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x140) + 0x2988);
  iVar12 = -1;
  if (iVar3 == 0) {
    iVar12 = 0;
  }
  else if (iVar3 == 1) {
    iVar12 = 1;
  }
  else if (iVar3 == 2) {
    iVar12 = 2;
  }
  lVar9 = 0;
  if (iVar10 != -1) {
    lVar9 = (longlong)iVar10 * 0x180 + 0x148 + param_1;
  }
  lVar15 = param_2;
  if (*(char *)(param_2 + 0x48) != '\0') {
    lVar15 = lVar9;
  }
  lVar9 = 0;
  if (iVar12 != -1) {
    lVar9 = (longlong)iVar12 * 0x180 + 0x148 + param_1;
  }
  if (*(char *)(param_2 + 0x48) != '\0') {
    lVar9 = param_2;
  }
  if (lVar15 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar15 + 0xe0);
  }
  if (lVar9 == 0) {
    lVar16 = 0;
    uVar17 = 0;
  }
  else {
    lVar16 = *(longlong *)(lVar9 + 0x168);
    uVar17 = *(undefined8 *)(lVar9 + 0xe0);
  }
  if (((lVar15 != 0) && (lVar9 != 0)) &&
     ((*(int *)(lVar15 + 0x28) != *(int *)(lVar9 + 0x28) ||
      (*(int *)(lVar15 + 0x2c) != *(int *)(lVar9 + 0x2c))))) {
    if (*(char *)(param_2 + 0x48) == '\0') {
      uVar17 = 0;
      lVar16 = 0;
    }
    else {
      uVar11 = 0;
    }
  }
  uVar8 = *(uint *)(param_2 + 0x24);
  if (bVar5) {
    local_70 = -(0.49 / ((float)uVar2 / (float)*(uint *)(param_2 + 0x20)));
    local_6c = -(0.49 / ((float)*(uint *)(param_2 + 0x2c) / (float)uVar8));
  }
  else {
    local_6c = 0.005;
    local_70 = 0.005;
  }
  local_68 = (float)param_5;
  local_64 = (float)param_6;
  local_60 = (float)param_7;
  local_5c = (float)param_8;
  if (*(int *)(param_2 + 0x70) == 1) {
    param_6 = uVar8 - param_6;
    param_8 = uVar8 - param_8;
  }
  local_78 = local_68 + local_70;
  local_70 = local_60 + local_70;
  local_74 = (float)param_6 + local_6c;
  local_6c = (float)param_8 + local_6c;
  FUN_180031b04(param_1,&local_68,&local_78,
                *(longlong *)
                 (param_1 + 0x5c8 +
                 (ulonglong)
                 *(ushort *)
                  (puVar7 + (ulonglong)
                            (-(uint)(*(char *)(param_2 + 0x95) != '\0') & 2 |
                             (uint)(*(char *)(param_2 + 0x48) != '\0') | (uVar4 & 0xff) << 2 |
                            ((uint)param_4 & 0xff) << 3) * 2) * 8),
                *(undefined8 *)
                 (param_2 + 0x120 + (ulonglong)(-(uint)((char)param_4 != '\0') & 0x30)),
                *(undefined8 *)
                 (param_2 + 0x128 + (ulonglong)(-(uint)((char)param_4 != '\0') & 0x30)),uVar11,
                uVar17,lVar16,param_9);
  FUN_18001c518(*(longlong *)(param_1 + 0x140));
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4) = uVar1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be1) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be0) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be3) = 1;
  return;
}

