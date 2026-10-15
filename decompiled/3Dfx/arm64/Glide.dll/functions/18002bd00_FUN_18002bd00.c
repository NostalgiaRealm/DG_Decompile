/*
 * FUN_18002bd00 at 18002bd00
 * undefined __cdecl FUN_18002bd00(longlong param_1, longlong * param_2)
 * Address ranges: 18002bd00-18002be5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002bd00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  FUN_1800292e8(param_1 + 0x34e8);
  lVar12 = param_2[1];
  lVar11 = *param_2;
  lVar9 = param_2[3];
  lVar7 = param_2[2];
  lVar4 = param_2[6];
  lVar6 = *(longlong *)(param_1 + 0x31c0);
  lVar10 = param_2[5];
  lVar8 = param_2[4];
  lVar1 = param_2[7];
  FUN_1800437d0((uint *)(lVar6 + 0x12c0));
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_1800436a0(lVar6 + 0x12c0,0x48);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar6 + 0x14c0));
      puVar2[1] = 0x48;
      puVar2[2] = param_1;
      puVar2[4] = lVar12;
      puVar2[3] = lVar11;
      puVar2[6] = lVar9;
      puVar2[5] = lVar7;
      puVar2[8] = lVar10;
      puVar2[7] = lVar8;
      puVar2[9] = lVar4;
      *(int *)(puVar2 + 10) = (int)lVar1;
      puVar5 = (undefined8 *)((longlong)puVar2 + 0x5bU & 0xfffffffffffffff8);
      *puVar5 = 0;
      *puVar2 = FUN_18002be60;
      *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28 + 0x1350) = puVar5;
      if (*(char *)(lVar6 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar6 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar6 + 0x1340));
        return;
      }
      goto LAB_18002be44;
    }
    *(undefined4 *)(lVar6 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar6 + 0x12c0));
  }
  plVar3 = *(longlong **)(lVar6 + 0x14a0);
  *plVar3 = param_1;
  plVar3[2] = lVar12;
  plVar3[1] = lVar11;
  plVar3[4] = lVar9;
  plVar3[3] = lVar7;
  plVar3[6] = lVar10;
  plVar3[5] = lVar8;
  plVar3[7] = lVar4;
  *(int *)(plVar3 + 8) = (int)lVar1;
  FUN_18002be60(plVar3);
LAB_18002be44:
  *(undefined4 *)(lVar6 + 0x12c0) = 0;
  return;
}

