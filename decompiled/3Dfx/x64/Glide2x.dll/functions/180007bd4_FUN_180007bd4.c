/*
 * FUN_180007bd4 at 180007bd4
 * ulonglong __fastcall FUN_180007bd4(longlong param_1)
 * Address ranges: 180007bd4-180007c2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180007bd4(longlong param_1)

{
  ulonglong uVar1;
  uint local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
                    (*(longlong **)(param_1 + 0x38),0x1000,*(undefined8 *)(param_1 + 0x30),
                     local_res8);
  if ((int)uVar1 == 0) {
    *(bool *)(param_1 + 0x50) = local_res8[0] == 0;
    *(ulonglong *)(param_1 + 0x48) = (ulonglong)local_res8[0] + *(longlong *)(param_1 + 0x30);
    uVar1 = -(ulonglong)(local_res8[0] != 0) & *(ulonglong *)(param_1 + 0x30);
    *(ulonglong *)(param_1 + 0x40) = uVar1;
    uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}

