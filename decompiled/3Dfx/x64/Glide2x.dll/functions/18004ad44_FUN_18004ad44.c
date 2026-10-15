/*
 * FUN_18004ad44 at 18004ad44
 * longlong * __fastcall FUN_18004ad44(undefined8 param_1)
 * Address ranges: 18004ad44-18004ade2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18004ad44(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = FUN_18005d6fc(0x192f8);
  plVar4 = (longlong *)(lVar1 + 0x47U & 0xffffffffffffffc0);
  plVar4[-1] = lVar1;
  FUN_18004f77c(plVar4,param_1,&PTR_s_DGD3D11ROOT_18006c448);
  lVar1 = 0x10;
  *plVar4 = (longlong)&PTR_FUN_180064948;
  plVar3 = plVar4 + 0xd6;
  do {
    FUN_18004aa80(plVar3);
    plVar3 = plVar3 + 0x318;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  uVar2 = FUN_18004dd50((ulonglong)plVar4);
  if ((char)uVar2 == '\0') {
    (**(code **)(*plVar4 + 0x80))(plVar4,0);
    FUN_18005dc60((LPVOID)plVar4[-1]);
    plVar4 = (longlong *)0x0;
  }
  return plVar4;
}

