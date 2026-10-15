/*
 * FUN_18000920c at 18000920c
 * undefined8 __fastcall FUN_18000920c(longlong * param_1, undefined8 * param_2)
 * Address ranges: 18000920c-180009304
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000920c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar8) {
    uVar9 = 0x10;
    if (iVar8 != 0) {
      uVar9 = (ulonglong)(uint)(iVar8 * 2);
    }
    iVar8 = (int)uVar9;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9;
    uVar4 = SUB168(ZEXT816(0x78) * auVar3,0);
    if (SUB168(ZEXT816(0x78) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    puVar6 = puVar5;
    if (iVar8 != 0) {
      do {
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6 = puVar6 + 0xf;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    FUN_1800fbec0(puVar5,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x78
                 );
    FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = (longlong)puVar5;
    *(int *)((longlong)param_1 + 0xc) = iVar8;
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = param_2[1];
  lVar2 = *param_1;
  lVar7 = (ulonglong)uVar1 * 0x78;
  *(undefined8 *)(lVar7 + lVar2) = *param_2;
  ((undefined8 *)(lVar7 + lVar2))[1] = uVar4;
  uVar4 = param_2[3];
  puVar5 = (undefined8 *)(lVar7 + 0x10 + lVar2);
  *puVar5 = param_2[2];
  puVar5[1] = uVar4;
  uVar4 = param_2[5];
  puVar5 = (undefined8 *)(lVar7 + 0x20 + lVar2);
  *puVar5 = param_2[4];
  puVar5[1] = uVar4;
  uVar4 = param_2[7];
  puVar5 = (undefined8 *)(lVar7 + 0x30 + lVar2);
  *puVar5 = param_2[6];
  puVar5[1] = uVar4;
  uVar4 = param_2[9];
  puVar5 = (undefined8 *)(lVar7 + 0x40 + lVar2);
  *puVar5 = param_2[8];
  puVar5[1] = uVar4;
  uVar4 = param_2[0xb];
  puVar5 = (undefined8 *)(lVar7 + 0x50 + lVar2);
  *puVar5 = param_2[10];
  puVar5[1] = uVar4;
  uVar4 = param_2[0xd];
  puVar5 = (undefined8 *)(lVar7 + 0x60 + lVar2);
  *puVar5 = param_2[0xc];
  puVar5[1] = uVar4;
  *(undefined8 *)(lVar7 + 0x70 + lVar2) = param_2[0xe];
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}

