/*
 * FUN_18002f854 at 18002f854
 * undefined1 __fastcall FUN_18002f854(longlong param_1)
 * Address ranges: 18002f854-18002f91a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18002f854(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (DAT_1801128d8 != 0) {
    do {
      if (DAT_1801128d0[uVar5] == param_1) {
        if ((int)uVar5 != -1) {
          return 1;
        }
        break;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < DAT_1801128d8);
  }
  if (DAT_1801128d8 == DAT_1801128dc) {
    uVar5 = 0x10;
    if (DAT_1801128dc != 0) {
      uVar5 = (ulonglong)(DAT_1801128dc * 2);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar5;
    uVar2 = SUB168(ZEXT816(8) * auVar1,0);
    if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    puVar3 = (undefined8 *)thunk_FUN_1800fbccc(uVar2);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_1800fbec0(puVar3,DAT_1801128d0,(ulonglong)DAT_1801128dc << 3);
    FUN_1800fbcf0(DAT_1801128d0);
    DAT_1801128d0 = puVar3;
    DAT_1801128dc = (uint)uVar5;
  }
  DAT_1801128d0[DAT_1801128d8] = param_1;
  DAT_1801128d8 = DAT_1801128d8 + 1;
  return 1;
}

