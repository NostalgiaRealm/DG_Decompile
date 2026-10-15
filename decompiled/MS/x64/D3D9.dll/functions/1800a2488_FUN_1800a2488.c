/*
 * FUN_1800a2488 at 1800a2488
 * undefined __fastcall FUN_1800a2488(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800a2488-1800a25dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a2488(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  if (*(longlong *)(param_1 + -0xf0) == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + -0xa8);
  piVar2 = (int *)(lVar3 + 0x12c0);
  FUN_1800fab60(piVar2);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar5 = (undefined8 *)FUN_1800fab80((longlong)piVar2,0x410);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
      UNLOCK();
      puVar5[1] = 0x410;
      puVar8 = (undefined8 *)((longlong)puVar5 + 0x27U & 0xfffffffffffffff8);
      puVar5[3] = param_1 + -0x100;
      lVar7 = 8;
      puVar5[2] = puVar8;
      puVar6 = puVar8;
      do {
        uVar4 = param_2[1];
        *puVar6 = *param_2;
        puVar6[1] = uVar4;
        uVar4 = param_2[3];
        puVar6[2] = param_2[2];
        puVar6[3] = uVar4;
        uVar4 = param_2[5];
        puVar6[4] = param_2[4];
        puVar6[5] = uVar4;
        uVar4 = param_2[7];
        puVar6[6] = param_2[6];
        puVar6[7] = uVar4;
        uVar4 = param_2[9];
        puVar6[8] = param_2[8];
        puVar6[9] = uVar4;
        uVar4 = param_2[0xb];
        puVar6[10] = param_2[10];
        puVar6[0xb] = uVar4;
        uVar4 = param_2[0xd];
        puVar6[0xc] = param_2[0xc];
        puVar6[0xd] = uVar4;
        puVar1 = param_2 + 0xe;
        uVar4 = param_2[0xf];
        param_2 = param_2 + 0x10;
        puVar6[0xe] = *puVar1;
        puVar6[0xf] = uVar4;
        puVar6 = puVar6 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      puVar8[0x80] = 0;
      *puVar5 = FUN_1800a25e0;
      *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar8 + 0x80
      ;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar2);
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_1800a25cd;
    }
    FUN_1800facb0(piVar2);
    Sleep(100);
    FUN_1800fab60(piVar2);
  }
  puVar5 = *(undefined8 **)(lVar3 + 0x14a0);
  *puVar5 = param_2;
  puVar5[1] = param_1 + -0x100;
  FUN_1800a25e0(puVar5);
LAB_1800a25cd:
  FUN_1800facb0(piVar2);
  return;
}

