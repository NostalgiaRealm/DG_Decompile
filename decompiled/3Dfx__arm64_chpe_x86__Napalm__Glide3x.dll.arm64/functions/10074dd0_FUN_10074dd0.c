/*
 * FUN_10074dd0 at 10074dd0
 * undefined FUN_10074dd0(void)
 * Address ranges: 10074dd0-10074f4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10074dd0(int param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  code *extraout_w11;
  longlong local_50 [2];
  
  if ((param_2 != 0) && (plVar1 = (longlong *)(param_2 + 0xd48), 0 < *plVar1)) {
    (*(code *)PTR_FUN_100a80b0)(local_50);
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    plVar2 = (longlong *)(param_2 + 0xd50);
    lVar9 = *plVar2;
    if ((0 < lVar9) && (lVar7 = *plVar1, local_50[0] - lVar9 < lVar7)) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x500);
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          uVar5 = SoftwareBreakpoint(0xf004,0x10074e90);
          (*(code *)uVar5)();
        }
        uVar3 = 0;
        if (lVar8 != 0) {
          uVar3 = (((lVar7 - local_50[0]) + lVar9) * 10) / lVar8;
        }
        if ((0x10 < (uint)uVar3) && (*(int *)(param_1 + 0x2cc) != 0)) {
          if (*(char *)(param_1 + 0x2d8) == '\0') {
            (*pcVar4)();
            iVar6 = (*extraout_w11)(1);
            if (iVar6 == 0) {
              *(char *)(param_1 + 0x2d8) = '\x01';
            }
            else {
              *(int *)(param_1 + 0x2cc) = 0;
              *(undefined4 *)(param_1 + 0x2d0) = 0;
            }
          }
          iVar10 = (int)((uVar3 & 0xffffffff) / 10);
          iVar6 = iVar10 + -1;
          if (5 < (uint)uVar3 + (int)((uVar3 & 0xffffffff) / 10) * -10) {
            iVar6 = iVar10;
          }
          (*(code *)PTR_FUN_100a80dc)(iVar6);
        }
        DataMemoryBarrier(2,2);
        Yield();
        (*(code *)PTR_FUN_100a80b0)(local_50);
        lVar9 = *plVar2;
        lVar7 = *plVar1;
      } while (local_50[0] - lVar9 < lVar7);
    }
    *plVar2 = local_50[0];
  }
  return;
}

