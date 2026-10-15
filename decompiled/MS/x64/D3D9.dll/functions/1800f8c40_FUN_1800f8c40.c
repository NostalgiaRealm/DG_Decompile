/*
 * FUN_1800f8c40 at 1800f8c40
 * undefined __fastcall FUN_1800f8c40(longlong param_1, HWND param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800f8c40-1800f8f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f8c40(longlong param_1,HWND param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  HWND pHVar4;
  longlong *plVar5;
  undefined8 uVar6;
  LONG_PTR LVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong local_b0;
  uint local_a8;
  HWND local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    pHVar4 = GetActiveWindow();
    *(bool *)(param_1 + 0xa0c) = pHVar4 != (HWND)0x0;
  }
  lVar10 = param_1;
  pHVar4 = param_2;
  plVar5 = FUN_1800f91e4(param_1,(longlong)param_2);
  if ((plVar5 != (longlong *)0x0) && (plVar5[4] != 0)) {
    FUN_1800f8bfc(lVar10,pHVar4,plVar5[4]);
  }
  FUN_1800fbea0((undefined1 *)&local_98,0,0x60);
  uVar9 = DAT_18010e030;
  local_98 = param_2;
  local_b0 = ~*(ulonglong *)(param_1 + 0x150);
  uStack_90 = 0;
  local_88 = param_4;
  uVar8 = 0;
  if (local_b0 != 0) {
    for (; (local_b0 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  local_a8 = 0;
  uStack_60 = 0xffffffff;
  uVar14 = 0;
  if (local_b0 == 0) {
    do {
      local_a8 = uVar14 + 0x40;
      if (0x3f < local_a8) goto LAB_1800f8d2b;
      local_b0 = ~(-(ulonglong)(-uVar14 < 0x40) | ((ulonglong *)(param_1 + 0x150))[local_a8 >> 6]);
      uVar8 = 0;
      if (local_b0 != 0) {
        for (; (local_b0 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      uVar14 = local_a8;
    } while (local_b0 == 0);
  }
  pbVar3 = (byte *)((longlong)&local_b0 + ((longlong)(uVar8 & 0xffffffff) >> 3));
  *pbVar3 = *pbVar3 & ~('\x01' << (uVar8 & 7));
  uStack_60 = local_a8 + (int)uVar8;
LAB_1800f8d2b:
  uVar14 = uStack_60 * DAT_18010e030;
  pbVar3 = (byte *)(param_1 + 0x150 + (ulonglong)(uStack_60 >> 6) * 8 +
                   ((longlong)(ulonglong)(uStack_60 & 0x3f) >> 3));
  *pbVar3 = *pbVar3 | '\x01' << ((ulonglong)(uStack_60 & 0x3f) & 7);
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  puVar13 = (undefined8 *)((ulonglong)uVar14 + *(longlong *)(param_1 + 0x110));
  FUN_1800fbec0(puVar13,(undefined8 *)PTR_LAB_18010e028,(ulonglong)uVar9);
  *(undefined8 *)((ulonglong)DAT_18010e038 + (longlong)puVar13) = uVar6;
  *(code **)((ulonglong)DAT_18010e034 + (longlong)puVar13) = FUN_1800f9214;
  *(undefined8 *)((ulonglong)DAT_18010e03c + (longlong)puVar13) = 0;
  local_78 = FUN_1800f8bfc(FUN_1800f9214,param_2,(LONG_PTR)puVar13);
  puStack_70 = puVar13;
  pHVar4 = GetActiveWindow();
  iVar2 = *(int *)(param_1 + 0x13c);
  uStack_54._0_2_ = CONCAT11(pHVar4 == param_2,(undefined1)uStack_54);
  if (*(int *)(param_1 + 0x138) == iVar2) {
    if (iVar2 == 0) {
      uVar9 = 0x10;
    }
    else {
      uVar9 = iVar2 * 2;
    }
    uVar6 = SUB168(ZEXT816(0x60) * ZEXT416(uVar9),0);
    if (SUB168(ZEXT816(0x60) * ZEXT416(uVar9),8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    puVar13 = (undefined8 *)thunk_FUN_1800fbccc(uVar6);
    if (puVar13 == (undefined8 *)0x0) goto LAB_1800f8e84;
    FUN_1800fbec0(puVar13,*(undefined8 **)(param_1 + 0x130),
                  (ulonglong)*(uint *)(param_1 + 0x13c) * 0x60);
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x130));
    *(undefined8 **)(param_1 + 0x130) = puVar13;
    *(uint *)(param_1 + 0x13c) = uVar9;
  }
  lVar10 = *(longlong *)(param_1 + 0x130);
  lVar11 = (ulonglong)*(uint *)(param_1 + 0x138) * 0x60;
  *(undefined8 *)(lVar11 + lVar10) = local_98;
  ((undefined8 *)(lVar11 + lVar10))[1] = uStack_90;
  puVar13 = (undefined8 *)(lVar11 + 0x10 + lVar10);
  *puVar13 = local_88;
  puVar13[1] = uStack_80;
  puVar13 = (undefined8 *)(lVar11 + 0x20 + lVar10);
  *puVar13 = local_78;
  puVar13[1] = puStack_70;
  puVar13 = (undefined8 *)(lVar11 + 0x30 + lVar10);
  *puVar13 = local_68;
  puVar13[1] = CONCAT44(uStack_5c,uStack_60);
  puVar1 = (undefined4 *)(lVar11 + 0x40 + lVar10);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar13 = (undefined8 *)(lVar11 + 0x50 + lVar10);
  *puVar13 = local_48;
  puVar13[1] = uStack_40;
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
LAB_1800f8e84:
  if (*(uint *)(param_1 + 0x148) != 0) {
    uVar8 = 0;
    do {
      if (*(HWND *)(*(longlong *)(param_1 + 0x140) + uVar8 * 0x18) == param_2) {
        uVar9 = *(uint *)(*(longlong *)(param_1 + 0x140) + 0x10 + uVar8 * 0x18);
        if (uVar9 != 0xffffffff) {
          if (*(char *)(*(longlong *)(param_1 + 0x140) + 0x14 + (ulonglong)uVar9 * 0x18) == '\0') {
            LVar7 = GetWindowLongPtrA(param_2,-4);
            uVar6 = *(undefined8 *)(param_1 + 0xf8);
          }
          else {
            LVar7 = GetWindowLongPtrW(param_2,-4);
            uVar6 = *(undefined8 *)(param_1 + 0x100);
          }
          puVar13 = (undefined8 *)
                    ((ulonglong)(uVar9 * DAT_18010e018) + *(longlong *)(param_1 + 0x108));
          FUN_1800fbec0(puVar13,(undefined8 *)PTR_LAB_18010e010,(ulonglong)DAT_18010e018);
          uVar12 = (ulonglong)DAT_18010e01c;
          uVar8 = (ulonglong)DAT_18010e020;
          *(LONG_PTR *)(uVar12 + (longlong)puVar13) = LVar7;
          *(undefined8 *)(uVar8 + (longlong)puVar13) = uVar6;
          FUN_1800f8bfc(uVar12,param_2,(LONG_PTR)puVar13);
        }
        break;
      }
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(param_1 + 0x148));
  }
  SetTimer(param_2,0xaaaa,2000,(TIMERPROC)0x0);
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  return;
}

