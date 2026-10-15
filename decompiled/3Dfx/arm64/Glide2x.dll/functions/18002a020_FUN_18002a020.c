/*
 * FUN_18002a020 at 18002a020
 * undefined __cdecl FUN_18002a020(longlong * param_1)
 * Address ranges: 18002a020-18002a0eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002a020(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  lVar1 = param_1[7];
  FUN_180031360(lVar2 + 0x3b60,0,0);
  if (param_1 != (longlong *)0xfffffffffffffff8) {
    uVar4 = *(ulonglong *)(lVar2 + 0x3200);
    uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x31c0) + 0x1508);
    FUN_180058d08(*(longlong *)(lVar2 + 0x31c0) + 0x16d0,(int)param_1[5],param_1[3],param_1[4],
                  *(longlong **)(*(longlong *)(uVar3 + 0xb10) + 0x18),*(ulonglong *)(uVar3 + 0xb78))
    ;
    FUN_18004b098(uVar3,uVar4,0,1,0x400);
    FUN_18004a790(uVar3);
    FUN_18004a830(uVar3);
    (**(code **)(**(longlong **)(uVar3 + 0x688) + 0x78))
              (*(longlong **)(uVar3 + 0x688),uVar4,(int)lVar1,param_1[2],param_1[3] - param_1[4],
               (int)param_1[5]);
    FUN_18004a7e0(uVar3);
  }
  return;
}

