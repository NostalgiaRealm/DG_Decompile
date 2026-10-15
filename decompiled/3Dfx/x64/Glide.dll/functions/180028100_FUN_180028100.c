/*
 * FUN_180028100 at 180028100
 * undefined __fastcall FUN_180028100(longlong param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 180028100-180028320
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028100(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  int local_78 [6];
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  
  uVar8 = 0;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x3200) + 0x70))
                    (*(longlong **)(param_1 + 0x3200),local_78);
  if ((((-1 < iVar5) && (local_78[0] == 4)) &&
      (uVar6 = FUN_18005eb50(*(longlong *)(param_1 + 0x31c0) + 0x12c0), (char)uVar6 != '\0')) &&
     (cVar4 = FUN_180043b88(*(longlong **)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                            *(ulonglong *)(param_1 + 0x3200),uVar8), cVar4 != '\0')) {
    uVar8 = 3;
    bVar10 = *(longlong *)(param_1 + 0x3b88) != *(longlong *)(param_1 + 0x3ba8);
    if (!bVar10) {
      for (; uVar8 < 3; uVar8 = uVar8 + 1) {
        bVar10 = false;
      }
    }
    if (!bVar10) {
      FUN_180049cc0(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                    *(longlong **)(param_1 + 0x3200),param_3,param_3 + param_4,param_2,'\0');
      return;
    }
  }
  FUN_180049da4(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),&local_60,
                (longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),param_4,param_2);
  if (lStack_58 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005e510(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar7 = (undefined8 *)FUN_18005e530((longlong)piVar1,0x40);
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar7[1] = 0x40;
      puVar7[2] = param_1;
      puVar9 = (undefined8 *)((longlong)puVar7 + 0x57U & 0xfffffffffffffff8);
      puVar7[3] = local_60;
      puVar7[4] = lStack_58;
      puVar7[5] = local_50;
      puVar7[6] = lStack_48;
      puVar7[7] = local_40;
      puVar7[8] = lStack_38;
      *(uint *)(puVar7 + 9) = param_3;
      *(uint *)((longlong)puVar7 + 0x4c) = param_4;
      *puVar9 = 0;
      *puVar7 = FUN_180028324;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar9;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005e660(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18002830b;
    }
    FUN_18005e660(piVar1);
    Sleep(100);
    FUN_18005e510(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  plVar3[1] = local_60;
  plVar3[2] = lStack_58;
  plVar3[3] = local_50;
  plVar3[4] = lStack_48;
  plVar3[5] = local_40;
  plVar3[6] = lStack_38;
  *(uint *)(plVar3 + 7) = param_3;
  *(uint *)((longlong)plVar3 + 0x3c) = param_4;
  FUN_180028324(plVar3);
LAB_18002830b:
  FUN_18005e660(piVar1);
  return;
}

