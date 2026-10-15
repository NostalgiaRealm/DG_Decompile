/*
 * FUN_1004c810 at 1004c810
 * undefined FUN_1004c810(void)
 * Address ranges: 1004c810-1004c8bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004c810(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_10083af0(param_2,&DAT_1009e7b0,0x10);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x1c);
  }
  else {
    iVar1 = FUN_10083af0(param_2,&DAT_1009e7c0,0x10);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x28);
    }
    else {
      iVar1 = FUN_10083af0(param_2,&DAT_1009e7d0,0x10);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)(param_1 + 0x34);
      }
      else {
        iVar1 = FUN_10083af0(param_2,&DAT_1009e7e0,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        puVar2 = (undefined4 *)(param_1 + 0x40);
      }
    }
  }
  return *puVar2;
}

