/*
 * FUN_1006b398 at 1006b398
 * undefined FUN_1006b398(void)
 * Address ranges: 1006b398-1006b457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1006b398(undefined8 param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_4 != 0xffffffff) {
    bVar1 = false;
    if (param_5 - 1U < 2) {
      bVar1 = (uint)*(ushort *)(param_2 + param_4 * 0x10 + 4) == ((param_6 & 0xff) << 8 | 0x30);
    }
    if (((param_5 == 3) &&
        ((uint)*(ushort *)(param_2 + param_4 * 0x10 + 6) == ((param_6 & 0xff) << 8 | 0x30))) ||
       (bVar1)) {
      if (((1 << (ulonglong)(param_4 & 0x1f)) - 1U & param_3) == 0) {
        uVar2 = 1;
      }
      else {
        uVar3 = 0;
        if (0 < (int)param_4) {
          do {
            if ((*(ushort *)(param_2 + uVar3 * 0x10) & 0xf0) == 0x10) {
              return 0;
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < (int)param_4);
        }
        if (uVar3 == param_4) {
          *(undefined2 *)(param_2 + uVar3 * 0x10) = 0;
        }
      }
    }
  }
  return uVar2;
}

