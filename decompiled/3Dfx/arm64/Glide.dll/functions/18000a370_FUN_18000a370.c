/*
 * FUN_18000a370 at 18000a370
 * undefined4 __cdecl FUN_18000a370(longlong param_1, byte * param_2)
 * Address ranges: 18000a370-18000a377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18000a370(longlong param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_180061160(param_2,&DAT_180062440,0x10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    iVar1 = FUN_180061160(param_2,&DAT_180062450,0x10);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar1 = FUN_180061160(param_2,&DAT_180062460,0x10);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
      }
      else {
        uVar2 = 0;
        iVar1 = FUN_180061160(param_2,&DAT_180062470,0x10);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x60);
        }
      }
    }
  }
  return uVar2;
}

