/*
 * FUN_1000440d at 1000440d
 * int __fastcall FUN_1000440d(uint param_1, int param_2, int param_3, int param_4, uint param_5)
 * Address ranges: 1000440d-1000446c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1000440d(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  uint extraout_EDX;
  int local_8;
  
  local_8 = 0;
  for (; param_2 <= param_3; param_3 = param_3 + -1) {
    bVar1 = FUN_10004385((byte)param_3,param_1 & 3);
    if (bVar1) {
      FUN_1000435d(param_3,param_4);
      uVar2 = FUN_100054be(param_5);
      local_8 = local_8 + CONCAT31(extraout_var,uVar2) * (extraout_EDX >> 0x10) *
                          (extraout_EDX & 0xffff);
    }
  }
  return local_8;
}

