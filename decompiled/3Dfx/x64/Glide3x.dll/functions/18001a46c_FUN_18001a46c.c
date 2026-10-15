/*
 * FUN_18001a46c at 18001a46c
 * undefined __fastcall FUN_18001a46c(longlong param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 18001a46c-18001a6c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a46c(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  bool bVar12;
  int local_88 [6];
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  
  uVar10 = 0;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x3380) + 0x70))
                    (*(longlong **)(param_1 + 0x3380),local_88);
  if ((((-1 < iVar5) && (local_88[0] == 4)) &&
      (uVar6 = FUN_180060260(*(longlong *)(param_1 + 0x3340) + 0x12c0), (char)uVar6 != '\0')) &&
     (cVar4 = FUN_180045cec(*(longlong **)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                            *(ulonglong *)(param_1 + 0x3380),uVar10), cVar4 != '\0')) {
    bVar12 = *(longlong *)(param_1 + 0x44e8) != *(longlong *)(param_1 + 0x4508);
    if (!bVar12) {
      uVar10 = 3;
      do {
        if (6 < uVar10) break;
        lVar7 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                          (*(longlong **)(param_1 + 0x3300),uVar10);
        uVar3 = param_3;
        if (param_3 < *(uint *)(lVar7 + 0x18)) {
          uVar3 = *(uint *)(lVar7 + 0x18);
        }
        uVar9 = param_3 + param_4;
        if (*(uint *)(lVar7 + 0x1c) < param_3 + param_4) {
          uVar9 = *(uint *)(lVar7 + 0x1c);
        }
        bVar12 = uVar3 < uVar9;
        uVar10 = uVar10 + 1;
      } while (uVar9 <= uVar3);
    }
    if (!bVar12) {
      FUN_18004be24(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                    *(longlong **)(param_1 + 0x3380),param_3,param_3 + param_4,param_2,'\0');
      return;
    }
  }
  FUN_18004bf08(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),&local_70,
                (longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),param_4,param_2);
  if (lStack_68 == 0) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x3340);
  piVar1 = (int *)(lVar7 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar7 + 0x14c4) != '\0') {
    puVar8 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x40);
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar7 + 0x14c0) = *(int *)(lVar7 + 0x14c0) + 1;
      UNLOCK();
      puVar8[1] = 0x40;
      puVar8[2] = param_1;
      puVar11 = (undefined8 *)((longlong)puVar8 + 0x57U & 0xfffffffffffffff8);
      puVar8[3] = local_70;
      puVar8[4] = lStack_68;
      puVar8[5] = local_60;
      puVar8[6] = lStack_58;
      puVar8[7] = local_50;
      puVar8[8] = lStack_48;
      *(uint *)(puVar8 + 9) = param_3;
      *(uint *)((longlong)puVar8 + 0x4c) = param_4;
      *puVar11 = 0;
      *puVar8 = FUN_18001a6c4;
      *(undefined8 **)(lVar7 + 0x1350 + (ulonglong)*(uint *)(lVar7 + 0x14bc) * 0x28) = puVar11;
      if (*(char *)(lVar7 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar1);
        SetEvent(*(HANDLE *)(lVar7 + 0x1340));
        return;
      }
      goto LAB_18001a6ab;
    }
    FUN_18005fd70(piVar1);
    Sleep(100);
    FUN_18005fc20(piVar1);
  }
  plVar2 = *(longlong **)(lVar7 + 0x14a0);
  *plVar2 = param_1;
  plVar2[1] = local_70;
  plVar2[2] = lStack_68;
  plVar2[3] = local_60;
  plVar2[4] = lStack_58;
  plVar2[5] = local_50;
  plVar2[6] = lStack_48;
  *(uint *)(plVar2 + 7) = param_3;
  *(uint *)((longlong)plVar2 + 0x3c) = param_4;
  FUN_18001a6c4(plVar2);
LAB_18001a6ab:
  FUN_18005fd70(piVar1);
  return;
}

