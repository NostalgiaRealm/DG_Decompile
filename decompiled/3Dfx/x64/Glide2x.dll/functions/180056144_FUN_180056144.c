/*
 * FUN_180056144 at 180056144
 * undefined4 __fastcall FUN_180056144(longlong param_1, uint param_2, uint param_3, int param_4)
 * Address ranges: 180056144-1800561ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180056144(longlong param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_3;
  iVar2 = (param_4 != 1) + 2;
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar4 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 800) + uVar4 * 4) == param_2) {
        if ((int)uVar4 == -1) {
          return 0;
        }
        if (*(uint *)(param_1 + 0x128 + uVar4 * 0x10) <= param_3) {
          return 0;
        }
        lVar1 = *(longlong *)(param_1 + (uVar4 + 0x12) * 0x10);
        if ((*(int *)(lVar1 + uVar5 * 8) == 0) || (*(int *)(lVar1 + 4 + uVar5 * 8) != iVar2)) {
          FUN_180055aec(param_1,param_2,param_3,iVar2);
        }
        return *(undefined4 *)(*(longlong *)(param_1 + (uVar4 + 0x12) * 0x10) + uVar5 * 8);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x328));
  }
  return 0;
}

