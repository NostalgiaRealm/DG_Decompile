/*
 * FUN_1800bf860 at 1800bf860
 * undefined8 __fastcall FUN_1800bf860(longlong * param_1, undefined8 * param_2)
 * Address ranges: 1800bf860-1800bf969
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bf860(longlong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar5) {
    uVar6 = 0x10;
    if (iVar5 != 0) {
      uVar6 = (ulonglong)(uint)(iVar5 * 2);
    }
    iVar5 = (int)uVar6;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6;
    uVar2 = SUB168(ZEXT816(0x888) * auVar1,0);
    if (SUB168(ZEXT816(0x888) * auVar1,8) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    puVar3 = (undefined8 *)thunk_FUN_1800fbccc(uVar2);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    puVar4 = puVar3;
    if (iVar5 != 0) {
      do {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *(undefined4 *)((longlong)puVar4 + 0x864) = 0;
        puVar4[0x10d] = 0;
        puVar4[0x10e] = 0;
        puVar4[0x10f] = 0;
        puVar4[0x110] = 0;
        *(undefined2 *)(puVar4 + 3) = 0xffff;
        puVar4 = puVar4 + 0x111;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    FUN_1800fbec0(puVar3,(undefined8 *)*param_1,
                  (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x888);
    FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = (longlong)puVar3;
    *(int *)((longlong)param_1 + 0xc) = iVar5;
  }
  puVar3 = FUN_1800fbec0((undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x888),
                         param_2,0x888);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}

