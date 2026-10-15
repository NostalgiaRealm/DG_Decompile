/*
 * FUN_180004100 at 180004100
 * undefined FUN_180004100(void)
 * Address ranges: 180004100-18000427b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180004100(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  uint param_6,uint param_7,int param_8,int param_9,longlong param_10,
                  longlong param_11)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_9 != 0) {
    lVar12 = 0;
    do {
      lVar11 = lVar12 * 0x10;
      uVar3 = *(uint *)(param_10 + lVar11);
      if (param_6 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x18000416c);
        (*pcVar8)();
      }
      uVar5 = 0;
      if (param_6 != 0) {
        uVar5 = uVar3 / param_6;
      }
      uVar4 = *(uint *)(param_10 + 4 + lVar11);
      if (param_7 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180004180);
        (*pcVar8)();
      }
      uVar6 = 0;
      if (param_7 != 0) {
        uVar6 = uVar4 / param_7;
      }
      if (param_11 == 0) {
        uVar9 = 0;
        uVar10 = uVar4;
        if (param_6 != 0) {
          uVar9 = uVar3 / param_6;
        }
      }
      else {
        uVar10 = *(uint *)(lVar12 * 8 + param_11 + 4);
        uVar9 = 0;
        if (param_6 != 0) {
          uVar9 = *(uint *)(param_11 + lVar12 * 8) / param_6;
        }
      }
      uVar7 = 0;
      if (param_7 != 0) {
        uVar7 = uVar10 / param_7;
      }
      uVar10 = 0;
      if (param_7 != 0) {
        uVar10 = (*(int *)(param_10 + 0xc + lVar11) - uVar4) / param_7;
      }
      lVar1 = (ulonglong)(uVar5 * param_8) + (ulonglong)(uVar6 * param_4) + param_2;
      lVar2 = (ulonglong)(uVar9 * param_8) + (ulonglong)(uVar7 * param_5) + param_3;
      uVar5 = 0;
      if (param_6 != 0) {
        uVar5 = (*(int *)(param_10 + 8 + lVar11) - uVar3) / param_6;
      }
      uVar5 = uVar5 * param_8;
      if (param_4 == uVar5 && param_5 == uVar5) {
        thunk_FUN_180001218(lVar2,lVar1,uVar5 * uVar10);
      }
      else {
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          thunk_FUN_180001218(lVar2,lVar1,uVar5);
          lVar1 = lVar1 + (ulonglong)param_4;
          lVar2 = lVar2 + (ulonglong)param_5;
        }
      }
      lVar12 = lVar12 + 1;
      param_9 = param_9 + -1;
    } while (param_9 != 0);
  }
  return;
}

