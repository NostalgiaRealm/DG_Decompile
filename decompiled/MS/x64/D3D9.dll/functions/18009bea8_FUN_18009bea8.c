/*
 * FUN_18009bea8 at 18009bea8
 * undefined __fastcall FUN_18009bea8(longlong param_1)
 * Address ranges: 18009bea8-18009bf2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009bea8(longlong param_1)

{
  uint yBottom;
  uint xRight;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      uVar1 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        do {
          bVar3 = (byte)uVar1;
          yBottom = FUN_1800ac758(param_1,*(uint *)(param_1 + 0x28),bVar3);
          xRight = FUN_1800ac71c(param_1,*(uint *)(param_1 + 0x24),bVar3);
          SetRect((LPRECT)(((ulonglong)(uVar2 * *(int *)(param_1 + 0x3c) + uVar1) << 5 | 0x10) +
                          *(longlong *)(param_1 + 0x84)),0,0,xRight,yBottom);
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 0x30));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x34));
  }
  return;
}

