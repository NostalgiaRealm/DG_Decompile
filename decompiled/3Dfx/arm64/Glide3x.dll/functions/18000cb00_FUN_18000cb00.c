/*
 * FUN_18000cb00 at 18000cb00
 * undefined __cdecl FUN_18000cb00(longlong param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 18000cb00-18000cbf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cb00(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  ulonglong uVar1;
  longlong extraout_x12;
  longlong extraout_x12_00;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x3308);
  (**(code **)(*plVar3 + 8))(plVar3,0,0);
  FUN_18000b9a0((longlong)(plVar3 + 1),plVar3[0x45] + 0x3270,(ulonglong)param_2,param_3,
                (uint)(param_4 != 0));
  if (param_4 != 0) {
    if (param_2 == 5) {
      FUN_18000b9a0((longlong)(plVar3 + 1),plVar3[0x45] + extraout_x12,3,0,0);
      uVar1 = 4;
      lVar2 = extraout_x12_00;
    }
    else {
      if (1 < param_2 - 3) goto LAB_18000cbbc;
      uVar1 = 5;
      lVar2 = extraout_x12;
    }
    FUN_18000b9a0((longlong)(plVar3 + 1),plVar3[0x45] + lVar2,uVar1,0,0);
  }
LAB_18000cbbc:
  *(uint *)(plVar3[0x45] + 0x32c0) =
       *(uint *)(plVar3[0x45] + 0x32c0) & 0xffffc001 | *(uint *)(plVar3 + 0x2b);
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  return;
}

