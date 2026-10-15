/*
 * FUN_10024aad at 10024aad
 * undefined __fastcall FUN_10024aad(int * param_1, uint param_2, uint param_3, uint param_4, uint param_5, byte param_6, byte param_7, byte param_8, void * param_9)
 * Address ranges: 10024aad-10024b5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10024aad(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6,
            byte param_7,byte param_8,void *param_9)

{
  uint uVar1;
  
  if ((param_2 & 0x4000) == 0) {
    if ((param_3 & 0x4000) == 0) {
      uVar1 = 0;
      goto LAB_10024af7;
    }
    uVar1 = FUN_10023d0e(param_1,param_3,param_5,param_2,param_4,0,param_7,param_9);
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = FUN_10023d0e(param_1,param_2,param_5,param_3,param_4,0,param_7,param_9);
    param_2 = uVar1 & 0xffff;
    uVar1 = param_2;
    if ((param_3 & 0x4000) == 0) goto LAB_10024af7;
  }
  param_3 = uVar1;
  uVar1 = param_3;
LAB_10024af7:
  if ((param_4 & 0x4000) != 0) {
    param_4 = uVar1;
  }
  FUN_1002426b(param_1,(ushort)param_2,(short)param_3,(short)param_4,param_5,param_6,param_7,param_8
               ,param_9,'\x01',1);
  if ((short)uVar1 != (short)param_5) {
    FUN_10023c8c((int)param_1,uVar1);
  }
  return;
}

