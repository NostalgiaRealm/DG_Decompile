/*
 * FUN_180102d58 at 180102d58
 * undefined FUN_180102d58(void)
 * Address ranges: 180102d58-180102e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180102d58(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x000180222c00(param_2,&DAT_180229448,0x10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    iVar1 = func_0x000180222c00(param_2,&DAT_180229458,0x10);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar1 = func_0x000180222c00(param_2,&DAT_180229468,0x10);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
      }
      else {
        uVar2 = 0;
        iVar1 = func_0x000180222c00(param_2,&DAT_180229478,0x10);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x60);
        }
      }
    }
  }
  return uVar2;
}

