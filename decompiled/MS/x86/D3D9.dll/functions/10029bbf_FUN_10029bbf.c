/*
 * FUN_10029bbf at 10029bbf
 * undefined __stdcall FUN_10029bbf(void)
 * Address ranges: 10029bbf-10029bfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029bbf(void)

{
  if (DAT_100dea70 != (int *)0x0) {
    (**(code **)(*DAT_100dea70 + 0x30))();
    if (DAT_100dea70 != (int *)0x0) {
      (**(code **)*DAT_100dea70)(1);
    }
    DAT_100dea70 = (int *)0x0;
    FUN_100cc3aa(DAT_100dea74);
    DAT_100dea74 = (undefined4 *)0x0;
  }
  return;
}

