/*
 * FUN_10047150 at 10047150
 * undefined FUN_10047150(void)
 * Address ranges: 10047150-100471ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10047150(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_1007e450(param_2,&DAT_10098470,0x10);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x1c);
  }
  else {
    iVar1 = FUN_1007e450(param_2,&DAT_10098480,0x10);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x28);
    }
    else {
      iVar1 = FUN_1007e450(param_2,&DAT_10098490,0x10);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)(param_1 + 0x34);
      }
      else {
        iVar1 = FUN_1007e450(param_2,&DAT_100984a0,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        puVar2 = (undefined4 *)(param_1 + 0x40);
      }
    }
  }
  return *puVar2;
}

