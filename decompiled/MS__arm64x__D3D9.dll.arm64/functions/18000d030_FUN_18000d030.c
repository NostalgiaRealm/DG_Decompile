/*
 * FUN_18000d030 at 18000d030
 * undefined FUN_18000d030(void)
 * Address ranges: 18000d030-18000d487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d030(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_150 [16];
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  uint local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  int iStack_ec;
  int local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 auStack_b8 [4];
  uint local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  longlong local_a0;
  undefined1 auStack_98 [4];
  int local_94;
  int iStack_90;
  undefined1 auStack_78 [12];
  int local_6c;
  longlong local_60;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    if (param_2 == 0) {
      local_130 = 0;
      local_128 = 0;
      local_120 = 1;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x100) + 0x58))
                (*(longlong **)(param_1 + 0x100),&local_130);
    }
    else {
      bVar5 = false;
      bVar2 = false;
      iVar7 = (*__imp_USER32_dll_GetIconInfo)(param_2,auStack_150);
      if (iVar7 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = local_138;
        if (local_138 == 0) {
          lVar9 = local_140;
        }
        (*__imp_GDI32_dll_GetObjectW)(lVar9,0x20,auStack_98);
        iVar7 = iStack_90;
        if (local_138 == 0) {
          iVar7 = iStack_90 >> 1;
        }
        iStack_ec = local_94 << 1;
        local_dc = 0;
        local_d4 = 0;
        local_f0 = 0x28;
        local_e8 = -iVar7;
        local_e4 = 0x200001;
        local_cc = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_f8 = 0;
        lVar9 = (*__imp_GDI32_dll_CreateDIBSection)(0,&local_f0,0,&local_f8,0,0);
        bVar2 = bVar5;
        if (((lVar9 != 0) &&
            (iVar8 = (*__imp_GDI32_dll_GetObjectW)(lVar9,0x20,auStack_78), iVar8 != 0)) &&
           (lVar10 = (*__imp_GDI32_dll_CreateCompatibleDC)(0), lVar10 != 0)) {
          uVar11 = (*__imp_GDI32_dll_SelectObject)(lVar10,lVar9);
          lVar9 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
          if (lVar9 != 0) {
            bVar2 = local_138 == 0;
            if (bVar2) {
              uVar12 = (*__imp_GDI32_dll_SelectObject)(lVar9,local_140);
              (*__imp_GDI32_dll_BitBlt)(lVar10,0,0,local_94,iVar7,lVar9,0,iVar7,0xcc0020);
            }
            else {
              uVar12 = (*__imp_GDI32_dll_SelectObject)();
              (*__imp_GDI32_dll_BitBlt)(lVar10,0,0,local_94,iVar7,lVar9,0,0,0xcc0020);
            }
            (*__imp_GDI32_dll_SelectObject)(lVar9,uVar12);
            uVar12 = (*__imp_GDI32_dll_SelectObject)(lVar9,local_140);
            (*__imp_GDI32_dll_BitBlt)(lVar10,local_94,0,local_94,iVar7,lVar9,0,0,0xcc0020);
            (*__imp_GDI32_dll_SelectObject)(lVar9,uVar12);
            if ((!bVar2) && (lVar13 = local_60 + (local_94 << 2), 0 < iVar7)) {
              do {
                uVar14 = 0;
                if (0 < local_94) {
                  do {
                    if (*(int *)(lVar13 + uVar14 * 4) == 0) {
                      *(undefined1 *)(local_60 + ((int)uVar14 << 2) + 3) = 0xff;
                    }
                    uVar1 = (int)uVar14 + 1;
                    uVar14 = (ulonglong)uVar1;
                  } while ((int)uVar1 < local_94);
                }
                lVar13 = lVar13 + local_6c;
                iVar7 = iVar7 + -1;
                local_60 = local_60 + local_6c;
              } while (iVar7 != 0);
            }
            (*__imp_GDI32_dll_DeleteDC)(lVar9);
          }
          lVar9 = (*__imp_GDI32_dll_SelectObject)(lVar10,uVar11);
          (*__imp_GDI32_dll_DeleteDC)(lVar10);
        }
        (*__imp_GDI32_dll_DeleteObject)(local_138);
        (*__imp_GDI32_dll_DeleteObject)(local_140);
      }
      if (lVar9 != 0) {
        (*__imp_GDI32_dll_GetObjectW)(lVar9,0x20,auStack_b8);
        if (bVar2) {
          local_108 = local_a0 + ((int)(local_b4 * 4 + ((local_b4 & 0x3fffffff) >> 0x1d)) >> 1);
        }
        else {
          local_108 = 0;
        }
        uVar1 = *(uint *)(param_1 + 0x90);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18000d380);
          (*pcVar6)();
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = *(uint *)(param_1 + 0xa8) / uVar1;
        }
        uVar3 = uVar3 * *(int *)(param_1 + 0xb8);
        uVar1 = *(uint *)(param_1 + 0x94);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18000d39c);
          (*pcVar6)();
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = *(uint *)(param_1 + 0xac) / uVar1;
        }
        uVar4 = uVar4 * *(int *)(param_1 + 0xbc);
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        local_118 = local_a0;
        uVar1 = *(uint *)(DAT_18024de60 + 0x8aa);
        if (*(uint *)(DAT_18024de60 + 0x8aa) == 0) {
          uVar1 = uVar3;
        }
        local_130 = CONCAT44(local_b0,(int)local_b4 / 2);
        local_110 = uStack_ac;
        local_120 = uVar1;
        if (0x10 < uVar1) {
          local_120 = 0x10;
        }
        if (uVar1 == 0) {
          local_120 = 1;
        }
        if (!bVar2) {
          uStack_ac = 0;
        }
        local_100 = uStack_ac;
        (**(code **)(**(longlong **)(param_1 + 0x100) + 0x58))
                  (*(longlong **)(param_1 + 0x100),&local_130);
        (*__imp_GDI32_dll_DeleteObject)(lVar9);
      }
    }
  }
  return;
}

