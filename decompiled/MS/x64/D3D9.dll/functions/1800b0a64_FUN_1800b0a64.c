/*
 * FUN_1800b0a64 at 1800b0a64
 * undefined __fastcall FUN_1800b0a64(longlong param_1, uint param_2, int param_3, ulonglong param_4)
 * Address ranges: 1800b0a64-1800b0b51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b0a64(longlong param_1,uint param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)(&DAT_1801040f0 + (longlong)param_3 * 4);
  uVar4 = (ulonglong)uVar3;
  if (uVar3 == 0xffffffff) {
    return;
  }
  if (0xff < param_2) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a0))
              (*(longlong **)(param_1 + 0x28),param_2 - 0x100);
    return;
  }
  if (uVar3 == 5) {
    uVar3 = FUN_18001b31c(param_1,(int)param_4);
  }
  else {
    if (uVar3 != 6) {
      if (uVar3 == 7) {
        if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x87c) == 1) {
          param_4 = 0;
        }
        else {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x878);
          if ((iVar1 - 0x100U & 0xfffffbff) == 0) {
            param_4 = 1;
          }
          else if ((iVar1 - 0x300U & 0xfffffeff) == 0) {
            param_4 = 2;
          }
        }
      }
      else if (uVar3 == 10) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x878);
        uVar2 = uVar3 & 0xff;
        if ((uVar2 < 0x11) && (param_4 = param_4 & 0xffffffff, uVar3 != 0)) {
          param_4 = (ulonglong)uVar2;
        }
      }
      goto LAB_1800b0b21;
    }
    uVar3 = FUN_18001b31c(param_1,(int)param_4);
  }
  param_4 = (ulonglong)uVar3;
LAB_1800b0b21:
                    /* WARNING: Could not recover jumptable at 0x0001800b0b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa0))
            (*(longlong **)(param_1 + 0x28),param_2,uVar4 & 0xffffffff,param_4);
  return;
}

