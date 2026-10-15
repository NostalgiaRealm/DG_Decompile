/*
 * FUN_180006878 at 180006878
 * undefined FUN_180006878(void)
 * Address ranges: 180006878-18000691b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006878(longlong param_1,longlong param_2,uint param_3,int param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar5 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      lVar4 = uVar5 * 0x10;
      lVar7 = (ulonglong)*(byte *)(param_2 + 0x214 + uVar5) * 8;
      cVar3 = *(char *)(param_2 + 0x14 + lVar7);
      if ((1 << (ulonglong)((int)cVar3 & 0x1f) & param_3) == 0) {
        lVar7 = 0;
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x66c8 + (longlong)(int)cVar3 * 8);
        iVar2 = *(int *)(param_1 + 0x6748 + (longlong)(int)cVar3 * 4);
        *(int *)(param_5 + 8 + lVar4) = iVar2;
        lVar7 = (ulonglong)(uint)(iVar2 * param_4) +
                (ulonglong)*(byte *)(param_2 + 0x17 + lVar7) * 4 +
                (ulonglong)*(uint *)(param_1 + 0x6788 + (longlong)(int)cVar3 * 4) +
                *(longlong *)(lVar6 + 8);
        *(undefined4 *)(param_5 + 0xc + lVar4) = 1;
      }
      *(longlong *)(param_5 + lVar4) = lVar7;
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 8));
  }
  return;
}

