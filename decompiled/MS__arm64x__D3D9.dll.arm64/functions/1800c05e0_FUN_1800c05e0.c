/*
 * FUN_1800c05e0 at 1800c05e0
 * undefined FUN_1800c05e0(void)
 * Address ranges: 1800c05e0-1800c09df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c05e0(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 local_d8;
  undefined8 local_c8;
  uint local_c0;
  uint uStack_bc;
  undefined8 local_b8;
  int local_b0 [2];
  longlong local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  int local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined1 auStack_70 [12];
  int local_64;
  longlong local_58;
  
  uVar11 = 0x8876086c;
  if ((param_3 != 0) && (param_2 < *(uint *)(param_1 + -0x5a00))) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar3 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar3 = true;
      iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar7 == 0) {
        FUN_180003398();
      }
    }
    bVar2 = true;
    uVar11 = 0x8876086c;
    if ((((*(longlong *)(param_3 + -0x58) == param_1 + -0x6838) &&
         (*(int *)(param_3 + -0x38) == 0x15)) && (*(int *)(param_3 + -0x2c) - 2U < 2)) &&
       (((*(uint *)(*(longlong *)(param_3 + -0x78) + 0x100) >> 0xb & 1) == 0 &&
        (uVar11 = 0x88760868, *(char *)(param_1 + -0x1f) == '\0')))) {
      uVar11 = 0x8876086c;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8);
      FUN_1800031b8(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),&local_d8)
      ;
      uVar10 = local_d8;
      uVar4 = (uint)local_d8;
      if (((uint)local_d8 <= *(uint *)(param_3 + -0x20)) &&
         (uVar5 = local_d8._4_4_, local_d8._4_4_ <= *(uint *)(param_3 + -0x1c))) {
        local_c8 = 0;
        uVar11 = 0x80004005;
        local_c0 = (uint)local_d8;
        uStack_bc = local_d8._4_4_;
        if ((&DAT_180253344)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x28] == '\0') {
          local_8c = 0;
          local_a0 = 0x28;
          uStack_9c = (uint)local_d8;
          local_98 = -local_d8._4_4_;
          local_94 = 0x200001;
          local_84 = 0;
          local_7c = 0;
          local_b8 = 0;
          lVar12 = (*__imp_GDI32_dll_CreateDIBSection)(0,&local_a0,0,&local_b8,0,0);
          if (lVar12 != 0) {
            lVar8 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
            if (lVar8 != 0) {
              iVar7 = (*__imp_GDI32_dll_GetObjectW)(lVar12,0x20,auStack_70);
              if (iVar7 == 0x20) {
                lVar12 = (*__imp_GDI32_dll_SelectObject)(lVar8,lVar12);
                local_d8 = (*__imp_USER32_dll_GetDCEx)(0,0,3);
                if (local_d8 != 0) {
                  if (((*(uint *)(*(longlong *)(param_3 + -0x58) + 0xe78) >> 2 & 1) == 0) &&
                     (*(int *)(DAT_18024e310 + 0x30) == 0)) {
                    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
                    bVar2 = false;
                  }
                  else {
                    iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
                    if (iVar7 == 0) {
                      FUN_180003398();
                    }
                  }
                  iVar7 = FUN_18000c0d8(param_3 + -0x80,local_b0,&local_c8,0x10,1,0);
                  if (bVar2) {
                    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
                  }
                  else {
                    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
                  }
                  if (-1 < iVar7) {
                    (*__imp_GDI32_dll_BitBlt)
                              (lVar8,0,0,uVar10 & 0xffffffff,uVar5,local_d8,
                               (int)*(undefined8 *)
                                     (&DAT_180253a24 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600
                                     ),(int)((ulonglong)
                                             *(undefined8 *)
                                              (&DAT_180253a24 +
                                              (ulonglong)*(uint *)(param_1 + -0x5990) * 600) >> 0x20
                                            ),0xcc0020);
                    uVar9 = 0;
                    if (uVar5 != 0) {
                      do {
                        uVar10 = 0;
                        if (uVar4 != 0) {
                          do {
                            *(uint *)(local_a8 + uVar10 * 4) =
                                 *(uint *)(local_58 + uVar10 * 4) | 0xff000000;
                            uVar1 = (int)uVar10 + 1;
                            uVar10 = (ulonglong)uVar1;
                          } while (uVar1 < uVar4);
                        }
                        uVar9 = uVar9 + 1;
                        local_58 = local_58 + local_64;
                        local_a8 = local_a8 + local_b0[0];
                      } while (uVar9 < uVar5);
                    }
                    FUN_18000cc80(param_3 + -0x80);
                    uVar11 = 0;
                  }
                  (*__imp_USER32_dll_ReleaseDC)(0,local_d8);
                }
              }
              lVar12 = (*__imp_GDI32_dll_SelectObject)(lVar8,lVar12);
            }
            (*__imp_GDI32_dll_DeleteObject)(lVar12);
          }
        }
        else if ((*(char *)(lVar12 + 0xf9) == '\0') &&
                (cVar6 = FUN_180004280(param_1 + -0x6838,*(undefined8 *)(lVar12 + 0x58),
                                       param_3 + -0x80,1,&local_c8,0), cVar6 != '\0')) {
          uVar11 = 0;
        }
      }
    }
    if (bVar3) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar11;
}

