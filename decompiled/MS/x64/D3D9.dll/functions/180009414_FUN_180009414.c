/*
 * FUN_180009414 at 180009414
 * undefined __fastcall FUN_180009414(longlong param_1, longlong param_2, uint param_3, int param_4, longlong param_5)
 * Address ranges: 180009414-1800094a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009414(longlong param_1,longlong param_2,uint param_3,int param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      uVar4 = (ulonglong)*(byte *)(param_2 + 0x214 + uVar6);
      if ((param_3 >> (*(byte *)(param_2 + 0x14 + uVar4 * 8) & 0x1f) & 1) == 0) {
        lVar3 = 0;
      }
      else {
        lVar2 = (longlong)*(char *)(param_2 + 0x14 + uVar4 * 8);
        iVar1 = *(int *)(param_1 + 0x6748 + lVar2 * 4);
        lVar3 = *(longlong *)(&DAT_000066c8 + lVar2 * 8 + param_1);
        *(int *)(param_5 + 8 + uVar6 * 0x10) = iVar1;
        lVar3 = (ulonglong)(uint)(iVar1 * param_4) +
                (ulonglong)*(uint *)(param_1 + 0x6788 + lVar2 * 4) +
                (ulonglong)*(byte *)(param_2 + 0x17 + uVar4 * 8) * 4 + *(longlong *)(lVar3 + 8);
        *(undefined4 *)(param_5 + 0xc + uVar6 * 0x10) = 1;
      }
      uVar5 = (int)uVar6 + 1;
      *(longlong *)(param_5 + uVar6 * 0x10) = lVar3;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  return;
}

