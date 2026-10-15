/*
 * FUN_18002df08 at 18002df08
 * undefined __cdecl FUN_18002df08(undefined8 * param_1)
 * Address ranges: 18002df08-18002df63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002df08(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar1 = *(uint *)(param_1[2] + 0x30);
  if (uVar1 < 0x10) {
    uVar3 = (&DAT_180067931)[(ulonglong)uVar1 * 2];
    cVar2 = (&DAT_180067930)[(ulonglong)uVar1 * 2];
    if ((cVar2 == '\x02') && (cVar2 = '\x02', *(int *)((longlong)param_1 + 0x1c) != 0)) {
      cVar2 = '\x03';
    }
  }
  else {
    uVar3 = 0;
    cVar2 = '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x00018002df60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,cVar2,uVar3);
  return;
}

