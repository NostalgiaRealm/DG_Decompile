/*
 * FUN_1800aad08 at 1800aad08
 * undefined __fastcall FUN_1800aad08(longlong param_1, ulonglong param_2, longlong param_3)
 * Address ranges: 1800aad08-1800aad70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aad08(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = (param_2 & 0xffffffff) * 0xc18;
  FUN_1800fbec0((undefined8 *)(param_1 + 0x100c0 + lVar1),(undefined8 *)(param_1 + 0x1c240),0xc00);
  if (param_3 != 0) {
    FUN_1800e0e08(*(longlong *)(param_1 + 0x20),param_3,param_1 + 0x100c0 + lVar1,
                  (undefined8 *)(param_1 + 0x18));
  }
  return;
}

