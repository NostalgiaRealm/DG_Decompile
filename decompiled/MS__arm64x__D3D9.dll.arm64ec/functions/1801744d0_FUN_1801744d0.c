/*
 * FUN_1801744d0 at 1801744d0
 * undefined FUN_1801744d0(void)
 * Address ranges: 1801744d0-18017456b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801744d0(undefined8 param_1,longlong param_2,uint param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 == 0) {
    if ((param_3 & 0x1800 | param_3 >> 0x14 & 0x7ff) >> 8 == 3) {
      param_4 = FUN_180174498(param_1,param_2);
    }
    else {
      lVar1 = param_2 + (ulonglong)(param_3 & 0x7ff) * 4;
      param_4 = *(int *)(lVar1 + 0x218);
      if (param_4 == 0) {
        param_4 = FUN_180213760(param_2,4,1);
        *(int *)(lVar1 + 0x218) = param_4;
      }
    }
  }
  *(int *)(param_2 + 0x340) = param_4;
  *(byte *)(param_2 + 0x344) = (byte)(param_3 >> 0x10) & 0xf;
  *(undefined8 *)(param_2 + 0x350) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x358) = 0xffffffffffffffff;
  *(uint *)(param_2 + 0x330) = param_3 >> 7 & 0x2000;
  *(uint *)(param_2 + 0x334) = param_3 >> 0x18 & 0xf;
  return;
}

