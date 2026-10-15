/*
 * FUN_1800ab84c at 1800ab84c
 * undefined8 __fastcall FUN_1800ab84c(longlong param_1, ulonglong param_2, undefined8 param_3, int param_4, undefined4 * param_5)
 * Address ranges: 1800ab84c-1800ab8c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800ab84c(longlong param_1,ulonglong param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  lVar5 = (param_2 & 0xffffffff) * 0xc18;
  uVar4 = *(ulonglong *)(lVar5 + 0x10cc0 + param_1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ((local_res8.QuadPart - *(longlong *)(lVar5 + 0x10cc8 + param_1)) % (longlong)uVar4
                 ) * (ulonglong)(param_4 + 1);
  uVar4 = SUB168(auVar2 / auVar1,0);
  iVar3 = SUB164(auVar2 / auVar1,0);
  if (param_5 != (undefined4 *)0x0) {
    uVar4 = uVar4 & 0xffffffff;
    if (iVar3 == param_4) {
      uVar4 = 0;
    }
    *param_5 = (int)uVar4;
  }
  return CONCAT71((int7)(uVar4 >> 8),iVar3 == param_4);
}

