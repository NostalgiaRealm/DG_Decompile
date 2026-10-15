/*
 * FUN_18001db50 at 18001db50
 * undefined __cdecl FUN_18001db50(longlong * param_1)
 * Address ranges: 18001db50-18001dc4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001db50(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = *param_1;
  uVar1 = *(uint *)(param_1 + 7);
  iVar2 = *(int *)((longlong)param_1 + 0x3c);
  FUN_180025b18(lVar5 + 0x42a0,0,0);
  if (param_1 != (longlong *)0xfffffffffffffff8) {
    uVar6 = *(ulonglong *)(lVar5 + 0x3380);
    uVar4 = *(ulonglong *)(*(longlong *)(lVar5 + 0x3340) + 0x1508);
    FUN_18005c5d8(*(longlong *)(lVar5 + 0x3340) + 0x16d0,(int)param_1[5],param_1[3],param_1[4],
                  *(longlong **)(*(longlong *)(uVar4 + 0xb10) + 0x18),*(ulonglong *)(uVar4 + 0xb78))
    ;
    FUN_18004ec28(uVar4,uVar6,0,1,0x400);
    FUN_18004e320(uVar4);
    FUN_18004e3c0(uVar4);
    (**(code **)(**(longlong **)(uVar4 + 0x688) + 0x78))
              (*(longlong **)(uVar4 + 0x688),uVar6,uVar1,param_1[2],param_1[3] - param_1[4],
               (int)param_1[5]);
    FUN_18004e370(uVar4);
  }
  uVar3 = 3;
  do {
    FUN_18002e118(lVar5,uVar3,uVar1,iVar2 + uVar1);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}

