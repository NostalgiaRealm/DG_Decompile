/*
 * FUN_1800bf5f4 at 1800bf5f4
 * undefined8 __fastcall FUN_1800bf5f4(longlong * param_1, undefined8 * param_2)
 * Address ranges: 1800bf5f4-1800bf73f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bf5f4(longlong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar7) {
    uVar8 = 0x10;
    if (iVar7 != 0) {
      uVar8 = (ulonglong)(uint)(iVar7 * 2);
    }
    iVar7 = (int)uVar8;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar8;
    uVar2 = SUB168(ZEXT816(0x238) * auVar1,0);
    if (SUB168(ZEXT816(0x238) * auVar1,8) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    puVar3 = (undefined8 *)thunk_FUN_1800fbccc(uVar2);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    puVar4 = puVar3;
    if (iVar7 != 0) {
      do {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *(undefined4 *)((longlong)puVar4 + 0x224) = 0;
        puVar4[0x45] = 0;
        puVar4[0x46] = 0;
        puVar4 = puVar4 + 0x47;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    FUN_1800fbec0(puVar3,(undefined8 *)*param_1,
                  (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x238);
    FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = (longlong)puVar3;
    *(int *)((longlong)param_1 + 0xc) = iVar7;
  }
  lVar5 = 4;
  puVar3 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x238 + *param_1);
  do {
    puVar6 = param_2;
    puVar4 = puVar3;
    uVar2 = puVar6[1];
    *puVar4 = *puVar6;
    puVar4[1] = uVar2;
    uVar2 = puVar6[3];
    puVar4[2] = puVar6[2];
    puVar4[3] = uVar2;
    uVar2 = puVar6[5];
    puVar4[4] = puVar6[4];
    puVar4[5] = uVar2;
    uVar2 = puVar6[7];
    puVar4[6] = puVar6[6];
    puVar4[7] = uVar2;
    uVar2 = puVar6[9];
    puVar4[8] = puVar6[8];
    puVar4[9] = uVar2;
    uVar2 = puVar6[0xb];
    puVar4[10] = puVar6[10];
    puVar4[0xb] = uVar2;
    uVar2 = puVar6[0xd];
    puVar4[0xc] = puVar6[0xc];
    puVar4[0xd] = uVar2;
    uVar2 = puVar6[0xf];
    puVar4[0xe] = puVar6[0xe];
    puVar4[0xf] = uVar2;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    param_2 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar2 = puVar6[0x11];
  puVar4[0x10] = puVar6[0x10];
  puVar4[0x11] = uVar2;
  uVar2 = puVar6[0x13];
  puVar4[0x12] = puVar6[0x12];
  puVar4[0x13] = uVar2;
  uVar2 = puVar6[0x15];
  puVar4[0x14] = puVar6[0x14];
  puVar4[0x15] = uVar2;
  puVar4[0x16] = puVar6[0x16];
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

