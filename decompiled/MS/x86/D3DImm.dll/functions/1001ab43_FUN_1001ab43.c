/*
 * FUN_1001ab43 at 1001ab43
 * undefined4 __fastcall FUN_1001ab43(int param_1)
 * Address ranges: 1001ab43-1001abae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001ab43(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  bVar1 = FUN_1005338a(param_1,0x1e,0x100611b0,param_1 + 4);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_1005338a(extraout_ECX,0,0x1006b7c8,param_1 + 0xb0);
    if (bVar1) {
      bVar1 = FUN_1005338a(extraout_ECX_00,0xd,0x10061194,param_1 + 0x7c);
      if (bVar1) {
        bVar1 = FUN_1005338a(extraout_ECX_01,1,0x10061190,param_1 + 0xb8);
        if (bVar1) {
          return CONCAT31(extraout_var_00,1);
        }
      }
    }
    FUN_1001abaf(param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

