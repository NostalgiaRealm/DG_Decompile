/*
 * FUN_10033ea8 at 10033ea8
 * undefined __cdecl FUN_10033ea8(int param_1, uint param_2, uint param_3, uint param_4, uint * param_5, uint * param_6, uint param_7)
 * Address ranges: 10033ea8-10033f35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl
FUN_10033ea8(int param_1,uint param_2,uint param_3,uint param_4,uint *param_5,uint *param_6,
            uint param_7)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_10033c0c(param_1,param_2,param_3,param_4,(undefined1 (*) [16])&local_20,
               (undefined1 (*) [16])&local_30,param_7);
  uVar1 = FUN_1003396a();
  *param_5 = uVar1;
  uVar2 = FUN_1003396a();
  *param_6 = uVar2;
  bVar3 = false;
  if (uVar1 == uVar2) {
    uVar2 = ~uVar1 & 0xffff;
    *param_6 = uVar2;
    bVar3 = uVar1 == uVar2;
  }
  if (uVar1 < uVar2 || bVar3) {
    if (param_7 != 0) {
      return;
    }
  }
  else if (param_7 == 0) {
    return;
  }
  *param_6 = uVar1;
  *param_5 = uVar2;
  return;
}

