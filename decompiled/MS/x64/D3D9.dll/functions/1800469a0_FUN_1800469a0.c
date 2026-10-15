/*
 * FUN_1800469a0 at 1800469a0
 * undefined __fastcall FUN_1800469a0(longlong param_1, char param_2)
 * Address ranges: 1800469a0-180046c50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800469a0(longlong param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xf68b) != '\0') {
    if (*(char *)(param_1 + 0x7662) == '\0') {
      if ((*(longlong **)(param_1 + 0xfce0) == (longlong *)0x0) ||
         (cVar5 = (**(code **)(**(longlong **)(param_1 + 0xfce0) + 0x88))(), cVar5 == '\0')) {
        local_48 = *(undefined8 *)(param_1 + 0x7e4);
        uStack_40 = *(undefined8 *)(param_1 + 0x7ec);
        local_18 = *(undefined4 *)(param_1 + 0x814);
        local_38 = *(undefined4 *)(param_1 + 0x7f4);
        uStack_34 = *(undefined4 *)(param_1 + 0x7f8);
        uStack_30 = *(undefined4 *)(param_1 + 0x7fc);
        uStack_2c = *(undefined4 *)(param_1 + 0x800);
        local_28 = *(undefined4 *)(param_1 + 0x804);
        uStack_24 = *(undefined4 *)(param_1 + 0x808);
        uStack_20 = *(undefined4 *)(param_1 + 0x80c);
        uStack_1c = *(undefined4 *)(param_1 + 0x810);
      }
      else if (*(char *)(param_1 + 0x766a) == '\0') {
        local_48 = *(undefined8 *)(param_1 + 0x7b0);
        uStack_40 = *(undefined8 *)(param_1 + 0x7b8);
        local_18 = *(undefined4 *)(param_1 + 0x7e0);
        local_38 = *(undefined4 *)(param_1 + 0x7c0);
        uStack_34 = *(undefined4 *)(param_1 + 0x7c4);
        uStack_30 = *(undefined4 *)(param_1 + 0x7c8);
        uStack_2c = *(undefined4 *)(param_1 + 0x7cc);
        local_28 = *(undefined4 *)(param_1 + 2000);
        uStack_24 = *(undefined4 *)(param_1 + 0x7d4);
        uStack_20 = *(undefined4 *)(param_1 + 0x7d8);
        uStack_1c = *(undefined4 *)(param_1 + 0x7dc);
      }
      else {
        local_48 = *(undefined8 *)(param_1 + 0xb80);
        uStack_40 = *(undefined8 *)(param_1 + 0xb88);
        local_18 = *(undefined4 *)(param_1 + 0xbb0);
        local_38 = *(undefined4 *)(param_1 + 0xb90);
        uStack_34 = *(undefined4 *)(param_1 + 0xb94);
        uStack_30 = *(undefined4 *)(param_1 + 0xb98);
        uStack_2c = *(undefined4 *)(param_1 + 0xb9c);
        local_28 = *(undefined4 *)(param_1 + 0xba0);
        uStack_24 = *(undefined4 *)(param_1 + 0xba4);
        uStack_20 = *(undefined4 *)(param_1 + 0xba8);
        uStack_1c = *(undefined4 *)(param_1 + 0xbac);
      }
      iVar2 = (int)local_48;
      if (*(longlong *)(param_1 + 0xfce0) == 0) {
        iVar2 = 0;
      }
      local_48 = CONCAT44(local_48._4_4_,iVar2);
    }
    else {
      local_48 = *(undefined8 *)(param_1 + 0xbb4);
      uStack_40 = *(undefined8 *)(param_1 + 0xbbc);
      local_18 = *(undefined4 *)(param_1 + 0xbe4);
      local_38 = *(undefined4 *)(param_1 + 0xbc4);
      uStack_34 = *(undefined4 *)(param_1 + 0xbc8);
      uStack_30 = *(undefined4 *)(param_1 + 0xbcc);
      uStack_2c = *(undefined4 *)(param_1 + 0xbd0);
      local_28 = *(undefined4 *)(param_1 + 0xbd4);
      uStack_24 = *(undefined4 *)(param_1 + 0xbd8);
      uStack_20 = *(undefined4 *)(param_1 + 0xbdc);
      uStack_1c = *(undefined4 *)(param_1 + 0xbe0);
    }
    piVar3 = *(int **)(param_1 + 0xf938);
    if ((piVar3 != (int *)0x0) &&
       (plVar4 = *(longlong **)(param_1 + 0xfce0), plVar4 != (longlong *)0x0)) {
      if ((*piVar3 == 0) || (piVar3[1] == 0)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if ((*(int *)(param_1 + 0x7b0) == 0) || (*(int *)(param_1 + 0x7b4) == 0)) {
        cVar6 = '\0';
      }
      else {
        cVar6 = '\x01';
      }
      if (cVar5 != cVar6) {
        uVar7 = (**(code **)(*plVar4 + 0x108))(plVar4);
        FUN_1800442b0(param_1,uVar7);
        *(undefined1 *)(param_1 + 0x1018b) = 1;
      }
      lVar8 = 0xb8c;
      if (*(char *)(param_1 + 0x766a) == '\0') {
        lVar8 = 0x7bc;
      }
      if ((*(int *)(*(longlong *)(param_1 + 0xf938) + 0xc) != 0) != (*(int *)(lVar8 + param_1) != 0)
         ) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0xfce0) + 0x108))();
        FUN_1800442b0(param_1,uVar7);
        *(undefined1 *)(param_1 + 0x1018b) = 1;
      }
    }
    uVar9 = FUN_18004c500((longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1960),(int *)&local_48);
    *(undefined8 *)(param_1 + 0xf938) = uVar9;
    *(undefined1 *)(param_1 + 0x10189) = 1;
    *(undefined1 *)(param_1 + 0xf6c4) = 1;
  }
  if ((*(char *)(param_1 + 0xf68b) != '\0') || (param_2 != '\0')) {
    if ((*(longlong *)(param_1 + 0xf938) == 0) ||
       (*(int *)(*(longlong *)(param_1 + 0xf938) + 0xc) != 0)) {
      bVar1 = *(byte *)((ulonglong)(*(char *)(param_1 + 0x7662) != '\0') + 0x75a0 + param_1);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      if ((uint)bVar1 != *(uint *)(lVar8 + 0x670)) {
        iVar2 = *(int *)(lVar8 + 0x67c);
        *(int *)(lVar8 + 0x67c) = iVar2 + 1;
        if (((iVar2 == 0) && (*(longlong *)(lVar8 + 0xb10) != 0)) &&
           (uVar7 = 0, *(int *)(lVar8 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar8 + 0xba0) + uVar7 * 8))();
            uVar10 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar10;
          } while (uVar10 < *(uint *)(lVar8 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar8 + 0x688) + 0xc0))
                  (*(longlong **)(lVar8 + 0x688),(uint)bVar1);
        *(uint *)(lVar8 + 0x670) = (uint)bVar1;
      }
    }
    *(undefined1 *)(param_1 + 0xf68b) = 0;
  }
  return;
}

