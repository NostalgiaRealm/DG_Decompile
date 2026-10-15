/*
 * FUN_140008af0 at 140008af0
 * undefined __fastcall FUN_140008af0(longlong param_1)
 * Address ranges: 140008af0-140008b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140008af0(longlong param_1)

{
  int iVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  byte local_88 [128];
  
  iVar1 = FUN_14000e460(param_1,0x40e);
  if (iVar1 == -1) {
    FUN_14002511c(local_88,0,0x80);
    FUN_14000e1c0(param_1,0x40e,(LPARAM)local_88,0x80);
    local_res18[0] = 0;
    iVar1 = FUN_1400242b4(local_88,(byte *)" %d %c",local_res18,local_res10);
    if (iVar1 == 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xef) = local_res18[0];
    }
  }
  return;
}

