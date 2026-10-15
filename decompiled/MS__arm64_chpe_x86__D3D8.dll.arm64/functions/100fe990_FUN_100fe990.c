/*
 * FUN_100fe990 at 100fe990
 * undefined FUN_100fe990(void)
 * Address ranges: 100fe990-100fea3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100fe990(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_100ff610(param_2,&DAT_10129030,0x10);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x1c);
  }
  else {
    iVar1 = FUN_100ff610(param_2,&DAT_10129040,0x10);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x28);
    }
    else {
      iVar1 = FUN_100ff610(param_2,&DAT_10129050,0x10);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)(param_1 + 0x34);
      }
      else {
        iVar1 = FUN_100ff610(param_2,&DAT_10129060,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        puVar2 = (undefined4 *)(param_1 + 0x40);
      }
    }
  }
  return *puVar2;
}

