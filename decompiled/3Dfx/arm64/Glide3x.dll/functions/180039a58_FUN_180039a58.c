/*
 * FUN_180039a58 at 180039a58
 * undefined4 __cdecl FUN_180039a58(longlong param_1, byte * param_2)
 * Address ranges: 180039a58-180039afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180039a58(longlong param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_180063e48(param_2,&DAT_180065440,0x10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    iVar1 = FUN_180063e48(param_2,&DAT_180065450,0x10);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar1 = FUN_180063e48(param_2,&DAT_180065460,0x10);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
      }
      else {
        uVar2 = 0;
        iVar1 = FUN_180063e48(param_2,&DAT_180065470,0x10);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x60);
        }
      }
    }
  }
  return uVar2;
}

