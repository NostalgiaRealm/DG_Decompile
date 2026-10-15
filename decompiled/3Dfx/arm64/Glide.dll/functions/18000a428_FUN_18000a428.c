/*
 * FUN_18000a428 at 18000a428
 * undefined8 __cdecl FUN_18000a428(longlong param_1, byte * param_2, uint param_3)
 * Address ranges: 18000a428-18000a4d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000a428(longlong param_1,byte *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180061160(param_2,&DAT_180062440,0x10);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else {
    iVar1 = FUN_180061160(param_2,&DAT_180062450,0x10);
    if (iVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
    }
    else {
      iVar1 = FUN_180061160(param_2,&DAT_180062460,0x10);
      if (iVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x48);
      }
      else {
        iVar1 = FUN_180061160(param_2,&DAT_180062470,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
    }
  }
  return *(undefined8 *)(lVar2 + (ulonglong)param_3 * 8);
}

