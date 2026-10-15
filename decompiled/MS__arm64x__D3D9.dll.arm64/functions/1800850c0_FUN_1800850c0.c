/*
 * FUN_1800850c0 at 1800850c0
 * undefined FUN_1800850c0(void)
 * Address ranges: 1800850c0-180085397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800850c0(longlong param_1,ulonglong param_2,int param_3,longlong param_4,int param_5,
             int *param_6)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint extraout_w12;
  ulonglong extraout_x13;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_98;
  undefined4 uStack_94;
  int local_90;
  undefined1 auStack_80 [48];
  
  uVar9 = 0;
  FUN_1800e5470(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  lVar7 = (**(code **)(*(longlong *)(param_1 + -0xe0) + 200))(param_1 + -0xe0);
  if (lVar7 != 0) {
    if (*(longlong *)(param_1 + -0x28) == 0) {
      func_0x0001801bad48(&local_98,*(undefined4 *)(param_1 + -0xb4));
      FUN_180082d80(param_1 + -0x40,*(undefined4 *)(param_1 + -0xbc),
                    *(undefined4 *)(param_1 + -0xb8),*(undefined4 *)(param_1 + -0xb0),
                    *(undefined4 *)(param_1 + -0xac),1,local_98,0,0,0,3,0,0x30000,0,0,0,0);
      uVar10 = 0;
      if (*(int *)(param_1 + -0xac) != 0) {
        do {
          uVar11 = 0;
          if (*(int *)(param_1 + -0xb0) != 0) {
            do {
              FUN_1800a2b98(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8),uVar11);
              uVar4 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc));
              (*__imp_USER32_dll_SetRect)
                        (*(longlong *)(param_1 + -0x50) +
                         (ulonglong)(uVar11 + *(int *)(param_1 + -0xa4) * uVar10) * 0x28 + 0x18,0,0,
                         uVar4);
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(uint *)(param_1 + -0xb0));
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_1 + -0xac));
      }
    }
    if (*(longlong *)(param_1 + -0x28) != 0) {
      (*(code *)**(undefined8 **)(param_1 + -0xe0))(param_1 + -0xe0,param_2 & 0xffffffff,param_3);
      plVar8 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
      iVar5 = (**(code **)(*plVar8 + 0x70))
                        (plVar8,*(undefined8 *)(param_1 + -0x28),
                         (int)param_2 + *(int *)(param_1 + -0xa4) * param_3,1,0,&local_98);
      if (-1 < iVar5) {
        (**(code **)(**(longlong **)(param_1 + -0x28) + 0x50))
                  (*(longlong **)(param_1 + -0x28),auStack_80);
        uVar10 = *(uint *)(&DAT_180231470 + (ulonglong)*(uint *)(param_1 + -0xb4) * 4);
        if (uVar10 == 0x18) {
          uVar10 = 0x20;
        }
        uVar11 = uVar10 >> 3;
        if (uVar10 < 8) {
          uVar11 = *(uint *)(&DAT_180231630 + (ulonglong)*(uint *)(param_1 + -0xb4) * 4);
        }
        uVar6 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),param_2 & 0xffffffff)
        ;
        uVar10 = uVar6;
        if (extraout_w12 < 8) {
          bVar1 = (&DAT_1802316d8)[extraout_x13 & 0xffffffff];
          if (bVar1 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800852c0);
            (*pcVar2)();
          }
          uVar10 = 0;
          if (bVar1 != 0) {
            uVar10 = uVar6 / bVar1;
          }
        }
        uVar6 = param_6[1];
        if (uVar6 <= (uint)param_6[3]) {
          bVar3 = uVar6 == param_6[3];
          iVar5 = *param_6;
          do {
            if (bVar3) {
              uVar10 = param_6[2];
            }
            thunk_FUN_180001218((ulonglong)(uVar6 * param_5) + (ulonglong)(iVar5 * uVar11) + param_4
                                ,(ulonglong)(uVar6 * local_90) + (ulonglong)(iVar5 * uVar11) +
                                 CONCAT44(uStack_94,local_98),(uVar10 - iVar5) * uVar11);
            uVar6 = uVar6 + 1;
            iVar5 = 0;
            bVar3 = uVar6 == param_6[3];
          } while (uVar6 <= (uint)param_6[3]);
        }
        plVar8 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
        (**(code **)(*plVar8 + 0x78))
                  (plVar8,*(undefined8 *)(param_1 + -0x28),
                   (int)param_2 + *(int *)(param_1 + -0xa4) * param_3);
        uVar9 = 1;
      }
    }
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar9;
}

