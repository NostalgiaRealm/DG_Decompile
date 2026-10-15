/*
 * FUN_180006754 at 180006754
 * bool __fastcall FUN_180006754(WNDPROC param_1, int param_2)
 * Address ranges: 180006754-180006823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180006754(WNDPROC param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  cVar1 = FUN_180006b64(param_1);
  if (cVar1 == '\0') {
    return false;
  }
  if (param_2 == 0) {
LAB_18000679a:
    bVar3 = true;
  }
  else {
    if (param_2 == 1) {
      uVar2 = FUN_1800079d4(param_1);
      return (bool)(&DAT_18006d29b)[(ulonglong)uVar2 * 0x20];
    }
    if (param_2 == 2) {
      uVar2 = FUN_1800079d4(param_1);
      return (bool)(&DAT_18006d29c)[(ulonglong)uVar2 * 0x20];
    }
    if (param_2 == 3) {
      uVar2 = FUN_1800079d4(param_1);
      return (bool)(&DAT_18006d299)[(ulonglong)uVar2 * 0x20];
    }
    if (param_2 == 4) {
      bVar3 = FUN_180006a64((longlong)param_1);
      if (!bVar3) {
        return false;
      }
    }
    else if (param_2 != 5) {
      if (param_2 != 6) {
        return false;
      }
      goto LAB_18000679a;
    }
    uVar2 = FUN_1800079d4(param_1);
    bVar3 = uVar2 == 4;
  }
  return bVar3;
}

