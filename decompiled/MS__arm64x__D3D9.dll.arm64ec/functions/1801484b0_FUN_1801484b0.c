/*
 * FUN_1801484b0 at 1801484b0
 * undefined FUN_1801484b0(void)
 * Address ranges: 1801484b0-180148933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801484b0(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lStack_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  longlong local_38;
  
  bVar3 = true;
  if ((*(char *)(param_1 + 0xf688) == '\0') && ((param_4 & 1) == 0)) {
    return true;
  }
  if (*(char *)(param_1 + 0x7662) == '\0') {
    lVar8 = *(longlong *)(param_1 + 0xf7e0);
    if (lVar8 != 0) {
      if ((*(int *)(param_1 + 0x7650) == 0) || (*(int *)(param_1 + 0x1012c) != 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      uVar12 = 0xdfffffffffffffff;
      if ((*(uint *)(param_1 + 0x7594) & *(uint *)(*(longlong *)(lVar8 + 8) + 0x1214)) == 0) {
        uVar12 = 0x9fffffffffffffff;
      }
      uVar12 = *(ulonglong *)(param_1 + 0xfe0) & uVar12;
      uVar11 = uVar12 >> 0x34;
      if (*(char *)(param_1 + 0x765e) == '\0') {
        uVar11 = 7;
      }
      uVar11 = (uVar12 ^ uVar11 << 0x34) & 0xff8fffffffffffff ^ uVar11 << 0x34;
      uVar12 = uVar11 >> 0x38;
      if (!bVar3) {
        uVar12 = 0;
      }
      uVar11 = (uVar11 ^ uVar12 << 0x38) & 0xfeffffffffffffff ^ uVar12 << 0x38;
      uVar12 = uVar11 >> 0x39;
      if (*(char *)(*(longlong *)(lVar8 + 8) + 0x126d) == '\x03') {
        uVar12 = 0;
      }
      uVar10 = (uVar11 ^ uVar12 << 0x39) & 0xfdffffffffffffff ^ uVar12 << 0x39;
      uVar11 = uVar10 >> 0x3c;
      if (*(char *)(param_1 + 0x766e) == '\0') {
        uVar11 = 0;
      }
      uVar11 = (uVar10 ^ uVar11 << 0x3c) & 0xefffffffffffffff ^ uVar11 << 0x3c;
      if ((uVar12 & 1) == 0) {
        uVar11 = uVar11 & 0xf3ffffffffffffff;
      }
      plVar4 = (longlong *)
               FUN_18015f340(lVar8 + 0x10,auStack_60,uVar11,*(undefined8 *)(param_1 + 0xea0));
      lStack_88 = plVar4[1];
      lVar8 = *plVar4;
      lVar13 = plVar4[2];
      local_78 = (uint)plVar4[3];
      local_74 = (undefined4)((ulonglong)plVar4[3] >> 0x20);
      lStack_68 = plVar4[5];
      local_80._0_4_ = (int)lVar13;
      local_80._4_4_ = (int)((ulonglong)lVar13 >> 0x20);
      bVar3 = lVar8 != 0;
      uStack_70 = (undefined4)plVar4[4];
      uStack_6c = (undefined4)((ulonglong)plVar4[4] >> 0x20);
      uStack_50._0_4_ = (int)local_80;
      uStack_50._4_4_ = local_80._4_4_;
      local_38._0_4_ = (uint)lStack_68;
      local_80 = lVar13;
      goto LAB_180148860;
    }
    lVar8 = 0x1012c;
    if (*(longlong *)(param_1 + 0xf910) != 0) {
      lVar8 = 0x10154;
    }
    if ((*(int *)(param_1 + 0x7650) == 0) || (*(int *)(param_1 + lVar8) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar12 = 0xdfffffffffffffff;
    if (((1 << (ulonglong)(param_2 & 0x1f)) - 1U & *(uint *)(param_1 + 0x7594)) == 0) {
      uVar12 = 0x9fffffffffffffff;
    }
    uVar12 = *(ulonglong *)(param_1 + 0xfe0) & uVar12;
    uVar11 = uVar12 >> 0x34;
    if (*(char *)(param_1 + 0x765e) == '\0') {
      uVar11 = 7;
    }
    uVar11 = (uVar12 ^ uVar11 << 0x34) & 0xff8fffffffffffff ^ uVar11 << 0x34;
    uVar12 = uVar11 >> 0x38;
    if (!bVar2) {
      uVar12 = 0;
    }
    uVar11 = (uVar11 ^ uVar12 << 0x38) & 0xfeffffffffffffff ^ uVar12 << 0x38;
    uVar12 = uVar11 >> 0x3c;
    if (*(char *)(param_1 + 0x766e) == '\0') {
      uVar12 = 0;
    }
    uVar12 = (uVar11 ^ uVar12 << 0x3c) & 0xefffffffffffffff ^ uVar12 << 0x3c;
    if ((uVar11 >> 0x39 & 1) == 0) {
      uVar12 = uVar12 & 0xf3ffffffffffffff;
    }
    if ((*(longlong *)(param_1 + 0xf8f0) == *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0xc0))
       || (uVar5 = 0,
          *(longlong *)(param_1 + 0xf8f0) == *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x100))
       ) {
      uVar5 = 1;
    }
    plVar4 = (longlong *)
             FUN_18015f6e0(param_1 + 0xf748,auStack_60,param_1 + 0xf18,uVar12,param_2,uVar5,
                           *(undefined1 *)(param_1 + 0xab));
    lStack_88 = plVar4[1];
    lVar8 = *plVar4;
    lVar13 = plVar4[2];
    local_78 = (uint)plVar4[3];
    local_74 = (undefined4)((ulonglong)plVar4[3] >> 0x20);
    lStack_68 = plVar4[5];
    uStack_70 = (undefined4)plVar4[4];
    uStack_6c = (undefined4)((ulonglong)plVar4[4] >> 0x20);
    if (lVar8 != 0) {
      local_80._0_4_ = (int)lVar13;
      local_80._4_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uStack_50._0_4_ = (int)local_80;
      uStack_50._4_4_ = local_80._4_4_;
      local_38._0_4_ = (uint)lStack_68;
      local_80 = lVar13;
      goto LAB_180148860;
    }
  }
  if (*(char *)(param_1 + 0x7662) == '\0') {
    if (4 < param_2) {
      param_2 = 4;
    }
    lVar8 = *(longlong *)(param_1 + 0xf6f8);
    if ((*(longlong *)(param_1 + 0xf8f0) == *(longlong *)(lVar8 + 0xc0)) ||
       (bVar2 = false, *(longlong *)(param_1 + 0xf8f0) == *(longlong *)(lVar8 + 0x100))) {
      bVar2 = true;
    }
    iVar7 = 10;
    if (!bVar2) {
      iVar7 = 0;
    }
    iVar1 = 5;
    if (*(char *)(param_1 + 0x7660) == '\0') {
      iVar1 = iVar7;
    }
    lVar8 = *(longlong *)
             (lVar8 + (ulonglong)(uint)(*(int *)(&DAT_18022aa28 + (ulonglong)param_2 * 4) + iVar1) *
                      8 + 8);
    lVar13 = (ulonglong)(uint)(*(int *)(&DAT_18022aa28 + (ulonglong)param_2 * 4) + iVar1) * 0x28;
    uStack_50 = *(longlong *)(lVar13 + 0x18022b608);
    lStack_88 = *(longlong *)(&DAT_18022b600 + lVar13);
    local_38 = *(longlong *)(lVar13 + 0x18022b620);
    uStack_40 = (undefined4)*(undefined8 *)(lVar13 + 0x18022b618);
    local_3c = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x18022b618) >> 0x20);
    local_48 = (uint)*(undefined8 *)(&DAT_18022b610 + lVar13);
    local_44 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_18022b610 + lVar13) >> 0x20);
    uVar5 = CONCAT44(uStack_40,local_44);
  }
  else {
    if (((*(longlong *)(param_1 + 0xfcc8) == 0) && (*(longlong *)(param_1 + 0xfcd0) == 0)) &&
       (*(longlong *)(param_1 + 0xfcd8) == 0)) {
      puVar9 = &DAT_18022b86c;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x80);
    }
    else {
      puVar9 = &DAT_18022b8bc;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x90);
    }
    local_3c = *(undefined4 *)(puVar9 + 1);
    local_38 = 0;
    local_48 = 0;
    uVar5 = *puVar9;
    uStack_50 = 0;
    lStack_88 = 1;
  }
  local_74 = (undefined4)uVar5;
  uStack_70 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_80 = uStack_50;
  lStack_68 = local_38;
  local_78 = local_48;
  uStack_6c = local_3c;
LAB_180148860:
  *(undefined1 *)(param_1 + 0xf688) = 0;
  if (*(longlong *)(param_1 + 0xf8f8) != lVar8) {
    *(longlong *)(param_1 + 0xf8f8) = lVar8;
    *(byte *)(param_1 + 0x1018c) =
         *(uint *)(param_1 + 0x10178) < (uint)local_38 | *(byte *)(param_1 + 0x1018c);
    *(byte *)(param_1 + 0x10190) =
         *(uint *)(param_1 + 0x10168) < local_78 | *(byte *)(param_1 + 0x10190);
    if (((int)uStack_50 == 0) || (*(int *)(param_1 + 0x10160) != 0)) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
    if ((uStack_50._4_4_ != 0) && (*(int *)(param_1 + 0x10164) == 0)) {
      bVar6 = 1;
    }
    *(byte *)(param_1 + 0x10192) = bVar6 | *(byte *)(param_1 + 0x10192);
    *(longlong *)(param_1 + 0x10160) = local_80;
    *(longlong *)(param_1 + 0x10158) = lStack_88;
    *(ulonglong *)(param_1 + 0x10170) = CONCAT44(uStack_6c,uStack_70);
    *(ulonglong *)(param_1 + 0x10168) = CONCAT44(local_74,local_78);
    *(longlong *)(param_1 + 0x10178) = lStack_68;
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  return bVar3;
}

