/*
 * FUN_180047d64 at 180047d64
 * longlong * __fastcall FUN_180047d64(undefined8 param_1, longlong * param_2)
 * Address ranges: 180047d64-180047e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180047d64(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar1 = FUN_180060a9c(0x1b588);
  plVar6 = (longlong *)(lVar1 + 0x47U & 0xffffffffffffffc0);
  plVar6[-1] = lVar1;
  FUN_180051d88(plVar6,param_1,&PTR_s_DGD3D12ROOT_18006d4e0);
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
  *plVar6 = (longlong)&PTR_FUN_180066298;
  plVar2 = plVar6 + 0x120;
  plVar6[0xd7] = (longlong)plVar6;
  plVar6[0xd5] = (longlong)&PTR_FUN_180066450;
  plVar6[0xd6] = (longlong)&PTR_LAB_180066328;
  plVar6[0xd8] = 0;
  plVar6[0xd9] = 0;
  do {
    FUN_1800462f4((longlong)plVar2);
    plVar2 = plVar2 + 0x358;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar3 = FUN_180045154();
  plVar6[0x36a0] = (longlong)puVar3;
  uVar4 = FUN_180047e6c((ulonglong)plVar6,param_2);
  if ((char)uVar4 == '\0') {
    (**(code **)(*plVar6 + 0x80))(plVar6,0);
    FUN_180060f4c((LPVOID)plVar6[-1]);
    plVar6 = (longlong *)0x0;
  }
  return plVar6;
}

