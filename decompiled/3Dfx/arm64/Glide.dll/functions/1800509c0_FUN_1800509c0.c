/*
 * FUN_1800509c0 at 1800509c0
 * undefined __cdecl FUN_1800509c0(longlong param_1, ulonglong param_2, int * param_3, undefined8 param_4, int param_5)
 * Address ranges: 1800509c0-180050c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800509c0(longlong param_1,ulonglong param_2,int *param_3,undefined8 param_4,int param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  SIZE_T SVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 local_60 [2];
  
  lVar11 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar12 = 0;
  uVar3 = *(uint *)(lVar11 + 0xc24);
  uVar13 = (ulonglong)
           (param_3[3] & 0x1fU |
           (param_3[4] & 0x1fU |
           (param_3[5] & 7U | (param_3[6] & 0x1fU | (param_3[7] & 0x1fU) << 5) << 3) << 5) << 5) <<
           6 | ((ulonglong)(uint)param_3[8] & 7 |
               ((ulonglong)*(byte *)(param_3 + 9) & 0xffffffffffff000f |
               ((ulonglong)*(byte *)(param_3 + 0x11) & 0xfffffffffffff00f |
               ((ulonglong)*(byte *)(param_3 + 0x19) & 0xffffffffffffff0f |
               ((ulonglong)*(byte *)(param_3 + 0x21) & 0xf) << 4) << 4) << 4) << 5) << 0x1d |
           (ulonglong)(param_3[0x1a] != 0) << 5 | (ulonglong)(param_3[0x12] != 0) << 4 |
           (ulonglong)(param_3[10] != 0) << 3 | (ulonglong)(param_3[2] != 0) << 2 |
           (ulonglong)(*param_3 != 0) | (ulonglong)(param_3[1] != 0) << 1;
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar5 = uVar3;
    do {
      uVar12 = uVar5 + uVar8 >> 1;
      uVar10 = *(ulonglong *)(*(longlong *)(lVar11 + 0xc18) + (ulonglong)uVar12 * 0x118);
      uVar2 = uVar12;
      if (uVar10 <= uVar13) {
        if (uVar13 <= uVar10) break;
        uVar8 = uVar12 + 1;
        uVar12 = uVar12 + 1;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar8);
    if ((uVar12 != uVar3) &&
       (lVar6 = (ulonglong)uVar12 * 0x118,
       *(ulonglong *)(*(longlong *)(lVar11 + 0xc18) + lVar6) == uVar13)) goto LAB_180050c08;
  }
  if (uVar3 == *(uint *)(lVar11 + 0xc20)) {
    uVar10 = CONCAT44(0,*(uint *)(lVar11 + 0xc20) << 1);
    SVar9 = uVar10 * 0x118;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar10;
    if (SUB168(auVar1 * ZEXT816(0x118),8) != 0) {
      SVar9 = 0xffffffffffffffff;
    }
    lVar6 = thunk_FUN_1800609d8(SVar9);
    if (lVar6 != 0) {
      uVar10 = 0;
      if (*(int *)(lVar11 + 0xc20) != 0) {
        do {
          thunk_FUN_180001218((undefined8 *)(lVar6 + uVar10 * 0x118),
                              (undefined8 *)(*(longlong *)(lVar11 + 0xc18) + uVar10 * 0x118),0x118);
          uVar3 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar11 + 0xc20));
      }
      thunk_FUN_180060a18(*(LPVOID *)(lVar11 + 0xc18));
      *(longlong *)(lVar11 + 0xc18) = lVar6;
      *(int *)(lVar11 + 0xc20) = *(int *)(lVar11 + 0xc20) << 1;
    }
  }
  uVar3 = *(uint *)(lVar11 + 0xc24);
  while (lVar7 = *(longlong *)(lVar11 + 0xc18), uVar12 < uVar3) {
    thunk_FUN_180001218((undefined8 *)(lVar7 + (ulonglong)uVar3 * 0x118),
                        (undefined8 *)(lVar7 + (ulonglong)(uVar3 - 1) * 0x118),0x118);
    uVar3 = uVar3 - 1;
  }
  lVar6 = (ulonglong)uVar12 * 0x118;
  *(ulonglong *)(lVar7 + lVar6) = uVar13;
  thunk_FUN_180001218((undefined8 *)(lVar6 + *(longlong *)(lVar11 + 0xc18) + 8),
                      (undefined8 *)param_3,0x108);
  local_60[0] = 0;
  plVar4 = *(longlong **)
            (*(longlong *)(lVar11 + 0xc28) + (ulonglong)*(uint *)(lVar11 + 0xc30) * 0x18c0 + 0x6b0);
  (**(code **)(*plVar4 + 0xa0))(plVar4,param_3,local_60);
  *(undefined8 *)(lVar6 + *(longlong *)(lVar11 + 0xc18) + 0x110) = local_60[0];
  *(int *)(lVar11 + 0xc24) = *(int *)(lVar11 + 0xc24) + 1;
LAB_180050c08:
  lVar6 = *(longlong *)(lVar6 + *(longlong *)(lVar11 + 0xc18) + 0x110);
  if ((lVar6 != *(longlong *)(lVar11 + 0x6e0)) || (param_5 != *(int *)(lVar11 + 0x6f4))) {
    (**(code **)(**(longlong **)(lVar11 + 0x6b8) + 0x118))
              (*(longlong **)(lVar11 + 0x6b8),lVar6,0,param_5);
    *(longlong *)(lVar11 + 0x6e0) = lVar6;
    *(int *)(lVar11 + 0x6f4) = param_5;
  }
  return;
}

