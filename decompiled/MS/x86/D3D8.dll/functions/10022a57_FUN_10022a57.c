/*
 * FUN_10022a57 at 10022a57
 * bool __stdcall FUN_10022a57(int param_1)
 * Address ranges: 10022a57-100231ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10022a57(int param_1)

{
  undefined4 *this;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar7;
  int extraout_EDX;
  undefined4 *this_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  undefined8 uVar13;
  int local_78 [4];
  undefined4 local_68;
  uint local_60;
  int *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48 [5];
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  uint local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  
  iVar10 = param_1 * 0x228;
  this_00 = (undefined4 *)(&DAT_100ba920 + iVar10);
  local_28 = this_00;
  thunk_FUN_100ad48c((LPVOID)*this_00);
  *this_00 = 0;
  *(undefined4 *)(&DAT_100ba924 + iVar10) = 0;
  *(undefined4 *)(&DAT_100ba928 + iVar10) = 0;
  thunk_FUN_100ad48c(*(LPVOID *)(&DAT_100ba92c + iVar10));
  *(undefined4 *)(&DAT_100ba92c + iVar10) = 0;
  *(undefined4 *)(&DAT_100ba930 + iVar10) = 0;
  *(undefined4 *)(&DAT_100ba934 + iVar10) = 0;
  local_24 = (**(code **)(*DAT_100ba2b0 + 0x50))
                       ((&DAT_100ba730)[param_1 * 0x8a],(&DAT_100ba734)[param_1 * 0x8a],
                        *(undefined4 *)(DAT_100ba2b4 + 0x77c));
  if (local_24 != 0) {
    local_30 = (int *)0x1;
    local_1c = *(int **)(DAT_100ba2b4 + 0x943);
    if (local_1c != (int *)0x0) {
      uVar8 = 0;
      if (local_24 != 0) {
        do {
          (**(code **)(*DAT_100ba2b0 + 0x54))
                    (local_78,(&DAT_100ba730)[param_1 * 0x8a],(&DAT_100ba734)[param_1 * 0x8a],
                     *(undefined4 *)(DAT_100ba2b4 + 0x77c),uVar8);
          if (((local_78[0] != 0) && (local_78[1] != 0)) &&
             (uVar1 = FUN_10023d25(this_00,local_78), (char)uVar1 == '\0')) {
            thunk_FUN_100ad48c((LPVOID)*this_00);
            *this_00 = 0;
            *(undefined4 *)(&DAT_100ba924 + iVar10) = 0;
            *(undefined4 *)(&DAT_100ba928 + iVar10) = 0;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_24);
      }
      iVar9 = 0;
      if (*(int *)(&DAT_100ba924 + iVar10) != 0) {
        if (local_1c == (int *)0x1) {
          thunk_FUN_100ad48c((LPVOID)*this_00);
          *this_00 = 0;
          iVar9 = 0;
          *(undefined4 *)(&DAT_100ba924 + iVar10) = 0;
          *(undefined4 *)(&DAT_100ba928 + iVar10) = 0;
          do {
            local_60 = (uint)(ushort)(&DAT_100b1ce4)[iVar9 * 2];
            local_5c = (int *)(uint)(ushort)(&DAT_100b1ce6)[iVar9 * 2];
            local_58 = 0x3c;
            local_50 = 0x3c;
            local_54 = 1;
            local_4c = 0;
            FUN_10023d25(this_00,&local_60);
            iVar9 = iVar9 + 1;
          } while ((&DAT_100b1ce4)[iVar9 * 2] != 0);
        }
        else {
          do {
            uVar4 = 0;
            uVar8 = 0;
            if (*(int *)(&DAT_100ba924 + iVar10) != 0) {
              do {
                local_24 = uVar4 * 0x18;
                uVar8 = *(uint *)(&DAT_100ba924 + iVar10);
                if ((*(uint *)(*(int *)(&DAT_100ba920 + iVar10) + local_24) ==
                     (uint)(ushort)(&DAT_100b1ce4)[iVar9 * 2]) &&
                   (uVar8 = *(uint *)(&DAT_100ba924 + iVar10),
                   *(uint *)(*(int *)(&DAT_100ba920 + iVar10) + 4 + local_24) ==
                   (uint)(ushort)(&DAT_100b1ce6)[iVar9 * 2])) goto LAB_10022cc7;
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar8);
            }
            if ((uVar4 == uVar8) && (uVar4 = 0, uVar8 != 0)) {
              local_14 = (uint)(ushort)(&DAT_100b1ce4)[iVar9 * 2];
              local_18 = *(uint *)(&DAT_100ba920 + iVar10);
              do {
                local_1c = (int *)(uVar4 * 0x18);
                if ((local_14 < *(uint *)(*(int *)(&DAT_100ba920 + iVar10) + (int)local_1c)) ||
                   ((*(uint *)(local_18 + (int)local_1c) == local_14 &&
                    ((uint)(ushort)(&DAT_100b1ce6)[iVar9 * 2] <
                     *(uint *)(local_18 + 4 + (int)local_1c))))) {
                  local_5c = (int *)(uint)(ushort)(&DAT_100b1ce6)[iVar9 * 2];
                  local_58 = 0x3c;
                  local_50 = 0x3c;
                  local_54 = 1;
                  local_4c = 0;
                  local_60 = local_14;
                  FUN_10023db7(&DAT_100ba920 + iVar10,uVar4,&local_60);
                  break;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < *(uint *)(&DAT_100ba924 + iVar10));
            }
LAB_10022cc7:
            iVar9 = iVar9 + 1;
          } while ((&DAT_100b1ce4)[iVar9 * 2] != 0);
        }
      }
    }
    uVar8 = *(uint *)(&DAT_100ba884 + iVar10);
    local_34 = *(undefined4 *)(&DAT_100ba888 + iVar10);
    local_24 = 0;
    local_48[4] = uVar8;
    local_2c = local_34;
    local_c = uVar8;
    do {
      local_1c = (int *)(local_24 * 0xc);
      local_14 = *(uint *)((int)local_1c + DAT_100ba2b4 + 0x86f);
      if (local_14 != 0) {
        local_10 = *(int **)((int)local_1c + DAT_100ba2b4 + 0x873);
        if (local_10 != (int *)0x0) {
          uVar13 = CONCAT44(local_10,local_1c);
          if (local_14 == 0xffffffff) {
            if (local_10 == (int *)0xffffffff) {
              uVar13 = CONCAT44(local_2c,local_1c);
            }
            else {
              if (local_10 == (int *)0x100) {
                local_48[2] = 4;
                puVar5 = local_48 + 2;
                local_48[3] = 3;
              }
              else {
                uVar13 = CONCAT44(local_10,local_1c);
                if (local_10 != (int *)0x101) goto LAB_10022d7c;
                local_48[0] = 0x10;
                puVar5 = local_48;
                local_48[1] = 9;
              }
              uVar13 = FUN_100a9be0(puVar5,local_48 + 4,'\0');
              uVar8 = (uint)uVar13;
            }
            local_10 = (int *)((ulonglong)uVar13 >> 0x20);
            local_14 = uVar8;
          }
LAB_10022d7c:
          piVar7 = (int *)((ulonglong)uVar13 >> 0x20);
          local_18 = 0;
          uVar4 = 0;
          uVar8 = local_c;
          if (*(int *)(&DAT_100ba924 + iVar10) != 0) {
            do {
              local_20 = local_18 * 0x18;
              uVar4 = *(uint *)(&DAT_100ba924 + iVar10);
              if (((*(uint *)(*(int *)(&DAT_100ba920 + iVar10) + local_20) == local_14) &&
                  (uVar4 = *(uint *)(&DAT_100ba924 + iVar10),
                  *(int **)(*(int *)(&DAT_100ba920 + iVar10) + 4 + local_20) == piVar7)) &&
                 ((*(int *)((int)local_1c + DAT_100ba2b4 + 0x877) == 0 ||
                  (uVar4 = *(uint *)(&DAT_100ba924 + iVar10), piVar7 = local_10,
                  *(int *)((int)local_1c + DAT_100ba2b4 + 0x877) ==
                  *(int *)(*(int *)(&DAT_100ba920 + iVar10) + 0x10 + local_20)))))
              goto LAB_10022eca;
              local_18 = local_18 + 1;
            } while (local_18 < uVar4);
          }
          if (local_18 == uVar4) {
            uVar2 = 0;
            bVar12 = uVar4 == 0;
            do {
              if (bVar12) {
LAB_10022e7f:
                local_54 = 1;
                local_50 = *(uint *)((int)local_1c + DAT_100ba2b4 + 0x877);
                local_4c = 0;
                if (local_50 == 0) {
                  local_50 = 0x3c;
                }
                local_60 = local_14;
                local_5c = piVar7;
                local_58 = local_50;
                FUN_10023db7(&DAT_100ba920 + iVar10,uVar2,&local_60);
                uVar8 = local_c;
                break;
              }
              local_18 = *(uint *)(&DAT_100ba920 + iVar10);
              local_20 = uVar2 * 0x18;
              if ((local_14 < *(uint *)(local_18 + local_20)) ||
                 ((*(uint *)(local_18 + local_20) == local_14 &&
                  (piVar7 < *(int **)(local_18 + 4 + local_20))))) goto LAB_10022e7f;
              uVar2 = uVar2 + 1;
              bVar12 = uVar2 == *(uint *)(&DAT_100ba924 + iVar10);
            } while (uVar2 <= *(uint *)(&DAT_100ba924 + iVar10));
          }
        }
      }
LAB_10022eca:
      local_24 = local_24 + 1;
    } while (local_24 < 0x10);
    if (*(int *)(&DAT_100ba924 + iVar10) != 0) {
      local_18 = 0;
      do {
        local_14 = *(uint *)(&DAT_100ba924 + iVar10);
        iVar9 = *(int *)(&DAT_100ba920 + iVar10);
        local_10 = (int *)((uint)local_10 & 0xffffff00);
        local_24 = *(uint *)(iVar9 + -0x18 + local_14 * 0x18);
        local_20 = *(int *)(iVar9 + -0x14 + local_14 * 0x18);
        local_c = 0xffffffff;
        uVar8 = local_18;
        if (local_14 != 0) {
          piVar7 = (int *)(&DAT_100b1c90)[local_18];
          do {
            local_1c = (int *)(local_14 * 0x18);
            if ((local_24 != *(uint *)(iVar9 + -0x18 + (int)local_1c)) ||
               (uVar8 = local_18, local_20 != *(int *)(iVar9 + -0x14 + (int)local_1c))) {
              if (((char)local_10 == '\0') && (local_c != 0xffffffff)) {
                piVar7 = (int *)(local_c * 0x18 + -0x18 + iVar9);
                piVar11 = local_78;
                for (iVar6 = 6; uVar8 = local_18, iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar11 = *piVar7;
                  piVar7 = piVar7 + 1;
                  piVar11 = piVar11 + 1;
                }
                local_68 = (&DAT_100b1c90)[local_18];
                FUN_10023db7(&DAT_100ba920 + iVar10,local_c,local_78);
                piVar7 = (int *)(&DAT_100b1c90)[uVar8];
              }
              iVar9 = *(int *)(&DAT_100ba920 + iVar10);
              local_10 = (int *)((uint)local_10 & 0xffffff00);
              local_24 = *(uint *)(iVar9 + -0x18 + (int)local_1c);
              local_20 = *(int *)(iVar9 + -0x14 + (int)local_1c);
              local_c = 0xffffffff;
            }
            local_1c = *(int **)(iVar9 + -8 + (int)local_1c);
            if (local_1c == (int *)((int)piVar7 + -1)) {
              local_c = local_14;
            }
            else {
              local_10 = (int *)((uint)local_10 & 0xff);
              if (local_1c == piVar7) {
                local_10 = local_30;
              }
            }
            local_14 = local_14 - 1;
          } while (local_14 != 0);
          if (((char)local_10 == '\0') && (local_c != 0xffffffff)) {
            local_14 = 0;
            piVar7 = (int *)(local_c * 0x18 + iVar9);
            piVar11 = local_78;
            for (iVar6 = 6; uVar8 = local_18, iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar11 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar11 = piVar11 + 1;
            }
            local_68 = (&DAT_100b1c90)[local_18];
            FUN_10023db7(&DAT_100ba920 + iVar10,local_c,local_78);
          }
        }
        local_18 = uVar8 + 1;
      } while ((&DAT_100b1c90)[local_18] != 0);
    }
    local_14 = 0;
    while (uVar8 = local_14, this_00 = local_28, local_14 < *(uint *)(&DAT_100ba924 + iVar10)) {
      local_18 = 0;
      uVar4 = 0;
      if (*(int *)(&DAT_100ba930 + iVar10) == 0) {
LAB_100230e9:
        bVar12 = uVar4 == *(uint *)(&DAT_100ba930 + iVar10);
      }
      else {
        local_1c = (int *)(local_14 * 0x18 + *(int *)(&DAT_100ba920 + iVar10));
        do {
          uVar4 = local_18;
          local_30 = (int *)(*(int *)(&DAT_100ba92c + iVar10) + local_18 * 0x18);
          if ((*local_30 == *local_1c) && (local_30[1] == local_1c[1])) {
            if ((local_1c[4] != 0) && (iVar9 = FUN_10022a31(), (char)iVar9 == '\0')) {
              uVar8 = *(uint *)(&DAT_100ba894 + iVar10);
              uVar2 = *(int *)(extraout_ECX + 0x10) - uVar8;
              if (*(uint *)(extraout_ECX + 0x10) <= uVar8) {
                uVar2 = uVar8 - *(int *)(extraout_ECX + 0x10);
              }
              uVar3 = local_1c[4] - uVar8;
              if ((uint)local_1c[4] <= uVar8) {
                uVar3 = uVar8 - local_1c[4];
              }
              uVar8 = local_14;
              uVar4 = local_18;
              if (uVar3 < uVar2) {
                piVar7 = local_1c;
                piVar11 = local_30;
                for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *piVar11 = *piVar7;
                  piVar7 = piVar7 + 1;
                  piVar11 = piVar11 + 1;
                }
              }
            }
            goto LAB_100230e9;
          }
          local_18 = local_18 + 1;
          bVar12 = local_18 == *(uint *)(&DAT_100ba930 + iVar10);
        } while (local_18 < *(uint *)(&DAT_100ba930 + iVar10));
      }
      if (bVar12) {
        local_4c = 0;
        local_60 = *(uint *)(*(int *)(&DAT_100ba920 + iVar10) + uVar8 * 0x18);
        local_5c = *(int **)(*(int *)(&DAT_100ba920 + iVar10) + 4 + uVar8 * 0x18);
        iVar9 = FUN_10022a31();
        if ((char)iVar9 == '\0') {
          local_58 = *(uint *)(extraout_EDX + 8 + extraout_ECX_00);
          local_54 = *(uint *)(extraout_EDX + 0xc + extraout_ECX_00);
          local_50 = *(uint *)(extraout_EDX + 0x10 + extraout_ECX_00);
        }
        else {
          local_58 = *(uint *)(DAT_100ba2b4 + 0x7d4);
          local_54 = *(uint *)(DAT_100ba2b4 + 0x7d8);
          if (local_54 == 0) {
            local_50 = 0;
          }
          else {
            local_50 = local_58 / local_54;
          }
        }
        this = (undefined4 *)(&DAT_100ba92c + iVar10);
        uVar1 = FUN_10023d25(this,&local_60);
        this_00 = local_28;
        if ((char)uVar1 == '\0') {
          thunk_FUN_100ad48c((LPVOID)*local_28);
          *this_00 = 0;
          this_00[1] = 0;
          this_00[2] = 0;
          thunk_FUN_100ad48c((LPVOID)*this);
          *this = 0;
          *(undefined4 *)(&DAT_100ba930 + iVar10) = 0;
          *(undefined4 *)(&DAT_100ba934 + iVar10) = 0;
          break;
        }
      }
      local_14 = uVar8 + 1;
    }
  }
  return this_00[1] != 0;
}

