/*
 * FUN_1800a5470 at 1800a5470
 * undefined FUN_1800a5470(void)
 * Address ranges: 1800a5470-1800a5613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800a5470(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 == 0) {
    for (; DAT_18024de20 != 0; DAT_18024de20 = DAT_18024de20 + -1) {
      if (DAT_18024de20 == 1) {
        lVar3 = *DAT_18024de28;
        iVar2 = FUN_180001590(&DAT_18024de38);
        if ((iVar2 == 0) && (DAT_18024de30 != 0)) {
          (*__imp_KERNEL32_dll_RemoveVectoredExceptionHandler)();
          (*__imp_KERNEL32_dll_RemoveVectoredContinueHandler)(DAT_18024de48);
        }
        uVar4 = 0;
        if (*(int *)(lVar3 + 0x70) != 0) {
          do {
            if ((longlong *)(&DAT_180253850)[uVar4 * 0x4b] != (longlong *)0x0) {
              (**(code **)(*(longlong *)(&DAT_180253850)[uVar4 * 0x4b] + 0x28))();
            }
            uVar1 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar3 + 0x70));
        }
        lVar3 = DAT_18024de60;
        if (DAT_18024de60 != 0) {
          FUN_180100588(DAT_18024de60,0);
          (*__imp_KERNEL32_dll_TerminateThread)(*(undefined8 *)(lVar3 + 0x378),0);
          FUN_1800ff7f8(lVar3);
        }
      }
    }
    DAT_18024de20 = 0;
    (*__imp_KERNEL32_dll_DeleteCriticalSection)(DAT_18024e310);
    DAT_18024e310 = (undefined *)0x0;
  }
  else if (param_2 == 1) {
    DAT_18024e310 = &DAT_18024e2d8;
    DAT_18024e2d0 = param_1;
    DAT_18024e320 = param_1;
    (*__imp_KERNEL32_dll_InitializeCriticalSection)(&DAT_18024e2d8);
    DAT_18024e300 = 0;
    DAT_18024e304 = 0;
    DAT_18024e308 = 0;
    DAT_18024de78 = &DAT_18024e2d8;
    DAT_18024bb00 = 0x100000001;
    DAT_18024bb08 = 1;
    PTR_DAT_18024bb10 = s__dgVoodoo__180235e58;
    DAT_18024bb18 = 1;
    DAT_18024bb20 = 0;
  }
  return 1;
}

