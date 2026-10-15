/*
 * FUN_18009eb04 at 18009eb04
 * undefined __fastcall FUN_18009eb04(longlong param_1, undefined8 * param_2)
 * Address ranges: 18009eb04-18009ec59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009eb04(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  if (*(longlong *)(param_1 + -0xf0) == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + -0xa8);
  piVar2 = (int *)(lVar3 + 0x12c0);
  FUN_1800fab60(piVar2);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_1800fab80((longlong)piVar2,0x410);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
      UNLOCK();
      puVar6[1] = 0x410;
      puVar9 = (undefined8 *)((longlong)puVar6 + 0x27U & 0xfffffffffffffff8);
      puVar6[3] = param_1 + -0x100;
      lVar8 = 8;
      puVar6[2] = puVar9;
      puVar7 = puVar9;
      do {
        uVar5 = param_2[1];
        *puVar7 = *param_2;
        puVar7[1] = uVar5;
        uVar5 = param_2[3];
        puVar7[2] = param_2[2];
        puVar7[3] = uVar5;
        uVar5 = param_2[5];
        puVar7[4] = param_2[4];
        puVar7[5] = uVar5;
        uVar5 = param_2[7];
        puVar7[6] = param_2[6];
        puVar7[7] = uVar5;
        uVar5 = param_2[9];
        puVar7[8] = param_2[8];
        puVar7[9] = uVar5;
        uVar5 = param_2[0xb];
        puVar7[10] = param_2[10];
        puVar7[0xb] = uVar5;
        uVar5 = param_2[0xd];
        puVar7[0xc] = param_2[0xc];
        puVar7[0xd] = uVar5;
        puVar1 = param_2 + 0xe;
        uVar5 = param_2[0xf];
        param_2 = param_2 + 0x10;
        puVar7[0xe] = *puVar1;
        puVar7[0xf] = uVar5;
        puVar7 = puVar7 + 0x10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      puVar9[0x80] = 0;
      *puVar6 = FUN_18009ec5c;
      *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar9 + 0x80
      ;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar2);
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_18009ec49;
    }
    FUN_1800facb0(piVar2);
    Sleep(100);
    FUN_1800fab60(piVar2);
  }
  plVar4 = *(longlong **)(lVar3 + 0x14a0);
  *plVar4 = (longlong)param_2;
  plVar4[1] = param_1 + -0x100;
  FUN_18009ec5c(plVar4);
LAB_18009ec49:
  FUN_1800facb0(piVar2);
  return;
}

