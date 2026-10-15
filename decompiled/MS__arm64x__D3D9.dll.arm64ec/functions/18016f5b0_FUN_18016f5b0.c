/*
 * FUN_18016f5b0 at 18016f5b0
 * undefined FUN_18016f5b0(void)
 * Address ranges: 18016f5b0-18016f663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18016f5b0(undefined8 param_1,longlong param_2,uint param_3,uint param_4,int param_5,
             short param_6)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (param_4 != 0xffffffff) {
    if ((param_5 == 2) || (bVar2 = false, param_5 == 1)) {
      bVar2 = *(ushort *)(param_2 + (longlong)(int)param_4 * 0x10 + 4) ==
              (ushort)(param_6 << 8 | 0x30U);
    }
    if ((param_5 == 3) &&
       (*(ushort *)(param_2 + (longlong)(int)param_4 * 0x10 + 6) == (ushort)(param_6 << 8 | 0x30U)))
    {
      bVar2 = true;
    }
    if (bVar2) {
      if (((1 << (ulonglong)(param_4 & 0x1f)) - 1U & param_3) == 0) {
        uVar3 = 1;
      }
      else {
        uVar4 = 0;
        if (0 < (int)param_4) {
          do {
            if ((*(ushort *)(param_2 + uVar4 * 0x10) & 0xf0) == 0x10) {
              return 0;
            }
            uVar1 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar1;
          } while ((int)uVar1 < (int)param_4);
        }
        if ((uint)uVar4 == param_4) {
          *(undefined2 *)(param_2 + (-(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4)) = 0;
        }
      }
    }
  }
  return uVar3;
}

