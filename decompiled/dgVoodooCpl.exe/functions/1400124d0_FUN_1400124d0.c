/*
 * FUN_1400124d0 at 1400124d0
 * undefined4 __fastcall FUN_1400124d0(longlong param_1, uint param_2, uint param_3, int param_4)
 * Address ranges: 1400124d0-140012576
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1400124d0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_3;
  iVar4 = (param_4 != 1) + 2;
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar3 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 800) + uVar3 * 4) == param_2) {
        if ((int)uVar3 == -1) {
          return 0;
        }
        if (*(uint *)(param_1 + 0x128 + uVar3 * 0x10) <= param_3) {
          return 0;
        }
        lVar1 = *(longlong *)(param_1 + (uVar3 + 0x12) * 0x10);
        if ((*(int *)(lVar1 + uVar5 * 8) == 0) || (*(int *)(lVar1 + 4 + uVar5 * 8) != iVar4)) {
          FUN_140011c30(param_1,param_2,param_3,iVar4);
        }
        return *(undefined4 *)(*(longlong *)(param_1 + (uVar3 + 0x12) * 0x10) + uVar5 * 8);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x328));
  }
  return 0;
}

