/*
 * FUN_1801aec78 at 1801aec78
 * undefined FUN_1801aec78(void)
 * Address ranges: 1801aec78-1801af553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1801aec78(longlong param_1,uint param_2,int param_3)

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
  longlong extraout_x10;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  float fVar21;
  ulonglong in_stack_fffffffffffffe60;
  ulonglong in_stack_fffffffffffffe68;
  undefined8 in_stack_fffffffffffffe70;
  undefined4 uVar22;
  ulonglong in_stack_fffffffffffffe78;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar23;
  undefined *in_stack_fffffffffffffe90;
  ulonglong in_stack_fffffffffffffe98;
  undefined8 in_stack_fffffffffffffea8;
  uint in_stack_fffffffffffffec0;
  ulonglong local_e8 [2];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe70 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  if ((*(char *)(param_1 + 0x24d) == '\0') || (*(char *)(param_1 + 0x24e) == '\0')) {
    FUN_1801a8f58(param_1,param_2,param_3);
  }
  else {
    uVar8 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
    uVar19 = (ulonglong)uVar8;
    if (((*(longlong *)(param_1 + 0x1b8) != 0) &&
        ((*(byte *)(param_1 + ((ulonglong)(uVar8 >> 6) + 0x4c) * 8 + ((ulonglong)(uVar8 >> 3) & 7))
          >> (uVar19 & 7) & 1) == 0)) &&
       (iVar9 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x1c8) + uVar19 * 0x20 + 0x10),
       iVar9 == 0)) {
      lVar15 = *(longlong *)(param_1 + 0x1c8) + uVar19 * 0x20;
      iVar9 = *(int *)(lVar15 + 0x10);
      iVar2 = *(int *)(lVar15 + 0x14);
      iVar1 = *(int *)(lVar15 + 0x18);
      iVar3 = *(int *)(lVar15 + 0x1c);
      cVar6 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x84);
      uVar20 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
      uVar13 = (ulonglong)uVar20;
      if (*(int *)(param_1 + 0x2c) == 0) {
        FUN_1801a4380(*(longlong *)(param_1 + 0x130),1,*(undefined8 *)(param_1 + 0x10));
      }
      if (*(char *)(param_1 + 0x24c) == '\0') {
        uVar17 = *(uint *)(&DAT_18022dca0 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      }
      else {
        uVar17 = 1;
      }
      uVar4 = 0xf8001018;
      in_stack_fffffffffffffe60 = *(ulonglong *)(param_1 + 0x7c);
      cVar7 = (&DAT_18022da48)[*(uint *)(param_1 + 0x2c)];
      if (cVar6 == '\0') {
        uVar4 = 0xf8000000;
      }
      uVar5 = *(uint *)(&DAT_18022da80 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      if (in_stack_fffffffffffffe60 == 0) {
        in_stack_fffffffffffffe60 = *(ulonglong *)(param_1 + 0x74);
      }
      uVar22 = *(undefined4 *)(param_1 + 0xa8);
      local_e8[1] = 0;
      local_e8[0] = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_d8
                                  ,*(undefined4 *)(param_1 + 0x1d0),0);
      uVar11 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_d0,
                             *(undefined4 *)(param_1 + 0x90),uVar20);
      in_stack_fffffffffffffe90 = &DAT_18022cfd8;
      in_stack_fffffffffffffec0 = 0;
      uVar10 = 1;
      in_stack_fffffffffffffe68 = 0;
      in_stack_fffffffffffffe78 = *(ulonglong *)(param_1 + 0x208);
      in_stack_fffffffffffffe80 = 0;
      uVar14 = *(undefined8 *)(param_1 + 0x1b8);
      in_stack_fffffffffffffe98 = local_e8[0];
      FUN_1801a4848(*(float *)(param_1 + 0x244) * (float)iVar9,
                    *(float *)(param_1 + 0x248) * (float)iVar2,
                    *(float *)(param_1 + 0x244) * (float)iVar1,
                    *(float *)(param_1 + 0x248) * (float)iVar3,(float)iVar9,(float)iVar2,
                    (float)iVar1,SUB41((float)iVar3,0),*(undefined8 *)(param_1 + 0x130),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,uVar20,
                    param_2,param_3,uVar20,in_stack_fffffffffffffe60,0,uVar14,
                    in_stack_fffffffffffffe78,0,uVar11,&DAT_18022cfd8,local_e8[0],local_e8 + 1,
                    &DAT_18022cfd8,uVar22,0,0,cVar6,
                    uVar5 & 0xf | (uVar4 | (uint)(cVar7 == '\0') << 10 | uVar17 & 7) << 4,1);
      uVar23 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar22 = (undefined4)((ulonglong)uVar14 >> 0x20);
      lVar15 = param_1 + (ulonglong)(uVar20 >> 6) * 8;
      uVar18 = (ulonglong)(uVar20 >> 3) & 7;
      *(byte *)(lVar15 + 0x270 + uVar18) =
           *(byte *)(lVar15 + 0x270 + uVar18) & ((byte)(1 << (uVar13 & 7)) ^ 0xff);
      uVar18 = (ulonglong)(uVar20 >> 3) & 7;
      *(byte *)(lVar15 + 0x250 + uVar18) =
           *(byte *)(lVar15 + 0x250 + uVar18) & ((byte)(1 << (uVar13 & 7)) ^ 0xff);
      uVar18 = (ulonglong)(uVar20 >> 3) & 7;
      *(byte *)(lVar15 + 0x110 + uVar18) =
           *(byte *)(lVar15 + 0x110 + uVar18) | (byte)(1 << (uVar13 & 7));
      uVar18 = (ulonglong)(uVar20 >> 3) & 7;
      *(byte *)(lVar15 + 0x260 + uVar18) =
           *(byte *)(lVar15 + 0x260 + uVar18) & ((byte)(1 << (uVar13 & 7)) ^ 0xff);
      thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x1c8) + uVar13 * 0x20 + 0x10);
    }
    uVar13 = uVar19 << 5;
    iVar9 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x84) + (uVar13 | 0x10));
    if (iVar9 == 0) {
      if (*(longlong *)(param_1 + 0x1b8) != 0) {
        thunk_FUN_180223c70(*(longlong *)(param_1 + 0x218) + (uVar13 | 0x10),
                            *(longlong *)(param_1 + 0x218) + (uVar13 | 0x10),
                            *(longlong *)(param_1 + 0x84) + (uVar13 | 0x10));
        if (*(int *)(param_1 + 0x44) - 3U < 3) {
          FUN_1801ad708(param_1,param_2,param_3,2);
          lVar15 = *(longlong *)(param_1 + 0x130);
          uVar20 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
          local_b0 = (ulonglong)uVar20;
          *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508) + 0xb88) = lVar15;
          lVar16 = *(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508);
          *(int *)(lVar16 + 0x684) = *(int *)(lVar16 + 0x684) + 1;
          local_c0 = *(undefined8 *)(param_1 + 0x208);
          uStack_a0 = 0;
          local_a8 = 0;
          local_90 = *(undefined8 *)(param_1 + 0x1b8);
          local_98 = 0;
          local_b8 = 0;
          local_88 = 0;
          uStack_70 = 0;
          uStack_78 = 0;
          local_68 = 0;
          local_80 = local_b0;
          FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),local_90,local_b0,
                        0,0x400);
          FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),
                        *(undefined8 *)(param_1 + 0x208),uVar20,0,0x800);
          FUN_180209ae0(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),&local_90,0,0,0,
                        &local_c0,0);
          lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508);
          iVar9 = *(int *)(lVar15 + 0x684) + -1;
          *(int *)(lVar15 + 0x684) = iVar9;
          if ((iVar9 == 0) && (*(int *)(lVar15 + 0x680) <= *(int *)(lVar15 + 0x678))) {
            FUN_180207560(lVar15 + 8,0);
          }
          if ((((&DAT_18022dd48)[*(uint *)(param_1 + 0x2c)] != '\0') &&
              (uVar18 = FUN_1801acfa8(param_1),
              *(char *)(extraout_x10 + (uVar18 & 0xffffffff)) != '\0')) &&
             (*(char *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x20
                       + 0x6e9) != '\0')) {
            param_2 = param_2 + (*(int *)(param_1 + 0x34) + param_3) * *(int *)(param_1 + 0x3c);
            local_b0 = (ulonglong)param_2;
            lVar15 = *(longlong *)(param_1 + 0x130);
            *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508) + 0xb88) = lVar15;
            lVar16 = *(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508);
            *(int *)(lVar16 + 0x684) = *(int *)(lVar16 + 0x684) + 1;
            local_90 = *(undefined8 *)(param_1 + 0x208);
            uStack_70 = 0;
            uStack_78 = 0;
            local_c0 = *(undefined8 *)(param_1 + 0x1b8);
            local_68 = 0;
            local_88 = 0;
            local_b8 = 0;
            uStack_a0 = 0;
            local_a8 = 0;
            local_98 = 0;
            local_80 = local_b0;
            FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),local_c0,
                          local_b0,0,0x400);
            FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),
                          *(undefined8 *)(param_1 + 0x208),param_2,0,0x800);
            FUN_180209ae0(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508),&local_c0,0,0,0,
                          &local_90,0);
            lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1508);
            iVar9 = *(int *)(lVar15 + 0x684) + -1;
            *(int *)(lVar15 + 0x684) = iVar9;
            if ((iVar9 == 0) && (*(int *)(lVar15 + 0x680) <= *(int *)(lVar15 + 0x678))) {
              FUN_180207560(lVar15 + 8,0);
            }
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x7c) != 0) {
            lVar15 = 0x44;
            if (*(int *)(param_1 + 0x2c) == 0x15) {
              lVar15 = 0x54;
            }
            FUN_1801a49f8(*(longlong *)(param_1 + 0x130),param_1 + 0x60,param_1 + 0x60,
                          *(longlong *)(param_1 + 0x7c),*(undefined8 *)(param_1 + 0x74),0,0,uVar19,
                          in_stack_fffffffffffffe60 & 0xffffffff00000000,
                          in_stack_fffffffffffffe68 & 0xffffffff00000000,CONCAT44(uVar22,uVar8),
                          in_stack_fffffffffffffe78 & 0xffffffff00000000,
                          in_stack_fffffffffffffe80 & 0xffffffff00000000,
                          CONCAT44(uVar23,*(undefined4 *)(*(longlong *)(param_1 + 0x130) + lVar15)),
                          (ulonglong)in_stack_fffffffffffffe90 & 0xffffffff00000000,
                          in_stack_fffffffffffffe98 & 0xffffffff00000000,
                          *(longlong *)(param_1 + 0x84) + (uVar13 | 0x10),
                          CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x1a0)),1,1,
                          in_stack_fffffffffffffec0 & 0xffffff00);
          }
          lVar15 = param_1 + ((ulonglong)(uVar8 >> 6) + 0x4a) * 8;
          uVar18 = (ulonglong)(uVar8 >> 3) & 7;
          *(byte *)(lVar15 + uVar18) = *(byte *)(lVar15 + uVar18) | (byte)(1 << (uVar19 & 7));
          iVar9 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
          if (*(int *)(param_1 + 0x2c) == 0) {
            FUN_1801a4380(*(undefined8 *)(param_1 + 0x130),2,*(undefined8 *)(param_1 + 0x10));
          }
          uVar17 = *(uint *)(param_1 + 0x2c);
          uVar20 = 0x16;
          if (uVar17 != 0) {
            if (*(char *)(param_1 + 0x24c) == '\0') {
              uVar20 = *(uint *)(&DAT_18022da80 + (ulonglong)uVar17 * 4);
            }
            else {
              uVar20 = 6;
            }
            uVar20 = uVar20 & 0xf |
                     (*(uint *)(&DAT_18022dca0 + (ulonglong)uVar17 * 4) & 7 | 0xf8000020) << 4;
          }
          uVar10 = FUN_1801afae0(param_1,0,0);
          fVar21 = (float)(uint)(1 << (ulonglong)(param_2 & 0x1f));
          uVar22 = *(undefined4 *)(param_1 + 0x23c);
          uVar23 = *(undefined4 *)(param_1 + 0x1ec);
          uVar11 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_d0,
                                 uVar10,0);
          uVar14 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_d8,
                                 *(undefined4 *)(param_1 + 0x224),iVar9);
          uVar12 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),local_e8,
                                 *(undefined4 *)(param_1 + 0x1d4),iVar9);
          FUN_1801a4848(0,0,(float)*(uint *)(param_1 + 0x24) / fVar21,
                        (float)*(uint *)(param_1 + 0x28) / fVar21,0,0,
                        (float)*(uint *)(param_1 + 0x198) / fVar21,
                        SUB41((float)*(uint *)(param_1 + 0x19c) / fVar21,0),
                        *(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x2c),
                        *(undefined4 *)(param_1 + 0x2c),param_2,iVar9,param_2,param_3,iVar9,
                        *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x208),
                        *(undefined8 *)(param_1 + 0x74),0,0,uVar12,uVar14,uVar11,&DAT_18022cfd8,
                        &DAT_18022cfd8,uVar23,uVar22,0,0,uVar20,1);
        }
        if (*(longlong *)(param_1 + 0xc4) != 0) {
          FUN_1801a8d08(param_1,param_1 + 0xb0,param_1 + 0x1a4);
          *(undefined8 *)(param_1 + 0x138) = 0;
        }
      }
      thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x84) + (uVar13 | 0x10));
      uVar13 = (ulonglong)(uVar8 >> 6);
    }
    else {
      uVar13 = (ulonglong)(uVar8 >> 6);
      if ((*(byte *)(param_1 + (uVar13 + 0x4c) * 8 + ((ulonglong)(uVar8 >> 3) & 7)) >> (uVar19 & 7)
          & 1) == 0) {
        if (*(longlong *)(param_1 + 0x1b8) != 0) {
          uVar20 = *(uint *)(param_1 + 0x24) >> (ulonglong)(param_2 & 0x1f);
          if (uVar20 == 0) {
            uVar20 = 1;
          }
          uVar17 = *(uint *)(param_1 + 0x28) >> (ulonglong)(param_2 & 0x1f);
          if (uVar17 == 0) {
            uVar17 = 1;
          }
          thunk_FUN_180223c20(auStack_d0,0,0,uVar20,uVar17);
          FUN_1801a8d08(param_1,param_1 + 500,param_1 + 0x1a4);
        }
        if (*(longlong *)(param_1 + 0xc4) != 0) {
          FUN_1801a8d08(param_1,param_1 + 0xb0,param_1 + 0x1a4);
          *(undefined8 *)(param_1 + 0x138) = 0;
        }
      }
    }
    uVar18 = (ulonglong)(uVar8 >> 3) & 7;
    lVar15 = param_1 + uVar13 * 8 + 0x260;
    *(byte *)(lVar15 + uVar18) = *(byte *)(lVar15 + uVar18) | (byte)(1 << (uVar19 & 7));
  }
  return;
}

