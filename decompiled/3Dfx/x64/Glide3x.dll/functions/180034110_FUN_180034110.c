/*
 * FUN_180034110 at 180034110
 * undefined8 __fastcall FUN_180034110(longlong param_1, byte * param_2, ulonglong param_3)
 * Address ranges: 180034110-1800341ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180034110(longlong param_1,byte *param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180060f70(param_2,&DAT_1800624e0,0x10);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else {
    iVar1 = FUN_180060f70(param_2,&DAT_1800624f0,0x10);
    if (iVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
    }
    else {
      iVar1 = FUN_180060f70(param_2,&DAT_180062500,0x10);
      if (iVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x48);
      }
      else {
        iVar1 = FUN_180060f70(param_2,&DAT_180062510,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
    }
  }
  return *(undefined8 *)(lVar2 + (param_3 & 0xffffffff) * 8);
}

