/*
 * FUN_18016efd0 at 18016efd0
 * undefined FUN_18016efd0(void)
 * Address ranges: 18016efd0-18016f037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016efd0(undefined8 param_1,longlong param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  
  uVar1 = (ushort)param_3 & 0xff;
  if ((*(ushort *)(((ulonglong)param_4 & 0xff) * 0x80 + 0x100 + (ulonglong)param_3 * 0x10 + param_2)
      & 0xf0) == 0x20) {
    if ((param_4 & 1) == 0) {
      *(ushort *)(param_2 + 0x542) = uVar1 | 0xa0;
    }
    else {
      *(ushort *)(param_2 + 0x54a) = uVar1 | 0x1a0;
    }
  }
  else if ((param_4 & 1) == 0) {
    *(ushort *)(param_2 + 0x540) = uVar1 | 0xa0;
  }
  else {
    *(ushort *)(param_2 + 0x548) = uVar1 | 0x1a0;
  }
  return;
}

