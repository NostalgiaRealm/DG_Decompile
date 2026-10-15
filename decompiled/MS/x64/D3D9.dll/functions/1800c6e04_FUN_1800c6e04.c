/*
 * FUN_1800c6e04 at 1800c6e04
 * bool __fastcall FUN_1800c6e04(longlong param_1, uint * param_2, longlong param_3, uint * param_4, uint * param_5)
 * Address ranges: 1800c6e04-1800c74eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800c6e04(longlong param_1,uint *param_2,longlong param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  uint local_268;
  uint *local_258;
  undefined8 local_248;
  undefined8 local_240;
  longlong local_238 [32];
  uint auStack_138 [32];
  uint auStack_b8 [32];
  ulonglong uVar7;
  
  uVar7 = 0;
  iVar1 = 0;
  local_248 = 0;
  local_240 = 0;
  FUN_1800fbea0((undefined1 *)local_238,0,0x200);
  local_268 = 0;
  *param_5 = 0;
  bVar2 = false;
  uVar13 = 0;
  bVar18 = true;
  uVar10 = uVar7;
  uVar12 = uVar7;
  uVar15 = uVar7;
  uVar17 = uVar7;
  local_258 = param_2;
  do {
    if (bVar2) {
      return bVar18;
    }
    uVar5 = *param_2;
    iVar8 = 0;
    iVar4 = 0;
    uVar3 = uVar5 & 0xffff;
    if (uVar3 < 0xffff) {
      if (uVar3 == 0xfffe) {
        param_2 = param_2 + ((uVar5 >> 0x10 & 0xe0ff) + 1);
        local_258 = param_2;
      }
      else {
        uVar11 = (uint)uVar12;
        uVar16 = (uint)uVar17;
        uVar6 = (uint)uVar7;
        uVar14 = (uint)uVar15;
        uVar9 = (uint)uVar10;
        if (uVar3 < 0x1e) {
          if (uVar3 != 0x1d) {
            if (uVar3 < 0xf) {
              if (uVar3 != 0xe) {
                if (7 < uVar3) {
                  if ((((uVar3 != 8) && (uVar3 != 9)) && (uVar3 != 10)) &&
                     (iVar4 = uVar3 - 0xb, iVar4 != 0)) {
LAB_1800c6f3e:
                    if ((iVar4 != 1) && (iVar4 != 2)) goto LAB_1800c73e0;
                  }
                  goto LAB_1800c6f10;
                }
                if (uVar3 != 7) {
                  if (uVar3 == 0) goto LAB_1800c7237;
                  if (uVar3 != 1) {
                    if ((uVar3 != 2) && (uVar3 != 3)) {
                      if (uVar3 == 4) goto LAB_1800c7371;
                      if (uVar3 != 5) {
                        if (uVar3 != 6) goto LAB_1800c73e0;
                        goto LAB_1800c6ef2;
                      }
                    }
                    goto LAB_1800c6f10;
                  }
                }
              }
              goto LAB_1800c6ef2;
            }
            if (uVar3 < 0x17) {
              if (uVar3 != 0x16) {
                if ((uVar3 != 0xf) && (uVar3 != 0x10)) {
                  if (uVar3 == 0x11) goto LAB_1800c6f10;
                  if (uVar3 == 0x12) goto LAB_1800c7371;
                  iVar4 = uVar3 - 0x13;
                  if (iVar4 != 0) goto LAB_1800c6f3e;
                }
LAB_1800c6ef2:
                iVar8 = 1;
                goto LAB_1800c73e0;
              }
            }
            else if ((uVar3 != 0x17) && (uVar3 != 0x18)) {
              if (uVar3 == 0x19) {
                uVar15 = (ulonglong)(uVar14 + 1);
                local_238[local_240._4_4_] = (longlong)(param_2 + 2);
                local_240 = CONCAT44(local_240._4_4_ + 1,(uint)local_240);
                local_248 = CONCAT44(local_248._4_4_,(int)local_248 + 1);
                param_2 = (uint *)(param_1 +
                                  (ulonglong)
                                  *(uint *)(param_3 + (ulonglong)(local_258[1] & 0x7ff) * 4) * 4);
                auStack_b8[uVar12] = 0;
                if ((((*param_4 < uVar9) || (param_4[1] < uVar16)) || (param_4[2] < uVar6)) ||
                   ((param_4[3] < uVar11 + 1 || (param_4[4] < uVar14 + 1)))) {
                  bVar18 = false;
                }
                else {
                  bVar18 = true;
                }
                uVar13 = (ulonglong)local_248._4_4_;
                uVar12 = (ulonglong)(uVar11 + 1);
                local_258 = param_2;
              }
              else if (uVar3 == 0x1a) {
                bVar18 = (param_2[2] >> 0x14 & 0x700 | param_2[2] & 0x1800) != 0x1300;
                uVar5 = uVar16 + 1;
                if (bVar18) {
                  uVar5 = uVar16;
                }
                uVar17 = (ulonglong)uVar5;
                if (bVar18) {
                  uVar15 = (ulonglong)(uVar14 + 1);
                }
                local_238[local_240._4_4_] = (longlong)(param_2 + 3);
                local_240 = CONCAT44(local_240._4_4_ + 1,(uint)local_240);
                auStack_b8[uVar12] = (local_258[2] >> 0x14 & 0x700 | local_258[2] & 0x1800) >> 8;
                if (((*param_4 < uVar9) || (param_4[1] < uVar5)) ||
                   ((param_4[2] < uVar6 ||
                    ((param_4[3] < uVar11 + 1 || (param_4[4] < (uint)uVar15)))))) {
                  bVar18 = false;
                }
                else {
                  bVar18 = true;
                }
                uVar13 = (ulonglong)local_248._4_4_;
                local_248 = CONCAT44(local_248._4_4_,(int)local_248 + 1);
                param_2 = (uint *)(param_1 +
                                  (ulonglong)
                                  *(uint *)(param_3 + (ulonglong)(local_258[1] & 0x7ff) * 4) * 4);
                uVar12 = (ulonglong)(uVar11 + 1);
                local_258 = param_2;
              }
              else {
                if (uVar3 == 0x1b) {
                  iVar1 = iVar1 + 1;
                  param_2 = param_2 + 3;
                  goto LAB_1800c6fc9;
                }
                if (uVar3 != 0x1c) goto LAB_1800c73e0;
                if (local_240._4_4_ == 0) goto LAB_1800c6fb9;
                local_240._4_4_ = local_240._4_4_ - 1;
                param_2 = (uint *)local_238[local_240._4_4_];
                uVar3 = (int)local_248 - 1;
                local_248 = CONCAT44(local_248._4_4_,uVar3);
                uVar5 = uVar16 - 1;
                if (auStack_b8[uVar3] != 0x13) {
                  uVar5 = uVar16;
                }
                uVar17 = (ulonglong)uVar5;
                uVar12 = (ulonglong)(uVar11 - 1);
                local_258 = param_2;
              }
              goto LAB_1800c74c7;
            }
            goto LAB_1800c6f10;
          }
          iVar1 = iVar1 + -1;
          param_2 = param_2 + 1;
          uVar7 = (ulonglong)(uVar6 - 1);
          local_258 = param_2;
        }
        else if (uVar3 < 0x2e) {
          if (uVar3 == 0x2d) {
LAB_1800c72ab:
            param_2 = param_2 + 3;
            local_258 = param_2;
          }
          else if (uVar3 < 0x27) {
            if (uVar3 == 0x26) {
              param_2 = param_2 + 2;
LAB_1800c6fc9:
              uVar6 = uVar6 + 1;
              uVar7 = (ulonglong)uVar6;
              uVar15 = (ulonglong)(uVar14 + 1);
              if ((((*param_4 < uVar9) || (param_4[1] < uVar16)) || (param_4[2] < uVar6)) ||
                 ((param_4[3] < uVar11 || (param_4[4] < uVar14 + 1)))) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              local_258 = param_2;
              if (*param_5 < uVar6) {
                *param_5 = uVar6;
              }
            }
            else {
              local_258 = param_2;
              if (uVar3 != 0x1e) {
                if ((uVar3 == 0x20) || (uVar3 == 0x21)) goto LAB_1800c6f10;
                if (uVar3 == 0x22) goto LAB_1800c7371;
                if ((uVar3 != 0x23) && (uVar3 != 0x24)) {
                  iVar8 = iVar4;
                  if (uVar3 == 0x25) {
                    iVar8 = 1;
                    if (*(char *)(param_1 + 1) != '\x03') {
                      iVar8 = 3;
                    }
                  }
                  goto LAB_1800c73e0;
                }
                goto LAB_1800c6ef2;
              }
LAB_1800c731d:
              param_2 = local_258 + 2;
              local_258 = param_2;
            }
          }
          else if (uVar3 == 0x27) {
            param_2 = param_2 + 1;
            uVar7 = (ulonglong)(uVar6 - 1);
            local_258 = param_2;
          }
          else {
            if (uVar3 == 0x28) {
              uVar5 = (param_2[1] >> 0x14 & 0x700 | param_2[1] & 0x1800) >> 8;
              if (uVar5 == 0x13) {
                uVar17 = (ulonglong)(uVar16 + 1);
              }
              else {
                local_268 = uVar9 + 1;
                uVar10 = (ulonglong)local_268;
                uVar15 = (ulonglong)(uVar14 + 1);
              }
              auStack_138[uVar13] = uVar5;
              uVar13 = (ulonglong)(local_248._4_4_ + 1);
              local_248 = CONCAT44(local_248._4_4_ + 1,(int)local_248);
              if ((((*param_4 < (uint)uVar10) || (param_4[1] < (uint)uVar17)) ||
                  (param_4[2] < uVar6)) || ((param_4[3] < uVar11 || (param_4[4] < (uint)uVar15)))) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              goto LAB_1800c731d;
            }
            if (uVar3 == 0x29) {
              uVar17 = (ulonglong)(uVar16 + 1);
              auStack_138[uVar13] = (param_2[1] >> 0x14 & 0x700 | param_2[1] & 0x1800) >> 8;
              uVar13 = (ulonglong)(local_248._4_4_ + 1);
              local_248 = CONCAT44(local_248._4_4_ + 1,(int)local_248);
              param_2 = local_258;
              if (((*param_4 < uVar9) || (param_4[1] < uVar16 + 1)) ||
                 ((param_4[2] < uVar6 || ((param_4[3] < uVar11 || (param_4[4] < uVar14)))))) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              goto LAB_1800c72ab;
            }
            if (uVar3 == 0x2a) {
              if (auStack_138[(int)uVar13 - 1] == 0xe) {
                uVar15 = (ulonglong)(uVar14 + 1);
                goto LAB_1800c7219;
              }
            }
            else if (uVar3 == 0x2b) {
              uVar5 = (int)uVar13 - 1;
              uVar13 = (ulonglong)uVar5;
              local_248 = CONCAT44(uVar5,(int)local_248);
              local_268 = uVar9 - 1;
              if (auStack_138[uVar13] != 0xe) {
                local_268 = uVar9;
              }
              uVar10 = (ulonglong)local_268;
              if (auStack_138[uVar13] != 0xe) {
                uVar17 = (ulonglong)(uVar16 - 1);
              }
LAB_1800c7219:
              if ((((*param_4 < (uint)uVar10) || (param_4[1] < (uint)uVar17)) ||
                  (param_4[2] < uVar6)) || ((param_4[3] < uVar11 || (param_4[4] < (uint)uVar15)))) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
            }
            else {
              iVar8 = iVar4;
              if (uVar3 != 0x2c) goto LAB_1800c73e0;
            }
LAB_1800c7237:
            param_2 = param_2 + 1;
            local_258 = param_2;
          }
        }
        else {
          if (uVar3 < 0x5b) {
            if (uVar3 == 0x5a) {
LAB_1800c7371:
              iVar8 = 3;
            }
            else {
              if (uVar3 == 0x2e) goto LAB_1800c6ef2;
              iVar8 = iVar4;
              if (uVar3 != 0x41) {
                if (uVar3 == 0x42) goto LAB_1800c6f10;
                if ((uVar3 == 0x4e) || (uVar3 == 0x4f)) goto LAB_1800c6ef2;
                if (uVar3 == 0x58) goto LAB_1800c7371;
              }
            }
          }
          else {
            if ((uVar3 == 0x5b) || (uVar3 == 0x5c)) goto LAB_1800c6ef2;
            if (uVar3 == 0x5d) {
              iVar8 = 4;
            }
            else {
              if (uVar3 == 0x5e) {
                local_240 = CONCAT44(local_240._4_4_,(uint)local_240 | param_2[1] >> 0x10 & 0xf);
              }
              else if (uVar3 != 0x5f) {
                local_258 = param_2;
                iVar8 = iVar4;
                if (uVar3 == 0x60) goto LAB_1800c731d;
                goto LAB_1800c73e0;
              }
LAB_1800c6f10:
              iVar8 = 2;
            }
          }
LAB_1800c73e0:
          if ((param_2[1] & 0x2000) != 0) {
            param_2 = param_2 + 1;
          }
          if ((uVar5 >> 0x1c & 1) != 0) {
            uVar5 = param_2[2];
            param_2 = param_2 + 1;
            uVar10 = (ulonglong)local_268;
            uVar3 = 0xf0000;
            if ((*param_2 & 0xf0000) != 0) {
              uVar3 = *param_2 & 0xf0000;
            }
            uVar5 = uVar3 >> 0x10 &
                    ((uint)(byte)('\x01' << ((byte)(uVar5 >> 0x10) & 3)) |
                     1 << (uVar5 >> 0x12 & 3) & 0xffU | 1 << (uVar5 >> 0x14 & 3) & 0xffU |
                    1 << (uVar5 >> 0x16 & 3) & 0xffU);
            bVar18 = (uVar5 & (uint)local_240) == uVar5;
          }
          param_2 = param_2 + 2;
          for (; local_258 = param_2, iVar8 != 0; iVar8 = iVar8 + -1) {
            if (((*param_2 & 0x2000) != 0) &&
               (param_2 = param_2 + 1,
               ((byte)(*param_2 >> 0x1c) & 7 | (byte)(*param_2 >> 8) & 0x18) == 0xf)) {
              bVar18 = (bool)(bVar18 & -(iVar1 != 0));
            }
            param_2 = param_2 + 1;
          }
        }
      }
    }
    else {
      iVar8 = iVar4;
      if (uVar3 != 0xffff) goto LAB_1800c73e0;
LAB_1800c6fb9:
      bVar2 = true;
    }
LAB_1800c74c7:
    if (bVar18 == false) {
      return false;
    }
  } while( true );
}

