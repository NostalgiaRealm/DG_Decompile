/*
 * _grLfbGetWritePtr@4_native at 100041f0
 * undefined _grLfbGetWritePtr@4_native(void)
 * Address ranges: 100041f0-10004293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grLfbGetWritePtr_4_native(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  int local_3c;
  
  if (param_1 < 3) {
    iVar3 = (&DAT_1009f7cc)[param_1];
    DAT_1009f7e4._4_4_ = param_1;
    if (iVar3 == 0) {
      local_40 = 0x14;
      uVar1 = FUN_1001beb0();
      iVar2 = FUN_1001d6a8(uVar1,1,param_1,DAT_1009f7c4,DAT_1009f7c8,DAT_1009f7c0,&local_40);
      if ((iVar2 != 0) &&
         ((&DAT_1009f7cc)[param_1] = local_3c, iVar3 = local_3c, DAT_1009f7ec == '\0')) {
        uVar1 = FUN_1001beb0();
        FUN_1001d768(uVar1,1,param_1);
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

