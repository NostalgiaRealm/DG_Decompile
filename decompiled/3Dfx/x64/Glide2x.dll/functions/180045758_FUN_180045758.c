/*
 * FUN_180045758 at 180045758
 * longlong * __fastcall FUN_180045758(undefined8 param_1, longlong * param_2)
 * Address ranges: 180045758-18004585f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180045758(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar1 = FUN_18005d6fc(0x1b588);
  plVar6 = (longlong *)(lVar1 + 0x47U & 0xffffffffffffffc0);
  plVar6[-1] = lVar1;
  FUN_18004f77c(plVar6,param_1,&PTR_s_DGD3D12ROOT_18006c3a0);
  lVar5 = 0x10;
  plVar2 = plVar6 + 0xda;
  lVar1 = 0x10;
  do {
    *plVar2 = 0;
    *(undefined4 *)(plVar2 + 2) = 0xc000;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined1 *)((longlong)plVar2 + 0x1d) = 0;
    plVar2 = plVar2 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  plVar6[0x11a] = 0;
  *plVar6 = (longlong)&PTR_FUN_180064008;
  plVar2 = plVar6 + 0x120;
  plVar6[0xd7] = (longlong)plVar6;
  plVar6[0xd5] = (longlong)&PTR_FUN_1800641c0;
  plVar6[0xd6] = (longlong)&PTR_LAB_180064098;
  plVar6[0xd8] = 0;
  plVar6[0xd9] = 0;
  do {
    FUN_180043ce8((longlong)plVar2);
    plVar2 = plVar2 + 0x358;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar3 = FUN_180042b48();
  plVar6[0x36a0] = (longlong)puVar3;
  uVar4 = FUN_180045860((ulonglong)plVar6,param_2);
  if ((char)uVar4 == '\0') {
    (**(code **)(*plVar6 + 0x80))(plVar6,0);
    FUN_18005dc60((LPVOID)plVar6[-1]);
    plVar6 = (longlong *)0x0;
  }
  return plVar6;
}

