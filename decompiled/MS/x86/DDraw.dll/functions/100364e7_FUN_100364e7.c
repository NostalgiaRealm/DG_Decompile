/*
 * FUN_100364e7 at 100364e7
 * undefined4 __fastcall FUN_100364e7(HWND param_1)
 * Address ranges: 100364e7-10036585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100364e7(HWND param_1)

{
  int iVar1;
  CHAR local_84 [64];
  CHAR local_44 [64];
  
  iVar1 = GetClassNameA(param_1,local_44,0x40);
  if (iVar1 != 0) {
    FUN_10060ca2(local_44);
    iVar1 = 0;
    do {
      if (local_44[iVar1] != "videorenderer"[iVar1]) goto LAB_10036560;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xe);
    iVar1 = GetWindowTextA(param_1,local_84,0x40);
    if (iVar1 == 0) {
LAB_10036560:
      iVar1 = 0;
      do {
        if (local_44[iVar1] != "mr3frameclass"[iVar1]) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xe);
      DAT_1006c217 = 1;
    }
    else {
      FUN_10060ca2(local_84);
      iVar1 = 0;
      while (local_84[iVar1] == "activemovie window"[iVar1]) {
        iVar1 = iVar1 + 1;
        if (iVar1 == 0x13) {
          return 1;
        }
      }
    }
  }
  return 0;
}

