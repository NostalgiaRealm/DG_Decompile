/*
 * FUN_180102e08 at 180102e08
 * undefined FUN_180102e08(void)
 * Address ranges: 180102e08-180102ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180102e08(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = func_0x000180222c00(param_2,&DAT_180229448,0x10);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else {
    iVar1 = func_0x000180222c00(param_2,&DAT_180229458,0x10);
    if (iVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
    }
    else {
      iVar1 = func_0x000180222c00(param_2,&DAT_180229468,0x10);
      if (iVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x48);
      }
      else {
        iVar1 = func_0x000180222c00(param_2,&DAT_180229478,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
    }
  }
  return *(undefined8 *)(lVar2 + (ulonglong)param_3 * 8);
}

