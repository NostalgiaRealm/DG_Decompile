/*
 * FUN_1800a4128 at 1800a4128
 * undefined __fastcall FUN_1800a4128(longlong * param_1)
 * Address ranges: 1800a4128-1800a417d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a4128(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 0x38);
  lVar1 = *(longlong *)(lVar2 + 0x1cf10);
  lVar2 = (ulonglong)*(uint *)(lVar2 + 0x28) * 0x1ac0;
  FUN_1800e52e4(*(longlong *)(lVar2 + 0x1e08 + lVar1),*(ulonglong *)(*param_1 + 0x40),
                *(uint *)(param_1 + 1),lVar1 + 0x1fd0 + lVar2,(longlong)param_1 + 0xc,
                (undefined8 *)((longlong)param_1 + 0x3c));
  return;
}

