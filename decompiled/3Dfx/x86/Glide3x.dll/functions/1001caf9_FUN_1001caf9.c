/*
 * FUN_1001caf9 at 1001caf9
 * undefined4 __fastcall FUN_1001caf9(int param_1)
 * Address ranges: 1001caf9-1001cb78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1001caf9(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  undefined4 extraout_ECX;
  
  bVar1 = FUN_10043b44(*(void **)(*(int *)(param_1 + 0x138) + 0x3300),
                       *(int *)(*(int *)(param_1 + 0x138) + 0x3304),DAT_1005b820,0x17,0x1005b13c,
                       (int *)(param_1 + 0x858));
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_10043c4d(*(void **)(*(int *)(param_1 + 0x138) + 0x3300),
                         *(int *)(*(int *)(param_1 + 0x138) + 0x3304),DAT_1005b820,3,0x1005b1a0,
                         0x1005b188,(int *)(param_1 + 0x8b4),param_1 + 0x8c0);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_10043c1e(extraout_ECX,0x17,param_1 + 0x858);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

