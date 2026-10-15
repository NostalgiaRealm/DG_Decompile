/*
 * FUN_180015668 at 180015668
 * undefined8 __fastcall FUN_180015668(longlong param_1)
 * Address ranges: 180015668-180015795
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180015668(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 in_RAX;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x800);
    if ((((iVar1 == 0) || (iVar1 == 3)) || (iVar1 == 5)) || (iVar1 == 6)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x826) = 1;
    }
    puVar10 = (uint *)(*(longlong *)(param_1 + 0x30) + 0x800);
    uVar9 = *puVar10;
    uVar8 = (ulonglong)uVar9;
    if (uVar9 == 0) {
      bVar5 = FUN_18005e350();
      if (!bVar5) goto LAB_1800156dc;
      puVar10 = (uint *)(*(longlong *)(param_1 + 0x30) + 0x800);
LAB_1800156bf:
      plVar6 = FUN_18004073c(uVar8,(longlong)puVar10);
    }
    else {
      uVar9 = uVar9 - 5;
      uVar8 = (ulonglong)uVar9;
      if ((uVar9 == 0) || (uVar9 == 1)) goto LAB_1800156bf;
LAB_1800156dc:
      plVar6 = FUN_180040b48(uVar8,(int *)(*(longlong *)(param_1 + 0x30) + 0x800));
    }
    *(longlong **)(param_1 + 0x28) = plVar6;
    uVar8 = 0;
    if (plVar6 != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x30);
      lVar3 = *plVar6;
      uVar7 = (**(code **)(*plVar2 + 0x60))(plVar2,&DAT_180060498);
      uVar8 = (**(code **)(lVar3 + 8))(plVar6,plVar2 + 0x100,uVar7);
      if ((char)uVar8 != '\0') {
        uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
        if ((char)uVar8 != '\0') {
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))();
          if ((int)uVar8 != 0) {
            in_RAX = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))
                               (*(longlong **)(param_1 + 0x28),0);
            *(int *)(param_1 + 0x20) = (int)in_RAX;
            iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x808);
            *(uint *)(param_1 + 0x24) = -(uint)(iVar1 != 0) & iVar1 - 1U;
            goto LAB_18001576b;
          }
        }
        puVar4 = *(undefined8 **)(param_1 + 0x28);
        if (puVar4 != (undefined8 *)0x0) {
          uVar8 = (**(code **)*puVar4)(puVar4,1);
        }
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
    }
    uVar8 = uVar8 & 0xffffffffffffff00;
  }
  else {
LAB_18001576b:
    uVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  return uVar8;
}

