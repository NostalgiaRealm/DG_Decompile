/*
 * FUN_10009c30 at 10009c30
 * undefined FUN_10009c30(void)
 * Address ranges: 10009c30-10009cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10009c30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_1007abb0(param_2,&DAT_10094620,0x10);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x1c);
  }
  else {
    iVar1 = FUN_1007abb0(param_2,&DAT_10094630,0x10);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x28);
    }
    else {
      iVar1 = FUN_1007abb0(param_2,&DAT_10094640,0x10);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)(param_1 + 0x34);
      }
      else {
        iVar1 = FUN_1007abb0(param_2,&DAT_10094650,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        puVar2 = (undefined4 *)(param_1 + 0x40);
      }
    }
  }
  return *puVar2;
}

