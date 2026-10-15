/*
 * FUN_10091020 at 10091020
 * undefined FUN_10091020(void)
 * Address ranges: 10091020-100910cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10091020(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_10091750(param_2,&DAT_100b17a0,0x10);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x1c);
  }
  else {
    iVar1 = FUN_10091750(param_2,&DAT_100b17b0,0x10);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x28);
    }
    else {
      iVar1 = FUN_10091750(param_2,&DAT_100b17c0,0x10);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)(param_1 + 0x34);
      }
      else {
        iVar1 = FUN_10091750(param_2,&DAT_100b17d0,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        puVar2 = (undefined4 *)(param_1 + 0x40);
      }
    }
  }
  return *puVar2;
}

