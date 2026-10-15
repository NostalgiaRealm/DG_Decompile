/*
 * FUN_180028160 at 180028160
 * undefined __fastcall FUN_180028160(undefined8 * param_1)
 * Address ranges: 180028160-18002819b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028160(undefined8 *param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined1 uVar3;
  
  if (*(uint *)(param_1[2] + 0x30) < 0x10) {
    uVar1 = (ulonglong)*(uint *)(param_1[2] + 0x30);
    uVar3 = (&DAT_1800649b1)[uVar1 * 2];
    cVar2 = (&DAT_1800649b0)[uVar1 * 2];
    if (cVar2 == '\x02') {
      cVar2 = (*(int *)((longlong)param_1 + 0x1c) != 0) + '\x02';
    }
  }
  else {
    uVar3 = 0;
    cVar2 = '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000180028199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,cVar2,uVar3);
  return;
}

