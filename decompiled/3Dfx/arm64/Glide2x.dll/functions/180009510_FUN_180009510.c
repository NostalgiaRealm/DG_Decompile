/*
 * FUN_180009510 at 180009510
 * undefined8 __cdecl FUN_180009510(longlong param_1, undefined8 param_2, uint param_3)
 * Address ranges: 180009510-180009517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180009510(longlong param_1,byte *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180060310(param_2,&DAT_180061440,0x10);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else {
    iVar1 = FUN_180060310(param_2,&DAT_180061450,0x10);
    if (iVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
    }
    else {
      iVar1 = FUN_180060310(param_2,&DAT_180061460,0x10);
      if (iVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x48);
      }
      else {
        iVar1 = FUN_180060310(param_2,&DAT_180061470,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
    }
  }
  return *(undefined8 *)(lVar2 + (ulonglong)param_3 * 8);
}

