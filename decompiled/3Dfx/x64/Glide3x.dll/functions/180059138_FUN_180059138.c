/*
 * FUN_180059138 at 180059138
 * undefined __fastcall FUN_180059138(longlong param_1)
 * Address ranges: 180059138-18005921c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180059138(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  uVar7 = *(uint *)(param_1 + 0x80);
  uVar8 = uVar7;
  do {
    if (uVar8 == 0) {
      return;
    }
    uVar1 = uVar8 - 1;
    if (uVar1 < uVar7) {
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar1 * 0x18 + 0x10);
    }
    else {
      puVar10 = (undefined8 *)&DAT_00000008;
    }
    plVar4 = (longlong *)*puVar10;
    uVar7 = *(uint *)(plVar4 + 2);
    while (uVar7 != 0xffffffff) {
      lVar5 = *plVar4;
      lVar9 = (ulonglong)uVar7 * 0x20;
      iVar3 = *(int *)(lVar5 + 0x18 + lVar9);
      if (iVar3 == 0) break;
      FUN_180058d64(param_1,iVar3,(int)*(undefined8 *)(lVar5 + lVar9),
                    *(ulonglong *)(lVar5 + 8 + lVar9));
      uVar7 = *(uint *)(*plVar4 + 0x1c + lVar9);
    }
    FUN_180060ac0((LPVOID)*plVar4);
    FUN_180060ac0(plVar4);
    while( true ) {
      uVar7 = uVar8 + 1;
      if (*(uint *)(param_1 + 0x80) <= uVar7) break;
      lVar5 = *(longlong *)(param_1 + 0x78);
      puVar10 = (undefined8 *)(lVar5 + (ulonglong)uVar7 * 0x18);
      uVar6 = puVar10[1];
      puVar2 = (undefined8 *)(lVar5 + (ulonglong)uVar8 * 0x18);
      *puVar2 = *puVar10;
      puVar2[1] = uVar6;
      *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar8 * 0x18) =
           *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar7 * 0x18);
      uVar8 = uVar7;
    }
    uVar7 = *(uint *)(param_1 + 0x80) - 1;
    *(uint *)(param_1 + 0x80) = uVar7;
    uVar8 = uVar1;
  } while( true );
}

