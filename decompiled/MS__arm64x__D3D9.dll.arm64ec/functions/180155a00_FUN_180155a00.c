/*
 * FUN_180155a00 at 180155a00
 * undefined FUN_180155a00(void)
 * Address ranges: 180155a00-180155b37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180155a00(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 extraout_x11;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(*param_1 + 8);
  *(undefined8 **)(*param_1 + 8) = param_2 + 1;
  plVar6 = (longlong *)*param_1;
  lVar4 = plVar6[1] + (ulonglong)*(uint *)(plVar6 + 3);
  if (*(int *)(*plVar6 + 8) != 0) {
    uVar8 = 0;
    do {
      uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
      lVar4 = uVar8 * 0x10;
      uVar7 = (ulonglong)*(byte *)(*plVar6 + uVar8 + 0x214);
      *(ulonglong *)(plVar6[1] + lVar4) = uVar5;
      *(uint *)(lVar4 + ((longlong *)*param_1)[1] + 8) =
           (uint)*(byte *)(*(longlong *)*param_1 + uVar7 * 8 + 0x16);
      *(undefined4 *)(lVar4 + *(longlong *)(*param_1 + 8) + 0xc) =
           *(undefined4 *)(lVar9 + 0xc + lVar4);
      plVar6 = (longlong *)*param_1;
      iVar2 = *(int *)(lVar9 + 8 + lVar4);
      uVar3 = *(undefined1 *)(*plVar6 + uVar7 * 8 + 0x16);
      lVar4 = FUN_180152fa0((int)param_1[2],uVar3,
                            *(longlong *)(lVar9 + lVar4) +
                            (ulonglong)
                            (uint)((*(int *)((longlong)plVar6 + 0x24) + (int)plVar6[4]) * iVar2),
                            iVar2,uVar5,uVar3);
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
      plVar6 = (longlong *)*param_1;
    } while (uVar1 < *(uint *)(*plVar6 + 8));
  }
  FUN_1801506e0(lVar4,plVar6[2],lVar4 + 0xfU & 0xfffffffffffffff0,
                *(undefined4 *)((longlong)param_1 + 0x14),-*(int *)((longlong)plVar6 + 0x24),
                (char)param_1[3]);
  *(undefined4 *)(*param_1 + 0x20) = 0;
  *param_2 = extraout_x11;
  *(undefined8 *)(*param_1 + 0x10) = extraout_x11;
  return;
}

