/*
 * FUN_10131f60 at 10131f60
 * undefined FUN_10131f60(void)
 * Address ranges: 10131f60-1013200f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10131f60(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_10132550(param_2,&DAT_1015e3c0,0x10);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x1c);
  }
  else {
    iVar1 = FUN_10132550(param_2,&DAT_1015e3d0,0x10);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x28);
    }
    else {
      iVar1 = FUN_10132550(param_2,&DAT_1015e3e0,0x10);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)(param_1 + 0x34);
      }
      else {
        iVar1 = FUN_10132550(param_2,&DAT_1015e3f0,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        puVar2 = (undefined4 *)(param_1 + 0x40);
      }
    }
  }
  return *puVar2;
}

