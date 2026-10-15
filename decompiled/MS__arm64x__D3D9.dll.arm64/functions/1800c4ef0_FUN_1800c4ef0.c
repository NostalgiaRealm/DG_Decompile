/*
 * FUN_1800c4ef0 at 1800c4ef0
 * undefined FUN_1800c4ef0(void)
 * Address ranges: 1800c4ef0-1800c53bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c4ef0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 local_4b0 [2];
  longlong local_4a8;
  undefined1 auStack_4a0 [12];
  undefined4 local_494;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 local_450;
  
  if ((((param_2 != (undefined8 *)0x0) && (*(int *)(param_1 + -0x2c) != 3)) &&
      ((*(int *)(param_1 + -0x2c) != 0 ||
       (((*(uint *)(param_1 + -0x30) >> 9 & 1) != 0 ||
        ((*(uint *)(*(longlong *)(param_1 + -0x78) + 0x100) >> 10 & 1) != 0)))))) &&
     (lVar9 = *(longlong *)(param_1 + -0x78), (*(uint *)(lVar9 + 0x100) >> 0xb & 1) == 0)) {
    uVar11 = *(uint *)(param_1 + -0x38);
    if ((uVar11 < 0x21) && ((0x102200000U >> ((ulonglong)uVar11 & 0x3f) & 1) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((uVar11 - 0x16 < 3 || uVar11 == 0x14) || (bVar1)) {
      lVar12 = *(longlong *)(lVar9 + 0xf8);
      if (lVar12 == -1) {
        if ((*(uint *)(lVar9 + 0x18) & 3) == 0) {
          lVar12 = (*__imp_KERNEL32_dll_CreateFileMappingA)
                             (0xffffffffffffffff,0,0x8000004,0,
                              (uint)*(ushort *)(lVar9 + 0x14) * *(int *)(lVar9 + 0x1c) +
                              (*(uint *)(lVar9 + 0x18) * 0x40 + 0xfff & 0xfffff000) * 2,0);
          *(longlong *)(lVar9 + 0xf8) = lVar12;
        }
        else {
          *(undefined8 *)(lVar9 + 0xf8) = 0;
          lVar12 = 0;
        }
      }
      lVar13 = *(longlong *)(lVar9 + 0xb8);
      lVar10 = lVar13;
      if ((lVar13 == 0) || ((*(int *)(lVar9 + 0xa8) == 8 && (*(char *)(lVar9 + 0xef) != '\0')))) {
        iVar3 = *(int *)(lVar9 + 0x18);
        uStack_478 = 0;
        local_480 = 0;
        uStack_468 = 0;
        local_470 = 0;
        local_460 = 0;
        if (*(int *)(lVar9 + 0xa8) == 8) {
          local_458 = 0;
          if (lVar13 == 0) {
            lVar5 = 0;
          }
          else {
            uVar6 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
            uVar4 = (*__imp_GDI32_dll_SelectObject)(uVar6,*(undefined8 *)(lVar9 + 0xb8));
            (*__imp_GDI32_dll_SetDIBColorTable)(uVar6,0,0x100,&local_458);
            (*__imp_GDI32_dll_SelectObject)(uVar6,uVar4);
            (*__imp_GDI32_dll_DeleteDC)(uVar6);
            lVar10 = *(longlong *)(lVar9 + 0xb8);
            lVar5 = *(longlong *)(lVar9 + 0xb8);
          }
        }
        else {
          local_458 = *(undefined4 *)(lVar9 + 0xac);
          uStack_454 = *(undefined4 *)(lVar9 + 0xb0);
          local_450 = *(undefined4 *)(lVar9 + 0xb4);
          lVar5 = lVar13;
        }
        if (lVar5 == 0) {
          local_480 = CONCAT44(*(undefined4 *)(lVar9 + 0x8c),0x28);
          uStack_478 = CONCAT26((short)*(int *)(lVar9 + 0xa8),CONCAT24(1,-*(int *)(lVar9 + 0x90)));
          uVar7 = 0;
          if ((*(int *)(lVar9 + 0xa8) - 0x10U & 0xffffffef) == 0) {
            uVar7 = 3;
          }
          local_470 = CONCAT44(local_470._4_4_,uVar7);
          lVar5 = (*__imp_GDI32_dll_CreateDIBSection)
                            (0,&local_480,0,lVar9 + 0xe0,lVar12,iVar3 * 0x40 + 0xfffU & 0xfffff000);
          *(longlong *)(lVar9 + 0xb8) = lVar5;
          lVar10 = 0;
          if (lVar5 != 0) {
            (*__imp_GDI32_dll_GetObjectW)(lVar5,0x20,auStack_4a0);
            lVar10 = *(longlong *)(lVar9 + 0xb8);
            *(undefined4 *)(lVar9 + 0xe8) = local_494;
            *(bool *)(lVar9 + 0xec) = lVar12 != 0;
          }
          *(undefined2 *)(lVar9 + 0xed) = 0;
        }
      }
      *(undefined1 *)(lVar9 + 0xef) = 0;
      if ((*(longlong *)(lVar9 + 0xf8) == 0) && ((*(uint *)(lVar9 + 0x48) >> 5 & 1) != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((lVar13 == 0) && (lVar10 != 0)) && (bVar1)) &&
         (cVar2 = (**(code **)(**(longlong **)(lVar9 + 0x70) + 0x28))
                            (*(longlong **)(lVar9 + 0x70),*(undefined4 *)(lVar9 + 0x94),
                             *(undefined4 *)(lVar9 + 0x98)), cVar2 == '\0')) {
        bVar8 = 1;
      }
      else {
        bVar8 = 0;
      }
      *(byte *)(lVar9 + 0xee) = *(byte *)(lVar9 + 0xee) | bVar8;
      if (lVar10 != 0) {
        lVar12 = *(longlong *)(param_1 + -0x78);
        lVar9 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
        *(longlong *)(lVar12 + 0xc0) = lVar9;
        if (lVar9 != 0) {
          uVar6 = (*__imp_GDI32_dll_SelectObject)(lVar9,*(undefined8 *)(lVar12 + 0xb8));
          *(undefined8 *)(lVar12 + 200) = uVar6;
          if ((*(int *)(param_1 + -0x18) == 0) || ((*(uint *)(param_1 + -0x30) >> 10 & 1) == 0)) {
            if (((*(uint *)(*(longlong *)(param_1 + -0x58) + 0xe78) >> 2 & 1) == 0) &&
               (*(int *)(DAT_18024e310 + 0x30) == 0)) {
              bVar1 = false;
              *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
            }
            else {
              bVar1 = true;
              iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
              if (iVar3 == 0) {
                FUN_180003398();
              }
            }
            iVar3 = FUN_18000c0d8(param_1 + -0x80,local_4b0,0,0,1,1);
            if (bVar1) {
              (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
            }
            else {
              *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
            }
            if (-1 < iVar3) {
              lVar9 = *(longlong *)(param_1 + -0x78);
              *(undefined4 *)(lVar9 + 0xd8) = local_4b0[0];
              *(longlong *)(lVar9 + 0xd0) = local_4a8;
              *param_2 = *(undefined8 *)(lVar12 + 0xc0);
              if (local_4a8 != 0) {
                lVar9 = *(longlong *)(param_1 + -0x78);
                if ((*(char *)(lVar9 + 0xee) == '\0') && (*(char *)(lVar9 + 0xec) == '\0')) {
                  lVar12 = *(longlong *)(lVar9 + 0xd0);
                  lVar10 = *(longlong *)(lVar9 + 0xe0);
                  if (*(int *)(lVar9 + 0xe8) == *(int *)(lVar9 + 0xd8)) {
                    thunk_FUN_180001218(lVar10,lVar12,
                                        (*(uint *)(lVar9 + 0xa8) >> 3) * *(int *)(lVar9 + 0x90) *
                                        *(int *)(lVar9 + 0x8c));
                  }
                  else {
                    uVar11 = 0;
                    if (*(int *)(lVar9 + 0x90) != 0) {
                      do {
                        thunk_FUN_180001218(lVar10,lVar12,
                                            (uint)(*(int *)(lVar9 + 0xa8) * *(int *)(lVar9 + 0x8c))
                                            >> 3);
                        uVar11 = uVar11 + 1;
                        lVar12 = lVar12 + (ulonglong)*(uint *)(lVar9 + 0xd8);
                        lVar10 = lVar10 + (ulonglong)*(uint *)(lVar9 + 0xe8);
                      } while (uVar11 < *(uint *)(lVar9 + 0x90));
                    }
                  }
                }
                *(undefined1 *)(lVar9 + 0xee) = 1;
              }
              return 0;
            }
          }
          (*__imp_GDI32_dll_SelectObject)
                    (*(undefined8 *)(lVar12 + 0xc0),*(undefined8 *)(lVar12 + 200));
          (*__imp_GDI32_dll_DeleteDC)(*(undefined8 *)(lVar12 + 0xc0));
          *(undefined8 *)(lVar12 + 0xc0) = 0;
        }
      }
    }
  }
  return 0x8876086c;
}

