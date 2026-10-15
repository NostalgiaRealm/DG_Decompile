/*
 * FUN_1800203f0 at 1800203f0
 * undefined FUN_1800203f0(void)
 * Address ranges: 1800203f0-18002063b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800203f0(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char local_40 [16];
  
  if (*(int *)*param_1 == -0x7fffffff) {
    FUN_18001f7f0(local_40);
    lVar6 = DAT_18024e310;
    uVar5 = 0;
    if (DAT_180253848 != 0) {
      do {
        plVar7 = *(longlong **)(DAT_180253840 + uVar5 * 8);
        uVar8 = plVar7[5];
        if (((uVar8 != 0) && (uVar9 = *(ulonglong *)(*param_1 + 0x28), uVar8 <= uVar9)) &&
           (uVar9 < uVar8 + (uint)*(ushort *)((longlong)plVar7 + 0x14) *
                            *(int *)((longlong)plVar7 + 0x1c))) {
          if (plVar7[6] == 0) {
            FUN_180023780(plVar7);
            (**(code **)(*plVar7 + 8))(plVar7);
            if (((*(uint *)(plVar7 + 9) & 1) == 0) &&
               (cVar4 = (**(code **)*plVar7)(plVar7), cVar4 != '\0')) {
              (**(code **)(*plVar7 + 0x10))(plVar7,0xffffffff);
            }
          }
          else {
            (**(code **)(*plVar7 + 8))();
            uVar9 = (longlong)
                    ((uVar9 - uVar8) + ((ulonglong)((longlong)(uVar9 - uVar8) >> 0xb) >> 0x34)) >>
                    0xc;
            uVar5 = uVar9 >> 3;
            uVar8 = uVar9 & 7;
            if ((*(byte *)(plVar7[6] + uVar5) & (&DAT_18022a8d8)[uVar8]) == 0) {
              bVar2 = *(byte *)(plVar7[7] + uVar5) & (&DAT_18022a8d8)[uVar8];
              if (bVar2 == 0) {
                bVar3 = false;
              }
              else {
                cVar4 = (**(code **)*plVar7)(plVar7);
                bVar3 = cVar4 == '\0' && bVar2 != 0;
              }
              if ((bVar3) ||
                 (cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,uVar9 & 0xffffffff), cVar4 != '\0'))
              {
                *(byte *)(plVar7[6] + uVar5) =
                     *(byte *)(plVar7[6] + uVar5) | (&DAT_18022a8d8)[uVar8];
                *(byte *)(plVar7[7] + uVar5) =
                     *(byte *)(plVar7[7] + uVar5) | (&DAT_18022a8d8)[uVar8];
              }
            }
          }
          *(uint *)(plVar7 + 9) = *(uint *)(plVar7 + 9) | 5;
          lVar6 = DAT_18024e310;
          if (local_40[0] == '\0') {
            *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
          }
          else {
            (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
            lVar6 = DAT_18024e310;
          }
          FUN_180001590(lVar6 + 0x30);
          return 0xffffffff;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
      } while (uVar1 < DAT_180253848);
    }
    if (local_40[0] == '\0') {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
    else {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
      lVar6 = DAT_18024e310;
    }
    FUN_180001590(lVar6 + 0x30);
  }
  return 0;
}

