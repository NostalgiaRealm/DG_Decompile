/*
 * FUN_18004fcb8 at 18004fcb8
 * undefined __fastcall FUN_18004fcb8(longlong * param_1, undefined8 * param_2)
 * Address ranges: 18004fcb8-18004fdcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fcb8(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar2 = *(longlong *)(*param_1 + 8);
  *(undefined8 **)(*param_1 + 8) = param_2 + 1;
  plVar4 = (longlong *)*param_1;
  puVar5 = (undefined8 *)((ulonglong)*(uint *)(plVar4 + 3) + plVar4[1]);
  if (*(int *)(*plVar4 + 8) != 0) {
    uVar8 = 0;
    do {
      puVar5 = (undefined8 *)((longlong)puVar5 + 0xfU & 0xfffffffffffffff0);
      lVar9 = uVar8 * 0x10;
      bVar1 = *(byte *)(uVar8 + 0x214 + *plVar4);
      *(undefined8 **)(lVar9 + plVar4[1]) = puVar5;
      *(uint *)(((longlong *)*param_1)[1] + 8 + lVar9) =
           (uint)*(byte *)(*(longlong *)*param_1 + 0x16 + (ulonglong)bVar1 * 8);
      *(undefined4 *)(*(longlong *)(*param_1 + 8) + 0xc + lVar9) =
           *(undefined4 *)(lVar2 + 0xc + lVar9);
      plVar4 = (longlong *)*param_1;
      uVar7 = *(uint *)(lVar2 + 8 + lVar9);
      uVar3 = (uint)*(byte *)(*plVar4 + 0x16 + (ulonglong)bVar1 * 8);
      puVar5 = FUN_18004ddfc((int)param_1[2],uVar3,
                             (undefined8 *)
                             ((ulonglong)
                              ((*(int *)((longlong)plVar4 + 0x24) + (int)plVar4[4]) * uVar7) +
                             *(longlong *)(lVar2 + lVar9)),uVar7,puVar5,uVar3);
      plVar4 = (longlong *)*param_1;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(*plVar4 + 8));
  }
  piVar6 = (int *)((longlong)puVar5 + 0xfU & 0xfffffffffffffff0);
  FUN_18004b730((ulonglong)(uint)-*(int *)((longlong)plVar4 + 0x24),(int *)plVar4[2],piVar6,
                *(uint *)((longlong)param_1 + 0x14),-*(int *)((longlong)plVar4 + 0x24),
                (char)param_1[3]);
  *(undefined4 *)(*param_1 + 0x20) = 0;
  *param_2 = piVar6;
  *(int **)(*param_1 + 0x10) = piVar6;
  return;
}

