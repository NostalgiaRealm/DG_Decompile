/*
 * FUN_10021349 at 10021349
 * undefined4 __fastcall FUN_10021349(int param_1)
 * Address ranges: 10021349-100213c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10021349(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  undefined4 extraout_ECX;
  
  bVar1 = FUN_10046f4d(*(void **)(*(int *)(param_1 + 0x138) + 0x3680),
                       *(int *)(*(int *)(param_1 + 0x138) + 0x3684),DAT_1005fa00,0x17,0x1005f30c,
                       (int *)(param_1 + 0x858));
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_10047056(*(void **)(*(int *)(param_1 + 0x138) + 0x3680),
                         *(int *)(*(int *)(param_1 + 0x138) + 0x3684),DAT_1005fa00,3,0x1005f370,
                         0x1005f358,(int *)(param_1 + 0x8b4),param_1 + 0x8c0);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_10047027(extraout_ECX,0x17,param_1 + 0x858);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

