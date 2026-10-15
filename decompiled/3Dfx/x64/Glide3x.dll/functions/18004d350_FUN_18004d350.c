/*
 * FUN_18004d350 at 18004d350
 * longlong * __fastcall FUN_18004d350(undefined8 param_1)
 * Address ranges: 18004d350-18004d3ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18004d350(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = FUN_180060a9c(0x192f8);
  plVar4 = (longlong *)(lVar1 + 0x47U & 0xffffffffffffffc0);
  plVar4[-1] = lVar1;
  FUN_180051d88(plVar4,param_1,&PTR_s_DGD3D11ROOT_18006d588);
  lVar1 = 0x10;
  *plVar4 = (longlong)&PTR_FUN_180066bd8;
  plVar3 = plVar4 + 0xd6;
  do {
    FUN_18004d08c(plVar3);
    plVar3 = plVar3 + 0x318;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  uVar2 = FUN_18005035c((ulonglong)plVar4);
  if ((char)uVar2 == '\0') {
    (**(code **)(*plVar4 + 0x80))(plVar4,0);
    FUN_180060f4c((LPVOID)plVar4[-1]);
    plVar4 = (longlong *)0x0;
  }
  return plVar4;
}

