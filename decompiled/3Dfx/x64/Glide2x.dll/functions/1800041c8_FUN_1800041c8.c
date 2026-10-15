/*
 * FUN_1800041c8 at 1800041c8
 * undefined __fastcall FUN_1800041c8(undefined8 * param_1)
 * Address ranges: 1800041c8-18000420b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800041c8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0xd);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_18000423c((longlong)param_1,'\0');
      FUN_180003e94((longlong)param_1);
      FUN_180003f70(param_1);
      FUN_18005d720(param_1);
    }
  }
  return;
}

