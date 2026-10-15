/*
 * FUN_1800b9e18 at 1800b9e18
 * undefined FUN_1800b9e18(void)
 * Address ranges: 1800b9e18-1800b9ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b9e18(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  puVar1 = (undefined8 *)&DAT_00000068;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x60);
  }
  plVar9 = (longlong *)*puVar1;
  plVar8 = (longlong *)&DAT_00000178;
  if (param_2 != 0) {
    plVar8 = (longlong *)(param_2 + 0x170);
  }
  if ((plVar9 != (longlong *)0x0) && ((*(uint *)(plVar9 + 10) & 1) != 0)) {
    lVar7 = *plVar8;
    if (((*(int *)((longlong)plVar9 + 0x54) == 0) ||
        ((*(int *)((longlong)plVar9 + 0x54) == 2 && (*(int *)(lVar7 + 0xe68) == 3)))) &&
       (plVar9[5] == lVar7)) {
      (**(code **)(*plVar9 + 0x30))(plVar9);
      if ((longlong *)plVar9[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar9[6] + 8))();
      }
      plVar4 = *(longlong **)(lVar7 + 0x30);
      if (plVar4 != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[6];
        (**(code **)(*plVar4 + 0x38))();
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      lVar5 = plVar9[1];
      *(undefined8 *)(lVar7 + 0x58) = 0;
      *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)(lVar5 + 0x8c);
      uVar3 = *(undefined4 *)(lVar5 + 0x90);
      *(undefined4 *)(lVar7 + 0x6c) = 0x3f800000;
      *(undefined1 *)(lVar7 + 0xc50b) = 1;
      *(undefined4 *)(lVar7 + 100) = uVar3;
      *(undefined4 *)(lVar7 + 0x68) = 0;
      uVar3 = *(undefined4 *)(plVar9[1] + 0x8c);
      uVar2 = *(undefined4 *)(plVar9[1] + 0x90);
      *(undefined8 *)(lVar7 + 0x6f68) = 0;
      *(undefined4 *)(lVar7 + 0x6f70) = uVar3;
      *(undefined4 *)(lVar7 + 0x6f74) = uVar2;
      *(undefined1 *)(lVar7 + 0xc50c) = 1;
      *(longlong **)(lVar7 + 0x30) = plVar9;
      *(undefined1 *)(lVar7 + 0xc509) = 1;
    }
  }
  lVar7 = *plVar8;
  puVar1 = (undefined8 *)&DAT_00000080;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x78);
  }
  plVar8 = (longlong *)*puVar1;
  if (plVar8 != (longlong *)0x0) {
    if ((((*(uint *)(plVar8 + 10) >> 1 & 1) == 0) || (*(int *)((longlong)plVar8 + 0x54) != 0)) ||
       (plVar8[5] != lVar7)) goto LAB_1800b9fd0;
    (**(code **)(*plVar8 + 0x30))(plVar8);
    if ((longlong *)plVar8[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar8[6] + 8))();
    }
  }
  plVar9 = *(longlong **)(lVar7 + 0x50);
  if (plVar9 != (longlong *)0x0) {
    plVar4 = (longlong *)plVar9[6];
    (**(code **)(*plVar9 + 0x38))();
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(longlong **)(lVar7 + 0x50) = plVar8;
  *(undefined1 *)(lVar7 + 0xc509) = 1;
LAB_1800b9fd0:
  *(undefined2 *)(param_1 + 0xc50b) = 0x101;
  return;
}

