/*
 * FUN_180006e54 at 180006e54
 * undefined4 __fastcall FUN_180006e54(longlong param_1, byte * param_2)
 * Address ranges: 180006e54-180006ede
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180006e54(longlong param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_18005f350(param_2,&DAT_180060468,0x10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    iVar1 = FUN_18005f350(param_2,&DAT_180060478,0x10);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar1 = FUN_18005f350(param_2,&DAT_180060488,0x10);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
      }
      else {
        uVar2 = 0;
        iVar1 = FUN_18005f350(param_2,&DAT_180060498,0x10);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x60);
        }
      }
    }
  }
  return uVar2;
}

