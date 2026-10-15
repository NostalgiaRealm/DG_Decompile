/*
 * FUN_180032564 at 180032564
 * undefined __fastcall FUN_180032564(longlong param_1, longlong param_2, uint param_3, uint param_4, longlong param_5, int param_6, byte param_7)
 * Address ranges: 180032564-1800327f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032564(longlong param_1,longlong param_2,uint param_3,uint param_4,longlong param_5,
                  int param_6,byte param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 in_stack_ffffffffffffff50;
  uint uVar13;
  longlong local_88;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  int local_58;
  undefined4 local_54;
  
  uVar7 = *(uint *)(param_2 + 0x20);
  uVar13 = (uint)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  puVar6 = FUN_180027778(local_78,param_3,param_4,uVar7,*(uint *)(param_2 + 0x24),param_6,param_7);
  uVar1 = *puVar6;
  uVar12 = puVar6[1];
  uVar2 = puVar6[3];
  uVar3 = puVar6[2];
  *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + (uVar2 - uVar12 >> 4);
  local_58 = *(int *)(param_2 + 0x24);
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_54 = 1;
  local_5c = uVar7;
  if ((((param_3 < param_4) && (local_58 = (uVar3 != 0) + uVar2, local_64 = uVar12, uVar12 != 0)) ||
      (local_58 != *(int *)(param_2 + 0x24))) || (*(char *)(param_2 + 0x49) != '\0')) {
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
    if (param_7 == 0) {
      uVar11 = *(undefined8 *)(param_2 + 0x100);
      uVar8 = *(undefined8 *)(param_2 + 0x170);
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 0x130);
      uVar8 = *(undefined8 *)(param_2 + 0x178);
    }
    (**(code **)(*plVar4 + 0x170))
              (plVar4,uVar8,0,0,local_64,(ulonglong)uVar13 << 0x20,uVar11,0,&local_68);
  }
  else {
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
    if (param_7 == 0) {
      uVar11 = *(undefined8 *)(param_2 + 0x100);
      uVar8 = *(undefined8 *)(param_2 + 0x170);
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 0x130);
      uVar8 = *(undefined8 *)(param_2 + 0x178);
    }
    (**(code **)(*plVar4 + 0x178))(plVar4,uVar8,uVar11);
  }
  if (param_5 != 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x170 + (ulonglong)param_7 * 8);
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
    iVar5 = (**(code **)(*plVar4 + 0x70))(plVar4,uVar11,0,3,0,&local_88);
    if (-1 < iVar5) {
      iVar5 = (uint)param_7 * 2 + 2;
      puVar9 = (undefined8 *)((ulonglong)(local_80 * uVar12) + local_88);
      if (uVar1 != 0) {
        FUN_18005ed10((undefined8 *)((ulonglong)param_3 + param_5),
                      (undefined8 *)((ulonglong)(iVar5 * uVar1) + (longlong)puVar9),
                      (ulonglong)((*(int *)(param_2 + 0x20) - uVar1) * iVar5));
        puVar9 = (undefined8 *)((ulonglong)local_80 + (longlong)puVar9);
        uVar12 = uVar12 + 1;
      }
      puVar10 = (undefined8 *)((ulonglong)(uVar12 * iVar5 * param_6) + param_5);
      if (uVar12 <= uVar2) {
        do {
          uVar7 = uVar3;
          if (uVar12 != uVar2) {
            uVar7 = *(uint *)(param_2 + 0x20);
          }
          FUN_18005ed10(puVar10,puVar9,(ulonglong)(iVar5 * uVar7));
          puVar10 = (undefined8 *)((longlong)puVar10 + (ulonglong)(uint)(iVar5 * param_6));
          puVar9 = (undefined8 *)((longlong)puVar9 + (ulonglong)local_80);
          uVar12 = uVar12 + 1;
        } while (uVar12 <= uVar2);
      }
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
      (**(code **)(*plVar4 + 0x78))(plVar4,uVar11,0);
    }
  }
  return;
}

