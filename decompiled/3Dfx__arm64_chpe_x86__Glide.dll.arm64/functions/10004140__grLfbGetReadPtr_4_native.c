/*
 * _grLfbGetReadPtr@4_native at 10004140
 * undefined _grLfbGetReadPtr@4_native(void)
 * Address ranges: 10004140-100041e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grLfbGetReadPtr_4_native(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  int local_3c;
  
  if (param_1 < 3) {
    iVar3 = (&DAT_1009f7d8)[param_1];
    DAT_1009f7e4._0_4_ = param_1;
    if (iVar3 == 0) {
      local_40 = 0x14;
      uVar1 = FUN_1001beb0();
      iVar2 = FUN_1001d6a8(uVar1,0,param_1,DAT_1009f7c4,DAT_1009f7c8,DAT_1009f7c0,&local_40);
      if ((iVar2 != 0) &&
         ((&DAT_1009f7d8)[param_1] = local_3c, iVar3 = local_3c, DAT_1009f7ec == '\0')) {
        uVar1 = FUN_1001beb0();
        FUN_1001d768(uVar1,0,param_1);
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

