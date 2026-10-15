/*
 * FUN_18000acc4 at 18000acc4
 * ulonglong __fastcall FUN_18000acc4(longlong param_1, ulonglong param_2)
 * Address ranges: 18000acc4-18000ad05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000acc4(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  uVar2 = (uint)param_2;
  if (iVar1 == 0) {
    uVar2 = uVar2 >> 0x18 | uVar2 << 8;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 3) {
        return param_2 & 0xffffffff;
      }
      return (ulonglong)
             ((uint)(param_2 >> 0x10) & 0xff00 | (uVar2 & 0xffffff00) << 0x10 | uVar2 & 0xff00ff);
    }
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  return (ulonglong)uVar2;
}

