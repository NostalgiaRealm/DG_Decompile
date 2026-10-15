/*
 * FUN_140004cc0 at 140004cc0
 * undefined8 __cdecl FUN_140004cc0(longlong param_1, int param_2)
 * Address ranges: 140004cc0-140004f1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140004cc0(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_2 == 0x402) {
    uVar6 = FUN_14000ffb8(param_1 + -0x70,0x402);
    uVar6 = FUN_14000fd78(param_1 + -0x70,0x402,uVar6 & 0xffffffff);
    *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x5c) = (uVar6 & 0xfff) << 0x14;
  }
  else if (param_2 == 0x406) {
    uVar6 = FUN_14000ffb8(param_1 + -0x70,0x406);
    uVar5 = FUN_14000fd78(param_1 + -0x70,0x406,uVar6 & 0xffffffff);
    uVar6 = 0xffffffff;
    *(uint *)(*(longlong *)(param_1 + 0x10) + 0x58) = uVar5;
    lVar1 = (ulonglong)uVar5 * 0x28;
    uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x5c);
    uVar9 = 0;
    uVar10 = 0;
    iVar7 = -1;
    do {
      uVar2 = *(uint *)(&DAT_14002c160 + uVar9 * 4 + (ulonglong)uVar5 * 0x28);
      uVar13 = (ulonglong)uVar2;
      uVar11 = uVar10;
      iVar8 = iVar7;
      if (uVar2 != 0) {
        uVar3 = uVar13;
        if ((uVar6 <= uVar13) && (uVar11 = uVar13, uVar3 = uVar6, uVar13 <= uVar10)) {
          uVar11 = uVar10;
        }
        uVar6 = uVar3;
        iVar8 = (int)uVar9;
        if (uVar2 != *(uint *)(&DAT_14002c184 + lVar1)) {
          iVar8 = iVar7;
        }
      }
      uVar2 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar2;
      uVar10 = uVar11;
      iVar7 = iVar8;
    } while (uVar2 < 9);
    if ((uVar6 <= uVar12 >> 0x14) && (uVar12 >> 0x14 <= uVar11)) {
      iVar8 = -1;
    }
    if (iVar8 != -1) {
      FUN_14000fff0(param_1 + -0x70,0x402,iVar8);
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x5c) =
           ((ulonglong)*(uint *)(&DAT_14002c184 + lVar1) & 0xfff) << 0x14;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x27d) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x29f) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a0) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a2) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a3) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a1) = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
  }
  else if (param_2 == 0x407) {
    uVar6 = FUN_14000ffb8(param_1 + -0x70,0x407);
    uVar5 = FUN_14000fd78(param_1 + -0x70,0x407,uVar6 & 0xffffffff);
    FUN_140001b50(param_1 + 0xd0,(undefined8 *)&local_30,uVar5);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100) = local_30;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x68) = uStack_2c;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x70) = local_28;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x74) = uStack_24;
  }
  else if (param_2 == 0x408) {
    uVar6 = FUN_14000ffb8(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218));
    uVar4 = FUN_14000fd78(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218),
                          uVar6 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x6c) = uVar4;
  }
  else if (param_2 == 0x40b) {
    uVar6 = FUN_14000ffb8(param_1 + -0x70,0x40b);
    uVar4 = FUN_14000fd78(param_1 + -0x70,0x40b,uVar6 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x78) = uVar4;
  }
  else if (param_2 == 0x40c) {
    uVar6 = FUN_14000ffb8(param_1 + -0x70,0x40c);
    uVar4 = FUN_14000fd78(param_1 + -0x70,0x40c,uVar6 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x7c) = uVar4;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return 1;
}

