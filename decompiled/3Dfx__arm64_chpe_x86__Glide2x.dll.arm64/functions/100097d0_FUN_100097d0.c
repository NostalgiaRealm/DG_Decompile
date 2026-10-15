/*
 * FUN_100097d0 at 100097d0
 * undefined FUN_100097d0(void)
 * Address ranges: 100097d0-1000987f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100097d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_1007a730(param_2,&DAT_100945f0,0x10);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x1c);
  }
  else {
    iVar1 = FUN_1007a730(param_2,&DAT_10094600,0x10);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x28);
    }
    else {
      iVar1 = FUN_1007a730(param_2,&DAT_10094610,0x10);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)(param_1 + 0x34);
      }
      else {
        iVar1 = FUN_1007a730(param_2,&DAT_10094620,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        puVar2 = (undefined4 *)(param_1 + 0x40);
      }
    }
  }
  return *puVar2;
}

