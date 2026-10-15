/*
 * FUN_180221430 at 180221430
 * undefined FUN_180221430(void)
 * Address ranges: 180221430-1802214db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180221430(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_180222c00(param_2,&DAT_1802290c0,0x10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    iVar1 = FUN_180222c00(param_2,&DAT_1802290d0,0x10);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar1 = FUN_180222c00(param_2,&DAT_1802290e0,0x10);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
      }
      else {
        uVar2 = 0;
        iVar1 = FUN_180222c00(param_2,&DAT_1802290f0,0x10);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x60);
        }
      }
    }
  }
  return uVar2;
}

