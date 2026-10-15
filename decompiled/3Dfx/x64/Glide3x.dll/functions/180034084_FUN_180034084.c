/*
 * FUN_180034084 at 180034084
 * undefined4 __fastcall FUN_180034084(longlong param_1, byte * param_2)
 * Address ranges: 180034084-18003410e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180034084(longlong param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_180060f70(param_2,&DAT_1800624e0,0x10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    iVar1 = FUN_180060f70(param_2,&DAT_1800624f0,0x10);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar1 = FUN_180060f70(param_2,&DAT_180062500,0x10);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
      }
      else {
        uVar2 = 0;
        iVar1 = FUN_180060f70(param_2,&DAT_180062510,0x10);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x60);
        }
      }
    }
  }
  return uVar2;
}

