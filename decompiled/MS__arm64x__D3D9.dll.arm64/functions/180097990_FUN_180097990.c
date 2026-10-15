/*
 * FUN_180097990 at 180097990
 * undefined FUN_180097990(void)
 * Address ranges: 180097990-18009826b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180097990(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  ulonglong in_stack_fffffffffffffe50;
  ulonglong in_stack_fffffffffffffe58;
  undefined8 in_stack_fffffffffffffe60;
  undefined4 uVar22;
  ulonglong in_stack_fffffffffffffe68;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar23;
  undefined *in_stack_fffffffffffffe80;
  ulonglong in_stack_fffffffffffffe88;
  undefined8 in_stack_fffffffffffffe98;
  uint in_stack_fffffffffffffeb0;
  ulonglong local_100 [2];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [16];
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  if ((*(char *)(param_1 + 0x24d) == '\0') || (*(char *)(param_1 + 0x24e) == '\0')) {
    FUN_1800921e0(param_1,param_2,param_3);
  }
  else {
    uVar8 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
    uVar20 = (ulonglong)uVar8;
    if (((*(longlong *)(param_1 + 0x1b8) != 0) &&
        ((*(byte *)(param_1 + ((ulonglong)(uVar8 >> 6) + 0x4c) * 8 + ((ulonglong)(uVar8 >> 3) & 7))
          >> (uVar20 & 7) & 1) == 0)) &&
       (iVar9 = (*__imp_USER32_dll_IsRectEmpty)
                          (*(longlong *)(param_1 + 0x1c8) + uVar20 * 0x20 + 0x10), iVar9 == 0)) {
      lVar15 = *(longlong *)(param_1 + 0x1c8) + uVar20 * 0x20;
      iVar9 = *(int *)(lVar15 + 0x10);
      iVar2 = *(int *)(lVar15 + 0x14);
      iVar1 = *(int *)(lVar15 + 0x18);
      iVar3 = *(int *)(lVar15 + 0x1c);
      cVar6 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x84);
      uVar19 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
      uVar13 = (ulonglong)uVar19;
      if (*(int *)(param_1 + 0x2c) == 0) {
        FUN_18008db78(*(longlong *)(param_1 + 0x130),1,*(undefined8 *)(param_1 + 0x10));
      }
      if (*(char *)(param_1 + 0x24c) == '\0') {
        uVar17 = *(uint *)(&DAT_180231770 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      }
      else {
        uVar17 = 1;
      }
      uVar4 = 0xf8001018;
      in_stack_fffffffffffffe50 = *(ulonglong *)(param_1 + 0x7c);
      cVar7 = (&DAT_180231518)[*(uint *)(param_1 + 0x2c)];
      uVar5 = *(uint *)(&DAT_180231550 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      if (cVar6 == '\0') {
        uVar4 = 0xf8000000;
      }
      if (in_stack_fffffffffffffe50 == 0) {
        in_stack_fffffffffffffe50 = *(ulonglong *)(param_1 + 0x74);
      }
      uVar22 = *(undefined4 *)(param_1 + 0xa8);
      local_100[1] = 0;
      local_100[0] = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),
                                   auStack_f0,*(undefined4 *)(param_1 + 0x1d0),0);
      uVar11 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_e8,
                             *(undefined4 *)(param_1 + 0x90),uVar19);
      in_stack_fffffffffffffe80 = &DAT_180231350;
      uVar10 = 1;
      in_stack_fffffffffffffe68 = *(ulonglong *)(param_1 + 0x208);
      in_stack_fffffffffffffeb0 = 0;
      in_stack_fffffffffffffe58 = 0;
      in_stack_fffffffffffffe70 = 0;
      uVar14 = *(undefined8 *)(param_1 + 0x1b8);
      in_stack_fffffffffffffe88 = local_100[0];
      FUN_18008e010(*(float *)(param_1 + 0x244) * (float)iVar9,
                    *(float *)(param_1 + 0x248) * (float)iVar2,
                    *(float *)(param_1 + 0x244) * (float)iVar1,
                    *(float *)(param_1 + 0x248) * (float)iVar3,(float)iVar9,(float)iVar2,
                    (float)iVar1,(float)iVar3,*(undefined8 *)(param_1 + 0x130),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,uVar19,
                    param_2,param_3,uVar19,in_stack_fffffffffffffe50,0,uVar14,
                    in_stack_fffffffffffffe68,0,uVar11,&DAT_180231350,local_100[0],local_100 + 1,
                    &DAT_180231350,uVar22,0,0,cVar6,
                    uVar5 & 0xf | (uVar4 | (uint)(cVar7 == '\0') << 10 | uVar17 & 7) << 4,1);
      uVar23 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar22 = (undefined4)((ulonglong)uVar14 >> 0x20);
      lVar15 = param_1 + (ulonglong)(uVar19 >> 6) * 8;
      uVar18 = (ulonglong)(uVar19 >> 3) & 7;
      *(byte *)(lVar15 + 0x270 + uVar18) =
           *(byte *)(lVar15 + 0x270 + uVar18) & ((byte)(1 << (uVar13 & 7)) ^ 0xff);
      uVar18 = (ulonglong)(uVar19 >> 3) & 7;
      *(byte *)(lVar15 + 0x250 + uVar18) =
           *(byte *)(lVar15 + 0x250 + uVar18) & ((byte)(1 << (uVar13 & 7)) ^ 0xff);
      uVar18 = (ulonglong)(uVar19 >> 3) & 7;
      *(byte *)(lVar15 + 0x110 + uVar18) =
           *(byte *)(lVar15 + 0x110 + uVar18) | (byte)(1 << (uVar13 & 7));
      uVar18 = (ulonglong)(uVar19 >> 3) & 7;
      *(byte *)(lVar15 + 0x260 + uVar18) =
           *(byte *)(lVar15 + 0x260 + uVar18) & ((byte)(1 << (uVar13 & 7)) ^ 0xff);
      (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0x1c8) + uVar13 * 0x20 + 0x10);
    }
    uVar13 = uVar20 << 5;
    iVar9 = (*__imp_USER32_dll_IsRectEmpty)(*(longlong *)(param_1 + 0x84) + (uVar13 | 0x10));
    if (iVar9 == 0) {
      if (*(longlong *)(param_1 + 0x1b8) != 0) {
        (*__imp_USER32_dll_UnionRect)
                  (*(longlong *)(param_1 + 0x218) + (uVar13 | 0x10),
                   *(longlong *)(param_1 + 0x218) + (uVar13 | 0x10),
                   *(longlong *)(param_1 + 0x84) + (uVar13 | 0x10));
        if (*(int *)(param_1 + 0x44) - 3U < 3) {
          FUN_180096440(param_1,param_2,param_3,2);
          lVar15 = *(longlong *)(param_1 + 0x130);
          uVar18 = (ulonglong)(param_2 + *(int *)(param_1 + 0x3c) * param_3);
          *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508) + 0xb88) = lVar15;
          lVar16 = *(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508);
          *(int *)(lVar16 + 0x684) = *(int *)(lVar16 + 0x684) + 1;
          local_d8 = *(undefined8 *)(param_1 + 0x208);
          uStack_b8 = 0;
          local_c0 = 0;
          local_a8 = *(undefined8 *)(param_1 + 0x1b8);
          local_b0 = 0;
          local_d0 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          local_90 = 0;
          local_80 = 0;
          local_c8 = uVar18;
          local_98 = uVar18;
          FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),local_a8,uVar18,0,
                        0x400);
          FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),
                        *(undefined8 *)(param_1 + 0x208),uVar18,0,0x800);
          FUN_1800ea4f0(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),&local_a8,0,0,0,
                        &local_d8,0);
          lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508);
          iVar9 = *(int *)(lVar15 + 0x684) + -1;
          *(int *)(lVar15 + 0x684) = iVar9;
          if ((iVar9 == 0) && (*(int *)(lVar15 + 0x680) <= *(int *)(lVar15 + 0x678))) {
            FUN_1800e8548(lVar15 + 8,0);
          }
          if ((((&DAT_180231818)[*(uint *)(param_1 + 0x2c)] != '\0') &&
              (uVar18 = FUN_180095d10(param_1), (&DAT_180231818)[uVar18 & 0xffffffff] != '\0')) &&
             (*(char *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x20
                       + 0x6e9) != '\0')) {
            uVar18 = (ulonglong)
                     (param_2 + (*(int *)(param_1 + 0x34) + param_3) * *(int *)(param_1 + 0x3c));
            lVar15 = *(longlong *)(param_1 + 0x130);
            *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508) + 0xb88) = lVar15;
            lVar16 = *(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508);
            *(int *)(lVar16 + 0x684) = *(int *)(lVar16 + 0x684) + 1;
            local_a8 = *(undefined8 *)(param_1 + 0x208);
            uStack_88 = 0;
            local_90 = 0;
            local_d8 = *(undefined8 *)(param_1 + 0x1b8);
            local_80 = 0;
            local_a0 = 0;
            local_d0 = 0;
            uStack_b8 = 0;
            local_c0 = 0;
            local_b0 = 0;
            local_c8 = uVar18;
            local_98 = uVar18;
            FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),local_d8,uVar18,
                          0,0x400);
            FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),
                          *(undefined8 *)(param_1 + 0x208),uVar18,0,0x800);
            FUN_1800ea4f0(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),&local_d8,0,0,0,
                          &local_a8,0);
            lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508);
            iVar9 = *(int *)(lVar15 + 0x684) + -1;
            *(int *)(lVar15 + 0x684) = iVar9;
            if ((iVar9 == 0) && (*(int *)(lVar15 + 0x680) <= *(int *)(lVar15 + 0x678))) {
              FUN_1800e8548(lVar15 + 8,0);
            }
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x7c) != 0) {
            lVar15 = 0x44;
            if (*(int *)(param_1 + 0x2c) == 0x15) {
              lVar15 = 0x54;
            }
            FUN_18008e1b0(*(longlong *)(param_1 + 0x130),param_1 + 0x60,param_1 + 0x60,
                          *(longlong *)(param_1 + 0x7c),*(undefined8 *)(param_1 + 0x74),0,0,uVar20,
                          in_stack_fffffffffffffe50 & 0xffffffff00000000,
                          in_stack_fffffffffffffe58 & 0xffffffff00000000,CONCAT44(uVar22,uVar8),
                          in_stack_fffffffffffffe68 & 0xffffffff00000000,
                          in_stack_fffffffffffffe70 & 0xffffffff00000000,
                          CONCAT44(uVar23,*(undefined4 *)(*(longlong *)(param_1 + 0x130) + lVar15)),
                          (ulonglong)in_stack_fffffffffffffe80 & 0xffffffff00000000,
                          in_stack_fffffffffffffe88 & 0xffffffff00000000,
                          *(longlong *)(param_1 + 0x84) + (uVar13 | 0x10),
                          CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x1a0)),1,1,
                          in_stack_fffffffffffffeb0 & 0xffffff00);
          }
          lVar15 = param_1 + ((ulonglong)(uVar8 >> 6) + 0x4a) * 8;
          uVar18 = (ulonglong)(uVar8 >> 3) & 7;
          *(byte *)(lVar15 + uVar18) = *(byte *)(lVar15 + uVar18) | (byte)(1 << (uVar20 & 7));
          iVar9 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
          if (*(int *)(param_1 + 0x2c) == 0) {
            FUN_18008db78(*(undefined8 *)(param_1 + 0x130),2,*(undefined8 *)(param_1 + 0x10));
          }
          uVar17 = *(uint *)(param_1 + 0x2c);
          uVar19 = 0x16;
          if (uVar17 != 0) {
            if (*(char *)(param_1 + 0x24c) == '\0') {
              uVar19 = *(uint *)(&DAT_180231550 + (ulonglong)uVar17 * 4);
            }
            else {
              uVar19 = 6;
            }
            uVar19 = uVar19 & 0xf |
                     (*(uint *)(&DAT_180231770 + (ulonglong)uVar17 * 4) & 7 | 0xf8000020) << 4;
          }
          uVar10 = FUN_1800987e0(param_1,0,0);
          uVar22 = *(undefined4 *)(param_1 + 0x1ec);
          fVar21 = (float)(uint)(1 << (ulonglong)(param_2 & 0x1f));
          uVar23 = *(undefined4 *)(param_1 + 0x23c);
          uVar11 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_e8,
                                 uVar10,0);
          uVar14 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_f0,
                                 *(undefined4 *)(param_1 + 0x224),iVar9);
          uVar12 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),local_100,
                                 *(undefined4 *)(param_1 + 0x1d4),iVar9);
          FUN_18008e010(0,0,(float)*(uint *)(param_1 + 0x24) / fVar21,
                        (float)*(uint *)(param_1 + 0x28) / fVar21,0,0,
                        (float)*(uint *)(param_1 + 0x198) / fVar21,
                        (float)*(uint *)(param_1 + 0x19c) / fVar21,*(undefined8 *)(param_1 + 0x130),
                        *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,
                        iVar9,param_2,param_3,iVar9,*(undefined8 *)(param_1 + 0x1b8),
                        *(undefined8 *)(param_1 + 0x208),*(undefined8 *)(param_1 + 0x74),0,0,uVar12,
                        uVar14,uVar11,&DAT_180231350,&DAT_180231350,uVar22,uVar23,0,0,uVar19,1);
        }
        if (*(longlong *)(param_1 + 0xc4) != 0) {
          FUN_180091fa8(param_1,param_1 + 0xb0,param_1 + 0x1a4);
          *(undefined8 *)(param_1 + 0x138) = 0;
        }
      }
      (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0x84) + (uVar13 | 0x10));
      uVar13 = (ulonglong)(uVar8 >> 6);
    }
    else {
      uVar13 = (ulonglong)(uVar8 >> 6);
      if ((*(byte *)(param_1 + (uVar13 + 0x4c) * 8 + ((ulonglong)(uVar8 >> 3) & 7)) >> (uVar20 & 7)
          & 1) == 0) {
        if (*(longlong *)(param_1 + 0x1b8) != 0) {
          uVar19 = *(uint *)(param_1 + 0x24) >> (ulonglong)(param_2 & 0x1f);
          if (uVar19 == 0) {
            uVar19 = 1;
          }
          uVar17 = *(uint *)(param_1 + 0x28) >> (ulonglong)(param_2 & 0x1f);
          if (uVar17 == 0) {
            uVar17 = 1;
          }
          (*__imp_USER32_dll_SetRect)(auStack_e8,0,0,uVar19,uVar17);
          FUN_180091fa8(param_1,param_1 + 500,param_1 + 0x1a4);
        }
        if (*(longlong *)(param_1 + 0xc4) != 0) {
          FUN_180091fa8(param_1,param_1 + 0xb0,param_1 + 0x1a4);
          *(undefined8 *)(param_1 + 0x138) = 0;
        }
      }
    }
    uVar18 = (ulonglong)(uVar8 >> 3) & 7;
    lVar15 = param_1 + uVar13 * 8 + 0x260;
    *(byte *)(lVar15 + uVar18) = *(byte *)(lVar15 + uVar18) | (byte)(1 << (uVar20 & 7));
  }
  return;
}

