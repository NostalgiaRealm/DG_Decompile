/*
 * FUN_1802214e0 at 1802214e0
 * undefined FUN_1802214e0(void)
 * Address ranges: 1802214e0-180221593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802214e0(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180222c00(param_2,&DAT_1802290c0,0x10);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else {
    iVar1 = FUN_180222c00(param_2,&DAT_1802290d0,0x10);
    if (iVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
    }
    else {
      iVar1 = FUN_180222c00(param_2,&DAT_1802290e0,0x10);
      if (iVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x48);
      }
      else {
        iVar1 = FUN_180222c00(param_2,&DAT_1802290f0,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
    }
  }
  return *(undefined8 *)(lVar2 + (ulonglong)param_3 * 8);
}

