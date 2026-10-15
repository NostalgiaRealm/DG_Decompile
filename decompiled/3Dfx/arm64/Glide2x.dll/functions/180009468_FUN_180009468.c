/*
 * FUN_180009468 at 180009468
 * undefined4 __cdecl FUN_180009468(longlong param_1, byte * param_2)
 * Address ranges: 180009468-18000950b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180009468(longlong param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_180060310(param_2,&DAT_180061440,0x10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    iVar1 = FUN_180060310(param_2,&DAT_180061450,0x10);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar1 = FUN_180060310(param_2,&DAT_180061460,0x10);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
      }
      else {
        uVar2 = 0;
        iVar1 = FUN_180060310(param_2,&DAT_180061470,0x10);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x60);
        }
      }
    }
  }
  return uVar2;
}

