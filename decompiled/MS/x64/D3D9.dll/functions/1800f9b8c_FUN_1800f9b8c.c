/*
 * FUN_1800f9b8c at 1800f9b8c
 * undefined8 __fastcall FUN_1800f9b8c(longlong * param_1, longlong param_2)
 * Address ranges: 1800f9b8c-1800f9c3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f9b8c(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong in_RAX;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar7 = 1;
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      if (*(longlong *)(*param_1 + uVar6 * 8) == param_2) {
        if ((int)uVar6 != -1) goto LAB_1800f9c28;
        break;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar1);
  }
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar1 == uVar5) {
    uVar6 = 0x10;
    if (uVar5 != 0) {
      uVar6 = (ulonglong)(uVar5 * 2);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar6;
    uVar3 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    puVar4 = (undefined8 *)thunk_FUN_1800fbccc(uVar3);
    if (puVar4 == (undefined8 *)0x0) {
      uVar7 = 0;
      in_RAX = 0;
      goto LAB_1800f9c28;
    }
    FUN_1800fbec0(puVar4,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 3);
    FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = (longlong)puVar4;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  }
  in_RAX = *param_1;
  *(longlong *)(in_RAX + (ulonglong)*(uint *)(param_1 + 1) * 8) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
LAB_1800f9c28:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar7);
}

