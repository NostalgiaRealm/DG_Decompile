/*
 * FUN_1800a34d0 at 1800a34d0
 * undefined FUN_1800a34d0(void)
 * Address ranges: 1800a34d0-1800a35fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a34d0(undefined8 *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = DAT_18024de20;
  *param_1 = &DAT_180235f88;
  param_1[0x11] = &PTR_DAT_1802296c8;
  param_1[0x14] = &PTR_FUN_180235ed8;
  lVar1 = DAT_18024de28;
  uVar5 = 0;
  uVar2 = DAT_18024de20;
  if (uVar3 != 0) {
    do {
      iVar4 = (int)uVar5;
      if (*(undefined8 **)(lVar1 + uVar5 * 8) == param_1) {
        uVar3 = uVar3 - 1;
        if (uVar3 - iVar4 != 0) {
          thunk_FUN_180001218(lVar1 + uVar5 * 8,lVar1 + (ulonglong)(iVar4 + 1) * 8,
                              (ulonglong)(uVar3 - iVar4) << 3);
        }
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
      uVar2 = uVar3;
    } while (iVar4 + 1U < uVar3);
  }
  DAT_18024de20 = uVar2;
  if (uVar3 == 0) {
    if (DAT_18024de18 != 0) {
      (*__imp_KERNEL32_dll_FreeLibrary)();
      DAT_18024de18 = 0;
    }
    FUN_1800a8548();
    if (DAT_18024de58 != (longlong *)0x0) {
      (**(code **)(*DAT_18024de58 + 0x60))();
      if (DAT_18024de58 != (longlong *)0x0) {
        (**(code **)*DAT_18024de58)(DAT_18024de58,1);
      }
      DAT_18024de58 = (longlong *)0x0;
      FUN_180100178(DAT_18024de60);
      DAT_18024de60 = 0;
    }
    if (DAT_18024de20 == 0) {
      thunk_FUN_180102fc0(DAT_18024de28);
      DAT_18024de28 = 0;
      FUN_1800a8548();
    }
  }
  thunk_FUN_180102fc0(param_1[0x1e]);
  FUN_180001748(param_1);
  return;
}

