/*
 * FUN_180178e48 at 180178e48
 * undefined FUN_180178e48(void)
 * Address ranges: 180178e48-18017b297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180178e48(uint *param_1,undefined4 *param_2,longlong param_3,uint *param_4,uint *param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint7 uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined8 uVar18;
  char cVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  char cVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 local_190;
  undefined8 local_188;
  ulonglong *local_180;
  undefined8 local_178;
  uint *local_170;
  uint *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint local_120 [4];
  undefined8 local_110;
  longlong lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint *local_f0;
  uint local_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint *local_c0;
  uint local_b0;
  undefined1 local_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar21 = param_2 + 0xd0;
  *puVar21 = 0;
  param_2[0x13c] = 0xffffffff;
  local_120[0] = *param_4;
  uVar15 = local_120[0] & 0xffff;
  uVar27 = (ulonglong)uVar15;
  uVar8 = local_190._1_7_;
  puVar16 = param_4;
  local_110 = param_2;
  lStack_108 = param_3;
  local_f0 = param_1;
  local_c0 = param_5;
  if (uVar15 - 0x16 < 3) {
    uVar24 = param_2[0xcc] | 0x10;
    if ((param_4[1] >> 0x10 & 1) != 0) {
      local_190 = (uint *)((ulonglong)local_190._1_7_ << 8);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0x10000,2,0,param_2,param_3,0);
      local_170 = param_2 + 0x108;
      local_168 = (uint *)0x0;
      local_178 = (uint *)((ulonglong)((*(byte *)(param_2 + 0x109) >> 4 & 3) << 6) |
                           (ulonglong)*(byte *)(param_2 + 0x109) & 0x3f | 0x100);
      local_188 = (ulonglong *)
                  ((ulonglong)((*(byte *)(param_2 + 0xfd) >> 4 & 3) << 6) |
                   (ulonglong)*(byte *)(param_2 + 0xfd) & 0x3f | 0x100);
      local_180 = (ulonglong *)(param_2 + 0xfc);
      local_190 = puVar21;
      param_1 = (uint *)FUN_180214e10(param_2,param_3,uVar24,0x101,&local_190,0x30);
    }
    local_f0 = param_2 + 0x108;
    local_c0 = param_2 + 0xfc;
    if ((param_4[1] >> 0x11 & 1) != 0) {
      local_190 = (uint *)((ulonglong)local_190 & 0xffffffffffffff00);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0x20000,2,1,param_2,param_3,0);
      local_178 = (uint *)((ulonglong)((*(byte *)(param_2 + 0x109) >> 4 & 3) << 6) |
                           (ulonglong)*(byte *)(param_2 + 0x109) & 0x3f | 0x100);
      local_188 = (ulonglong *)
                  ((ulonglong)((*(byte *)(param_2 + 0xfd) >> 4 & 3) << 6) |
                   (ulonglong)*(byte *)(param_2 + 0xfd) & 0x3f | 0x100);
      local_170 = local_f0;
      local_168 = (uint *)0x0;
      local_180 = (ulonglong *)local_c0;
      local_190 = puVar21;
      param_1 = (uint *)FUN_180214e10(param_2,param_3,uVar24,0x102,&local_190,0x30);
    }
    if (((param_4[1] >> 0x12 & 1) != 0) && (uVar15 - 0x16 < 2)) {
      local_190 = (uint *)((ulonglong)local_190 & 0xffffffffffffff00);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0x40000,2,2,param_2,param_3,0);
      local_178 = (uint *)((ulonglong)((*(byte *)(param_2 + 0x109) >> 4 & 3) << 6) |
                           (ulonglong)*(byte *)(param_2 + 0x109) & 0x3f | 0x100);
      local_188 = (ulonglong *)
                  ((ulonglong)((*(byte *)(param_2 + 0xfd) >> 4 & 3) << 6) |
                   (ulonglong)*(byte *)(param_2 + 0xfd) & 0x3f | 0x100);
      local_170 = local_f0;
      local_168 = (uint *)0x0;
      local_180 = (ulonglong *)local_c0;
      local_190 = puVar21;
      param_1 = (uint *)FUN_180214e10(param_2,param_3,uVar24,0x104,&local_190,0x30);
    }
    if (((param_4[1] >> 0x13 & 1) != 0) && (uVar15 == 0x16)) {
      local_190 = (uint *)((ulonglong)local_190 & 0xffffffffffffff00);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0x80000,2,3,param_2,param_3,0);
      local_178 = (uint *)((ulonglong)((*(byte *)(param_2 + 0x109) >> 4 & 3) << 6) |
                           (ulonglong)*(byte *)(param_2 + 0x109) & 0x3f | 0x100);
      local_188 = (ulonglong *)
                  ((ulonglong)((*(byte *)(param_2 + 0xfd) >> 4 & 3) << 6) |
                   (ulonglong)*(byte *)(param_2 + 0xfd) & 0x3f | 0x100);
      local_170 = local_f0;
      local_168 = (uint *)0x0;
      local_180 = (ulonglong *)local_c0;
      local_190 = puVar21;
      FUN_180214e10(param_2,param_3,uVar24,0x108,&local_190,0x30);
    }
    goto LAB_18017b1d8;
  }
  if ((uVar15 < 0x24) && ((0x800000002U >> (uVar27 & 0x3f) & 1) != 0)) {
    local_190 = (uint *)CONCAT71(local_190._1_7_,uVar15 == 0x23);
    param_2[0x13c] = 0;
    puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,0);
    iVar14 = param_2[0x13c];
    if ((iVar14 == -1) || (iVar14 == 0)) {
      local_190 = param_2 + 0xfc;
      local_188 = (ulonglong *)0x0;
      FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x36,puVar21,&local_190,0x10);
    }
    else {
      local_b0 = param_2[0xc3];
      local_ac = (undefined1)((uint)iVar14 >> 0x10);
      if (local_b0 == 0) {
        local_b0 = FUN_180213760(param_2,4,1);
        param_2[0xc3] = local_b0;
      }
      uStack_98 = 0xffffffff;
      uStack_94 = 0xffffffff;
      local_a0 = 0xffffffff;
      uStack_9c = 0xffffffff;
      bVar11 = FUN_180213268(0xe4,*(undefined1 *)(param_2 + 0xd1));
      local_188 = (ulonglong *)(param_2 + 0xfc);
      local_180 = (ulonglong *)((ulonglong)bVar11 | 0x100);
      local_190 = &local_b0;
      if ((param_2[0x13c] & 0xf000000) == 0xd000000) {
        local_170 = (uint *)0x0;
        local_178 = (uint *)local_188;
        local_188 = local_180;
        local_180 = (ulonglong *)puVar21;
        FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x37,puVar21,&local_190,0x28);
      }
      else {
        local_170 = (uint *)0x0;
        local_178 = puVar21;
        FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x37,puVar21,&local_190,0x28);
      }
    }
LAB_180178fd8:
    param_2[0x13c] = 0xffffffff;
    goto LAB_18017b1d8;
  }
  if (uVar15 - 2 < 2) {
    local_190 = (uint *)((ulonglong)local_190._1_7_ << 8);
    puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0);
    if (uVar15 == 3) {
      param_2[0x108] = param_2[0x108] ^ 0x80000000;
    }
    local_188 = (ulonglong *)(param_2 + 0x108);
    local_180 = (ulonglong *)0x0;
    local_190 = param_2 + 0xfc;
    FUN_180214e10(param_2,param_3,param_2[0xcc],puVar21,&local_190,0x18);
    goto LAB_18017b1d8;
  }
  if (uVar15 - 8 < 2) {
    local_190 = (uint *)((ulonglong)local_190._1_7_ << 8);
    puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0);
    local_180 = (ulonglong *)0x0;
    uVar24 = 0x10;
    if (uVar15 != 8) {
      uVar24 = 0x11;
    }
    local_188 = (ulonglong *)(param_2 + 0x108);
    local_190 = param_2 + 0xfc;
    FUN_180214e10(param_2,param_3,uVar24 | param_2[0xcc],puVar21,&local_190,0x18);
    goto LAB_18017b1d8;
  }
  if (uVar15 - 10 < 2) {
    local_190 = (uint *)((ulonglong)local_190._1_7_ << 8);
    puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0);
    local_180 = (ulonglong *)0x0;
    uVar24 = 0x33;
    if (uVar15 != 10) {
      uVar24 = 0x34;
    }
    local_188 = (ulonglong *)(param_2 + 0x108);
    local_190 = param_2 + 0xfc;
    FUN_180214e10(param_2,param_3,uVar24 | param_2[0xcc],puVar21,&local_190,0x18);
    goto LAB_18017b1d8;
  }
  if (uVar15 - 0x14 < 2) {
    uVar24 = param_2[0xcc] | 0x11;
    if ((param_4[1] >> 0x10 & 1) != 0) {
      local_190 = (uint *)((ulonglong)local_190._1_7_ << 8);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0x10000,2,0,param_2,param_3,0);
      local_180 = (ulonglong *)(param_2 + 0x108);
      local_178 = (uint *)0x0;
      local_188 = (ulonglong *)(param_2 + 0xfc);
      local_190 = puVar21;
      param_1 = (uint *)FUN_180214e10(param_2,param_3,uVar24,0x101,&local_190,0x20);
    }
    local_c0 = param_2 + 0xfc;
    local_f0 = param_2 + 0x108;
    if ((param_4[1] >> 0x11 & 1) != 0) {
      local_190 = (uint *)((ulonglong)local_190 & 0xffffffffffffff00);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0x20000,2,1,param_2,param_3,0);
      local_180 = (ulonglong *)local_f0;
      local_178 = (uint *)0x0;
      local_188 = (ulonglong *)local_c0;
      local_190 = puVar21;
      param_1 = (uint *)FUN_180214e10(param_2,param_3,uVar24,0x102,&local_190,0x20);
    }
    if ((param_4[1] >> 0x12 & 1) != 0) {
      local_190 = (uint *)((ulonglong)local_190 & 0xffffffffffffff00);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0x40000,2,2,param_2,param_3,0);
      local_180 = (ulonglong *)local_f0;
      local_178 = (uint *)0x0;
      local_188 = (ulonglong *)local_c0;
      local_190 = puVar21;
      param_1 = (uint *)FUN_180214e10(param_2,param_3,uVar24,0x104,&local_190,0x20);
    }
    if (((param_4[1] >> 0x13 & 1) != 0) && (uVar15 == 0x14)) {
      local_190 = (uint *)((ulonglong)local_190 & 0xffffffffffffff00);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0x80000,2,3,param_2,param_3,0);
      local_180 = (ulonglong *)local_f0;
      local_178 = (uint *)0x0;
      local_188 = (ulonglong *)local_c0;
      local_190 = puVar21;
      FUN_180214e10(param_2,param_3,uVar24,0x108,&local_190,0x20);
    }
    goto LAB_18017b1d8;
  }
  if (uVar15 < 0x27) {
    if ((0x4008000000U >> (uVar27 & 0x3f) & 1) != 0) {
      if (3 < (uint)param_2[0x13e]) goto LAB_18017b1d8;
      *(undefined1 *)((longlong)param_2 + (ulonglong)(uint)param_2[0x13e] + 0x50c) = 0;
      if (param_2[(ulonglong)(uint)param_2[0x13e] + 0xb9] == 0) {
        uVar13 = FUN_180213760(param_2,4,1);
        param_2[(ulonglong)(uint)param_2[0x13e] + 0xb9] = uVar13;
      }
      uVar24 = param_2[0x13e];
      uVar13 = param_2[(ulonglong)uVar24 + 0xb9];
      param_2[0x13e] = uVar24 + 1;
      if (uVar15 == 0x1b) {
        uVar15 = param_4[2];
        param_2[(ulonglong)uVar24 + 0x13f] = param_2[0x13d];
        param_2[0x13d] = param_2[0x13e];
        param_2[(ulonglong)(param_2[0x13e] - 1) + 0xbd] = 0xffffffff;
        param_4 = param_4 + 1;
      }
      else {
        uVar15 = param_4[1];
      }
      uVar15 = uVar15 & 0x7ff;
      if ((*(char *)(param_2 + 0x3e) == '\0') ||
         (lVar26 = *(longlong *)(param_2 + 0x40),
         *(char *)(lVar26 + (ulonglong)uVar15 + 400) == '\0')) {
        local_148 = 0;
        uStack_140 = 0;
        local_150 = CONCAT44(local_150._4_4_,0x7f);
        local_158 = CONCAT44(local_158._4_4_,0xff);
        local_178 = (uint *)((ulonglong)uVar15 << 4);
        local_160 = CONCAT44(local_160._4_4_,0xff);
        local_168 = (uint *)CONCAT44(local_168._4_4_,0xe4);
        local_180 = (ulonglong *)CONCAT44(local_180._4_4_,0xe4);
        local_170 = (uint *)CONCAT44(local_170._4_4_,param_2[0x2b]);
        local_190 = (uint *)CONCAT44(local_190._4_4_,7);
        local_188 = (ulonglong *)CONCAT44(local_188._4_4_,param_2[0x22]);
        FUN_180214c88(param_2,param_3,0x25,uVar13,&local_190,0x58);
      }
      else {
        uVar15 = uVar15 * 4;
        local_158 = 0;
        local_180 = (ulonglong *)CONCAT44(local_180._4_4_,0xe4);
        iVar3 = *(int *)(lVar26 + (ulonglong)(uVar15 + 3) * 4 + 0x1a0);
        local_190 = (uint *)CONCAT44(local_190._4_4_,7);
        iVar4 = *(int *)(lVar26 + (ulonglong)(uVar15 + 2) * 4 + 0x1a0);
        iVar14 = 0;
        if (iVar3 < 0) {
          iVar14 = iVar3;
        }
        local_160 = CONCAT44(local_160._4_4_,iVar14);
        iVar3 = *(int *)(lVar26 + (ulonglong)(uVar15 + 1) * 4 + 0x1a0);
        iVar5 = *(int *)(lVar26 + (ulonglong)uVar15 * 4 + 0x1a0);
        iVar14 = 0x7f;
        if (iVar4 < 0x7f) {
          iVar14 = iVar4;
        }
        local_168 = (uint *)CONCAT44(local_168._4_4_,iVar14);
        iVar14 = 0xff;
        if (iVar3 < 0xff) {
          iVar14 = iVar3;
        }
        iVar3 = 0xff;
        if (iVar5 < 0xff) {
          iVar3 = iVar5;
        }
        local_170 = (uint *)CONCAT44(local_170._4_4_,iVar14);
        local_178 = (uint *)CONCAT44(local_178._4_4_,iVar3);
        local_188 = (ulonglong *)CONCAT44(local_188._4_4_,param_2[0x2b]);
        FUN_180214c88(param_2,param_3,0x36,uVar13,&local_190,0x40);
      }
      local_150 = 0;
      local_148 = 0;
      local_158 = CONCAT44(local_158._4_4_,0xffffff80);
      local_168 = (uint *)0x0;
      local_160 = 0;
      local_170 = (uint *)CONCAT44(local_170._4_4_,0xe4);
      local_188 = (ulonglong *)CONCAT44(local_188._4_4_,uVar13);
      local_178 = (uint *)CONCAT44(local_178._4_4_,param_2[0x2b]);
      local_180 = (ulonglong *)CONCAT44(local_180._4_4_,0xa4);
      local_190._0_4_ = 7;
      FUN_180214c88(param_2,param_3,0x24,uVar13,&local_190,0x50);
      FUN_180214c88(param_2,param_3,0x30,0,&local_190,0);
      local_188 = (ulonglong *)0x0;
      local_180 = (ulonglong *)0x0;
      local_190 = (uint *)(CONCAT44(local_190._4_4_,uVar13) | 0x10000000);
      FUN_180214c88(param_2,param_3,3,0xffffffff,&local_190,0x18);
LAB_1801796d0:
      puVar16 = param_4 + 2;
      goto LAB_18017b1d8;
    }
LAB_180179268:
    if ((0x8020000000U >> (uVar27 & 0x3f) & 1) == 0) goto LAB_1801793a0;
    if ((uint)param_2[0x13e] < 5) {
      uVar24 = param_2[0x13e] - 1;
      local_160 = 0;
      param_2[0x13e] = uVar24;
      local_180 = (ulonglong *)0x0;
      uVar13 = param_2[(ulonglong)uVar24 + 0xb9];
      local_168 = (uint *)CONCAT44(local_168._4_4_,0xffffffff);
      local_170 = (uint *)CONCAT44(local_170._4_4_,0xe4);
      local_188 = (ulonglong *)CONCAT44(local_188._4_4_,uVar13);
      local_178 = (uint *)CONCAT44(local_178._4_4_,param_2[0x2a]);
      local_190 = (uint *)CONCAT44(local_190._4_4_,1);
      FUN_180214c88(param_2,param_3,0x1e,uVar13,&local_190,0x38);
      if (uVar15 == 0x1d) {
        local_168 = (uint *)0x0;
        local_170 = (uint *)CONCAT44(local_170._4_4_,0xaa);
        local_180 = (ulonglong *)CONCAT44(local_180._4_4_,0x55);
        local_190 = (uint *)CONCAT44(local_190._4_4_,2);
        local_178 = (uint *)CONCAT44(local_178._4_4_,uVar13);
        local_188 = (ulonglong *)CONCAT44(local_188._4_4_,uVar13);
        FUN_180214c88(param_2,param_3,0x1e,uVar13,&local_190,0x30);
        param_2[0x13d] = param_2[(ulonglong)(uint)param_2[0x13e] + 0x13f];
      }
      FUN_180214c88(param_2,param_3,0x16,0,&local_190,0);
      if (*(char *)((longlong)param_2 + (ulonglong)(uint)param_2[0x13e] + 0x50c) == '\0') {
        FUN_180213800(param_2,uVar13);
        param_2[(ulonglong)(uint)param_2[0x13e] + 0xb9] = 0;
      }
      uVar15 = param_2[0x13e];
      if (uVar15 != 0) {
        *(byte *)((longlong)param_2 + (ulonglong)(uVar15 - 1) + 0x50c) =
             *(byte *)((longlong)param_2 + (ulonglong)(uVar15 - 1) + 0x50c) |
             *(byte *)((longlong)param_2 + (ulonglong)uVar15 + 0x50c);
      }
    }
  }
  else {
    if (uVar15 < 0x28) goto LAB_180179268;
LAB_1801793a0:
    if (uVar15 - 0x5b < 2) {
      local_190 = (uint *)((ulonglong)uVar8 << 8);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,0);
      uVar24 = 0xb;
      if (uVar15 != 0x5b) {
        uVar24 = 0xc;
      }
      local_190 = param_2 + 0xfc;
      local_188 = (ulonglong *)0x0;
      FUN_180214e10(param_2,param_3,uVar24 | param_2[0xcc],puVar21,&local_190,0x10);
      goto LAB_18017b1d8;
    }
    if (uVar15 == 0x1e) {
      local_188 = (ulonglong *)0x0;
      local_180 = (ulonglong *)0x0;
      local_190 = (uint *)(CONCAT44(local_190._4_4_,param_4[1]) & 0xffffffff000007ff | 0x20410a00);
      FUN_180214c88(param_2,param_3,0x2c,0xffffffff,&local_190,0x18);
      goto LAB_1801796d0;
    }
    if (uVar15 == 0x20) {
      local_190 = (uint *)CONCAT71(uVar8,1);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0);
      local_b0 = param_2[0x2a];
      local_a0 = 0;
      uStack_94 = 0xffffffff;
      local_ac = 0xe4;
      uStack_9c = 0xffffffff;
      uStack_98 = 0xffffffff;
      uVar13 = FUN_180213760(param_2,4,0);
      local_190 = param_2 + 0xfc;
      local_110._0_5_ = CONCAT14(1,uVar13);
      uStack_f8 = 0xffffffffffffffff;
      local_100 = 0xffffffffffffffff;
      local_188 = (ulonglong *)0x0;
      FUN_180214e10(param_2,param_3,0x2f,&local_110,&local_190,0x10);
      local_180 = (ulonglong *)(param_2 + 0x108);
      local_178 = (uint *)0x0;
      local_188 = &local_110;
      local_190 = (uint *)0x100;
      FUN_180214e10(param_2,param_3,0x38,&local_110,&local_190,0x20);
      local_170 = (uint *)&local_110;
      local_168 = (uint *)0x0;
      local_180 = &local_110;
      local_178 = (uint *)0x100;
      local_190 = (uint *)&local_110;
      local_188 = (ulonglong *)0x100;
      FUN_180214e10(param_2,param_3,0x39,0x102,&local_190,0x30);
      local_170 = (uint *)&local_110;
      local_168 = (uint *)0x0;
      local_180 = (ulonglong *)&local_b0;
      local_178 = (uint *)&DAT_00000100;
      local_188 = &local_110;
      local_190 = (uint *)0x155;
      FUN_180214e10(param_2,param_3,0x37,&local_110,&local_190,0x30);
      local_180 = (ulonglong *)0x0;
      local_188 = &local_110;
      local_190 = (uint *)&DAT_00000100;
      FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x19,puVar21,&local_190,0x18);
      goto LAB_18017b1d8;
    }
    if (uVar15 == 0x21) {
      local_190 = (uint *)((ulonglong)uVar8 << 8);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0);
      local_90 = FUN_180213760(param_2,4,0);
      bVar11 = *(byte *)(param_2 + 0x109);
      uStack_8c = CONCAT31(uStack_8c._1_3_,7);
      puVar20 = param_2 + 0x108;
      local_170 = (uint *)0x0;
      uStack_78 = 0xffffffff;
      uStack_74 = 0xffffffff;
      local_80 = 0xffffffff;
      uStack_7c = 0xffffffff;
      local_190 = (uint *)((ulonglong)((*(byte *)(param_2 + 0xfd) >> 4 & 3) << 6) |
                           (ulonglong)*(byte *)(param_2 + 0xfd) & 0x3f | 0x100);
      local_180 = (ulonglong *)
                  ((ulonglong)(((bVar11 & 0xc | bVar11 >> 2 & 3) << 2 | bVar11 & 3) << 2) |
                   (ulonglong)(bVar11 >> 4) & 3 | 0x100);
      local_188 = (ulonglong *)puVar20;
      local_178 = puVar20;
      FUN_180214e10(param_2,param_3,0x38,&local_90,&local_190,0x28);
      bVar11 = *(byte *)(param_2 + 0x109);
      local_90 = local_90 ^ 0x80000000;
      bVar7 = *(byte *)(param_2 + 0xfd);
      local_180 = (ulonglong *)
                  ((ulonglong)(((bVar11 & 0xc | bVar11 >> 2 & 3) << 2 | bVar11 & 3) << 2) |
                   (ulonglong)(bVar11 >> 4) & 3 | 0x100);
      local_190 = (uint *)((ulonglong)
                           (((bVar7 & 0xfffffc03 | (bVar7 & 3) << 2) << 2 | bVar7 >> 4 & 3) << 2) |
                           (ulonglong)(bVar7 >> 2) & 3 | 0x100);
      local_168 = &local_90;
      local_160 = 0;
      local_170 = (uint *)0x152;
      local_188 = (ulonglong *)puVar20;
      local_178 = puVar20;
      FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x32,puVar21,&local_190,0x38);
      goto LAB_18017b1d8;
    }
    if (uVar15 == 0x24) {
      local_190 = (uint *)((ulonglong)uVar8 << 8);
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,0);
      uVar13 = FUN_180213760(param_2,4,0);
      local_110 = (undefined4 *)CONCAT35(local_110._5_3_,0x100000000);
      local_e0 = param_2[0x2a];
      local_110 = (undefined4 *)CONCAT44(local_110._4_4_,uVar13);
      puVar20 = param_2 + 0xfc;
      uStack_f8 = 0xffffffffffffffff;
      local_100 = 0xffffffffffffffff;
      local_180 = (ulonglong *)0x0;
      uStack_dc = CONCAT31(uStack_dc._1_3_,0xe4);
      local_d0 = 0xffffffff7f800000;
      uStack_c8 = 0xffffffffffffffff;
      local_190 = puVar20;
      local_188 = (ulonglong *)puVar20;
      FUN_180214e10(param_2,param_3,0x10,&local_110,&local_190,0x18);
      local_188 = &local_110;
      local_180 = (ulonglong *)0x0;
      local_190 = (uint *)0x100;
      FUN_180214e10(param_2,param_3,0x44,&local_110,&local_190,0x18);
      local_178 = &local_e0;
      local_170 = (uint *)0x0;
      local_180 = &local_110;
      local_190 = (uint *)&local_110;
      local_188 = (ulonglong *)0x100;
      FUN_180214e10(param_2,param_3,0x27,0x102,&local_190,0x28);
      local_178 = (uint *)&local_110;
      local_170 = (uint *)0x0;
      local_180 = (ulonglong *)0x155;
      local_188 = &local_110;
      local_190 = (uint *)0x100;
      FUN_180214e10(param_2,param_3,1,&local_110,&local_190,0x28);
      local_178 = (uint *)0x0;
      local_188 = &local_110;
      local_190 = (uint *)&DAT_00000100;
      local_180 = (ulonglong *)puVar20;
      FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x38,puVar21,&local_190,0x20);
      goto LAB_18017b1d8;
    }
    if (uVar15 == 0x25) {
      local_190 = (uint *)((ulonglong)uVar8 << 8);
      uVar13 = 1;
      if (*(char *)(*(longlong *)(param_2 + 0x40) + 0x126d) != '\x03') {
        uVar13 = 3;
      }
      puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,uVar13,0,param_2,param_3,0);
      puVar20 = param_2 + 0xfc;
      uVar15 = param_2[0xcc];
      local_188 = (ulonglong *)puVar20;
      if ((param_4[1] & 0xf0000) == 0x10000) {
        local_e0 = param_2[0x2c];
        uStack_dc = (uint)uStack_dc._1_3_ << 8;
        local_180 = (ulonglong *)0x0;
        uStack_c8 = 0xffffffffffffffff;
        local_d0 = 0xffffffffffffffff;
        local_190 = puVar21;
        FUN_180214e10(param_2,param_3,uVar15 | 0x4d,&local_e0,&local_190,0x18);
      }
      else if ((param_4[1] & 0xf0000) == 0x20000) {
        local_e0 = param_2[0x2c];
        uStack_dc = (uint)uStack_dc._1_3_ << 8;
        local_180 = (ulonglong *)0x0;
        uStack_c8 = 0xffffffffffffffff;
        local_d0 = 0xffffffffffffffff;
        local_190 = &local_e0;
        FUN_180214e10(param_2,param_3,uVar15 | 0x4d,puVar21,&local_190,0x18);
      }
      else {
        local_170 = (uint *)0x0;
        local_188 = (ulonglong *)&DAT_00000101;
        local_190 = puVar21;
        local_180 = (ulonglong *)puVar21;
        local_178 = puVar20;
        FUN_180214e10(param_2,param_3,uVar15 | 0x4d,0x102,&local_190,0x28);
      }
      goto LAB_18017b1d8;
    }
    if (uVar15 == 0x28) {
      bVar11 = *(byte *)(param_2 + 0x14c);
      uVar24 = param_4[1];
      cVar19 = *(char *)((longlong)param_2 + (ulonglong)bVar11 + 0x510);
      uVar17 = (uVar24 & 0x1800 | uVar24 >> 0x14 & 0x7ff) >> 8;
      uVar15 = uVar24 & 0xf000000;
      if (uVar17 == 0xe) {
        uVar17 = uVar24 & 0x7ff;
        if ((*(char *)(param_2 + 0x3e) == '\0') ||
           (*(char *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar17 + 0x2a0) == '\0')) {
          local_180 = (ulonglong *)((ulonglong)(uVar17 >> 2) * 0x10 + 0xe80);
          uVar13 = 0x4001f;
          local_178 = (uint *)0x0;
          local_188 = (ulonglong *)(CONCAT44(local_188._4_4_,uVar24) & 0xffffffff00000003);
          local_190 = (uint *)(CONCAT44(local_190._4_4_,param_2[0x1e]) | 0x10000000);
          if (uVar15 == 0xd000000) {
            uVar13 = 0x1f;
          }
          FUN_180214c88(param_2,param_3,uVar13,0xffffffff,&local_190,0x20);
          cVar23 = *(char *)(param_2 + 0x14c);
          *(byte *)(param_2 + 0x14c) = cVar23 + 1U;
          *(char *)((longlong)param_2 + (ulonglong)(byte)(cVar23 + 1U) + 0x510) = cVar19;
        }
        else {
          if ((cVar19 != '\x02') &&
             (cVar19 = '\x01',
             *(int *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar17 * 4 + 0x2b0) == 0)) {
            cVar19 = '\x02';
          }
          *(byte *)(param_2 + 0x14c) = bVar11 + 1;
          *(char *)((longlong)param_2 + (ulonglong)(byte)(bVar11 + 1) + 0x510) = cVar19;
          *(bool *)(param_3 + 0x18) = cVar19 != '\x02';
        }
      }
      else if (uVar17 == 0x13) {
        iVar14 = param_2[0xc3];
        uVar24 = uVar24 >> 0x10 & 3;
        if (iVar14 == 0) {
          iVar14 = FUN_180213760(param_2,4,1);
          param_2[0xc3] = iVar14;
        }
        local_188 = (ulonglong *)CONCAT44(local_188._4_4_,uVar24);
        uVar13 = 0x4001f;
        local_180 = (ulonglong *)0x0;
        local_190 = (uint *)(CONCAT44(local_190._4_4_,iVar14) | 0x10000000);
        if (uVar15 == 0xd000000) {
          uVar13 = 0x1f;
        }
        FUN_180214c88(param_2,param_3,uVar13,0xffffffff,&local_190,0x18);
        cVar23 = *(char *)(param_2 + 0x14c);
        uVar12 = 2;
        if (cVar19 != '\x02') {
          uVar12 = 0;
        }
        *(byte *)(param_2 + 0x14c) = cVar23 + 1U;
        *(undefined1 *)((longlong)param_2 + (ulonglong)(byte)(cVar23 + 1U) + 0x510) = uVar12;
      }
      goto LAB_1801796d0;
    }
    if (uVar15 == 0x29) {
      puVar16 = (uint *)FUN_180177b78(param_1,param_4 + 1,2,0,param_2,param_3,0,0);
      local_e0 = FUN_180178d20(puVar16,local_120[0],param_2,param_3,0);
      local_e0 = local_e0 | 0x10000000;
      uStack_dc = uStack_dc & 0xffffff00;
      local_190 = &local_e0;
      local_188 = (ulonglong *)0x0;
      uStack_c8 = 0xffffffffffffffff;
      local_d0 = 0xffffffffffffffff;
      FUN_180214e10(param_2,param_3,0x4001f,param_2 + 0x134,&local_190,0x10);
      bVar11 = *(byte *)(param_2 + 0x14c);
      cVar19 = *(char *)((longlong)param_2 + (ulonglong)bVar11 + 0x510);
      *(byte *)(param_2 + 0x14c) = bVar11 + 1;
      uVar12 = 2;
      if (cVar19 != '\x02') {
        uVar12 = 0;
      }
      *(undefined1 *)((longlong)param_2 + (ulonglong)(byte)(bVar11 + 1) + 0x510) = uVar12;
      goto LAB_18017b1d8;
    }
    if (uVar15 == 0x2a) {
      bVar11 = *(byte *)(param_2 + 0x14c);
      cVar19 = *(char *)((longlong)param_2 + (ulonglong)bVar11 + 0x510);
      if (cVar19 == '\0') {
        uVar18 = 0x12;
LAB_18017a450:
        FUN_180214c88(param_2,param_3,uVar18,0,&local_190,0);
        goto LAB_18017a468;
      }
      cVar23 = '\x01';
      if (cVar19 == '\x01') {
        cVar23 = '\x02';
      }
      if (*(char *)((longlong)param_2 + (ulonglong)bVar11 + 0x50f) != '\x02') {
        cVar19 = cVar23;
      }
      *(char *)((longlong)param_2 + (ulonglong)bVar11 + 0x510) = cVar19;
    }
    else {
      if (uVar15 != 0x2b) {
        if (uVar15 == 0x2c) {
          uVar18 = 2;
          goto LAB_18017a450;
        }
        if (uVar15 == 0x2d) {
          puVar16 = (uint *)FUN_180177b78(param_1,param_4 + 1,2,0,param_2,param_3,0,0);
          local_e0 = FUN_180178d20(puVar16,local_120[0],param_2,param_3,0);
          local_e0 = local_e0 | 0x10000000;
          uStack_dc = uStack_dc & 0xffffff00;
          local_190 = &local_e0;
          local_188 = (ulonglong *)0x0;
          uStack_c8 = 0xffffffffffffffff;
          local_d0 = 0xffffffffffffffff;
          FUN_180214e10(param_2,param_3,0x40003,param_2 + 0x134,&local_190,0x10);
          goto LAB_18017b1d8;
        }
        if (uVar15 == 0x41) {
          puVar16 = (uint *)FUN_180178328(param_1,local_120[0],param_4 + 1,param_2,param_3);
          cVar19 = *(char *)(param_2 + 0xd1);
          if (cVar19 != '\0') {
            if (param_2[0x13c] - 1 < 0xfffffffe) {
              lVar26 = 1;
              if ((param_2[0x13c] & 0xf000000) == 0xd000000) {
                lVar26 = 2;
              }
            }
            else {
              lVar26 = 0;
            }
            uVar13 = FUN_180213760(param_2,4,0);
            local_b0 = param_2[0x2a];
            local_190 = param_2 + 0xfc;
            local_110._0_5_ = CONCAT14(cVar19,uVar13);
            uStack_f8 = 0xffffffffffffffff;
            local_100 = 0xffffffffffffffff;
            local_ac = 0xe4;
            uStack_9c = 0xffffffff;
            uStack_98 = 0xffffffff;
            local_188 = (ulonglong *)&local_b0;
            local_a0 = 0;
            uStack_94 = 0xffffffff;
            local_180 = (ulonglong *)0x0;
            FUN_180214e10(param_2,param_3,(&DAT_18022c428)[lVar26],&local_110,&local_190,0x18);
            uVar27 = (ulonglong)(uint)(&DAT_18022c418)[lVar26];
            if ((&DAT_18022c418)[lVar26] != 0xffffffff) {
              uVar12 = FUN_180213268((uint)param_2[0x13c] >> 0x10 & 0xff,
                                     *(undefined1 *)(param_2 + 0xd1));
              local_e0 = param_2[0xc3];
              if (local_e0 == 0) {
                local_e0 = FUN_180213760(param_2,4,1);
                param_2[0xc3] = local_e0;
              }
              uStack_dc = CONCAT31(uStack_dc._1_3_,uVar12);
              uStack_c8 = 0xffffffffffffffff;
              local_d0 = 0xffffffffffffffff;
              local_190 = (uint *)((ulonglong)*(byte *)(param_2 + 0xfd) | 0x100);
              local_180 = (ulonglong *)&local_e0;
              local_178 = (uint *)0x0;
              local_188 = &local_110;
              FUN_180214e10(param_2,param_3,uVar27 & 0xffffffff,&local_110,&local_190,0x20);
            }
            bVar11 = *(byte *)(param_2 + 0xd1);
            local_120[0] = (uint)bVar11;
            uVar15 = (local_120[0] & 0xaaaaaaaa) >> 1 | (local_120[0] & 0x55555555) << 1;
            uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
            uVar27 = LZCOUNT((uVar15 >> 4 | (uVar15 & 0xf0f0f0f) << 4) << 0x18);
            uVar15 = (bVar11 & 0xaaaaaaaa) >> 1 | (bVar11 & 0x55555555) << 1;
            uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
            lVar25 = LZCOUNT((uVar15 >> 4 | (uVar15 & 0xf0f0f0f) << 4) << 0x18);
            uVar15 = (uint)lVar25;
            if ((1 - (uVar15 >> 5) & 0xff) != 0) {
              local_f0 = puVar16;
              *(byte *)((longlong)local_120 + (longlong)((int)uVar15 >> 3)) =
                   *(byte *)((longlong)local_120 + (longlong)((int)uVar15 >> 3)) &
                   ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
              while( true ) {
                if ((uint)lVar25 != (uint)uVar27) {
                  local_178 = (uint *)((ulonglong)(byte)(&DAT_18022c414)[uVar27] | 0x100);
                  local_188 = (ulonglong *)((ulonglong)(byte)(&DAT_18022c414)[lVar25] | 0x100);
                  local_170 = (uint *)&local_110;
                  local_168 = (uint *)0x0;
                  local_180 = &local_110;
                  local_190 = (uint *)&local_110;
                  FUN_180214e10(param_2,param_3,(&DAT_18022c408)[lVar26],
                                (ulonglong)(byte)(1 << (ulonglong)((uint)uVar27 & 0x1f)) | 0x100,
                                &local_190,0x30);
                }
                uVar15 = (local_120[0] & 0xaaaaaaaa) >> 1 | (local_120[0] & 0x55555555) << 1;
                uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
                lVar25 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
                uVar15 = (uint)lVar25;
                puVar16 = local_f0;
                if ((1 - (uVar15 >> 5) & 0xff) == 0) break;
                *(byte *)((longlong)local_120 + (longlong)((int)uVar15 >> 3)) =
                     *(byte *)((longlong)local_120 + (longlong)((int)uVar15 >> 3)) &
                     ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
              }
            }
            local_190 = (uint *)(uVar27 | 0x100);
            local_180 = (ulonglong *)0x0;
            local_110 = (undefined4 *)((ulonglong)local_110 | 0x10000000);
            local_188 = &local_110;
            FUN_180214e10(param_2,param_3,((&DAT_18022c3f8)[lVar26] & 1) << 0x12 | 0xd,
                          param_2 + 0x134,&local_190,0x18);
          }
          goto LAB_180178fd8;
        }
        if (uVar15 == 0x42) {
          local_190 = (uint *)((ulonglong)uVar8 << 8);
          puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0);
          if ((local_120[0] >> 0x10 & 1) == 0) {
            puVar20 = param_2 + 0x114;
            local_e0 = 0;
            plVar2 = (longlong *)(param_2 + 0x120);
            uStack_dc = uStack_dc & 0xffffff00;
            puVar21 = (uint *)0x0;
            if ((local_120[0] >> 0x11 & 1) != 0) {
              uVar18 = 0x4a;
              *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0xfe);
              *(undefined8 *)puVar20 = *(undefined8 *)(param_2 + 0xfc);
              *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x102);
              *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x100);
              *(undefined8 *)(param_2 + 0x11e) = *(undefined8 *)(param_2 + 0x106);
              *(undefined8 *)(param_2 + 0x11c) = *(undefined8 *)(param_2 + 0x104);
              *puVar20 = *puVar20 | 0x10000000;
              *(undefined1 *)(param_2 + 0x115) = 3;
              *(undefined8 *)(param_2 + 0x122) = uStack_d8;
              *plVar2 = (ulonglong)uStack_dc << 0x20;
              *(undefined8 *)(param_2 + 0x126) = 0xffffffffffffffff;
              *(undefined8 *)(param_2 + 0x124) = 0xffffffffffffffff;
              goto LAB_18017a144;
            }
            *(undefined8 *)(param_2 + 0x122) = uStack_d8;
            *plVar2 = (ulonglong)uStack_dc << 0x20;
            *(undefined8 *)(param_2 + 0x126) = 0xffffffffffffffff;
            *(undefined8 *)(param_2 + 0x124) = 0xffffffffffffffff;
            *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0x122);
            *(longlong *)puVar20 = *plVar2;
            *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x126);
            *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x124);
          }
          else {
            local_90 = FUN_180213760(param_2,4,1);
            uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
            puVar20 = param_2 + 0xfc;
            uStack_78 = 0xffffffff;
            uStack_74 = 0xffffffff;
            local_80 = 0xffffffff;
            uStack_7c = 0xffffffff;
            local_170 = (uint *)0x0;
            uVar15 = (uint)(*(byte *)(param_2 + 0xfd) >> 6);
            local_180 = (ulonglong *)
                        ((ulonglong)*(byte *)(param_2 + 0xfd) & 0xc0 |
                         (ulonglong)(uVar15 | uVar15 << 2) << 2 | (ulonglong)uVar15 | 0x100);
            local_190 = &local_90;
            local_188 = (ulonglong *)puVar20;
            local_178 = puVar20;
            FUN_180214e10(param_2,param_3,0xe,0x10f,&local_190,0x28);
            uStack_dc = uStack_dc & 0xffffff00;
            puVar21 = &local_90;
            *(undefined8 *)(param_2 + 0xfe) = uStack_88;
            *(ulonglong *)puVar20 = CONCAT44(uStack_8c,local_90);
            *(ulonglong *)(param_2 + 0x102) = CONCAT44(uStack_74,uStack_78);
            *(ulonglong *)(param_2 + 0x100) = CONCAT44(uStack_7c,local_80);
            *(undefined8 *)(param_2 + 0x122) = uStack_d8;
            *(ulonglong *)(param_2 + 0x120) = (ulonglong)uStack_dc << 0x20;
            *(undefined8 *)(param_2 + 0x126) = 0xffffffffffffffff;
            *(undefined8 *)(param_2 + 0x124) = 0xffffffffffffffff;
            *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0x122);
            *(longlong *)(param_2 + 0x114) = *(longlong *)(param_2 + 0x120);
            *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x126);
            *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x124);
          }
          local_e0 = 0;
          uVar18 = 0x45;
        }
        else {
          if (uVar15 == 0x58) {
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,3,0,param_2,param_3,0);
            puVar20 = param_2 + 0xfc;
            if ((*puVar20 & 0x88000000) == 0x8000000) {
              local_188 = (ulonglong *)0x0;
              local_190 = puVar20;
              FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x36,puVar21,&local_190,0x10);
            }
            else {
              uVar12 = *(undefined1 *)(param_2 + 0xd1);
              local_e0 = FUN_180213760(param_2,4,0);
              uStack_dc = CONCAT31(uStack_dc._1_3_,uVar12);
              uStack_c8 = 0xffffffffffffffff;
              local_d0 = 0xffffffffffffffff;
              uVar27 = FUN_1802132c8(*(undefined1 *)(param_2 + 0xd1));
              FUN_18016e700(0,uVar27,&local_b0,param_2,uVar27 & 0xffffffff);
              local_188 = (ulonglong *)&local_b0;
              local_180 = (ulonglong *)0x0;
              local_190 = puVar20;
              FUN_180214e10(param_2,param_3,0x1d,&local_e0,&local_190,0x18);
              puVar20 = param_2 + 0x114;
              puVar22 = param_2 + 0x108;
              bVar11 = FUN_180213268(0xe4,*(undefined1 *)(param_2 + 0xd1));
              local_170 = (uint *)0x0;
              local_190 = (uint *)((ulonglong)bVar11 | 0x100);
              local_188 = (ulonglong *)&local_e0;
              local_180 = (ulonglong *)puVar22;
              local_178 = puVar20;
              FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x37,puVar21,&local_190,0x28);
            }
            goto LAB_18017b1d8;
          }
          if (uVar15 == 0x5a) {
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,3,0,param_2,param_3,0);
            uVar12 = *(undefined1 *)(param_2 + 0xd1);
            local_e0 = FUN_180213760(param_2,4,0);
            uStack_dc = CONCAT31(uStack_dc._1_3_,uVar12);
            local_188 = (ulonglong *)(param_2 + 0x108);
            local_190 = param_2 + 0xfc;
            local_180 = (ulonglong *)0x0;
            uStack_c8 = 0xffffffffffffffff;
            local_d0 = 0xffffffffffffffff;
            FUN_180214e10(param_2,param_3,0xf,&local_e0,&local_190,0x18);
            puVar20 = param_2 + 0x114;
            bVar11 = FUN_180213268(0xe4,*(undefined1 *)(param_2 + 0xd1));
            local_178 = (uint *)0x0;
            local_190 = (uint *)((ulonglong)bVar11 | 0x100);
            local_188 = (ulonglong *)&local_e0;
            local_180 = (ulonglong *)puVar20;
            FUN_180214e10(param_2,param_3,param_2[0xcc],puVar21,&local_190,0x20);
            goto LAB_18017b1d8;
          }
          if (uVar15 == 4) {
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,3,0,param_2,param_3,0);
            local_180 = (ulonglong *)(param_2 + 0x114);
            local_188 = (ulonglong *)(param_2 + 0x108);
            local_178 = (uint *)0x0;
            local_190 = param_2 + 0xfc;
            FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x32,puVar21,&local_190,0x20);
            goto LAB_18017b1d8;
          }
          if (uVar15 == 5) {
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0);
            local_188 = (ulonglong *)(param_2 + 0x108);
            local_180 = (ulonglong *)0x0;
            local_190 = param_2 + 0xfc;
            FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x38,puVar21,&local_190,0x18);
            goto LAB_18017b1d8;
          }
          if (uVar15 == 6) {
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,0);
            uVar13 = FUN_180213760(param_2,4,0);
            puVar1 = (ulonglong *)(param_2 + 0xfc);
            local_110 = (undefined4 *)CONCAT35(local_110._5_3_,0x200000000);
            local_e0 = param_2[0x2b];
            local_110 = (undefined4 *)CONCAT44(local_110._4_4_,uVar13);
            uStack_f8 = 0xffffffffffffffff;
            local_100 = 0xffffffffffffffff;
            uStack_dc = CONCAT31(uStack_dc._1_3_,0xe4);
            local_80 = 0x7cf0bdc2;
            uStack_7c = 0x7cf0bdc2;
            uStack_78 = 0x7cf0bdc2;
            uStack_74 = 0x7cf0bdc2;
            uStack_68 = *(undefined8 *)(param_2 + 0xfe);
            uStack_58 = *(undefined8 *)(param_2 + 0x102);
            uStack_60 = *(undefined8 *)(param_2 + 0x100);
            local_d0 = 0;
            uStack_c8 = 0;
            uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
            uStack_48 = *(undefined8 *)(param_2 + 0x106);
            local_50 = *(undefined8 *)(param_2 + 0x104);
            local_70 = *puVar1 & 0xffffffff7fffffff | 0x8000000;
            local_188 = &local_70;
            local_180 = (ulonglong *)0x0;
            local_190 = &local_e0;
            local_90 = local_e0;
            FUN_180214e10(param_2,param_3,0x31,&local_110,&local_190,0x18);
            iVar14 = FUN_180213038(*param_2);
            if (iVar14 - 0x40U < 2) {
              local_b0 = param_2[0x2a];
              local_ac = 0xe4;
              uStack_94 = 0xffffffff;
              local_a0 = 0x3f800000;
              uStack_9c = 0xffffffff;
              uStack_98 = 0xffffffff;
              local_188 = (ulonglong *)&local_b0;
              local_190 = (uint *)&local_110;
              local_178 = (uint *)0x0;
              local_180 = puVar1;
              FUN_180214e10(param_2,param_3,0xe,0x101,&local_190,0x20);
            }
            else {
              local_190 = (uint *)&local_110;
              local_180 = (ulonglong *)0x0;
              local_188 = puVar1;
              FUN_180214e10(param_2,param_3,0x81,0x101,&local_190,0x18);
            }
            local_170 = &local_90;
            local_168 = (uint *)0x0;
            local_178 = (uint *)&local_110;
            local_180 = (ulonglong *)&DAT_00000100;
            local_188 = &local_110;
            local_190 = (uint *)0x155;
            FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x37,puVar21,&local_190,0x30);
            goto LAB_18017b1d8;
          }
          if (uVar15 == 7) {
            local_190 = (uint *)CONCAT71(uVar8,1);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,1);
            uVar13 = FUN_180213760(param_2,4,0);
            local_110 = (undefined4 *)CONCAT35(local_110._5_3_,0x200000000);
            local_b0 = param_2[0x2a];
            local_110 = (undefined4 *)CONCAT44(local_110._4_4_,uVar13);
            uStack_f8 = 0xffffffffffffffff;
            local_100 = 0xffffffffffffffff;
            local_ac = 0xe4;
            local_190 = param_2 + 0xfc;
            local_188 = (ulonglong *)0x0;
            local_a0 = 0x7f800000;
            uStack_9c = 0xffffffff;
            uStack_98 = 0xffffffff;
            uStack_94 = 0xffffffff;
            uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
            local_80 = 0x7cf0bdc2;
            uStack_7c = 0xffffffff;
            uStack_78 = 0xffffffff;
            uStack_74 = 0xffffffff;
            local_90 = local_b0;
            FUN_180214e10(param_2,param_3,0x44,&local_110,&local_190,0x10);
            local_178 = &local_b0;
            local_170 = (uint *)0x0;
            local_180 = &local_110;
            local_190 = (uint *)&local_110;
            local_188 = (ulonglong *)0x155;
            FUN_180214e10(param_2,param_3,0x20,0x101,&local_190,0x28);
            local_170 = (uint *)&local_110;
            local_168 = (uint *)0x0;
            local_180 = (ulonglong *)&local_90;
            local_178 = (uint *)0x155;
            local_188 = &local_110;
            local_190 = (uint *)&DAT_00000100;
            FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x37,puVar21,&local_190,0x30);
            goto LAB_18017b1d8;
          }
          if (uVar15 == 0xe) {
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,0);
            local_190 = param_2 + 0xfc;
            local_188 = (ulonglong *)0x0;
            FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x19,puVar21,&local_190,0x10);
            goto LAB_18017b1d8;
          }
          if (uVar15 == 0xf) {
            local_190 = (uint *)CONCAT71(uVar8,1);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,1);
            uVar13 = FUN_180213760(param_2,4,0);
            local_110 = (undefined4 *)CONCAT35(local_110._5_3_,0x200000000);
            local_b0 = param_2[0x2a];
            local_110 = (undefined4 *)CONCAT44(local_110._4_4_,uVar13);
            uStack_f8 = 0xffffffffffffffff;
            local_100 = 0xffffffffffffffff;
            local_a0 = 0xff800000;
            uStack_9c = 0xffffffff;
            uStack_98 = 0xffffffff;
            uStack_94 = 0xffffffff;
            local_190 = param_2 + 0xfc;
            local_80 = 0xfcf0bdc2;
            local_ac = 0xe4;
            uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
            uStack_7c = 0xffffffff;
            uStack_78 = 0xffffffff;
            uStack_74 = 0xffffffff;
            local_188 = (ulonglong *)0x0;
            local_90 = local_b0;
            FUN_180214e10(param_2,param_3,0x2f,&local_110,&local_190,0x10);
            local_178 = &local_b0;
            local_170 = (uint *)0x0;
            local_180 = &local_110;
            local_190 = (uint *)&local_110;
            local_188 = (ulonglong *)0x155;
            FUN_180214e10(param_2,param_3,0x20,0x101,&local_190,0x28);
            local_170 = (uint *)&local_110;
            local_168 = (uint *)0x0;
            local_180 = (ulonglong *)&local_90;
            local_178 = (uint *)0x155;
            local_188 = &local_110;
            local_190 = (uint *)&DAT_00000100;
            FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x37,puVar21,&local_190,0x30);
            goto LAB_18017b1d8;
          }
          if (uVar15 == 0x12) {
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,3,0,param_2,param_3,0);
            local_ac = *(undefined1 *)(param_2 + 0xd1);
            local_b0 = FUN_180213760(param_2,4,0);
            puVar20 = param_2 + 0x114;
            uStack_98 = 0xffffffff;
            uStack_94 = 0xffffffff;
            local_a0 = 0xffffffff;
            uStack_9c = 0xffffffff;
            local_180 = (ulonglong *)0x0;
            *puVar20 = *puVar20 ^ 0x80000000;
            local_190 = param_2 + 0x108;
            local_188 = (ulonglong *)puVar20;
            FUN_180214e10(param_2,param_3,0,&local_b0,&local_190,0x18);
            *puVar20 = *puVar20 ^ 0x80000000;
            bVar11 = FUN_180213268(0xe4,*(undefined1 *)(param_2 + 0xd1));
            local_190 = param_2 + 0xfc;
            local_170 = (uint *)0x0;
            local_188 = (ulonglong *)((ulonglong)bVar11 | 0x100);
            local_180 = (ulonglong *)&local_b0;
            local_178 = puVar20;
            FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x32,puVar21,&local_190,0x28);
            goto LAB_18017b1d8;
          }
          if (uVar15 == 0x13) {
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,0);
            local_190 = param_2 + 0xfc;
            local_188 = (ulonglong *)0x0;
            FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x1a,puVar21,&local_190,0x10);
            goto LAB_18017b1d8;
          }
          if (uVar15 == 0x5d) {
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,4,0,param_2,param_3,0);
            uVar18 = 0x49;
          }
          else {
            if (uVar15 == 0x5e) {
              local_190 = (uint *)((ulonglong)uVar8 << 8);
              puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0);
              FUN_180178d20(puVar16,local_120[0],param_2,param_3,1);
              goto LAB_18017b1d8;
            }
            if (uVar15 != 0x5f) {
              if (uVar15 == 0x60) {
                local_e0 = param_2[0xc3];
                uVar15 = param_4[1] & 0xf000000;
                bVar11 = (byte)(param_4[1] >> 0x10) & 3;
                if (local_e0 == 0) {
                  local_e0 = FUN_180213760(param_2,4,1);
                  param_2[0xc3] = local_e0;
                }
                local_e0 = local_e0 | 0x10000000;
                uStack_dc = CONCAT31(uStack_dc._1_3_,bVar11);
                uVar13 = 0x40003;
                uStack_c8 = 0xffffffffffffffff;
                local_d0 = 0xffffffffffffffff;
                if (uVar15 == 0xd000000) {
                  uVar13 = 3;
                }
                local_190 = &local_e0;
                local_188 = (ulonglong *)0x0;
                FUN_180214e10(param_2,param_3,uVar13,param_2 + 0x134,&local_190,0x10);
              }
              else {
                if (uVar15 != 0x19) {
                  if (uVar15 == 0x1a) {
                    uVar24 = param_4[2];
                    uVar17 = (uVar24 & 0x1800 | uVar24 >> 0x14 & 0x7ff) >> 8;
                    uVar15 = uVar24 & 0xf000000;
                    if (uVar17 == 0xe) {
                      uVar6 = param_4[1];
                      uVar17 = uVar24 & 0x7ff;
                      if ((*(char *)(param_2 + 0x3e) == '\0') ||
                         (*(char *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar17 + 0x2a0) ==
                          '\0')) {
                        FUN_18017b2d0(&local_110);
                        local_170 = (uint *)0x0;
                        local_168 = (uint *)0x0;
                        local_178 = (uint *)(CONCAT44(local_178._4_4_,uVar6) & 0xffffffff000007ff |
                                            0x20410a00);
                        local_180 = (ulonglong *)((ulonglong)(uVar17 >> 2) * 0x10 + 0xe80);
                        uVar13 = 0x40005;
                        local_188 = (ulonglong *)
                                    (CONCAT44(local_188._4_4_,uVar24) & 0xffffffff00000003);
                        local_190 = (uint *)(CONCAT44(local_190._4_4_,param_2[0x1e]) | 0x10000000);
                        if (uVar15 == 0xd000000) {
                          uVar13 = 5;
                        }
                        FUN_180214c88(param_2,param_3,uVar13,0xffffffff,&local_190,0x30);
                      }
                      else {
                        bVar9 = *(int *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar17 * 4 +
                                        0x2b0) == 0;
                        bVar10 = !bVar9;
                        if (uVar15 == 0xd000000) {
                          bVar10 = bVar9;
                        }
                        if (bVar10) {
                          FUN_18017b2d0(&local_110);
                          local_188 = (ulonglong *)0x0;
                          local_180 = (ulonglong *)0x0;
                          local_190 = (uint *)(CONCAT44(local_190._4_4_,uVar6) & 0xffffffff000007ff
                                              | 0x20410a00);
                          FUN_180214c88(param_2,param_3,4,0xffffffff,&local_190,0x18);
                        }
                      }
                    }
                    else if (uVar17 == 0x13) {
                      FUN_18017b2d0(&local_110);
                      iVar14 = param_2[0xc3];
                      uVar17 = param_4[2] >> 0x10 & 3;
                      uVar24 = param_4[1] & 0x7ff | 0x20410a00;
                      if (iVar14 == 0) {
                        iVar14 = FUN_180213760(param_2,4,1);
                        param_2[0xc3] = iVar14;
                      }
                      local_180 = (ulonglong *)CONCAT44(local_180._4_4_,uVar24);
                      uVar13 = 0x40005;
                      local_188 = (ulonglong *)CONCAT44(local_188._4_4_,uVar17);
                      local_178 = (uint *)0x0;
                      local_170 = (uint *)0x0;
                      local_190 = (uint *)(CONCAT44(local_190._4_4_,iVar14) | 0x10000000);
                      if (uVar15 == 0xd000000) {
                        uVar13 = 5;
                      }
                      FUN_180214c88(param_2,param_3,uVar13,0xffffffff,&local_190,0x28);
                    }
                    puVar16 = param_4 + 3;
                  }
                  goto LAB_18017b1d8;
                }
                FUN_18017b2d0(&local_110);
                local_188 = (ulonglong *)0x0;
                local_180 = (ulonglong *)0x0;
                local_190 = (uint *)(CONCAT44(local_190._4_4_,param_4[1]) & 0xffffffff000007ff |
                                    0x20410a00);
                FUN_180214c88(param_2,param_3,4,0xffffffff,&local_190,0x18);
              }
              goto LAB_1801796d0;
            }
            local_190 = (uint *)((ulonglong)uVar8 << 8);
            puVar16 = (uint *)FUN_180177748(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0);
            puVar21 = param_2 + 0x114;
            local_e0 = 0;
            uVar18 = 0x48;
            uStack_dc = uStack_dc & 0xffffff00;
            *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0xfe);
            *(undefined8 *)puVar21 = *(undefined8 *)(param_2 + 0xfc);
            *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x102);
            *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x100);
            *(undefined8 *)(param_2 + 0x11e) = *(undefined8 *)(param_2 + 0x106);
            *(undefined8 *)(param_2 + 0x11c) = *(undefined8 *)(param_2 + 0x104);
            *puVar21 = *puVar21 | 0x10000000;
            *(undefined1 *)(param_2 + 0x115) = 3;
            *(undefined8 *)(param_2 + 0x122) = uStack_d8;
            *(ulonglong *)(param_2 + 0x120) = (ulonglong)uStack_dc << 0x20;
            *(undefined8 *)(param_2 + 0x126) = 0xffffffffffffffff;
            *(undefined8 *)(param_2 + 0x124) = 0xffffffffffffffff;
          }
          puVar21 = (uint *)0x0;
        }
LAB_18017a144:
        FUN_180178450(local_f0,param_2,param_3,uVar18,local_c0,puVar21);
        goto LAB_18017b1d8;
      }
      if (*(char *)((longlong)param_2 + (ulonglong)*(byte *)(param_2 + 0x14c) + 0x510) == '\0') {
        FUN_180214c88(param_2,param_3,0x15,0,&local_190,0);
      }
      cVar19 = *(char *)(param_2 + 0x14c);
      *(byte *)(param_2 + 0x14c) = cVar19 - 1U;
      cVar19 = *(char *)((longlong)param_2 + (ulonglong)(byte)(cVar19 - 1U) + 0x510);
    }
    *(bool *)(param_3 + 0x18) = cVar19 != '\x02';
  }
LAB_18017a468:
  puVar16 = param_4 + 1;
LAB_18017b1d8:
  if (param_2[0x13c] != -1) {
    uVar15 = param_2[0xc3];
    uVar12 = (undefined1)((uint)param_2[0x13c] >> 0x10);
    if (uVar15 == 0) {
      uVar15 = FUN_180213760(param_2,4,1);
      param_2[0xc3] = uVar15;
    }
    uStack_dc = CONCAT31(uStack_dc._1_3_,uVar12);
    uStack_c8 = 0xffffffffffffffff;
    local_d0 = 0xffffffffffffffff;
    local_178 = (uint *)0x0;
    bVar10 = (param_2[0x13c] & 0xf000000) == 0xd000000;
    lVar26 = 0x3a0;
    if (bVar10) {
      lVar26 = 0x3d0;
    }
    local_180 = (ulonglong *)((longlong)param_2 + lVar26);
    lVar26 = 0x3d0;
    if (bVar10) {
      lVar26 = 0x3a0;
    }
    local_188 = (ulonglong *)((longlong)param_2 + lVar26);
    local_190 = &local_e0;
    local_e0 = uVar15;
    FUN_180214e10(param_2,param_3,0x37,param_2 + 0xdc,&local_190,0x20);
    FUN_180213800(param_2,param_2[0xd0]);
    param_2[0xd0] = 0;
  }
  return puVar16;
}

