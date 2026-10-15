/*
 * FUN_180017a10 at 180017a10
 * undefined8 __cdecl FUN_180017a10(longlong param_1)
 * Address ranges: 180017a10-180017b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180017a10(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x800);
    if ((uVar2 < 7) && ((0x69U >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x826) = 1;
    }
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x800);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0x800);
    if ((iVar5 - 5U < 2) || (iVar5 == 0)) {
      plVar7 = FUN_1800444d0(param_1,(longlong)piVar1);
    }
    else {
      plVar7 = FUN_180044900(param_1,piVar1);
    }
    *(longlong **)(param_1 + 0x28) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      lVar10 = *plVar7;
      uVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))
                        (*(longlong **)(param_1 + 0x30),&DAT_180062470);
      cVar4 = (**(code **)(lVar10 + 8))(plVar7,*(longlong *)(param_1 + 0x30) + 0x800,uVar8);
      if (cVar4 != '\0') {
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
        if ((cVar4 != '\0') &&
           (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))(), iVar5 != 0)) {
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))
                            (*(longlong **)(param_1 + 0x28),0);
          *(undefined4 *)(param_1 + 0x20) = uVar6;
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x808);
          iVar5 = 0;
          if (iVar3 != 0) {
            iVar5 = iVar3 + -1;
          }
          *(int *)(param_1 + 0x24) = iVar5;
          goto LAB_180017b1c;
        }
        puVar9 = *(undefined8 **)(param_1 + 0x28);
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1);
        }
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
    }
    uVar8 = 0;
  }
  else {
LAB_180017b1c:
    uVar8 = 1;
  }
  return uVar8;
}

