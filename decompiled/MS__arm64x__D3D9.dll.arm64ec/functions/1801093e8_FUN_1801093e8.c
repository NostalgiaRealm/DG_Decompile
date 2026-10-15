/*
 * FUN_1801093e8 at 1801093e8
 * undefined FUN_1801093e8(void)
 * Address ranges: 1801093e8-1801094f7;1801094fc-180109527;180109544-180109567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801093e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  uint param_6,uint param_7,int param_8,int param_9,longlong param_10,
                  longlong param_11)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_9 != 0) {
    lVar13 = 0;
    do {
      lVar12 = lVar13 * 0x10;
      uVar3 = *(uint *)(param_10 + lVar12);
      if (param_6 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x180109454);
        (*pcVar9)();
      }
      uVar6 = 0;
      if (param_6 != 0) {
        uVar6 = uVar3 / param_6;
      }
      uVar4 = *(uint *)(param_10 + 4 + lVar12);
      if (param_7 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x180109468);
        (*pcVar9)();
      }
      uVar7 = 0;
      if (param_7 != 0) {
        uVar7 = uVar4 / param_7;
      }
      if (param_11 == 0) {
        uVar10 = 0;
        uVar11 = uVar4;
        if (param_6 != 0) {
          uVar10 = uVar3 / param_6;
        }
      }
      else {
        uVar11 = *(uint *)(lVar13 * 8 + param_11 + 4);
        uVar10 = 0;
        if (param_6 != 0) {
          uVar10 = *(uint *)(param_11 + lVar13 * 8) / param_6;
        }
      }
      uVar8 = 0;
      if (param_7 != 0) {
        uVar8 = uVar11 / param_7;
      }
      uVar11 = 0;
      if (param_7 != 0) {
        uVar11 = (*(int *)(param_10 + 0xc + lVar12) - uVar4) / param_7;
      }
      lVar1 = (ulonglong)(uVar6 * param_8) + (ulonglong)(uVar7 * param_4) + param_2;
      lVar2 = (ulonglong)(uVar10 * param_8) + (ulonglong)(uVar8 * param_5) + param_3;
      uVar6 = 0;
      if (param_6 != 0) {
        uVar6 = (*(int *)(param_10 + 8 + lVar12) - uVar3) / param_6;
      }
      iVar5 = uVar6 * param_8;
      if (param_4 == iVar5 && param_5 == iVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar2,lVar1,iVar5 * uVar11);
      }
      if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar2,lVar1,iVar5);
      }
      lVar13 = lVar13 + 1;
      param_9 = param_9 + -1;
    } while (param_9 != 0);
  }
  return;
}

