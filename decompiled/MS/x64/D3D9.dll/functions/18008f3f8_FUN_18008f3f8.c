/*
 * FUN_18008f3f8 at 18008f3f8
 * bool __fastcall FUN_18008f3f8(longlong param_1)
 * Address ranges: 18008f3f8-18008f503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18008f3f8(longlong param_1)

{
  uint uVar1;
  uint xRight;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_48 [10];
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    FUN_1800ac794(param_1,(undefined8 *)local_48);
    FUN_18008dfa8((longlong *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x24),
                  *(undefined4 *)(param_1 + 0x28),*(uint *)(param_1 + 0x30),
                  *(uint *)(param_1 + 0x34),1,local_48[0],0,0,0,3,0,0x30000,0,0,'\0','\0');
    uVar4 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      do {
        uVar3 = 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          do {
            iVar2 = (int)uVar3;
            uVar1 = FUN_1800ac758(param_1,*(uint *)(param_1 + 0x28),(byte)uVar3);
            xRight = FUN_1800ac71c(param_1,*(uint *)(param_1 + 0x24),(byte)uVar3);
            SetRect((LPRECT)(*(longlong *)(param_1 + 0x90) +
                             (ulonglong)(uint)((int)uVar4 * *(int *)(param_1 + 0x3c) + iVar2) * 0x28
                            + 0x18),0,0,xRight,uVar1);
            uVar1 = iVar2 + 1;
            uVar3 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(param_1 + 0x30));
        }
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x34));
    }
  }
  return *(longlong *)(param_1 + 0xb8) != 0;
}

