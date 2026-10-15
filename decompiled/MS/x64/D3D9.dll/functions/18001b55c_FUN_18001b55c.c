/*
 * FUN_18001b55c at 18001b55c
 * undefined __fastcall FUN_18001b55c(longlong param_1, undefined4 param_2, int param_3, ulonglong param_4)
 * Address ranges: 18001b55c-18001b6a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b55c(longlong param_1,undefined4 param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if (param_3 == 0x10) {
    uVar3 = FUN_18001b31c(param_1,(int)param_4);
  }
  else {
    if (param_3 != 0x11) {
      if (param_3 == 0x12) {
        if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x87c) == 1) {
          uVar4 = 0;
        }
        else {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x878);
          uVar4 = 1;
          if (((iVar1 - 0x100U & 0xfffffbff) != 0) &&
             (uVar4 = param_4 & 0xffffffff, (iVar1 - 0x300U & 0xfffffeff) == 0)) {
            uVar4 = 2;
          }
        }
      }
      else {
        uVar4 = param_4;
        if (param_3 == 0x15) {
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x878);
          uVar2 = uVar3 & 0xff;
          if ((uVar2 < 0x11) && (uVar4 = param_4 & 0xffffffff, uVar3 != 0)) {
            uVar4 = (ulonglong)uVar2;
          }
        }
        else {
          if (param_3 < 0x13) {
            if (((param_3 == 0x12) || (param_3 == 0xd)) ||
               ((param_3 == 0xe || ((param_3 == 0xf || (param_3 == 0x10)))))) goto LAB_18001b67c;
            bVar5 = param_3 == 0x11;
          }
          else {
            if (((param_3 == 0x13) || (param_3 == 0x14)) || (param_3 == 0x15)) goto LAB_18001b67c;
            bVar5 = param_3 == 0x19;
          }
          if (!bVar5) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))();
            return;
          }
        }
      }
      goto LAB_18001b67c;
    }
    uVar3 = FUN_18001b31c(param_1,(int)param_4);
  }
  uVar4 = (ulonglong)uVar3;
LAB_18001b67c:
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa0))
            (*(longlong **)(param_1 + 0x28),param_2,
             *(undefined4 *)(&DAT_180101238 + (longlong)param_3 * 4),uVar4);
  return;
}

