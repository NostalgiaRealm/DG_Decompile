/*
 * FUN_100513e8 at 100513e8
 * undefined FUN_100513e8(void)
 * Address ranges: 100513e8-10051497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100513e8(undefined4 *param_1,undefined4 param_2,ulonglong param_3,ulonglong param_4,int *param_5
            ,ulonglong param_6,ulonglong param_7)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong extraout_x10;
  undefined4 *extraout_w11;
  undefined4 local_80 [32];
  
  if ((param_5 == (int *)0x0) || (*param_5 != 0x6c)) {
    uVar2 = FUN_1003f268(*param_1,param_2,param_3 & 0xffffffff,param_4 & 0xffffffff,param_5,
                         param_6 & 0xffffffff,param_7 & 0xffffffff,0,0);
  }
  else {
    cVar1 = FUN_1004ca20(param_5,local_80);
    uVar2 = 0x6c;
    if (cVar1 != '\0') {
      uVar2 = local_80[0];
    }
    local_80[0] = uVar2;
    uVar2 = FUN_1003f268(*extraout_w11,extraout_x10 & 0xffffffff,param_3 & 0xffffffff,
                         param_4 & 0xffffffff,local_80,param_6 & 0xffffffff,param_7 & 0xffffffff,0,0
                        );
  }
  return uVar2;
}

