/*
 * FUN_18002bdb0 at 18002bdb0
 * undefined __fastcall FUN_18002bdb0(longlong * param_1)
 * Address ranges: 18002bdb0-18002be4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002bdb0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  lVar7 = *param_1;
  puVar8 = (undefined8 *)param_1[1];
  FUN_180018118(lVar7);
  uVar1 = *(undefined8 *)(lVar7 + 0x2bc8);
  uVar2 = *(undefined8 *)(lVar7 + 0x2b98);
  iVar3 = *(int *)(lVar7 + 0x2ba0);
  iVar4 = *(int *)(lVar7 + 0x2bd0);
  iVar5 = *(int *)(lVar7 + 0x2b80);
  iVar6 = *(int *)(lVar7 + 0x2bb0);
  lVar9 = *(longlong *)(lVar7 + 0x2b90);
  lVar7 = *(longlong *)(lVar7 + 0x2bc0);
  *puVar8 = 0;
  puVar8[1] = (ulonglong)(uint)(iVar5 - iVar6);
  puVar8[2] = 0;
  puVar8[3] = lVar9 - lVar7;
  puVar8[4] = CONCAT44((int)((ulonglong)uVar2 >> 0x20) - (int)((ulonglong)uVar1 >> 0x20),
                       (int)uVar2 - (int)uVar1);
  puVar8[5] = (ulonglong)(uint)(iVar3 - iVar4);
  return;
}

