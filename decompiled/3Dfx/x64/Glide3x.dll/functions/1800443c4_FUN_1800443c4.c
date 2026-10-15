/*
 * FUN_1800443c4 at 1800443c4
 * undefined8 __fastcall FUN_1800443c4(longlong * param_1, undefined8 * param_2)
 * Address ranges: 1800443c4-1800444c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800443c4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar11 = 0x10;
    if (iVar1 != 0) {
      uVar11 = (ulonglong)(uint)(iVar1 * 2);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar11;
    uVar8 = SUB168(ZEXT816(0xa8) * auVar3,0);
    if (SUB168(ZEXT816(0xa8) * auVar3,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    puVar9 = (undefined8 *)thunk_FUN_180060a9c(uVar8);
    if (puVar9 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_180061330(puVar9,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0xa8
                 );
    FUN_180060ac0((LPVOID)*param_1);
    *param_1 = (longlong)puVar9;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  }
  lVar2 = *param_1;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  lVar10 = (ulonglong)*(uint *)(param_1 + 1) * 0xa8;
  uVar8 = param_2[0x14];
  *(undefined8 *)(lVar10 + lVar2) = *param_2;
  ((undefined8 *)(lVar10 + lVar2))[1] = uVar4;
  uVar4 = param_2[4];
  uVar7 = param_2[5];
  puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar2);
  *puVar9 = uVar5;
  puVar9[1] = uVar6;
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  puVar9 = (undefined8 *)(lVar10 + 0x20 + lVar2);
  *puVar9 = uVar4;
  puVar9[1] = uVar7;
  uVar4 = param_2[8];
  uVar7 = param_2[9];
  puVar9 = (undefined8 *)(lVar10 + 0x30 + lVar2);
  *puVar9 = uVar5;
  puVar9[1] = uVar6;
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  puVar9 = (undefined8 *)(lVar10 + 0x40 + lVar2);
  *puVar9 = uVar4;
  puVar9[1] = uVar7;
  uVar4 = param_2[0xc];
  uVar7 = param_2[0xd];
  puVar9 = (undefined8 *)(lVar10 + 0x50 + lVar2);
  *puVar9 = uVar5;
  puVar9[1] = uVar6;
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  puVar9 = (undefined8 *)(lVar10 + 0x60 + lVar2);
  *puVar9 = uVar4;
  puVar9[1] = uVar7;
  uVar4 = param_2[0x10];
  uVar7 = param_2[0x11];
  puVar9 = (undefined8 *)(lVar10 + 0x70 + lVar2);
  *puVar9 = uVar5;
  puVar9[1] = uVar6;
  uVar5 = param_2[0x12];
  uVar6 = param_2[0x13];
  puVar9 = (undefined8 *)(lVar10 + 0x80 + lVar2);
  *puVar9 = uVar4;
  puVar9[1] = uVar7;
  puVar9 = (undefined8 *)(lVar10 + 0x90 + lVar2);
  *puVar9 = uVar5;
  puVar9[1] = uVar6;
  *(undefined8 *)(lVar10 + 0xa0 + lVar2) = uVar8;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
}

