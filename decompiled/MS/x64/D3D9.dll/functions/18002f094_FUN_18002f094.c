/*
 * FUN_18002f094 at 18002f094
 * undefined8 __fastcall FUN_18002f094(longlong * param_1)
 * Address ranges: 18002f094-18002f262
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002f094(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  LPCRITICAL_SECTION p_Var6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  char local_res8 [8];
  uint local_res10 [2];
  
  if (*(int *)*param_1 == -0x7fffffff) {
    FUN_18002db9c(local_res8);
    p_Var6 = DAT_1801123a8;
    uVar5 = 0;
    if (DAT_1801128d8 != 0) {
      do {
        plVar1 = *(longlong **)(DAT_1801128d0 + uVar5 * 8);
        uVar9 = plVar1[5];
        if (((uVar9 != 0) && (uVar2 = *(ulonglong *)(*param_1 + 0x28), uVar9 <= uVar2)) &&
           (uVar2 < (uint)*(ushort *)((longlong)plVar1 + 0x14) * *(int *)((longlong)plVar1 + 0x1c) +
                    uVar9)) {
          FUN_1800fa780(local_res10);
          if (plVar1[6] == 0) {
            FUN_180031c40((longlong)plVar1);
            (**(code **)(*plVar1 + 8))(plVar1);
            if (((*(byte *)(plVar1 + 9) & 1) == 0) &&
               (cVar3 = (**(code **)*plVar1)(plVar1), cVar3 != '\0')) {
              (**(code **)(*plVar1 + 0x10))(plVar1,0xffffffff);
            }
          }
          else {
            (**(code **)(*plVar1 + 8))();
            uVar5 = (longlong)
                    ((uVar2 - uVar9) +
                    (ulonglong)((uint)((longlong)(uVar2 - uVar9) >> 0x3f) & 0xfff)) >> 0xc;
            uVar8 = (uint)uVar5 & 7;
            uVar9 = uVar5 >> 3;
            if ((*(byte *)(uVar9 + plVar1[6]) & (&DAT_180101670)[uVar8]) == 0) {
              bVar7 = (&DAT_180101670)[uVar8] & *(byte *)(uVar9 + plVar1[7]);
              if (bVar7 == 0) {
                bVar4 = false;
              }
              else {
                cVar3 = (**(code **)*plVar1)(plVar1);
                bVar4 = cVar3 == '\0' && bVar7 != 0;
              }
              if ((bVar4) ||
                 (cVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar5 & 0xffffffff), cVar3 != '\0'))
              {
                *(byte *)(uVar9 + plVar1[6]) =
                     *(byte *)(uVar9 + plVar1[6]) | (&DAT_180101670)[uVar8];
                *(byte *)(uVar9 + plVar1[7]) =
                     *(byte *)(uVar9 + plVar1[7]) | (&DAT_180101670)[uVar8];
              }
            }
          }
          *(uint *)(plVar1 + 9) = *(uint *)(plVar1 + 9) | 5;
          FUN_1800fa7bc();
          p_Var6 = DAT_1801123a8;
          if (local_res8[0] == '\0') {
            *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
          }
          else {
            LeaveCriticalSection(DAT_1801123a8);
            p_Var6 = DAT_1801123a8;
          }
          LOCK();
          p_Var6[1].LockCount = p_Var6[1].LockCount + -1;
          UNLOCK();
          return 0xffffffff;
        }
        uVar8 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar8;
      } while (uVar8 < DAT_1801128d8);
    }
    if (local_res8[0] == '\0') {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
    else {
      LeaveCriticalSection(DAT_1801123a8);
      p_Var6 = DAT_1801123a8;
    }
    LOCK();
    p_Var6[1].LockCount = p_Var6[1].LockCount + -1;
    UNLOCK();
  }
  return 0;
}

