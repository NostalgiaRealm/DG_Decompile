/*
 * FUN_180067160 at 180067160
 * uint * __fastcall FUN_180067160(undefined8 param_1, uint * param_2, uint * param_3, longlong * param_4, ushort param_5)
 * Address ranges: 180067160-1800671f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180067160(undefined8 param_1,uint *param_2,uint *param_3,longlong *param_4,ushort param_5
                    )

{
  uint uVar1;
  
  *param_2 = 0;
  param_2[4] = 0xffffffff;
  param_2[5] = 0xffffffff;
  param_2[6] = 0xffffffff;
  param_2[7] = 0xffffffff;
  *(undefined1 *)(param_2 + 1) = 0xe4;
  uVar1 = param_5 & 0xf0;
  if (uVar1 == 0x10) {
    FUN_180067058(0x10,param_3,param_4);
    uVar1 = param_3[0x86];
  }
  else {
    if (uVar1 != 0x20) {
      if (uVar1 != 0xb0) {
        return param_2;
      }
      *param_2 = (int)(uint)param_5 >> 10 | 0x410000;
      return param_2;
    }
    uVar1 = param_3[0x87];
    if (uVar1 == 0) {
      uVar1 = FUN_1800ec8c0((longlong)param_3,4,'\x01');
      param_3[0x87] = uVar1;
    }
  }
  *param_2 = uVar1;
  return param_2;
}

