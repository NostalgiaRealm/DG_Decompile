/*
 * FUN_18004ccb0 at 18004ccb0
 * undefined __fastcall FUN_18004ccb0(longlong param_1, ulonglong param_2, int * param_3, int param_4)
 * Address ranges: 18004ccb0-18004ce26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ccb0(longlong param_1,ulonglong param_2,int *param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = (param_2 & 0xffffffff) * 0x18c0;
  lVar1 = lVar9 + param_1;
  uVar2 = *(uint *)(lVar9 + 0xc04 + param_1);
  uVar6 = 0;
  uVar5 = 0;
  uVar10 = ((ulonglong)
            ((((param_3[6] & 0xfU) << 4 | param_3[6] & 0xfU) << 4 | param_3[7] & 0xfU) << 4 |
            param_3[8] & 0xfU) << 0x10 |
            (ulonglong)
            ((param_3[0xb] & 0xfU | ((param_3[10] & 0xfU) << 4 | param_3[10] & 0xfU) << 4) << 4) |
           (ulonglong)(param_3[0xc] & 0xf)) << 0x20 |
           (ulonglong)
           ((((uint)*(ushort *)(param_3 + 4) << 5 | param_3[2] & 0xfU) * 2 | param_3[1] & 1U) * 2) |
           (ulonglong)(-(uint)(param_3[3] != 0) & 0x40) | (ulonglong)(*param_3 != 0);
  if (uVar2 != 0) {
    uVar7 = uVar2;
    do {
      uVar5 = uVar7 + uVar6 >> 1;
      uVar8 = *(ulonglong *)(*(longlong *)(lVar1 + 0xbf8) + (ulonglong)uVar5 * 0x48);
      uVar4 = uVar5;
      if (uVar8 <= uVar10) {
        if (uVar10 <= uVar8) break;
        uVar6 = uVar5 + 1;
        uVar4 = uVar7;
        uVar5 = uVar6;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar6);
    if ((uVar5 != uVar2) &&
       (uVar8 = (ulonglong)uVar5,
       *(ulonglong *)(*(longlong *)(lVar1 + 0xbf8) + uVar8 * 0x48) == uVar10)) goto LAB_18004cdd3;
  }
  FUN_18004d8b8((longlong *)(lVar1 + 0xbf8),uVar5,uVar10,(undefined8 *)param_3);
  uVar8 = (ulonglong)uVar5;
LAB_18004cdd3:
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xbf8) + 0x40 + uVar8 * 0x48);
  if ((lVar1 != *(longlong *)(lVar9 + 0x6e8 + param_1)) ||
     (param_4 != *(int *)(lVar9 + 0x6f0 + param_1))) {
    plVar3 = *(longlong **)(lVar9 + 0x6b8 + param_1);
    (**(code **)(*plVar3 + 0x120))(plVar3,lVar1,param_4);
    *(longlong *)(lVar9 + 0x6e8 + param_1) = lVar1;
    *(int *)(lVar9 + 0x6f0 + param_1) = param_4;
  }
  return;
}

