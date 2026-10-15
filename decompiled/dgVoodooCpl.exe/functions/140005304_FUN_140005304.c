/*
 * FUN_140005304 at 140005304
 * undefined8 __fastcall FUN_140005304(longlong param_1, int param_2)
 * Address ranges: 140005304-140005587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140005304(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  if (param_2 == 0x402) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x402);
    iVar4 = FUN_14000e270(param_1 + -0x70,0x402,(ulonglong)uVar2);
    *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x5c) = (ulonglong)(uint)(iVar4 << 0x14);
  }
  else if (param_2 == 0x406) {
    lVar7 = param_1 + -0x70;
    uVar2 = FUN_14000e460(lVar7,0x406);
    uVar2 = FUN_14000e270(lVar7,0x406,(ulonglong)uVar2);
    uVar9 = 0;
    iVar4 = -1;
    uVar10 = 0xffffffff;
    *(uint *)(*(longlong *)(param_1 + 0x10) + 0x58) = uVar2;
    uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x5c) >> 0x14;
    uVar8 = 0;
    lVar1 = (ulonglong)uVar2 * 0x28;
    do {
      uVar2 = *(uint *)(&DAT_14002c160 + uVar8 * 4 + lVar1);
      uVar6 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        if (uVar6 < uVar10) {
          uVar10 = (ulonglong)uVar2;
        }
        else if (uVar9 < uVar6) {
          uVar9 = uVar6;
        }
        if (uVar2 == *(uint *)(&DAT_14002c184 + lVar1)) {
          iVar4 = (int)uVar8;
        }
      }
      uVar2 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar2;
    } while (uVar2 < 9);
    if ((uVar10 <= uVar11) && (uVar11 <= uVar9)) {
      iVar4 = -1;
    }
    if (iVar4 != -1) {
      FUN_14000e4a0(lVar7,0x402,iVar4);
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x5c) =
           (ulonglong)(uint)(*(int *)(&DAT_14002c184 + lVar1) << 0x14);
    }
    lVar7 = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x27d) = 1;
    do {
      *(undefined1 *)(lVar7 + 0x29f + *(longlong *)(param_1 + 0x10)) = 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2);
    lVar7 = 0;
    do {
      *(undefined1 *)(lVar7 + 0x2a2 + *(longlong *)(param_1 + 0x10)) = 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2);
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a1) = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
  }
  else if (param_2 == 0x407) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x407);
    uVar2 = FUN_14000e270(param_1 + -0x70,0x407,(ulonglong)uVar2);
    FUN_140001b14(param_1 + 0xd0,(undefined8 *)&local_58,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100) = local_58;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x68) = local_54;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x70) = local_50;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x74) = local_4c;
  }
  else if (param_2 == 0x408) {
    uVar2 = FUN_14000e460(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218));
    uVar3 = FUN_14000e270(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218),(ulonglong)uVar2)
    ;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x6c) = uVar3;
  }
  else if (param_2 == 0x40b) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x40b);
    uVar3 = FUN_14000e270(param_1 + -0x70,0x40b,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x78) = uVar3;
  }
  else if (param_2 == 0x40c) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x40c);
    uVar3 = FUN_14000e270(param_1 + -0x70,0x40c,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x7c) = uVar3;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}

