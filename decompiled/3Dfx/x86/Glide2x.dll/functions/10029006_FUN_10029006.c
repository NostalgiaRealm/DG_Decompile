/*
 * FUN_10029006 at 10029006
 * undefined4 __fastcall FUN_10029006(int param_1)
 * Address ranges: 10029006-10029085
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10029006(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  undefined4 extraout_ECX;
  
  bVar1 = FUN_1004105c(*(void **)(*(int *)(param_1 + 0x138) + 0x3180),
                       *(int *)(*(int *)(param_1 + 0x138) + 0x3184),DAT_1005974c,0x17,0x100592bc,
                       (int *)(param_1 + 0x448));
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_10041165(*(void **)(*(int *)(param_1 + 0x138) + 0x3180),
                         *(int *)(*(int *)(param_1 + 0x138) + 0x3184),DAT_1005974c,3,0x10059320,
                         0x10059308,(int *)(param_1 + 0x4a4),param_1 + 0x4b0);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_10041136(extraout_ECX,0x17,param_1 + 0x448);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

