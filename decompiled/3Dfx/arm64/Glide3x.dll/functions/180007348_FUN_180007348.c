/*
 * FUN_180007348 at 180007348
 * undefined __cdecl FUN_180007348(longlong param_1, HWND param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180007348-180007703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007348(longlong param_1,HWND param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  HWND pHVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  LONG_PTR LVar9;
  HWND extraout_x1;
  uint uVar10;
  ulonglong uVar11;
  SIZE_T SVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong local_a8;
  uint local_a0;
  HWND local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    pHVar4 = GetActiveWindow();
    *(bool *)(param_1 + 0xa0c) = pHVar4 != (HWND)0x0;
  }
  lVar5 = FUN_180007a00(param_1,(longlong)param_2);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x20) != 0)) {
    FUN_1800072f0(lVar5,extraout_x1,*(longlong *)(lVar5 + 0x20));
  }
  local_a0 = 0;
  uStack_78 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_a8 = ~*(ulonglong *)(param_1 + 0x150);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar11 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
  local_90 = param_2;
  uStack_88 = param_3;
  local_80 = param_4;
  uVar10 = (uint)uVar11;
  uVar2 = local_a0;
  while ((1 - (uVar10 >> 6) & 0xff) == 0) {
    local_a0 = uVar2 + 0x40;
    if (0x3f < local_a0) {
      uVar11 = 0xffffffff;
      goto LAB_18000746c;
    }
    uVar11 = 0;
    if (-uVar2 < 0x40) {
      uVar11 = 0xffffffffffffffff;
    }
    local_a8 = ~(((ulonglong *)(param_1 + 0x150))[local_a0 >> 6] | uVar11);
    uVar11 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
    uVar2 = local_a0;
    uVar10 = (uint)uVar11;
  }
  local_a0 = uVar2;
  *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) =
       *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) & ((byte)(1 << (uVar11 & 7)) ^ 0xff);
  uVar11 = (ulonglong)(local_a0 + (int)uVar11);
LAB_18000746c:
  local_58 = CONCAT44(local_58._4_4_,(int)uVar11);
  lVar5 = param_1 + ((uVar11 >> 6) + 0x2a) * 8;
  uVar13 = uVar11 >> 3 & 7;
  *(byte *)(lVar5 + uVar13) = *(byte *)(lVar5 + uVar13) | (byte)(1 << (uVar11 & 7));
  uVar14 = *(undefined8 *)(param_1 + 0x100);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + (ulonglong)(uint)((int)uVar11 * 0x70));
  puVar6 = (undefined8 *)FUN_1800010b8();
  uVar7 = thunk_FUN_1800010d8(puVar8,puVar6,0x70);
  puVar8[0xc] = uVar14;
  puVar8[0xb] = FUN_180007a38;
  puVar8[0xd] = 0;
  local_70 = FUN_1800072f0(uVar7,param_2,puVar8);
  puStack_68 = puVar8;
  pHVar4 = GetActiveWindow();
  local_50._0_6_ = CONCAT15(pHVar4 == param_2,(undefined5)local_50);
  iVar1 = *(int *)(param_1 + 0x13c);
  if (*(int *)(param_1 + 0x138) == iVar1) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    SVar12 = CONCAT44(0,uVar2) * 0x60;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar2);
    if (SUB168(auVar3 * ZEXT816(0x60),8) != 0) {
      SVar12 = 0xffffffffffffffff;
    }
    puVar8 = (undefined8 *)thunk_FUN_1800636c0(SVar12);
    if (puVar8 == (undefined8 *)0x0) goto LAB_1800075ac;
    thunk_FUN_1800010d8(puVar8,*(undefined8 **)(param_1 + 0x130),
                        (ulonglong)*(uint *)(param_1 + 0x13c) * 0x60);
    thunk_FUN_180063700(*(LPVOID *)(param_1 + 0x130));
    *(undefined8 **)(param_1 + 0x130) = puVar8;
    *(uint *)(param_1 + 0x13c) = uVar2;
  }
  puVar8 = (undefined8 *)
           (*(longlong *)(param_1 + 0x130) + (ulonglong)*(uint *)(param_1 + 0x138) * 0x60);
  puVar8[1] = uStack_88;
  *puVar8 = local_90;
  puVar8[3] = uStack_78;
  puVar8[2] = local_80;
  puVar8[5] = puStack_68;
  puVar8[4] = local_70;
  puVar8[7] = local_58;
  puVar8[6] = uStack_60;
  puVar8[9] = uStack_48;
  puVar8[8] = local_50;
  puVar8[0xb] = uStack_38;
  puVar8[10] = uStack_40;
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
LAB_1800075ac:
  if (*(uint *)(param_1 + 0x148) != 0) {
    uVar11 = 0;
    do {
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x140) + uVar11 * 0x18);
      if ((HWND)*puVar8 == param_2) {
        uVar2 = *(uint *)(puVar8 + 2);
        if (uVar2 != 0xffffffff) {
          if (*(char *)(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar2 * 0x18 + 0x14) == '\0') {
            LVar9 = GetWindowLongPtrA(param_2,-4);
            uVar14 = *(undefined8 *)(param_1 + 0xf8);
            puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(uVar2 * 0x2c));
            puVar6 = (undefined8 *)FUN_18000102c();
            uVar7 = thunk_FUN_1800010d8(puVar8,puVar6,0x2c);
            *(LONG_PTR *)((longlong)puVar8 + 0x1c) = LVar9;
            *(undefined8 *)((longlong)puVar8 + 0x24) = uVar14;
          }
          else {
            LVar9 = GetWindowLongPtrW(param_2,-4);
            uVar14 = *(undefined8 *)(param_1 + 0x100);
            puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(uVar2 * 0x2c));
            puVar6 = (undefined8 *)FUN_18000102c();
            uVar7 = thunk_FUN_1800010d8(puVar8,puVar6,0x2c);
            *(LONG_PTR *)((longlong)puVar8 + 0x1c) = LVar9;
            *(undefined8 *)((longlong)puVar8 + 0x24) = uVar14;
          }
          FUN_1800072f0(uVar7,param_2,puVar8);
        }
        break;
      }
      uVar2 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x148));
  }
  SetTimer(param_2,0xaaaa,2000,(TIMERPROC)0x0);
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  return;
}

