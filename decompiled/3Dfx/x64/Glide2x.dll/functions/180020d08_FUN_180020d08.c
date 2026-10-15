/*
 * FUN_180020d08 at 180020d08
 * undefined __fastcall FUN_180020d08(longlong param_1, uint * param_2)
 * Address ranges: 180020d08-180020d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020d08(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 8);
  FUN_18003fec0(param_1,&local_18,param_2,*(uint *)(lVar2 + 0xae),*(uint *)(lVar2 + 0xb2),
                *(uint *)(lVar2 + 0xb6),*(uint *)(lVar2 + 0xba));
  SetRect((LPRECT)(lVar1 + 0xcc),local_18,local_14,local_10,local_c);
  return;
}

