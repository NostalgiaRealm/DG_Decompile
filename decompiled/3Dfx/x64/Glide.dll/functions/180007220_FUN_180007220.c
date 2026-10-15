/*
 * FUN_180007220 at 180007220
 * undefined8 __fastcall FUN_180007220(longlong param_1, byte * param_2, ulonglong param_3)
 * Address ranges: 180007220-1800072bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180007220(longlong param_1,byte *param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18005f7f0(param_2,&DAT_180060468,0x10);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else {
    iVar1 = FUN_18005f7f0(param_2,&DAT_180060478,0x10);
    if (iVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
    }
    else {
      iVar1 = FUN_18005f7f0(param_2,&DAT_180060488,0x10);
      if (iVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x48);
      }
      else {
        iVar1 = FUN_18005f7f0(param_2,&DAT_180060498,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
    }
  }
  return *(undefined8 *)(lVar2 + (param_3 & 0xffffffff) * 8);
}

