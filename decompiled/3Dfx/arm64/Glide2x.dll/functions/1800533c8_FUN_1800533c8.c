/*
 * FUN_1800533c8 at 1800533c8
 * undefined __cdecl FUN_1800533c8(undefined8 param_1, undefined8 param_2, longlong param_3, undefined8 * param_4)
 * Address ranges: 1800533c8-18005355f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800533c8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong extraout_x15;
  float fVar8;
  undefined1 auVar9 [16];
  
  auVar9 = FUN_1800014c0();
  lVar5 = auVar9._8_8_;
  lVar2 = extraout_x15 * -0x10;
  EnterCriticalSection((LPCRITICAL_SECTION)(auVar9._0_8_ + 0x620));
  *(undefined1 *)(lVar5 + 0xd69) = 1;
  uVar6 = 0;
  do {
    fVar8 = (float)uVar6 / 255.0;
    *(undefined4 *)(lVar5 + 0x40 + uVar6 * 0xc) = *(undefined4 *)(param_3 + uVar6 * 0xc);
    *(undefined4 *)(lVar5 + 0x44 + uVar6 * 0xc) = *(undefined4 *)(param_3 + 4 + uVar6 * 0xc);
    *(undefined4 *)(lVar5 + 0x48 + uVar6 * 0xc) = *(undefined4 *)(param_3 + 8 + uVar6 * 0xc);
    if (((0.003921569 <= ABS(*(float *)(param_3 + uVar6 * 0xc) - fVar8)) ||
        (0.003921569 <= ABS(*(float *)(param_3 + 4 + uVar6 * 0xc) - fVar8))) ||
       (bVar7 = 1, 0.003921569 <= ABS(*(float *)(param_3 + 8 + uVar6 * 0xc) - fVar8))) {
      bVar7 = 0;
    }
    uVar1 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar1;
    *(byte *)(lVar5 + 0xd69) = *(byte *)(lVar5 + 0xd69) & bVar7;
  } while (uVar1 < 0x100);
  plVar4 = *(longlong **)(lVar5 + 8);
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar2) = 0;
  (**(code **)(*plVar4 + 0x78))(plVar4,&stack0xffffffffffffffd0 + lVar2);
  plVar4 = *(longlong **)(&stack0xffffffffffffffd0 + lVar2);
  if (plVar4 != (longlong *)0x0) {
    if (*(char *)(lVar5 + 0xd68) == '\0') {
      iVar3 = (**(code **)(*plVar4 + 0x68))(plVar4,&stack0xffffffffffffffd8 + lVar2);
      if (iVar3 == 0) {
        (**(code **)*param_4)
                  (*(undefined4 *)(&stack0xffffffffffffffe0 + lVar2),
                   *(undefined4 *)(&stack0xffffffffffffffdc + lVar2),param_4,
                   *(undefined4 *)(&stack0xffffffffffffffe4 + lVar2),
                   &stack0xffffffffffffffe8 + lVar2,&stack0x00001008 + lVar2,param_3);
        (**(code **)(**(longlong **)(&stack0xffffffffffffffd0 + lVar2) + 0x70))
                  (*(longlong **)(&stack0xffffffffffffffd0 + lVar2),&stack0x00000ff0 + lVar2);
      }
      plVar4 = *(longlong **)(&stack0xffffffffffffffd0 + lVar2);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(auVar9._0_8_ + 0x620));
  return;
}

