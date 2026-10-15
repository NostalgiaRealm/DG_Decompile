/*
 * FUN_18005ecf8 at 18005ecf8
 * longlong * __cdecl FUN_18005ecf8(longlong param_1, undefined8 * param_2, int param_3, int * param_4)
 * Address ranges: 18005ecf8-18005f0d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18005ecf8(longlong param_1,undefined8 *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 extraout_x0;
  ulonglong uVar18;
  ulonglong *puVar19;
  uint uVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  int iVar28;
  undefined8 uVar27;
  int local_f0;
  int local_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_d0;
  undefined8 local_c0;
  longlong lStack_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  uVar18 = FUN_18005ea88(extraout_x0,param_4);
  local_80 = uVar18;
  puVar19 = FUN_18005f0d8(param_1 + 0x48,&local_80);
  plVar26 = (longlong *)0x0;
  if (puVar19 != (ulonglong *)0x0) {
    uStack_d8 = param_2[1];
    local_e0 = *param_2;
    iVar2 = *(int *)(param_2 + 2);
    iVar28 = (int)((ulonglong)uStack_d8 >> 0x20);
    lStack_b8 = *(longlong *)(param_4 + 2);
    local_c0 = *(undefined8 *)param_4;
    uVar27 = *(undefined8 *)(param_4 + 6);
    local_b0 = *(longlong *)(param_4 + 4);
    uStack_98 = *(undefined8 *)(param_4 + 10);
    local_a0 = *(undefined8 *)(param_4 + 8);
    if (iVar28 == 0) {
      iVar28 = 1;
    }
    local_90 = *(undefined8 *)(param_4 + 0xc);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    lVar1 = 0x10000;
    if (lStack_b8 != 0) {
      lVar1 = lStack_b8;
    }
    plVar21 = (longlong *)*puVar19;
    local_a8 = uVar27;
    if ((int)plVar21[1] != 0) {
      iVar15 = (int)uStack_98;
      uStack_98._4_4_ = (int)((ulonglong)uStack_98 >> 0x20);
      iVar16 = uStack_98._4_4_;
      uVar24 = 0;
      local_58 = (longlong *)0x0;
      iVar13 = (int)local_a0;
      local_a0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
      iVar14 = local_a0._4_4_;
      iVar8 = (int)uStack_d8;
      iVar6 = (int)local_e0;
      local_e0._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
      iVar7 = local_e0._4_4_;
      iVar17 = (int)local_90;
      local_a8._6_2_ = (short)((ulonglong)uVar27 >> 0x30);
      sVar12 = local_a8._6_2_;
      local_a8._4_2_ = (short)((ulonglong)uVar27 >> 0x20);
      sVar11 = local_a8._4_2_;
      local_a8._0_4_ = (int)uVar27;
      iVar10 = (int)local_a8;
      iVar9 = (int)local_c0;
      local_ec = param_3;
      local_78 = param_1;
      local_70 = lVar1;
      local_68 = local_b0;
      local_60 = uVar18;
      do {
        plVar26 = *(longlong **)(*plVar21 + uVar24 * 0x10);
        (**(code **)(*plVar26 + 0x50))(plVar26,&local_c0);
        (**(code **)(*plVar26 + 0x70))(plVar26,&local_e0,&local_f0);
        uVar18 = local_60;
        param_1 = local_78;
        uVar23 = (uint)uVar24;
        if ((((((((int)local_e0 == iVar6) && (local_e0._4_4_ == iVar7)) && ((int)uStack_d8 == iVar8)
               ) && ((uStack_d8._4_4_ == iVar28 && (local_d0 == iVar2)))) &&
             (((int)local_c0 == iVar9 && ((lStack_b8 == local_70 && (local_b0 == local_68)))))) &&
            ((int)local_a8 == iVar10)) &&
           ((((local_a8._4_2_ == sVar11 && (local_a8._6_2_ == sVar12)) && ((int)local_a0 == iVar13))
            && (((local_a0._4_4_ == iVar14 && ((int)uStack_98 == iVar15)) &&
                ((uStack_98._4_4_ == iVar16 &&
                 (((int)local_90 == iVar17 && (local_f0 == local_ec || local_ec == 0)))))))))) {
          uVar22 = *(uint *)(uVar24 * 0x10 + *(longlong *)*puVar19 + 8);
          if (uVar22 == *(uint *)(local_78 + 0x70)) {
            FUN_180062dd8((longlong *)(local_78 + 0x60));
          }
          else {
            lVar4 = (ulonglong)uVar22 * 0x10;
            uVar20 = *(uint *)(local_78 + 0x74);
            *(undefined8 *)(*(longlong *)(local_78 + 0x60) + lVar4) = 0;
            lVar1 = lVar4 + *(longlong *)(local_78 + 0x60);
            uVar3 = *(uint *)(lVar1 + 8);
            if (uVar22 == uVar20) {
              *(uint *)(local_78 + 0x74) = uVar3;
            }
            else {
              *(undefined4 *)(*(longlong *)(local_78 + 0x60) + (ulonglong)uVar3 * 0x10 + 0xc) =
                   *(undefined4 *)(lVar1 + 0xc);
              lVar1 = lVar4 + *(longlong *)(local_78 + 0x60);
              *(undefined4 *)
               (*(longlong *)(local_78 + 0x60) + (ulonglong)*(uint *)(lVar1 + 0xc) * 0x10 + 8) =
                   *(undefined4 *)(lVar1 + 8);
              *(undefined4 *)(lVar4 + *(longlong *)(local_78 + 0x60) + 0xc) =
                   *(undefined4 *)
                    (*(longlong *)(local_78 + 0x60) + (ulonglong)*(uint *)(local_78 + 0x74) * 0x10 +
                    0xc);
              *(undefined4 *)(lVar4 + *(longlong *)(local_78 + 0x60) + 8) =
                   *(undefined4 *)(local_78 + 0x74);
              *(uint *)(*(longlong *)(local_78 + 0x60) +
                        (ulonglong)*(uint *)(local_78 + 0x74) * 0x10 + 0xc) = uVar22;
              uVar20 = *(uint *)(lVar4 + *(longlong *)(local_78 + 0x60) + 0xc);
              if (uVar20 != 0xffffffff) {
                *(uint *)(*(longlong *)(local_78 + 0x60) + (ulonglong)uVar20 * 0x10 + 8) = uVar22;
              }
            }
          }
          plVar21 = (longlong *)*puVar19;
          uVar22 = *(uint *)(plVar21 + 1);
          if (uVar23 < uVar22) {
            while (uVar20 = uVar23 + 1, uVar20 < uVar22) {
              puVar25 = (undefined8 *)(*plVar21 + (ulonglong)uVar20 * 0x10);
              uVar27 = *puVar25;
              puVar5 = (undefined8 *)(*plVar21 + (ulonglong)uVar23 * 0x10);
              puVar5[1] = puVar25[1];
              *puVar5 = uVar27;
              uVar23 = uVar20;
              uVar22 = *(uint *)(plVar21 + 1);
            }
            *(uint *)(plVar21 + 1) = uVar22 - 1;
          }
          *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) - uVar18;
          puVar25 = (undefined8 *)*puVar19;
          if (*(int *)(puVar25 + 1) == 0) {
            if (puVar25 != (undefined8 *)0x0) {
              thunk_FUN_180063700((LPVOID)*puVar25);
              FUN_180063700(puVar25);
            }
            FUN_18005f158(param_1 + 0x48,&local_80);
          }
          break;
        }
        plVar21 = (longlong *)*puVar19;
        uVar24 = (ulonglong)(uVar23 + 1);
        plVar26 = local_58;
      } while (uVar23 + 1 < *(uint *)(plVar21 + 1));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return plVar26;
}

