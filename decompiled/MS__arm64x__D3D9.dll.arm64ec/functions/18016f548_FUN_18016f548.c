/*
 * FUN_18016f548 at 18016f548
 * undefined FUN_18016f548(void)
 * Address ranges: 18016f548-18016f5ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016f548(undefined8 param_1,longlong param_2,ushort *param_3,uint *param_4,uint *param_5)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_3;
  if ((uVar1 & 0xf0) == 0xa0) {
    uVar3 = (ulonglong)(uVar1 & 7);
    uVar2 = 1 << uVar3;
    if ((uVar1 >> 8 & 1) == 0) {
      *param_4 = *param_4 | uVar2;
      lVar4 = 0x100;
    }
    else {
      *param_5 = *param_5 | uVar2;
      lVar4 = 0x180;
    }
    *param_3 = *(ushort *)(lVar4 + param_2 + uVar3 * 0x10) | (ushort)((uVar1 & 0x200) != 0) << 9;
  }
  return;
}

