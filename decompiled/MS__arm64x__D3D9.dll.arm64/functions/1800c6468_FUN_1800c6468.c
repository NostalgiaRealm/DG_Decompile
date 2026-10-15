/*
 * FUN_1800c6468 at 1800c6468
 * undefined FUN_1800c6468(void)
 * Address ranges: 1800c6468-1800c6863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c6468(longlong param_1,longlong param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint uStack_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  int local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined1 auStack_78 [12];
  int local_6c;
  longlong local_60;
  
  uVar14 = 0x8876086c;
  if (param_2 != 0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x178) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar5 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar5 = true;
      iVar8 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar8 == 0) {
        FUN_180003398();
      }
    }
    lVar13 = *(longlong *)(param_1 + 0x178);
    uVar14 = 0x8876086c;
    local_b0 = lVar13;
    if ((((*(longlong *)(param_2 + -0x58) == lVar13) && (*(int *)(param_2 + -0x38) == 0x15)) &&
        (*(int *)(param_2 + -0x2c) - 2U < 2)) &&
       (((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0 &&
        (uVar14 = 0x88760868, *(char *)(lVar13 + 0x6819) == '\0')))) {
      uVar14 = 0x8876086c;
      FUN_1800031b8(*(undefined8 *)(lVar13 + 0xe28),*(undefined4 *)(lVar13 + 0xea8),&local_d8);
      uVar6 = local_d8;
      if ((local_d8 <= *(uint *)(param_2 + -0x20)) && (local_d4 <= *(uint *)(param_2 + -0x1c))) {
        uVar14 = 0x80004005;
        local_c8 = 0;
        local_c0 = local_d8;
        uStack_bc = local_d4;
        if ((&DAT_180253344)[(ulonglong)*(uint *)(lVar13 + 0xea8) * 0x28] == '\0') {
          local_94 = 0;
          local_a8 = 0x28;
          uStack_a4 = local_d8;
          local_a0 = -local_d4;
          local_9c = 0x200001;
          local_8c = 0;
          local_84 = 0;
          local_b8 = 0;
          lVar13 = (*__imp_GDI32_dll_CreateDIBSection)(0,&local_a8,0,&local_b8,0,0);
          if (lVar13 != 0) {
            lVar9 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
            if (lVar9 != 0) {
              iVar8 = (*__imp_GDI32_dll_GetObjectW)(lVar13,0x20,auStack_78);
              if (iVar8 == 0x20) {
                lVar13 = (*__imp_GDI32_dll_SelectObject)(lVar9,lVar13);
                lVar10 = (*__imp_USER32_dll_GetDCEx)(0,0,3);
                if (lVar10 != 0) {
                  if (((*(uint *)(*(longlong *)(param_2 + -0x58) + 0xe78) >> 2 & 1) == 0) &&
                     (*(int *)(DAT_18024e310 + 0x30) == 0)) {
                    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                    iVar8 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
                    if (iVar8 == 0) {
                      FUN_180003398();
                    }
                  }
                  iVar8 = FUN_18000c0d8(param_2 + -0x80,&local_d8,&local_c8,0x10,1,0);
                  if (bVar4) {
                    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
                  }
                  else {
                    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
                  }
                  if (-1 < iVar8) {
                    (*__imp_GDI32_dll_BitBlt)
                              (lVar9,0,0,uVar6,local_d4,lVar10,
                               (int)*(undefined8 *)
                                     (&DAT_180253a24 + (ulonglong)*(uint *)(local_b0 + 0xea8) * 600)
                               ,(int)((ulonglong)
                                      *(undefined8 *)
                                       (&DAT_180253a24 +
                                       (ulonglong)*(uint *)(local_b0 + 0xea8) * 600) >> 0x20),
                               0xcc0020);
                    uVar11 = 0;
                    if (local_d4 != 0) {
                      do {
                        uVar12 = 0;
                        if (uVar6 != 0) {
                          do {
                            *(uint *)(local_d0 + uVar12 * 4) =
                                 *(uint *)(local_60 + uVar12 * 4) | 0xff000000;
                            uVar1 = (int)uVar12 + 1;
                            uVar12 = (ulonglong)uVar1;
                          } while (uVar1 < uVar6);
                        }
                        uVar11 = uVar11 + 1;
                        local_60 = local_60 + local_6c;
                        local_d0 = local_d0 + (int)local_d8;
                      } while (uVar11 < local_d4);
                    }
                    FUN_18000cc80(param_2 + -0x80);
                    uVar14 = 0;
                  }
                  (*__imp_USER32_dll_ReleaseDC)(0,lVar10);
                }
              }
              lVar13 = (*__imp_GDI32_dll_SelectObject)(lVar9,lVar13);
            }
            (*__imp_GDI32_dll_DeleteObject)(lVar13);
          }
        }
        else {
          pcVar2 = &DAT_000000f9;
          if (param_1 != 0) {
            pcVar2 = (char *)(param_1 + 0x101);
          }
          if (*pcVar2 == '\0') {
            puVar3 = (undefined8 *)&DAT_00000058;
            if (param_1 != 0) {
              puVar3 = (undefined8 *)(param_1 + 0x60);
            }
            cVar7 = FUN_180004280(lVar13,*puVar3,param_2 + -0x80,1,&local_c8,0);
            if (cVar7 != '\0') {
              uVar14 = 0;
            }
          }
        }
      }
    }
    if (bVar5) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar14;
}

