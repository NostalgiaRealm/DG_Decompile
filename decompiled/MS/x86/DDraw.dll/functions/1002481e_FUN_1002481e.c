/*
 * FUN_1002481e at 1002481e
 * undefined __stdcall FUN_1002481e(int param_1, undefined4 * param_2)
 * Address ranges: 1002481e-10024916
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002481e(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062560)[iVar1]) {
      iVar1 = 0;
      goto LAB_1002485a;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_100649b8;
  goto LAB_10024907;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1002485a:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062380)[iVar1]) {
      iVar1 = 0;
      goto LAB_10024884;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1006495c;
  goto LAB_10024907;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_10024884:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062390)[iVar1]) {
      iVar1 = 0;
      goto LAB_100248a7;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_100648fc;
  goto LAB_10024907;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_100248a7:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100623a0)[iVar1]) {
      iVar1 = 0;
      goto LAB_100248ca;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1006488c;
  goto LAB_10024907;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_100248ca:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100623b0)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062440)[iVar1]) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = &PTR_FUN_100647f8;
      goto LAB_10024907;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_10064814;
LAB_10024907:
  FUN_10060be1(param_2);
  return;
}

