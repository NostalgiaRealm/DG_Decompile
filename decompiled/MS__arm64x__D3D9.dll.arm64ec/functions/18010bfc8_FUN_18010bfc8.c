/*
 * FUN_18010bfc8 at 18010bfc8
 * undefined FUN_18010bfc8(void)
 * Address ranges: 18010bfc8-18010c073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010bfc8(longlong param_1,longlong param_2,uint param_3,int param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      lVar4 = uVar6 * 0x10;
      lVar5 = (ulonglong)*(byte *)(param_2 + 0x214 + uVar6) * 8;
      cVar3 = *(char *)(param_2 + 0x14 + lVar5);
      if ((1 << (ulonglong)((int)cVar3 & 0x1f) & param_3) == 0) {
        lVar5 = 0;
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x66c8 + (longlong)(int)cVar3 * 8);
        iVar2 = *(int *)(param_1 + 0x6748 + (longlong)(int)cVar3 * 4);
        *(int *)(param_5 + 8 + lVar4) = iVar2;
        lVar5 = (ulonglong)(uint)(iVar2 * param_4) +
                (ulonglong)*(byte *)(param_2 + 0x17 + lVar5) * 4 +
                (ulonglong)*(uint *)(param_1 + 0x6788 + (longlong)(int)cVar3 * 4) +
                *(longlong *)(lVar7 + 8);
        *(undefined4 *)(param_5 + 0xc + lVar4) = 1;
      }
      *(longlong *)(param_5 + lVar4) = lVar5;
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 8));
  }
  return;
}

