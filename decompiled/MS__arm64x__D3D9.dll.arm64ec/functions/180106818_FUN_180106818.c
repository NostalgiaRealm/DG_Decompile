/*
 * FUN_180106818 at 180106818
 * undefined FUN_180106818(void)
 * Address ranges: 180106818-1801068c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180106818(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  
  if (DAT_18024d8fc == 0) {
    if (DAT_18024d8f0 != 0) {
      thunk_FUN_1802236bc();
      DAT_18024d8f0 = 0;
    }
    FUN_1801c1640();
    puVar1 = __hybrid_os_arm64x_dispatch_icall;
    if (DAT_18024d920 != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      if (DAT_18024d920 != 0) {
        uVar2 = (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)(uVar2,1);
      }
      DAT_18024d920 = 0;
      FUN_18021fa28(DAT_18024d928);
      DAT_18024d928 = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

