/*
 * FUN_180154e50 at 180154e50
 * undefined FUN_180154e50(void)
 * Address ranges: 180154e50-180154f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180154e50(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(*param_1 + 8);
  *(longlong *)(*param_1 + 8) = param_2;
  plVar5 = (longlong *)*param_1;
  if (*(int *)(*plVar5 + 8) != 0) {
    uVar7 = 0;
    param_2 = param_2 + (ulonglong)*(uint *)(plVar5 + 2);
    do {
      uVar4 = param_2 + 0xfU & 0xfffffffffffffff0;
      lVar3 = uVar7 * 0x10;
      uVar6 = (ulonglong)*(byte *)(*plVar5 + uVar7 + 0x214);
      *(ulonglong *)(plVar5[1] + lVar3) = uVar4;
      *(uint *)(lVar3 + ((longlong *)*param_1)[1] + 8) =
           (uint)*(byte *)(*(longlong *)*param_1 + uVar6 * 8 + 0x16);
      *(undefined4 *)(lVar3 + *(longlong *)(*param_1 + 8) + 0xc) =
           *(undefined4 *)(lVar8 + 0xc + lVar3);
      uVar2 = *(undefined1 *)(*(longlong *)*param_1 + uVar6 * 8 + 0x16);
      param_2 = FUN_180152fa0((int)param_1[1],uVar2,*(undefined8 *)(lVar8 + lVar3),
                              *(undefined4 *)(lVar8 + 8 + lVar3),uVar4,uVar2);
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
      plVar5 = (longlong *)*param_1;
    } while (uVar1 < *(uint *)(*plVar5 + 8));
  }
  return;
}

