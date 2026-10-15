/*
 * FUN_18004f5d0 at 18004f5d0
 * undefined __fastcall FUN_18004f5d0(longlong * param_1, longlong param_2)
 * Address ranges: 18004f5d0-18004f698
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f5d0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  lVar2 = *(longlong *)(*param_1 + 8);
  *(longlong *)(*param_1 + 8) = param_2;
  plVar6 = (longlong *)*param_1;
  if (*(int *)(*plVar6 + 8) != 0) {
    uVar7 = (ulonglong)*(uint *)(plVar6 + 2) + 0xf + param_2;
    do {
      bVar1 = *(byte *)(uVar5 + 0x214 + *plVar6);
      *(undefined8 **)(plVar6[1] + uVar5 * 0x10) = (undefined8 *)(uVar7 & 0xfffffffffffffff0);
      *(uint *)(((longlong *)*param_1)[1] + 8 + uVar5 * 0x10) =
           (uint)*(byte *)(*(longlong *)*param_1 + 0x16 + (ulonglong)bVar1 * 8);
      *(undefined4 *)(*(longlong *)(*param_1 + 8) + 0xc + uVar5 * 0x10) =
           *(undefined4 *)(lVar2 + 0xc + uVar5 * 0x10);
      uVar4 = (uint)*(byte *)(*(longlong *)*param_1 + 0x16 + (ulonglong)bVar1 * 8);
      puVar3 = FUN_18004ddfc((int)param_1[1],uVar4,*(undefined8 **)(lVar2 + uVar5 * 0x10),
                             *(uint *)(lVar2 + 8 + uVar5 * 0x10),
                             (undefined8 *)(uVar7 & 0xfffffffffffffff0),uVar4);
      plVar6 = (longlong *)*param_1;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar7 = (longlong)puVar3 + 0xf;
    } while (uVar4 < *(uint *)(*plVar6 + 8));
  }
  return;
}

