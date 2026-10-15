/*
 * FUN_180009158 at 180009158
 * undefined8 __fastcall FUN_180009158(longlong * param_1, undefined8 * param_2)
 * Address ranges: 180009158-18000920b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180009158(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar6 = 0x10;
    if (iVar1 != 0) {
      uVar6 = (ulonglong)(uint)(iVar1 * 2);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    uVar4 = SUB168(ZEXT816(0x50) * auVar3,0);
    if (SUB168(ZEXT816(0x50) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_1800fbec0(puVar5,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x50
                 );
    FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = (longlong)puVar5;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  uVar4 = param_2[1];
  lVar2 = *param_1;
  puVar5 = (undefined8 *)(lVar2 + uVar6 * 0x50);
  *puVar5 = *param_2;
  puVar5[1] = uVar4;
  uVar4 = param_2[3];
  puVar5 = (undefined8 *)(lVar2 + 0x10 + uVar6 * 0x50);
  *puVar5 = param_2[2];
  puVar5[1] = uVar4;
  uVar4 = param_2[5];
  puVar5 = (undefined8 *)(lVar2 + 0x20 + uVar6 * 0x50);
  *puVar5 = param_2[4];
  puVar5[1] = uVar4;
  uVar4 = param_2[7];
  puVar5 = (undefined8 *)(lVar2 + 0x30 + uVar6 * 0x50);
  *puVar5 = param_2[6];
  puVar5[1] = uVar4;
  uVar4 = param_2[9];
  puVar5 = (undefined8 *)(lVar2 + 0x40 + uVar6 * 0x50);
  *puVar5 = param_2[8];
  puVar5[1] = uVar4;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}

