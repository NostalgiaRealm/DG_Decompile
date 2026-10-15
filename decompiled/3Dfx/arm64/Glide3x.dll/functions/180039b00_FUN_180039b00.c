/*
 * FUN_180039b00 at 180039b00
 * undefined8 __cdecl FUN_180039b00(longlong param_1, byte * param_2, uint param_3)
 * Address ranges: 180039b00-180039b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180039b00(longlong param_1,byte *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180063e48(param_2,&DAT_180065440,0x10);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else {
    iVar1 = FUN_180063e48(param_2,&DAT_180065450,0x10);
    if (iVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
    }
    else {
      iVar1 = FUN_180063e48(param_2,&DAT_180065460,0x10);
      if (iVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x48);
      }
      else {
        iVar1 = FUN_180063e48(param_2,&DAT_180065470,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
    }
  }
  return *(undefined8 *)(lVar2 + (ulonglong)param_3 * 8);
}

